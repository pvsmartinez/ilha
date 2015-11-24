package core;

import openfl.display.Sprite;
import openfl.geom.Point;
import openfl.display.Bitmap;

import core.TileSystem;
import core.Constants;
import core.Body;
import core.Stuff;
import core.Material;
import core.Rs;
import core.Recipe;
import core.Tool;
import core.RecipeBook;
import core.SoundHandler;

enum HumanState {
  free;
  waitingToTalk;
  trading;
  extracting;
  crafting;
}

class Human extends Body {

  private var _timer:Float;
  private var _state:HumanState = free;
  private var _auxIcon:Bitmap;

  public var charName:String;
  public var _icon:Bitmap;
  public var craftGoal:EnumValue;
  public var currentTool:Tool;
  public var direction:Int = 0;
  public var speed:Float = 0.1;
  public var _materials:Array<Material> = [];

  public function new(cn:String) {
    super(Rs.humans[cn], true, 4, 77, 113);
    var weaponStarters = [axe, pick, spear, rod, knife, hand];
    var rnd = Math.floor(Math.random() * weaponStarters.length);
    currentTool = new Tool(weaponStarters[rnd]);
    this.speed = 0.1;
    this.charName = cn;
    craftGoal = raft;
  }

  public function positionIcon(img:String, ?auxImg:String) {
    removeChild(_icon);
    removeChild(_auxIcon);
    _icon = new Bitmap(Rs.miscs[img]);
    _icon.x = -_icon.width/2;
    _icon.y = -(this.sizeY + _icon.height);
    addChild(_icon);
    if (auxImg != null) {
      _auxIcon = new Bitmap(Rs.maters[auxImg]);
      var ratio = 42/_auxIcon.height;
      _auxIcon.scaleX = ratio;
      _auxIcon.scaleY = ratio;
      _auxIcon.x = _icon.x + _icon.width/2 - _auxIcon.width/2;
      _auxIcon.y = _icon.y + _icon.height/2 - _auxIcon.height/2 - 4;
      addChild(_auxIcon);
    }
  }

  public function everyFrame(deltaTime:Float, act:Array<Bool>, mv:Array<Int>) {
    switch ( _state ) {
      case free:
        if(onFocus){
          _state = waitingToTalk;
        }
        walk(deltaTime, mv);
        action(act);
        var animating:Bool = Math.abs(mv[0]) + Math.abs(mv[1]) > 0;
        var state = direction;
        if (state == -1)
          state = 3;
        _animation.animate(deltaTime, animating, state);
      case extracting:
        _timer -= deltaTime;
        if(_timer <= 0.0){
          _state = free;
        }
      case crafting:
      case waitingToTalk:
        if(!onFocus){
          _state = free;
        } else {
          action(act);
        }
      case trading:
        action(act);
    }
  }

  public function setDirection(dir:Int) {
    if (dir != null) {
      direction = dir;
    }
  }

  public function walk(deltaTime:Float, mv:Array<Int>):Void {
    var spd:Float = this.speed * deltaTime;
		if (Math.abs(mv[0]) + Math.abs(mv[1]) == 2)
			spd = spd * Math.sqrt(2)/2;
    var h = (floor.canWalk(this.x + mv[0] * (spd + _border), this.y)) ? mv[0] : 0;
    var v = (floor.canWalk(this.x, this.y + mv[1] * (spd + _border))) ? mv[1] : 0;
    super.move([h,v], [spd,spd]);
    followMaterials();
	}
  private function followMaterials() {
    for(i in 0 ... _materials.length) {
			var target:Body;
      var followDistance:Float;
			if(i == 0) {
				target = this;
        followDistance = 10 + this.sizeX/2;
			} else {
				target = _materials[i-1];
        followDistance = 6;
			}
			_materials[i].follow(target, followDistance);
		}
  }

  public function getFocus():Body {
    var target:Body = null;
    var dist:Float = null;
    for (ob in floor.objs) {
      if (ob != this) {
        if (Type.getClass(ob) == Stuff && cast(ob, Stuff).state != idle) {
          continue;
        }
        var dx = this.x - ob.x;
        var dy = this.y - ob.y;
        var dt = Math.sqrt((dx*dx)+(dy*dy));
        var alpha = Math.atan2(dy, dx) * 180 / Math.PI;
        var beta = Constants.HUMAN_VISION_DEGREE;
        if (dt < Constants.HUMAN_VISION_DISTANCE/3) {
          beta = beta * 3;
        }
        var inAlpha = Math.abs((this.direction*90) - alpha) < beta;
        if (this.direction*90 == 180 && !inAlpha) {
           inAlpha = Math.abs((-this.direction*90) - alpha) < beta;
        }
        if (dt < Constants.HUMAN_VISION_DISTANCE && inAlpha && ob.selectable) {
          if (dist == null || Math.sqrt(dx * dy) < dist) {
            target = ob;
            dist = Math.sqrt(dx * dy);
          }
        }
      }
    }
    return target;
  }

  public function action(act:Array<Bool>):Void {
    var target:Dynamic = null;
    if (act[0]) {
      target = getFocus();
      if (target != null) {
        if (Type.getClass(target) == Stuff) {
          if(target.extract(this)) {
            _state = extracting;
            _timer = 250.0;
          }
        } else if (Type.getClass(target) == Human) {
            trace("TARGET=HUMAN || STATE: " + _state);
          switch(_state){
            case free:
              _state = trading;
            case waitingToTalk:
            trace("LETS TRADE!!!");
              _state = trading;
            case trading:
              trace("Nice tool ;D");
              tradeTool(target);
              _state = free;
            default:
          }
        } else if (Type.getClass(target) == Material) {
          getMaterial(target);
        }
      } else {
        releaseMaterial(false);
      }
    } else if(act[1]) {
      craft(craftGoal);
    }
  }

  public function releaseMaterial(force:Bool) {
    if (_materials.length > 0) {
      var mt:Material = _materials[_materials.length - 1];
      if (floor.canDrop(mt, this)) {
        _materials.pop();
        mt.state = idle;
        mt.selectable = true;
      } else if (force == true) {
        _materials.pop();
        floor.removeChild(mt);
        floor.objs.remove(mt);
        mt = null;
      }
    }
  }

  public function getMaterial(mt:Material) {
    mt.x = this.x;
    mt.y = this.y;
    mt.state = following;
    mt.selectable = false;
    _materials.unshift(mt);
    if (_materials.length > Constants.HUMAN_MATERIALS_CARRY) {
      releaseMaterial(true);
    }
  }

  public function displayMaterial(mt:Material):Void {
    this.parent.addChild(mt);
    this.floor.objs.push(mt);
    getMaterial(mt);
    _state = free;
  }

  public function createMaterial(mKind:MaterialKind) {
    var mt:Material = new Material(mKind);
    displayMaterial(mt);
  }

  public function craft(craftable:EnumValue):Void{
    var recipe:Recipe = RecipeBook.getRecipeFor(craftable);
    if(isAbleToCraft(recipe)){
      for (key in recipe._ingredientList.keys()) {
        consumeMaterial(key, recipe._ingredientList.get(key));
      }
      SoundHandler.playSound("craft");
      if(recipe._resultKind == tool){
        currentTool = (new Tool(cast(recipe._result, ToolKind)));
      } else if(recipe._resultKind == material){
        createMaterial(cast(recipe._result, MaterialKind));
      }
    }
  }

  public function consumeMaterial(materialKind:MaterialKind, quantity:Int):Bool {
		var success:Bool = true;
		for (i in 0 ... quantity) {
			success = removeMaterial(materialKind);
		}
		return success;
	}

  private function removeMaterial(materialKind:MaterialKind):Bool{
		var i:Int = 0;
		var found:Bool = false;
		while (i < _materials.length && found == false) {
			if(_materials[i].kind == materialKind){
				var elem:Material = _materials[i];
				found = _materials.remove(elem);
				this.parent.removeChild(elem);
			}
			i++;
		}
		return found;
	}

  public function useTool(stf:Stuff):Float{
    return currentTool.howManyHitPointsWouldGetFromResource(stf);
  }

  public function tradeTool(trader:Human):Void{
    var tempTool:Tool = currentTool;

    currentTool = trader.currentTool;

    trader.currentTool = tempTool;

    SoundHandler.playSound("trade");

    trace("After trading:....");
    trace("My tool: "  + currentTool.kind + "|| trader tool: " + trader.currentTool.kind );

    return;
  }

  private function isAbleToCraft(recipe:Recipe):Bool{
    var able:Bool = true;
    for (key in recipe._ingredientList.keys()) {
      if(countIngredient(key) < recipe._ingredientList.get(key)){
        able = false;
      };
    }
    return able;
  }

  private function countIngredient(materialKind:MaterialKind):Int{
    var count:Int = 0;
    for(i in 0 ... _materials.length){
      if(_materials[i].kind == materialKind){
        count++;
      }
    }
    return count;
  }
}

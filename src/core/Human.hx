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

enum HumanState {
  free;
  waitingToTalk;
  trading;
  extracting;
  crafting;
}

class Human extends Body {

  private var _timer:Float;
  private var _materials:Array<Material> = [];
  private var _tool:Tool;
  private var _state:HumanState = free;
  private var _talkIcon:Bitmap;
  private var currentTool:Tool;

  public function new(imgN:Int) {

    var rand:Int = Math.floor(Math.random() * 4.999);
    var list = [axe, pick, spear, rod, knife ];

    currentTool = new Tool(list[rand]);
    super(Rs.humans[imgN], true, 4, 77, 110);
    this.speed = 0.1;

    _talkIcon = new Bitmap(Rs.miscs["speech_ballon"]);
    _talkIcon.x = -_talkIcon.width/2;
    _talkIcon.y = -(this.sizeY + _talkIcon.height);
  }

  public function everyFrame(deltaTime:Float, act:Array<Bool>, mv:Array<Int>) {
    if (_materials.length > Constants.HUMAN_MATERIALS_CARRY) {
      releaseMaterial();
    }
    switch ( _state ) {
      case free:
        if(onFocus){
          _state = waitingToTalk;
          addChild(_talkIcon);
          trace("TRADING TIME?!?!?");
        }
        else{
          removeChild(_talkIcon);
        }
        walk(deltaTime, mv);
        action(act);
        var animating:Bool = Math.abs(mv[0]) + Math.abs(mv[1]) > 0;
        var state = direction;
        if (state == -1)
          state = 3;
        _animation.animate(deltaTime, animating, state);
      case extracting:
        //can't do anything
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
        releaseMaterial();
      }
    } else if(act[1]) {
      var ingredients = [ wood=>2, stone=>1];
      craft(new Recipe(new Tool(axe),ingredients));
    }
  }

  public function releaseMaterial() {
    if (_materials.length > 0) {
      var mt:Material = _materials[_materials.length - 1];
      _materials.pop();
      mt.state = idle;
      mt.selectable = true;
    }
  }

  public function getMaterial(mt:Material) {
    mt.x = this.x;
    mt.y = this.y;
    mt.state = following;
    mt.selectable = false;
    _materials.unshift(mt);
  }

  public function createMaterial(mKind:MaterialKind) {
    var mt:Material = new Material(mKind);
    this.parent.addChild(mt);
    this.floor.objs.push(mt);
    getMaterial(mt);
    _state = free;
  }

  public function craft(recipe:Recipe):Void{
    if(isAbleToCraft(recipe)){
      for (key in recipe._ingredientList.keys()) {
        consumeMaterial(key, recipe._ingredientList.get(key));
      }
      _tool = cast(recipe._result, Tool);
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
			if(_materials[i]._kind == materialKind){
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
      if(_materials[i]._kind == materialKind){
        count++;
      }
    }
    return count;
  }
}

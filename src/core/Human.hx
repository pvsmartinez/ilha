package core;

import openfl.display.Sprite;
import openfl.geom.Point;

import core.TileSystem;
import core.Constants;
import core.Body;
import core.Stuff;
import core.Material;
import core.Rs;

enum HumanState {
  free;
  extract;
}

class Human extends Body {

  private static inline var WALK_LEFT  = 0;
  private static inline var WALK_UP    = 1;
  private static inline var WALK_RIGHT = 2;
  private static inline var WALK_DOWN  = 3;

  private var _materials:Array<Material> = [];
  private var _stateNames:Array<String>;
  private var _hState:HumanState = free;
  private var _hStateTime:Float = 0;
  private var _temporarySprite:Sprite;

  public function new(imgN:Int) {
    super(Rs.humans[imgN], true, 4, 32, 36);
    this.speed = 0.1;
  }

  public function everyFrame(deltaTime:Float, act:Array<Bool>, mv:Array<Bool>) {
    var state:Int = 0;
    switch ( _hState ) {
      case free:
        walk(deltaTime, mv);
        action(act);
        state = (Lambda.indexOf(mv, true) + 3) % 4;
        var animating:Bool = Lambda.exists(mv, function(i){return i == true;});
        _animation.animate(deltaTime,animating,state);
      case extract:
        _hStateTime -= deltaTime;
        if (_hStateTime <= 0) {
          var mt:Material = cast(_temporarySprite, Material);
          this.parent.addChild(mt);
          this.floor.objs.push(mt);
          mt.x = this.x;
          mt.y = this.y;
          _materials.unshift(mt);
          _hState = free;
          _hStateTime = 1;
        }
    }
  }

  public function walk(deltaTime:Float, mv:Array<Bool>):Void {
    var spd:Float = this.speed * deltaTime;
    var l:Bool = mv[WALK_LEFT];
    var u:Bool = mv[WALK_UP];
    var r:Bool = mv[WALK_RIGHT];
    var d:Bool = mv[WALK_DOWN];
		if ((l && u) || (l && d) || (r && u) || (r && d))
			spd = spd * Math.sqrt(2)/2;
    l = l && floor.canWalk(this.x - spd - _border, this.y);
    u = u && floor.canWalk(this.x, this.y - spd - _border);
    r = r && floor.canWalk(this.x + spd + _border, this.y);
    d = d && floor.canWalk(this.x, this.y + spd + _border);
    super.move([l,u,r,d], [spd,spd]);
    followMaterials();
	}
  private function followMaterials() {
    for(i in 0 ... _materials.length) {
			var target:Body;
      var followDistance:Float;
			if(i == 0) {
				target = this;
        followDistance = 10 + this.size/2;
			} else {
				target = _materials[i-1];
        followDistance = 6;
			}
			_materials[i].follow(target, followDistance);
		}
  }

  public function getFocus():Body {
    var target:Body = null;
    var dist:Float = Constants.HUMAN_VISION_DISTANCE;
    for (ob in floor.objs) {
      if (ob != this) {
        var dx = this.x - ob.x;
        var dy = this.y - ob.y;
        var dt = Math.sqrt((dx*dx)+(dy*dy));
        var alpha = Math.atan2(dy, dx) * 180 / Math.PI;
        var inAlpha = Math.abs(this._direction - alpha) < Constants.HUMAN_VISION_DEGREE;
        if (this._direction == 180 && !inAlpha) {
           inAlpha = Math.abs(-this._direction - alpha) < Constants.HUMAN_VISION_DEGREE;
        }
        if (dt < dist && inAlpha && ob.selectable) {
          target = ob;
          dist = dt;
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
          var mt:Dynamic = target.extract();
          if (mt!= null && mt.material != null) {
            _hState = extract;
            _hStateTime = mt.time;
            _temporarySprite = mt.material;
          }
        } else if (Type.getClass(target) == Human) {
          trace("Hello human!");
        }
      }
    } else if(act[1]) {
       var removedMaterial:Material = _materials.pop();
       this.parent.removeChild(removedMaterial);
    }
  }

}

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
  extracting;
}

class Human extends Body {

  private var _materials:Array<Material> = [];
  private var _state:HumanState = free;

  public function new(imgN:Int) {
    super(Rs.humans[imgN], true, 4, 32, 36);
    this.speed = 0.1;
  }

  public function everyFrame(deltaTime:Float, act:Array<Bool>, mv:Array<Int>, dir:Int) {
    switch ( _state ) {
      case free:
        if (dir != null) {
          direction = dir;
        }
        walk(deltaTime, mv);
        action(act);
        var animating:Bool = Math.abs(mv[0]) + Math.abs(mv[1]) > 0;
        var state:Int = 0;
        switch ( direction ) {
          case -1:
            state = 2;
          case 0:
            state = 3;
          case 1:
            state = 0;
          case 2:
            state = 1;
        }

        _animation.animate(deltaTime, animating, state);
      case extracting:
        //can't do anything
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
        var inAlpha = Math.abs((this.direction*90) - alpha) < Constants.HUMAN_VISION_DEGREE;
        if (this.direction*90 == 180 && !inAlpha) {
           inAlpha = Math.abs((-this.direction*90) - alpha) < Constants.HUMAN_VISION_DEGREE;
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
          }
        } else if (Type.getClass(target) == Human) {
          trace("Hello human!");
        }
      }
    }
  }

  public function createMaterial(mKind:MaterialKind) {
    var mt:Material = new Material(mKind);
    this.parent.addChild(mt);
    this.floor.objs.push(mt);
    mt.x = this.x;
    mt.y = this.y;
    _materials.unshift(mt);
    _state = free;
  }

}

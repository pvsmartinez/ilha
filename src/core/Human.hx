package core;

import openfl.Assets;
import openfl.Lib;

import core.Body;
import core.Stuff;
import core.Material;

enum Direction {
  left;
  up;
  right;
  down;
}

class Human extends Body {

  private var _looking:Direction = up;
  private var _materials:Array<Material> = [];

  public function new(imgUrl:String) {
    var states = [ "walk_up", "walk_right", "walk_down", "walk_left"];
    super(Assets.getBitmapData(imgUrl), true, states, 32, 36);
    this.speed = 0.2;
  }

  public function everyFrame(maps:Array<TileMap>, deltaTime:Float, act:Array<Bool>, mv:Array<Bool>) {
    getPos(maps[0]);
    move(maps[0], deltaTime, mv);
    focus(maps[0], mv);
    action(maps[1], act);
    if (_hasAnimation)
      _animation.animate(deltaTime, act, mv);
  }

  private function focus(map:TileMap, mv:Array<Bool>) {
    if (mv[0])
      _looking = left;
    if (mv[2])
      _looking = right;
    if (mv[1])
      _looking = up;
    if (mv[3])
      _looking = down;
  }

  public function action(map:TileMap, act:Array<Bool>) {
    if(act[0]) {
      var st:Stuff;
      switch ( _looking ) {
        case left:
          st = map.getStuff(tileX - 1, tileY);
        case up:
          st = map.getStuff(tileX, tileY - 1);
        case right:
          st = map.getStuff(tileX + 1, tileY);
        case down:
          st = map.getStuff(tileX, tileY + 1);
      }
      if (st != null) {
        trace(st);
        var mt:Material = st.extract();
        trace(mt);
        if (mt != null) {
          this.parent.addChild(mt);
          mt.x = this.x;
          mt.y = this.y;
          _materials.unshift(mt);
        }
      }
    }
  }

  override public function move(map:TileMap, deltaTime:Float, mv:Array<Bool>, ?sp:Float):Void {
		super.move(map, deltaTime, mv);
		moveMaterials(map, deltaTime, mv);
	}

  private function moveMaterials(map:TileMap, deltaTime:Float, mv:Array<Bool>):Void {
		for(i in 0 ... _materials.length) {
			var referenceObject:Body;
      var followDistance:Float;
			if(i == 0) {
				referenceObject = this;
        followDistance = 10 + this.size/2;
			} else {
				referenceObject = _materials[i-1];
        followDistance = 6;
			}
      var dx = _materials[i].x - referenceObject.x;
      var dy = _materials[i].y - referenceObject.y;
			var dist = Math.sqrt((dx*dx)+(dy*dy));
			if( dist > followDistance + 5 ) {
				var mv:Array<Bool> = [false,false,false,false];
				var sp:Float = Math.floor((dist - followDistance) / 4);
				if(dx > 0 + followDistance/2)
					mv[0] = true;
				else if(dx < 0 - followDistance/2)
					mv[2] = true;
				if(dy > 0 + followDistance/2)
					mv[1] = true;
				else if (dy < 0 - followDistance/2)
					mv[3] = true;

        _materials[i].getPos(map);
				_materials[i].move(map, deltaTime, mv, sp);
			}
		}
	}

}

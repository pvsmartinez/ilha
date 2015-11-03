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
    walk(maps[0], deltaTime, mv);
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
        var mt:Material = st.extract();
        if (mt != null) {
          this.parent.addChild(mt);
          mt.x = this.x;
          mt.y = this.y;
          _materials.unshift(mt);
        }
      }
    }
  }

  public function walk(map:TileMap, deltaTime:Float, mv:Array<Bool>):Void {
    var spd:Float = this.speed * deltaTime;
    var l:Bool = mv[0];
    var u:Bool = mv[1];
    var r:Bool = mv[2];
    var d:Bool = mv[3];
		if ((l && u) || (l && d) || (r && u) || (r && d))
			spd = spd * Math.sqrt(2)/2;
    l = l && map.canWalk(Math.floor((this.x - spd - _border)/ map.cellWidth), tileY);
    u = u && map.canWalk(tileX, Math.floor((this.y - spd - _border)/ map.cellHeight));
    r = r && map.canWalk(Math.floor((this.x + spd + _border)/ map.cellWidth), tileY);
    d = d && map.canWalk(tileX, Math.floor((this.y + spd + _border)/ map.cellHeight));
    super.move([l,u,r,d], [spd,spd]);
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

}

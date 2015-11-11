package core;

import openfl.display.Sprite;

import core.Constants;
import core.Stuff;
import core.Floor;
import core.Human;

enum MapZones {
  ocean;
  dry;
  camp;
  rocked;
  normal;
  dense;
  lake;
}

class TileSystem extends Sprite {

  private var _iMap:Array<Floor>;
  private var _passables:Array<Bool>;
  private var _startingPoint:Array<Int>;

  public var objs:Array<Body>;

  public function new() {
    super();
    drawFloor();
    defineZones();
  }

  public function addHuman(h:Human) {
    h.floor = this;
    addChild(h);
    var dx = Constants.TILESIZE * (_startingPoint[0] + Math.random() * (_startingPoint[1] - _startingPoint[0]));
    var dy = Constants.TILESIZE * (_startingPoint[2] + Math.random() * (_startingPoint[3] - _startingPoint[2]));
    h.x = dx;
    h.y = dy;
    objs.push(h);
  }

  public function resetEveryFrame() {
    for (i in 0...objs.length) {
      objs[i].onFocus = false;
    }
  }

  public function everyFrame(deltaTime:Float) {
    objs.sort(sortByY);
    var i:Int;
  	for (i in 0...objs.length) {
  		setChildIndex(objs[i], _iMap.length + i);
      if (Type.getClass(objs[i]) == Stuff) {
        cast(objs[i], Stuff).everyFrame(deltaTime);
      }
  	}
  }

  private function sortByY(a:Sprite, b:Sprite):Int {
  	if (a.y == b.y) return 0;
  	if (a.y > b.y) return 1;
  	return -1;
  }

  private function defineZones() {
    objs = [];
    draw(ocean, [0,Constants.MAPWIDTH], [Constants.MAPHEIGHT - 1, Constants.MAPHEIGHT]);
    draw(dry, [0,Constants.MAPWIDTH], [Constants.MAPHEIGHT - 2, Constants.MAPHEIGHT - 1]);
    var zones = [camp, lake, normal, normal, normal, dense, rocked, dense];
    var slotX = 0;
    var slotY = 0;
    var zoneWidth = Math.floor(Constants.MAPWIDTH / 4);
    var zoneHeight = Math.floor((Constants.MAPHEIGHT - 2) / 2);
    while (zones.length > 0) {
      var rnd = Math.floor(Math.random() * zones.length);
      draw(zones[rnd], [slotX*zoneWidth, (1+slotX)*zoneWidth], [slotY*zoneHeight+1, (1+slotY)*zoneHeight+1]);
      zones.remove(zones[rnd]);
      slotX ++;
      if (slotX >= 4) {
        slotX = 0;
        slotY ++;
      }
    }
  }

  private function draw(z:MapZones, xx:Array<Int>, yy:Array<Int>) {
    var stuff:Stuff;
    var rnd:Int;
    if (z == camp) {
      _startingPoint = [xx[0], xx[1], yy[0], yy[1]];
    } else {
      for (j in xx[0]...xx[1]) {
        for (i in yy[0]...yy[1]) {
          stuff = null;
          var xx = Math.floor(Math.random() * Constants.TILESIZE);
          var yy = Math.floor(Math.random() * Constants.TILESIZE);
          switch ( z ) {
            case ocean:
              stuff = new Stuff(wave);
              xx = 0;
              yy = 0;
            case dry:
              rnd = Math.floor(Math.random() * 16);
              if (rnd == 0) {
                var tiles = [rock, rock, bush, bush, tree];
                rnd = Math.floor(Math.random() * tiles.length);
                stuff = new Stuff(tiles[rnd]);
              }
            case normal:
              rnd = Math.floor(Math.random() * 13);
              if (rnd == 0) {
                var tiles = [tree, tree, rock, bush];
                rnd = Math.floor(Math.random() * tiles.length);
                stuff = new Stuff(tiles[rnd]);
              }
            case rocked:
              rnd = Math.floor(Math.random() * 6);
              if (rnd == 0) {
                var tiles = [rock, rock, rock, bush, rock];
                rnd = Math.floor(Math.random() * tiles.length);
                stuff = new Stuff(tiles[rnd]);
              }
            case dense:
              rnd = Math.floor(Math.random() * 6);
              if (rnd == 0) {
                var tiles = [tree, tree, tree, bush, bush];
                rnd = Math.floor(Math.random() * tiles.length);
                stuff = new Stuff(tiles[rnd]);
              }
            default:
              // Lake cases
              stuff = null;
          }
          if (stuff != null) {
            addChild(stuff);
            stuff.x = (j * Constants.TILESIZE) + xx;
            stuff.y = (i * Constants.TILESIZE) + yy;
            this.setChildIndex(stuff, Math.floor(stuff.y));
            objs.push(stuff);
          }
        }
      }
    }
  }

  private function drawFloor() {
    _iMap = [];
    _passables = [];
    var kind:FloorKind;
    var floor:Floor;
    var tiles = [sandT,sandT,sandT,sandT,sandT,sandT,sandH,sandH,sandH,sandH,sandM,sandM,sandL,sea];
    for (i in 0...Constants.MAPHEIGHT) {
      var lmap:Array<Floor> = [];
      var lpass:Array<Bool> = [];
      floor = new Floor(tiles[i]);
      addChild(floor);
      floor.x = 0;
      floor.y = i * Constants.TILESIZE;
      _iMap.push(floor);
      _passables.push(floor.walkable);
    }
  }

  public function canWalk(x:Float, y:Float):Bool {
    var tx = Math.floor(x/Constants.TILESIZE);
    var ty = Math.floor(y/Constants.TILESIZE);
    if (tx < 0 || ty < 0 || tx >= Constants.MAPWIDTH || ty >= Constants.MAPHEIGHT)
      return false;
    return _passables[ty];
  }

}

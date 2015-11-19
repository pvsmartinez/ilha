package core;

import openfl.display.Sprite;
import openfl.geom.Point;

import core.Constants;
import core.Stuff;
import core.Floor;
import core.Human;
import core.Camp;

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

  public var _camp:Camp;
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
  public function canDrop(mt:Material, h:Human):Bool {
    if (h.x > _camp.x && h.x < _camp.x + _camp.sizeX && h.y > _camp.y && h.y < _camp.y + _camp.sizeY) {
      _camp.addMaterial(mt);
      mt.x = h.x;
      mt.y = h.y;
      return true;
    }
    return false;
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
  		setChildIndex(objs[i], _iMap.length + i + 1);
      if (Type.getClass(objs[i]) == Stuff) {
        cast(objs[i], Stuff).everyFrame(deltaTime);
      } else if (Type.getClass(objs[i]) == Material) {
        cast(objs[i], Material).everyFrame(deltaTime);
      }
  	}
  }
  public function canWalk(x:Float, y:Float):Bool {
    var tx = Math.floor(x/Constants.TILESIZE);
    var ty = Math.floor(y/Constants.TILESIZE);
    if (tx < 0 || ty < 0 || tx >= Constants.MAPWIDTH || ty >= Constants.MAPHEIGHT)
      return false;
    return _passables[ty];
  }

  private function sortByY(a:Sprite, b:Sprite):Int {
  	if (a.y == b.y) return 0;
  	if (a.y > b.y) return 1;
  	return -1;
  }

  private function defineZones() {
    objs = [];
    draw(ocean, [0,Constants.MAPWIDTH], [Constants.MAPHEIGHT, Constants.MAPHEIGHT]);
    draw(dry, [0,Constants.MAPWIDTH], [Constants.MAPHEIGHT - 1, Constants.MAPHEIGHT - 1]);
    var zones:Array<MapZones> = [];
    var rnd = Math.floor(Math.random() * 3);
    switch ( rnd ) {
      case 0:
        trace("jungle island");
        zones = [camp, lake, normal, dense, dense, dense, dense, dense];
      case 1:
        trace("sparse island");
        zones = [camp, normal, normal, normal, rocked, rocked, rocked, dense];
      case 2:
        trace("normal island");
        zones = [camp, lake, normal, normal, normal, dense, rocked, dense];
    }
    var slotX = 0;
    var slotY = 0;
    var zoneWidth = Math.floor(Constants.MAPWIDTH / 4);
    var zoneHeight = Math.floor((Constants.MAPHEIGHT - 2) / 2);
    while (zones.length > 0) {
      var rnd = Math.floor(Math.random() * zones.length);
      draw(zones[rnd], [slotX*zoneWidth, (1+slotX)*zoneWidth-1], [slotY*zoneHeight, (1+slotY)*zoneHeight-1]);
      zones.remove(zones[rnd]);
      slotX ++;
      if (slotX >= 4) {
        slotX = 0;
        slotY ++;
      }
    }
  }
  private function draw(z:MapZones, xx:Array<Int>, yy:Array<Int>) {
    var stuffs:Array<SourceKind> = [];
    var ocuppied:Array<Point> = [];
    var rnd:Int;
    var reposition:Bool = true;
    switch ( z ) {
      case camp:
        addCamp(xx, yy);
      case ocean:
        stuffs = [wave, wave, wave, wave, wave, wave, wave, wave, wave, wave, wave, wave];
        reposition = false;
      case dry:
        stuffs = [tree, rock, bush, grass, tree];
      case normal:
        rnd = Math.floor(Math.random() * 3);
        switch ( rnd ) {
          case 0:
            stuffs = [tree, tree, grass, rock, rock, grass, bush];
          case 1:
            stuffs = [tree, tree, tree, tree, rock, grass, grass, bush, bush];
          case 2:
            stuffs = [tree, tree, tree, tree, grass, rock, rock, rock, grass, grass, bush, bush, bush];
        }
      case rocked:
        rnd = Math.floor(Math.random() * 3);
        switch ( rnd ) {
          case 0:
            stuffs = [rock, rock, rock, grass, grass, bush, bush, bush];
          case 1:
            stuffs = [rock, rock, rock, rock, rock, rock, bush, bush, bush];
          case 2:
            stuffs = [rock, rock, rock, rock, rock, rock, rock, rock, rock, rock, grass];
        }
      case dense:
        rnd = Math.floor(Math.random() * 3);
        switch ( rnd ) {
          case 0:
            stuffs = [tree, tree, tree, tree, tree, grass, bush, bush, bush, bush, bush, grass, grass, grass];
          case 1:
            stuffs = [tree, tree, tree, tree, tree, tree, tree, tree, tree, tree, bush, bush, bush, bush, grass, grass];
          case 2:
            stuffs = [tree, tree, tree, tree, tree, tree, tree, tree, tree, tree, tree, tree, tree, tree, bush, bush, bush, bush];
        }
      case lake:
        //addLake();
    }
    while (stuffs.length > 0) {
      var pt:Point = new Point();
      pt.x = Math.floor(Math.random() * (xx[1] + 1 - xx[0])) + xx[0];
      pt.y = Math.floor(Math.random() * (yy[1] + 1 - yy[0])) + yy[0];
      var flag = true;
      for (i in 0...ocuppied.length) {
        if (pt.x == ocuppied[i].x && pt.y == ocuppied[i].y) {
          flag = false;
        }
      }
      if(flag == true) {
        ocuppied.push(pt);
        rnd = Math.floor(Math.random() * stuffs.length);
        var sourceKind = stuffs[rnd];
        var stuff:Stuff = new Stuff(sourceKind);
        stuffs.remove(sourceKind);
        addChild(stuff);
        stuff.x = pt.x * Constants.TILESIZE;
        stuff.y = pt.y * Constants.TILESIZE;
        if (reposition) {
          stuff.x += Constants.TILESIZE/2 + ((Math.floor(Math.random() * 3) - 1) * Constants.TILESIZE/6);
          stuff.y += Constants.TILESIZE/2 + ((Math.floor(Math.random() * 3) - 1) * Constants.TILESIZE/6);
        }
        this.setChildIndex(stuff, Math.floor(stuff.y));
        objs.push(stuff);
      }
    }
  }
  private function addCamp(xx:Array<Int>, yy:Array<Int>) {
    _startingPoint = [xx[0], xx[1], yy[0], yy[1]];
    _camp = new Camp();
    addChildAt(_camp, _iMap.length);
    _camp.x = ((xx[0] + xx[1]) * Constants.TILESIZE / 2) - _camp.sizeX/3;
    _camp.y = ((yy[0] + yy[1]) * Constants.TILESIZE / 2) - _camp.sizeY/3;
    _camp.createTents(this);
  }
  private function drawFloor() {
    _iMap = [];
    _passables = [];
    var kind:FloorKind;
    var floor:Floor;
    var tiles = [sandT,sandT,sandT,sandT,sandT,sandT,sandT,sandH,sandH,sandH,sandH,sandM,sandM,sandL,sea];
    for (i in 0...tiles.length) {
      var lmap:Array<Floor> = [];
      var lpass:Array<Bool> = [];
      floor = new Floor(tiles[i]);
      addChildAt(floor, i);
      floor.x = 0;
      floor.y = i * Constants.TILESIZE;
      _iMap.push(floor);
      _passables.push(floor.walkable);
    }
  }
}

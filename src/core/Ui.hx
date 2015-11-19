package core;

import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.geom.Rectangle;
import openfl.geom.Point;
import openfl.Lib;

import core.Island;
import core.Story;

class Ui extends Sprite {

  private var _island:Island;

  private var _map:Bitmap;
  private var _day:Bitmap;

  private var _heads:Array<Bitmap>;
  private var _weapons:Array<Bitmap>;
  private var _wkinds:Array<String>;

  private var _xBorder:Int = 30;
  private var _yBorder:Int = 20;

  public function new(island:Island) {
    super();
    _island = island;
    _map = new Bitmap(Rs.uis["map"]);
    _day = new Bitmap(getDay(0));
    addChild(_map);
    addChild(_day);
    _map.x = _xBorder;
    _day.y = _map.y = _yBorder;
    _day.x = _map.x + _map.width + _xBorder;
    _heads = [];
    _weapons = [];
    _wkinds = [];
    for (i in 0..._island.humans.length) {
      _heads.push(new Bitmap(Rs.heads[_island.humans[i].charName]));
      _wkinds.push(Std.string(_island.humans[i].currentTool.kind));
      var weapon:Bitmap = new Bitmap(Rs.tools[_wkinds[i]]);
      _weapons.push(weapon);
    }
    var dx:Float = _xBorder;
    for (i in 0..._heads.length) {
      if (_weapons[i] != null) {
        addChild(_weapons[i]);
        _weapons[i].y = _yBorder + 35 - _weapons[i].height/2;
        _weapons[i].x = Lib.current.stage.stageWidth - dx - _weapons[i].width;
        dx += _weapons[i].width + 5;
      }
      if (_heads[i] != null) {
        addChild(_heads[i]);
        _heads[i].y = _yBorder + 35 - _heads[i].height/2;
        _heads[i].x = Lib.current.stage.stageWidth - dx - _heads[i].width;
        dx += _heads[i].width + 5;
      }
    }
  }
  public function everyFrame() {
    for (i in 0..._island.humans.length) {
      if (Std.string(_island.humans[i].currentTool.kind) != _wkinds[i]) {
        _wkinds[i] = Std.string(_island.humans[i].currentTool.kind);
        _weapons[i].bitmapData = Rs.tools[_wkinds[i]];
      }
    }
    _day.bitmapData=getDay(Story.day);
  }
  private function getDay(d:Int):BitmapData {
    var w = 60;
    var h = 42;
    var bc = new BitmapData(w, h);
    var x = d%4;
    var y = Math.floor(d/4);
    bc.copyPixels(Rs.uis["days"], new Rectangle(x * w, y * h, (x + 1) * w, (y + 1) * h), new Point(0, 0));
    return bc;
  }
}

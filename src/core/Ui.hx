package core;

import openfl.display.Sprite;
import openfl.display.Bitmap;
import openfl.Lib;

import core.Island;

class Ui extends Sprite {

  private var _map:Bitmap;
  private var _island:Island;
  private var _heads:Array<Bitmap>;
  private var _weapons:Array<Bitmap>;
  private var _wkinds:Array<String>;
  private var _headW:Float;
  private var _weapW:Float;

  private var _xBorder:Int = 30;
  private var _yBorder:Int = 20;

  public function new(island:Island) {
    super();
    _island = island;
    _map = new Bitmap(Rs.uis["map"]);
    addChild(_map);
    _map.x = _xBorder;
    _map.y = _yBorder;
    _heads = [];
    _weapons = [];
    _wkinds = [];
    for (i in 0..._island.humans.length) {
      var head:Bitmap = new Bitmap(Rs.uis["head"+(i + 1)]);
      _heads.push(head);
      _wkinds.push(Std.string(_island.humans[i].currentTool.kind));
      var weapon:Bitmap = new Bitmap(Rs.uis[_wkinds[i]]);
      _weapons.push(weapon);
    }
    _headW = Rs.uis["head1"].width;
    _weapW = Rs.uis["axe"].width;
    var fix = Math.floor((_headW - _weapW)/2);
    for (i in 0..._heads.length) {
      if (_heads[i] != null) {
        addChild(_heads[i]);
        _heads[i].y = _yBorder;
        _heads[i].x = Lib.current.stage.stageWidth - (_xBorder + (_headW + _weapW + 5) * (i + 1));
      }
      if (_weapons[i] != null) {
        addChild(_weapons[i]);
        _weapons[i].y = _yBorder + fix;
        _weapons[i].x = Lib.current.stage.stageWidth - (_xBorder + (_weapW * (i + 1)) + ((5 + _headW) * i));
      }
    }
  }
  public function everyFrame() {
    var fix = Math.floor((_headW - _weapW)/2);
    for (i in 0..._island.humans.length) {
      if (Std.string(_island.humans[i].currentTool.kind) != _wkinds[i]) {
        _wkinds[i] = Std.string(_island.humans[i].currentTool.kind);
        removeChild(_weapons[i]);
        _weapons[i] = new Bitmap(Rs.uis[_wkinds[i]]);
        _weapons[i].y = _yBorder + fix;
        _weapons[i].x = Lib.current.stage.stageWidth - (_xBorder + (_weapW * (i + 1)) + ((5 + _headW) * i));
        addChild(_weapons[i]);
      }
    }
  }
}

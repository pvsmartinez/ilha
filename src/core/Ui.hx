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
    for (i in 0..._island.humans.length) {
      var head:Bitmap = new Bitmap(Rs.uis["head"]);
      _heads.push(head);
      var weapon:Bitmap = new Bitmap(Rs.uis["axe"]);
      _weapons.push(weapon);
    }
    var headW = Rs.uis["head"].width;
    var weapW = Rs.uis["axe"].width;
    var fix = Math.floor((headW - weapW)/2);
    for (i in 0..._heads.length) {
      if (_heads[i] != null) {
        addChild(_heads[i]);
        _heads[i].y = _yBorder;
        _heads[i].x = Lib.current.stage.stageWidth - (_xBorder + (headW + weapW + 5) * (i + 1));
      }
      if (_weapons[i] != null) {
        addChild(_weapons[i]);
        _weapons[i].y = _yBorder + fix;
        _weapons[i].x = Lib.current.stage.stageWidth - (_xBorder + (weapW * (i + 1)) + ((5 + headW) * i));
      }
    }
  }



}

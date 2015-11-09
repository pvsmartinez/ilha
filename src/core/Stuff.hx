package core;

import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;

import core.Material;
import core.Body;
import core.Rs;

enum SourceKind {
  tree;
  bush;
  rock;
  wave;
}

class Stuff extends Body {

  public var kind:SourceKind;
  private var _material:MaterialKind;
  private var _respawTime:Int;
  private var _timeToExtract:Int;

  public var respaw:Float = -1;
  public var targeted:Bool = false;

  public function new(kd:SourceKind) {
    kind = kd;
    var imgData:BitmapData;
    var reposition = false;
    switch ( kd ) {
      case tree:
        _material = wood;
        _respawTime = 30 * 1000;
        _timeToExtract = 2 * 1000;
      case bush:
        _material = fruit;
        _respawTime = 60 * 1000;
        _timeToExtract = 1 * 1000;
      case rock:
        _material = stone;
        _respawTime = null;
        _timeToExtract = 5 * 1000;
      case wave:
        _material = fish;
        _respawTime = 120 * 1000;
        _timeToExtract = 2 * 1000;
        reposition = true;
    }
    super(Rs.stuffs[Std.string(kind)], false);
    if (reposition) {
      _bitMap.x = _bitMap.y = 0;
    }
  }

  public function extract():Dynamic {
    if (respaw == -1) {
      selectable = false;
      haxe.Timer.delay(function() {
        removeChild(_bitMap);
        respaw = _respawTime;
      }, _timeToExtract);
      return {material: new Material(_material), time:_timeToExtract};
    }
    return null;
  }

  public function everyFrame(deltaTime:Float) {
    if (respaw > -1) {
      respaw -= deltaTime;
      if (respaw <= -1) {
        respaw = -1;
        addChild(_bitMap);
        selectable = true;
        targeted = false;
      }
    }
  }

}

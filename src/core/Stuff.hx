package core;

import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;

import core.Material;

enum SourceKind {
  palm;
  tree;
}

class Stuff extends Sprite {

  private var _kind:SourceKind;
  private var _material:MaterialKind;
  private var _respawTime:Int;
  private var _respaw:Float = -1;
  private var _bitMap:Bitmap;

  public function new(imgData:BitmapData, kd:Int) {
    super();
    switch ( kd ) {
      case 0:
        _kind = palm;
        _material = cherry;
        _respawTime = 60 * 1000;
      case 1:
        _kind = tree;
        _material = wood;
        _respawTime = 30 * 1000;
    }
    _bitMap = new Bitmap(imgData);
    addChild(_bitMap);
  }

  public function extract():Material {
    if (_respaw == -1) {
      removeChild(_bitMap);
      _respaw = _respawTime;
      return new Material(_material);
    }
    return null;
  }

  public function everyFrame(deltaTime:Float) {
    if (_respaw > -1) {
      _respaw -= deltaTime;
      if (_respaw <= -1) {
        _respaw = -1;
        addChild(_bitMap);
      }
    }
  }

}

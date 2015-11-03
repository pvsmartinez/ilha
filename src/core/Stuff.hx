package core;

import openfl.display.BitmapData;

import core.Material;
import core.Body;

enum SourceKind {
  palm;
  tree;
}

class Stuff extends Body {

  private var _kind:SourceKind;
  private var _material:MaterialKind;
  private var _respawTime:Int;
  private var _respaw:Int = -1;

  public function new(imgData:BitmapData, kd:Int) {
    super(imgData, false);
    switch ( kd ) {
      case 0:
        _kind = palm;
        _material = cherry;
        _respawTime = 10;
      case 1:
        _kind = tree;
        _material = wood;
        _respawTime = 5;
    }

  }

  public function extract():Material {
    if (_respaw == -1) {
      removeChild(_bitMap);
      _respaw = _respawTime;
      return new Material(_material);
    }
    return null;
  }

}

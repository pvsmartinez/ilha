package core;

import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;

enum FloorKind {
  grass;
  water;
  mud;
}

class Floor extends Sprite {

  private var _kind:FloorKind;
  private var _bitMap:Bitmap;

  public var walkable:Bool;

  public function new(imgData:BitmapData, kd:Int) {
    super();
    switch ( kd ) {
      case 0:
        _kind = grass;
        walkable = true;
      case 1:
        _kind = water;
        walkable = false;
      case 2:
        _kind = mud;
        walkable = false;
    }
    _bitMap = new Bitmap(imgData);
    addChild(_bitMap);
  }

}

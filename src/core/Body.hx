package core;

import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;

import core.Animation;
import core.Stuff;

class Body extends Sprite {

  private var _hasAnimation:Bool;
  private var _animation:Animation;
  private var _imgData:BitmapData;
  private var _bitMap:Bitmap;
  private var _border:Int = 10;

  public var direction:Int = 0;
  public var sizeX:Float;
  public var sizeY:Float;
  public var speed:Float = 0.1;
  public var floor:TileSystem;
  public var selectable:Bool = true;
  public var onFocus:Bool = false;

  public function new(imgData:BitmapData, animate:Bool, ?sts:Int, ?w:Int, ?h:Int) {
    super();
    _imgData = imgData;
    _hasAnimation = animate;
    if (_hasAnimation) {
      _animation = new Animation(_imgData, sts, w, h);
      addChild(_animation);
      sizeX = _animation.displayImage.width;
      sizeY = _animation.displayImage.height;
    } else {
      _bitMap = new Bitmap(_imgData);
      addChild(_bitMap);
      _bitMap.x = -_bitMap.width/2;
      _bitMap.y = -_bitMap.height;
      sizeX = _bitMap.width;
      sizeY = _bitMap.height;
    }
  }

  public function move(mv:Array<Int>, spd:Array<Float>) {
    this.x += mv[0] * spd[0];
    this.y += mv[1] * spd[1];
  }

}

package core;

import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;

import core.Animation;
import core.TileMap;
import core.Stuff;

class Body extends Sprite {

  private var _hasAnimation:Bool;
  private var _animation:Animation;
  private var _imgData:BitmapData;
  private var _bitMap:Bitmap;
  private var _border:Int = 10;

  public var tileX:Int;
  public var tileY:Int;
  public var size:Float;
  public var speed:Float = 0.1;

  public function new(imgData:BitmapData, animate:Bool, ?sts:Array<String>, ?w:Int, ?h:Int) {
    super();
    _imgData = imgData;
    _hasAnimation = animate;
    if (_hasAnimation) {
      _animation = new Animation(_imgData, sts, w, h);
      addChild(_animation);
      size = _animation.displayImage.width;
    } else {
      _bitMap = new Bitmap(_imgData);
      addChild(_bitMap);
      _bitMap.x = -_bitMap.width/2;
      _bitMap.y = -_bitMap.height;
      size = _bitMap.width;
    }
  }

  public function getPos(map:TileMap) {
    tileX = Math.floor(this.x / map.cellWidth);
    tileY = Math.floor(this.y / map.cellHeight);
  }

  public function move(mv:Array<Bool>, spd:Array<Float>) {
    var l:Bool = mv[0];
    var u:Bool = mv[1];
    var r:Bool = mv[2];
    var d:Bool = mv[3];
    if (l)
      this.x -= spd[0];
    if (u)
      this.y -= spd[1];
    if (r)
      this.x += spd[0];
    if (d)
      this.y += spd[1];
  }
}

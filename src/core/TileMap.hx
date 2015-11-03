package core;

import openfl.display.Sprite;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Tilesheet;
import openfl.geom.Rectangle;
import openfl.geom.Point;
import openfl.Assets;

import haxe.Json;

import core.Stuff;
import core.Floor;

enum TileKinds {
  floor;
  trees;
}

class TileMap extends Sprite {

  private var _tilesheet:Bitmap;
  private var _image:BitmapData;
  private var _bitmapContainer:BitmapData;
  private var _pics:Map<Int, Rectangle>;
  private var _states:Map<String, Array<Point>>;
  private var _tileSize:Int = 64;

  public var kind:TileKinds;
  public var objs:Map<String, Sprite>;
  public var cellWidth:Int;
  public var cellHeight:Int;

  public function new(imgUrl:String, kd:TileKinds) {
    super();
    var nTypes:Int;
    kind = kd;
    switch ( kind ) {
      case floor:
        cellWidth = 64;
        cellHeight = 64;
        nTypes = 3;
      case trees:
        cellWidth = 64;
        cellHeight = 128;
        nTypes = 2;
    }
    _image = Rs.tlMaps[imgUrl];
    _tilesheet = new Bitmap(_image);
    _pics = new Map<Int, Rectangle>();
    objs = new Map<String, Sprite>();
    var x = 0;
    var y = 0;
    for (i in 0...nTypes) {
      _pics.set(i,new Rectangle(x, y, cellWidth, cellHeight));
      x += cellWidth;
      if (x + cellWidth > _tilesheet.width) {
        x = 0;
        y += cellHeight;
      }
    }
  }
  public function draw(mapPath:String) {
    var contents = Assets.getText(mapPath);
    var rows:Array<String> = contents.split("\n");
    var deslocX = cellWidth - _tileSize;
    var deslocY = cellHeight - _tileSize;
    for (i in 0...rows.length) {
      var values:Array<Bool> = [];
      var columns:Array<String> = rows[i].split(",");
      for (j in 0...columns.length) {
        var value = Std.parseInt(columns[j]);
        if (value > -1) {
          if (_pics.exists(value)) {
            _bitmapContainer = new BitmapData(cellWidth, cellHeight);
            _bitmapContainer.copyPixels(_image, _pics[value], new Point(0, 0));
            var spt:Sprite;
            switch ( kind ) {
              case floor:
                spt = new Floor(_bitmapContainer, value);
              case trees:
                spt = new Stuff(_bitmapContainer, value);
            }
            objs.set(j + '/' + i, spt);
            addChild(spt);
            spt.x = (j * _tileSize) - deslocX;
            spt.y = (i * _tileSize) - deslocY;
          }
        }
      }
    }
  }
  public function everyFrame(deltaTime:Float) {
    if (kind == trees) {
      for (st in objs) {
        cast(st, Stuff).everyFrame(deltaTime);
      }
    }
  }
  public function getStuff(tileX:Int, tileY:Int):Stuff {
    if (kind != trees)
      return null;
    if (objs.exists(tileX + '/' + tileY))
      return cast(objs[tileX + '/' + tileY], Stuff);
    return null;
  }
  public function canWalk(tileX:Int, tileY:Int):Bool {
    if (kind != floor)
      return true;
    if (objs.exists(tileX + '/' + tileY))
      return cast(objs[tileX + '/' + tileY], Floor).walkable;
    return false;
  }
  public function canGoLeft(tileX:Int, tileY:Int):Bool {
    if (kind != floor)
      return true;
    if (objs.exists((tileX - 1) + '/' + tileY))
      return cast(objs[(tileX - 1) + '/' + tileY], Floor).walkable;
    return false;
  }
  public function canGoUp(tileX:Int, tileY:Int):Bool {
    if (kind != floor)
      return true;
    if (objs.exists(tileX + '/' + (tileY - 1)))
      return cast(objs[tileX + '/' + (tileY - 1)], Floor).walkable;
    return false;
  }
  public function canGoRight(tileX:Int, tileY:Int):Bool {
    if (kind != floor)
      return true;
    if (objs.exists((tileX + 1) + '/' + tileY))
      return cast(objs[(tileX + 1) + '/' + tileY], Floor).walkable;
    return false;
  }
  public function canGoDown(tileX:Int, tileY:Int):Bool {
    if (kind != floor)
      return true;
    if (objs.exists(tileX + '/' + (tileY + 1)))
      return cast(objs[tileX + '/' + (tileY + 1)], Floor).walkable;
    return false;
  }
}

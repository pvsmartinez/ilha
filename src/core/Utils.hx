package core;

import openfl.display.BitmapData;
import openfl.geom.Rectangle;
import openfl.geom.Point;

class Utils {

  public static function randomInt(max:Int):Int {
    return Math.floor(Math.random() * max);
  }

  public static function getRandom(list:Array<Dynamic>):Dynamic {
    var rnd = Math.floor(Math.random() * list.length);
    return list[rnd];
  }

  public static function getImages(img:BitmapData, size:Array<Int>, grid:Array<Int>):Array<BitmapData> {
    var ret:Array<BitmapData> = [];
    var w = size[0];
    var h = size[1];
    var n = grid[0]*grid[1];
    for (i in 0...n) {
      var tempBit:BitmapData = new BitmapData(w, h);
      var x = i % grid[0];
      var y = Math.floor(i/grid[0]);
      tempBit.copyPixels(img, new Rectangle(x * w, y * h, (x + 1) * w, (y + 1) * h), new Point(0, 0));
      ret.push(tempBit);
    }
    return ret;
  }

}

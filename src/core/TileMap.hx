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

enum StuffKinds {
  floor;
  trees;
}

class TileMap extends Sprite {

  private var _tilesheet:Tilesheet;
  private var _image:BitmapData;
  private var _table:Map<String, Int>;
  private var _pics:Map<Int, Rectangle>;
  private var _passableTiles:Array<Bool>;
  private var _passableCells:Array<Array<Bool>>;

  public var kind:StuffKinds;
  public var objs:Map<String, Stuff>;
  public var cellWidth:Int;
  public var cellHeight:Int;

  public function new(imgUrl:String, dataPath:String, kd:StuffKinds)  {
      super();
      var obj:Dynamic = Json.parse(Assets.getText(dataPath));

      cellWidth = obj.width;
      cellHeight = obj.height;

      _image = Assets.getBitmapData(imgUrl);
      _tilesheet     = new Tilesheet(_image);
      _passableTiles = [];
      _passableCells = [];
      kind = kd;
      _table = new Map<String, Int>();
      _pics = new Map<Int, Rectangle>();
      objs = new Map<String, Stuff>();

      _passableTiles.push(false);
      for (i in 0...obj.data.length) {
          var tileInfo:Dynamic = obj.data[i];
          _passableTiles.push(tileInfo.passable);
          _table.set(tileInfo.name, _tilesheet.addTileRect(new Rectangle(tileInfo.x, tileInfo.y, cellWidth, cellHeight)));
          _pics.set(i,new Rectangle(tileInfo.x, tileInfo.y, cellWidth, cellHeight));
      }
  }

  public function drawMapFromCsv(mapPath:String, _tileSize:Int)
  {
      var contents = Assets.getText(mapPath);
      var rows:Array<String> = contents.split("\n");
      for (i in 0...rows.length) {
          var values:Array<Bool> = [];
          var columns:Array<String> = rows[i].split(",");
          for (j in 0...columns.length) {
              var value = Std.parseInt(columns[j]);
              if (value > -1) {
                switch ( kind ) {
                  case floor:
                    _tilesheet.drawTiles(graphics, [j * _tileSize, i * _tileSize, value]);
                  case trees:
                    if (_pics.exists(value)) {
                      var btCont:BitmapData = new BitmapData(cellWidth, cellHeight);
                      btCont.copyPixels(_image, _pics[value], new Point(0, 0));
                      var st:Stuff = new Stuff(btCont, value);
                      objs.set(j + '/'+ i, st);
                      addChild(st);
                      st.x = (j * _tileSize) + btCont.width/2;
                      st.y = (i * _tileSize) + btCont.height/2;
                    }
                }
                  values.push(_passableTiles[Std.int(value) + 1]);
                  continue;
              }
              values.push(false);
          }
          _passableCells.push(values);
      }
  }

  public function getStuff(tileX:Int, tileY:Int):Stuff {
    if (objs.exists(tileX + '/'+ tileY))
      return objs[tileX + '/'+ tileY];
    return null;
  }

  public function canGoUp(tileX:Int, tileY:Int):Bool
  {
      if (tileY <= 0)
          return false;
      return _passableCells[tileY - 1][tileX];
  }

  public function canGoLeft(tileX:Int, tileY:Int):Bool
  {
      if (tileX <= 0)
          return false;
      return _passableCells[tileY][tileX - 1];
  }

  public function canGoRight(tileX:Int, tileY:Int):Bool
  {
      if (tileX > _passableCells[tileY].length)
          return false;
      return _passableCells[tileY][tileX+1];
  }

  public function canGoDown(tileX:Int, tileY:Int):Bool
  {
      if (tileY > _passableCells.length)
          return false;
      return _passableCells[tileY+1][tileX];
  }

}

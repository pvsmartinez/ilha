package core;

import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;

import core.Constants;
import core.Rs;

enum FloorKind {
  sandL;
  sandM;
  sandH;
  sandT;
  sea;
}

class Floor extends Sprite {

  private var _kind:FloorKind;

  public var walkable:Bool;

  public function new(kd:FloorKind) {
    super();
    _kind = kd;
    if (_kind == sea)
      walkable = false;
    else
      walkable = true;
      var color:Int;
    var texture:BitmapData = Rs.textures["sand"];
    switch ( _kind ) {
      case sandL:
        color = 0xffc451;
      case sandM:
        color = 0xffc451;
      case sandH:
        color = 0xffc451;
      case sandT:
        color = 0xffc451;
      case sea:
        color = 0x02256d;
        texture = Rs.textures["sea"];
    }
    this.graphics.beginFill(color);
		this.graphics.drawRect(0, 0, (Constants.TILESIZE + 1) * Constants.MAPWIDTH, Constants.TILESIZE);
		this.graphics.endFill();
    var ntexts:Int;
    if ( _kind == sea ) {
      ntexts = Math.ceil(((Constants.TILESIZE + 1) * Constants.MAPWIDTH)/texture.width);
      for (i in 0...ntexts) {
        var bitmap:Bitmap = new Bitmap(texture);
        addChild(bitmap);
        bitmap.x = i * texture.width;
        bitmap.y = Constants.TILESIZE - bitmap.height;
      }
    } else {
      ntexts = Math.ceil(Constants.MAPWIDTH / 4);
      for (i in 0...ntexts) {
        var bitmap:Bitmap = new Bitmap(texture);
        addChild(bitmap);
        bitmap.x = Math.random() * ((Constants.TILESIZE) * Constants.MAPWIDTH);
        bitmap.y = 0.2 + (Math.random() * (Constants.TILESIZE - bitmap.height) * 0.6);
      }
    }
  }

}

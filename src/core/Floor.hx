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
    var texture:BitmapData = null;
    switch ( _kind ) {
      case sandL:
        color = 0xffaf49;
      case sandM:
        color = 0xffc069;
      case sandH:
        color = 0xffb649;
      case sandT:
        color = 0xf5aa2e;
      case sea:
        color = 0x02256d;
        texture = Rs.textures["sea"];
    }
    this.graphics.beginFill(color);
		this.graphics.drawRect(0, 0, (Constants.TILESIZE + 1) * Constants.MAPWIDTH, Constants.TILESIZE);
		this.graphics.endFill();
    if ( texture != null ) {
      var ntexts = Math.ceil(((Constants.TILESIZE + 1) * Constants.MAPWIDTH)/texture.width);
      for (i in 0...ntexts) {
        var bitmap:Bitmap = new Bitmap(texture);
        addChild(bitmap);
        bitmap.x = i * texture.width;
        bitmap.y = Constants.TILESIZE - bitmap.height;
      }
    }
  }

}

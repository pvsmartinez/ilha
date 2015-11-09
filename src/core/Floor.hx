package core;

import openfl.display.Sprite;

import core.Constants;

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
    }
    this.graphics.beginFill(color);
		this.graphics.drawRect(0, 0, Constants.TILESIZE * Constants.MAPWIDTH, Constants.TILESIZE);
		this.graphics.endFill();
  }

}

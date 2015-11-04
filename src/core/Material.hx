package core;

import core.Body;
import core.Rs;
import core.SoundHandler;

enum MaterialKind {
  wood;
  cherry;
}

class Material extends Body {

  private var _kind:MaterialKind;

  public function new(matKind:MaterialKind) {
    _kind = matKind;
    var imgUrl:String;
    var pickedNumber:Int = Std.random(100);
    switch ( _kind ) {
      case wood:
        imgUrl = "wood";
        SoundHandler.randomSoundFromList(["axe0", "axe1", "axe2", "wood0", "wood1", "wood2", "blip"] ,[25, 20, 15, 15, 15, 7, 3]);
      case cherry:
        imgUrl = "cherry";
        SoundHandler.randomSoundFromList(["axe0", "axe2", "wood2", "cherry", "smash"] ,[25, 20, 30, 15, 10]);
    }
    super(Rs.maters[imgUrl], false);
  }

  public function follow(target:Body, followDistance:Float) {
    var dx = this.x - target.x;
    var dy = this.y - target.y;
    var dist = Math.sqrt((dx*dx)+(dy*dy));
    if( dist > followDistance + 5 ) {
      var mv:Array<Bool> = [];
      var sp:Float = Math.floor((dist - followDistance) / 4);
      mv[0] = dx > 0;
      mv[1] = dy > 0;
      mv[2] = dx < 0;
      mv[3] = dy < 0;
      var sps = [sp * Math.abs(dx/dist), sp * Math.abs(dy/dist)];
      super.move(mv, sps);
    }
  }

}

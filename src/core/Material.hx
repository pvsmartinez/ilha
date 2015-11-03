package core;

import core.Body;
import core.Rs;

enum MaterialKind {
  wood;
  cherry;
}

class Material extends Body {

  private var _kind:MaterialKind;

  public function new(matKind:MaterialKind) {
    _kind = matKind;
    var imgUrl:String;
    switch ( _kind ) {
      case wood:
        imgUrl = "wood";
      case cherry:
        imgUrl = "cherry";
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

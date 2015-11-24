package core;

import core.Body;
import core.Rs;
import core.SoundHandler;

enum MaterialKind {
  wood;
  stone;
  leaf;
  fruit;
  fish;
  water;
  raft;
  rope;
  sail;
  plank;
  bonfire;
}

enum MaterialState {
  idle;
  following;
}

class Material extends Body {

  public var kind:MaterialKind;
  public var state:MaterialState;

  public function new(matKind:MaterialKind) {
    kind = matKind;
    var imgUrl:String;
    var pickedNumber:Int = Std.random(100);
    super(Rs.maters[Std.string(kind)], false);
    this.selectable = false;
  }

  public function everyFrame(deltaTime:Float) {
    if (state == idle) {
      if (onFocus) {
        this.scaleX = 1;
        this.scaleY = 1;
      } else {
        this.scaleX = 0.7;
        this.scaleY = 0.7;
      }
    } else {
      this.scaleX = 1;
      this.scaleY = 1;
    }
  }

  public function follow(target:Body, followDistance:Float) {
    var dx = this.x - target.x;
    var dy = this.y - target.y;
    var dist = Math.sqrt((dx*dx)+(dy*dy));
    if( dist > followDistance + 5 ) {
      var mv:Array<Int> = [];
      var sp:Float = Math.floor((dist - followDistance) / 4);
      mv[0] = (dx != 0) ? -Math.floor(dx/Math.abs(dx)) : 0;
      mv[1] = (dy != 0) ? -Math.floor(dy/Math.abs(dy)) : 0;
      var sps = [sp * Math.abs(dx/dist), sp * Math.abs(dy/dist)];
      super.move(mv, sps);
    }
  }

}

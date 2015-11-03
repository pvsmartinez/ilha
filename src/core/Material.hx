package core;

import openfl.Assets;

import core.Body;

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
        imgUrl = "img/materials/wood.png";
      case cherry:
        imgUrl = "img/materials/cherry.png";
    }
    super(Assets.getBitmapData(imgUrl), false);
  }

}

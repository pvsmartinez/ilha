package core;

import core.Stuff;

import openfl.display.Sprite;

enum ToolKind {
  axe;
  pick;
  spear;
  rod;
  knife;
}

class Tool extends Sprite {

  public var kind:ToolKind;

  public function new(kd:ToolKind) {
    super();
    kind = kd;
  }

  public function howManyHitPointsWouldGetFromResource(stf:Stuff):Float{
    var returnValue:Float = 1;
    var list = [tree, bush, rock, wave];
    var values:Array<Float> = [1, 1, 1, 1];
    switch(kind){
        case axe:
          values = [50, 30, 1, 1];
        case pick:
          values = [1, 1, 50, 1];
        case spear:
          values = [1, 1, 1, 50];
        case rod:
          values = [1, 1, 1, 50];
        case knife:
          values = [1, 50, 1, 1];
    }
    for (i in 0...list.length) {
      if (list[i] == stf.kind) {
        returnValue = values[i];
        break;
      }
    }
    return returnValue;
  }
}

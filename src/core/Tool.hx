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

  private var kind:ToolKind;

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
          values = [10, 2, 1, 1];
        case pick:
          values = [1, 1, 10, 1];
        case spear:
          values = [1, 5, 1, 5];
        case rod:
          values = [0.5, 1, 0.5, 10];
        case knife:
          values = [1, 10, 1, 1];
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

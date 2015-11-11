package core;

import openfl.display.Sprite;

enum ToolKind {
  axe;

}

class Tool extends Sprite {

  public var _kind:ToolKind;

  public function new(toolKind:ToolKind) {
    _kind = toolKind;
    super();
  }

}

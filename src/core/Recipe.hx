package core;

import openfl.display.Sprite;
import core.Material;
import core.Tool;

enum ResultKind {
  material;
  tool;
}

class Recipe {
  public var _result:EnumValue;
  public var _resultKind:ResultKind;
  public var _ingredientList = new Map<MaterialKind,Int>();

  public function new(result:EnumValue, ingredientList:Map<MaterialKind,Int>) {
    _ingredientList = ingredientList;
    _result = result;
    if(Type.getEnum(result) == ToolKind){
      _resultKind = tool;
    } else if (Type.getEnum(result) == MaterialKind){
      _resultKind = material;
    }
  }
}

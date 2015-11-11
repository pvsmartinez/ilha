package core;

import openfl.display.Sprite;
import core.Material;

class Recipe {
  public var _result:Sprite;
  public var _resultKind:String;
  public var _ingredientList = new Map<MaterialKind,Int>();

  public function new(result:Sprite, ingredientList:Map<MaterialKind,Int>) {
    _ingredientList = ingredientList;
    _result = result;
  }
}

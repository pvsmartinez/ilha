package core;

import core.Material;

class Recipe {
  public var _result:String;
  public var _resultKind:String;
  public var _ingredientList = new Map<MaterialKind,Int>();

  public function new(ingredientList:Map<MaterialKind,Int>) {
    _ingredientList = ingredientList;
  }
}

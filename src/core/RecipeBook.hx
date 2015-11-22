package core;

import openfl.display.Sprite;
import core.Material;
import core.Recipe;
import core.Tool;

class RecipeBook {
  public static var recipes:Map<EnumValue,Recipe> = [
    bonfire => new Recipe(bonfire, [wood=>4, stone=>1]),
    rod => new Recipe(rod, [wood=>1, leaf=>1, fruit=>1]),
    knife => new Recipe(knife, [wood=>1, stone=>1]),
    pick => new Recipe(pick, [wood=>1, stone=>2]),
    axe => new Recipe(axe, [wood=>2, stone=>1]),
    plank => new Recipe(plank, [wood=>3]),
    rope => new Recipe(rope, [leaf=>3]),
    sail => new Recipe(sail, [wood=>1, leaf=>2]),
    raft => new Recipe(raft, [plank=>2, rope=>2, sail=>1]),
    //spear => new Recipe(spear, [wood=>3]),
  ];

  public static function getRecipeFor(result:EnumValue){
    return recipes[result];
  }

}

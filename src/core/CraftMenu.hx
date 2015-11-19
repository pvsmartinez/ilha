package core;

import openfl.display.Sprite;
import openfl.geom.Rectangle;

import core.RecipeBook;

class CraftMenu extends Sprite {

  private var butons:Array<Sprite>;

  public function new() {
    super();
    drawMenu();
  }

  private function drawMenu() {
    this.graphics.beginFill(0x3366cc);
		this.graphics.drawRect(0, 0, 400, 300);
		this.graphics.endFill();
    butons = [];
    for (i in 0...Lambda.count(RecipeBook.recipes)) {
      butons.push(drawButton());
      addChild(butons[i]);
      butons[i].x = 10;
      butons[i].y = 10 * (i + 1) + 30 * i;
    }
  }

  private function drawButton():Sprite {
    var sprite = new Sprite();
    sprite.graphics.beginFill(0x5599ff);
    sprite.graphics.drawRect(0, 0, 380, 30);
    sprite.graphics.endFill();
    return sprite;
  }

}

package core;

import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.Sprite;

import core.RecipeBook;
import core.Material;
import core.Tool;
import core.Utils;

class CraftMenu extends Sprite {

  private var buttons:Array<Dynamic>;
  private var numbers:Array<BitmapData>;
  private var crafts:Array<BitmapData>;
  private var focus:Int = -1;
  private var colorButton:Int = 0x1E3B6E;
  private var colorDisabl:Int = 0x0E0B3E;
  private var colorSelect:Int = 0x3E5B8E;
  private var menuWidth:Int = 400;

  public function new(materials:Array<Material>) {
    super();
    numbers = Utils.getImages(Rs.craft["numbers"], [16, 16], [3, 3]);
    crafts = Utils.getImages(Rs.craft["crafts"], [135, 35], [2, 5]);
    drawMenu(materials);
  }

  public function changeBtn(dir:Int) {
    if (dir != 0 && Lambda.exists(buttons, function(ii){return ii.possible == true;})) {
      var search:Bool = true;
      var opt = focus;
      while(search) {
        opt += dir;
        if (opt >= buttons.length)
          opt = 0;
        if (opt < 0)
          opt = buttons.length - 1;
        if (buttons[opt].possible) {
          search = false;
        }
      }
      focusButton(opt);
    }
  }

  public function chooseBtn():EnumValue {
    if (focus != -1)
      return buttons[focus].recipe._result;
    else
      return null;
  }

  private function drawMenu(materials:Array<Material>) {
    var header = new Bitmap(Rs.craft["header"]);
    addChild(header);
    header.x = 200 - header.width/2;
    header.y = - header.height;
    this.graphics.beginFill(0x0E2B5E);
		this.graphics.drawRect(0, 0, menuWidth, 365);
		this.graphics.endFill();
    buttons = [];
    var i = 0;
    for (craft in RecipeBook.recipes) {
      var targ:MaterialKind = null;
      for (mat in craft._ingredientList.keys()) {
        var x = craft._ingredientList[mat];
        for (m in materials) {
          if (m.kind == mat)
            x --;
        }
        if (x > 0) {
          targ = mat;
          break;
        }
      }
      var btn:Dynamic = {recipe:craft, possible:targ == null};
      var spt = drawButton(btn);
      addChild(spt);
      spt.x = 5;
      spt.y = 5 * (i + 1) + 35 * i;
      btn.sprite = spt;
      buttons.push(btn);
      i ++;
    }
  }

  private function drawButton(btn:Dynamic):Sprite {
    var sprite = new Sprite();
    var color = (btn.possible) ? colorButton : colorDisabl;
    drawRect(sprite, color);
    var pos:Array<EnumValue> = [bonfire, plank, rope, sail, rod, raft, knife, pick, axe];
    var i = Lambda.indexOf(pos, btn.recipe._result);
    if (i != -1) {
      var icon:Bitmap = new Bitmap(crafts[i]);
      sprite.addChild(icon);
      icon.x = 5;
      icon.y = 0;
    }
    var dx:Float = 5;
    var rec:Recipe = btn.recipe;
    for(key in rec._ingredientList.keys()) {
      var number:Bitmap = new Bitmap(numbers[rec._ingredientList[key] - 1]);
      sprite.addChild(number);
      number.x = menuWidth - 10 - dx - number.width;
      number.y = 7;
      dx += number.width + 5;
      var ing:Bitmap = new Bitmap(Rs.craft[Std.string(key)]);
      sprite.addChild(ing);
      ing.x = menuWidth - 10 - dx - ing.width;
      ing.y = 7;
      dx += ing.width + 5;
    }
    return sprite;
  }

  private function drawRect(sprite:Sprite, color:Int) {
    sprite.graphics.beginFill(color);
    sprite.graphics.drawRect(0, 0, menuWidth - 10, 35);
    sprite.graphics.endFill();
  }

  private function focusButton(opt:Int) {
    if (focus != -1)
      drawRect(buttons[focus].sprite, colorButton);
    focus = opt;
    drawRect(buttons[focus].sprite, colorSelect);
  }

}

package core;

import openfl.display.Sprite;
import openfl.display.Bitmap;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.events.Event;
import openfl.ui.Keyboard;
import openfl.Assets;
import openfl.Lib;

import core.Rs;
import core.KeyState;
import Main.MainState;

class Menu extends Sprite {

  //private var titleFormat:TextFormat = new TextFormat(Assets.getFont("font/pixelart.ttf").fontName, 100, 0xFFFFFF, true);
  //private var playFormat:TextFormat = new TextFormat(Assets.getFont("font/pixelart.ttf").fontName, 50, 0xFFFFFF, false);

  public function new () {
    super ();
    addChild(new Bitmap(Rs.screen["title"]));
    //var y = Lib.current.stage.stageHeight/2;
    //write("THE ISLAND", titleFormat, 0, y);
    //write("SPACE TO PLAY", playFormat, 0, y + 100);
  }

  public function everyFrame() {
    if (KeyState.isKeyDown(Keyboard.SPACE, true))
      Main.setGameState(playing);
  }

  /*private function write(text:String, format:TextFormat, x:Float, y:Float) {
    var txt:TextField = new TextField();
    txt.width = Lib.current.stage.stageWidth;
    txt.selectable = false;
    format.align = TextFormatAlign.CENTER;
    txt.setTextFormat(format);
    txt.text = text;
    addChild(txt);
    txt.x = x;
    txt.y = y - txt.height/2;
  }*/

}

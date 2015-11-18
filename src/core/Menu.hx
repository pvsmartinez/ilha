package core;

import openfl.display.Sprite;
import openfl.display.Bitmap;
import openfl.events.Event;
import openfl.ui.Keyboard;

import core.Rs;
import core.KeyState;
import Main.MainState;

class Menu extends Sprite {

  private var _bitMap:Bitmap;

  public function new () {
    super ();
    _bitMap = new Bitmap(Rs.screen["title"]);
    addChild(_bitMap);
    _bitMap.x = 0;
    _bitMap.y = 0;
  }

  public function everyFrame() {
    if (KeyState.isKeyDown(Keyboard.SPACE, true))
      Main.setGameState(playing);
  }

}

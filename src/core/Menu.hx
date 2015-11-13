package core;

import openfl.display.Sprite;
import openfl.display.Bitmap;
import openfl.events.Event;
import openfl.ui.Keyboard;

import core.Rs;
import core.KeyState;
import Main.MainState;

class Menu extends Sprite {

  public function new () {
    super ();
    addChild(new Bitmap(Rs.screen["title"]));
  }

  public function everyFrame() {
    if (KeyState.isKeyDown(Keyboard.SPACE, true))
      Main.setGameState(playing);
  }

}

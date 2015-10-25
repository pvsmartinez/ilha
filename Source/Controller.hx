package ;

import openfl.display.Sprite;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;
import openfl.events.Event;
import openfl.Lib;

class Controller extends Sprite
{

  private var keys:Array<Bool> = [];
  private var actionKey:Int = Keyboard.SPACE;
  private var game:Game;

	public function new() {
    super();
    Lib.current.stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
    Lib.current.stage.addEventListener(KeyboardEvent.KEY_UP, onKeyUp);
	}

  public function setGame(game:Game) {
    this.game = game;
  }

  public function everyFrame(state:String):Void {
    switch ( state ) {
      case "mainMenu":
        if (keys[actionKey]) {
          Lib.current.stage.dispatchEvent(new Event("nextState"));
          keys[actionKey] = false;
        }
      case "playing":
        game.player.move(keys[Keyboard.LEFT], keys[Keyboard.UP], keys[Keyboard.RIGHT], keys[Keyboard.DOWN]);
        if (keys[actionKey]) {
          var resource:Resource = game.player.action(game.sources);
          if(resource != null) {
            game.createResource(resource);
          }
          keys[actionKey] = false;
        }
    }


  }

  private function onKeyDown(evt:KeyboardEvent):Void {
    keys[evt.keyCode] = true;
  }

  private function onKeyUp(evt:KeyboardEvent):Void {
    keys[evt.keyCode] = false;
  }

}

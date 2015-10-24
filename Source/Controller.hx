package ;

import openfl.display.Sprite;
import openfl.Lib;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;

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

  public function everyFrame():Void {
    game.player.move(keys[Keyboard.LEFT], keys[Keyboard.UP], keys[Keyboard.RIGHT], keys[Keyboard.DOWN]);
    if (keys[actionKey]) {
      var resource:Resource = game.player.action(game.sources);
      game.createResource(resource);
      keys[actionKey] = false;
    }
  }

  private function onKeyDown(evt:KeyboardEvent):Void {
    keys[evt.keyCode] = true;
  }

  private function onKeyUp(evt:KeyboardEvent):Void {
    keys[evt.keyCode] = false;
  }

}

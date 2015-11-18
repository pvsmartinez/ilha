package;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.Lib;

import core.Menu;
import core.Game;
import core.EndGame;
import core.KeyState;
import core.Rs;
import core.SoundHandler;

enum MainState {
  mainMenu;
  playing;
  gameOver;
}

class Main extends Sprite {

  private static var menu:Menu;
  private static var end:EndGame;
  private static var game:Game;
  private static var state:MainState;

  public static function main() {
    KeyState.init();
    Rs.init();
    setGameState(mainMenu);

    Lib.current.stage.addEventListener(Event.ENTER_FRAME, everyFrame);
  }

  private static function everyFrame(evt:Event):Void {
    switch ( state ) {
      case mainMenu:
        menu.everyFrame();
      case playing:
        game.everyFrame();
      case gameOver:
        end.everyFrame();
    }
  }

  public static function setGameState(newState:MainState) {
    state = newState;
    switch ( state ) {
      case mainMenu:
        if (end != null)
          Lib.current.stage.removeChild(end);
        end = null;
        menu = new Menu();
        Lib.current.stage.addChild(menu);
        menu.x = menu.y = 0;
        menu.width = Lib.current.stage.stageWidth;
        menu.height = Lib.current.stage.stageHeight;
      case playing:
        if(menu != null)
          Lib.current.stage.removeChild(menu);
          //SoundHandler.setAndPlayMusic("memory");
        menu = null;
        game = new Game();
        Lib.current.stage.addChild(game);
      case gameOver:
        if(game != null)
          Lib.current.stage.removeChild(game);
        game = null;
        end = new EndGame();
        Lib.current.stage.addChild(end);
    }
  }

}

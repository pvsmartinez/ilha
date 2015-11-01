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
  private var menuKey:Int = Keyboard.ENTER;
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
        if (keys[menuKey]) {
          if(canProduceFishingRod()){
            createFishingRod();
          } else {
            trace ("Cannot create fishing rod!");
          }
          keys[menuKey] = false;
        }
    }
  }

  private function canProduceFishingRod():Bool{
    var woodCount:Int = 0;
    var cherryCount:Int = 0;
    for (i in 0 ... game.player.resources.length) {
      if (game.player.resources[i].kind == wood){
        woodCount++;
      }else if(game.player.resources[i].kind == cherry){
        cherryCount++;
      }
    }
    return (cherryCount >= 1 && woodCount >= 3);
  }

  private function createFishingRod():Void{
    game.consumeResource(new Resource("cherry"), 1);
    game.consumeResource(new Resource("wood"), 3);
    game.createTool(new Tool("fishingRod"));
  }

  private function onKeyDown(evt:KeyboardEvent):Void {
    keys[evt.keyCode] = true;
  }

  private function onKeyUp(evt:KeyboardEvent):Void {
    keys[evt.keyCode] = false;
  }

}

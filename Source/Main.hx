package;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.Lib;


class Main extends Sprite {

	private var player:Body;
	private var cnt:Controller;
	private var stuff:Array<Component> = [];

	public function new () {
		super ();
		startGame();
	}

	private function startGame(){
		cnt = new Controller();
		insertStuff();
		insertPlayer();
		this.addEventListener(Event.ENTER_FRAME, everyFrame);
	}

	private function insertPlayer() {
		player = new Body();
		this.addChild(player);
		player.x = 100;
		player.y = 100;
	}

	private function insertStuff() {
		var collect:Collectable;
		var random = Math.ceil(Math.random() * 3);
		var rdm;
		for (i in 0 ... random) {
			rdm = Math.floor(Math.random() * 2);
			switch ( rdm ) {
				case 0:
					collect = new Collectable(cherry);
				case 1:
					collect = new Collectable(bush);
				default:
					collect = new Collectable(cherry);
			}
			stuff.push(collect);
			this.addChild(collect);
			collect.x = Math.random() * Lib.current.stage.stageWidth;
			collect.y = Math.random() * Lib.current.stage.stageHeight;
		}
	}

	private function everyFrame(evt:Event):Void {
		cnt.move(player);
		cnt.interact(player, stuff);
		for (st in stuff) {
			if (cast(st, Collectable).carried) {
				st.x = player.x;
				st.y = player.y;
			}
		}
	}

}

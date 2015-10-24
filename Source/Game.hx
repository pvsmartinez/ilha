package;

import openfl.display.Sprite;
import openfl.Lib;

class Game extends Sprite {

	public var player:Person;
	public var sources:Array<Source> = [];
	public var resources:Array<Resource> = [];

	public function new () {
		super ();
		insertStuff();
		insertPlayer();
	}

	public function everyFrame() {
		for (st in sources) {
			st.focus(player);
		}
	}

	private function insertPlayer() {
		player = new Person();
		this.addChild(player);
		player.x = Lib.current.stage.stageWidth/2;
		player.y = Lib.current.stage.stageHeight/2;
	}

	private function insertStuff() {
		var random = Math.ceil(Math.random() * 3) + 1;
		var rdm:Int;
		var source:Source;
		for (i in 0 ... random) {
			rdm = Math.floor(Math.random() * 2);
			switch ( rdm ) {
				case 0:
					source = new Source(bush);
				case 1:
					source = new Source(tree);
				default:
					source = new Source(tree);
			}
			sources.push(source);
			this.addChild(source);
			source.x = Math.random() * Lib.current.stage.stageWidth;
			source.y = Math.random() * Lib.current.stage.stageHeight;
		}
	}

	public function newResource(kind) {
		var resource:Resource = new Resource(kind);
		this.addChild(resource);
		resources.push(resource);
		resource.x = player.x;
		resource.y = player.y;
	}
}

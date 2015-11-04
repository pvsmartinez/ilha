package core;

import openfl.display.Sprite;
import openfl.Lib;

import core.TileMap;
import core.Human;
import core.Player;
import core.Ai;
import core.Rs;

class Island extends Sprite {

  private var _floor:TileMap;
  private var _stuff:TileMap;

  private var _humans:Array<Human>;
  private var _npcAis:Array<Ai>;
  private var _playerAi:Player;

  public function new() {
    super();

    _floor = new TileMap("floor", floor);
    _floor.draw("info/floorMap.json");
    addChild(_floor);

    _humans = [];
    _npcAis = [];
    var nHumans = 5;
    for(i in 0...nHumans) {
      var rnd = Math.floor(Math.random() * Rs.humans.length);
      _humans.push(new Human(rnd));
      addChild(_humans[i]);
      _humans[i].x = _humans[i].y = 100 * (i + 1);
      if (i == 0) {
        _playerAi = new Player(_humans[i]);
      } else {
        _npcAis.push(new Ai(_humans[i]));
      }
    }

    _stuff = new TileMap("trees", trees);
    _stuff.draw("info/treeMap.json");
    addChild(_stuff);
    _floor.x = _stuff.x = 0;
    _floor.y = _stuff.y = 0;

  }

  public function everyFrame(deltaTime:Float) {
    _playerAi.everyFrame([_floor, _stuff], deltaTime);
    for (ai in _npcAis) {
      ai.everyFrame([_floor, _stuff], deltaTime);
    }
    _stuff.everyFrame(deltaTime);
    camera();
  }

  private function camera() {
    var safeZone:Int = 100;
    var posX = _humans[0].x + this.x;
    var posY = _humans[0].y + this.y;
    if (posX < safeZone)
      this.x += Math.abs(posX - safeZone);
    if (posX > Lib.current.stage.stageWidth - safeZone)
      this.x -= Math.abs(posX - (Lib.current.stage.stageWidth - safeZone));
    if (posY < safeZone)
      this.y += Math.abs(posY - safeZone);
    if (posY > Lib.current.stage.stageHeight - safeZone)
      this.y -= Math.abs(posY - (Lib.current.stage.stageHeight - safeZone));
  }

}

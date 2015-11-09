package core;

import openfl.display.Sprite;
import openfl.Lib;

import core.Human;
import core.Player;
import core.Ai;
import core.Rs;

import core.TileSystem;
import core.Constants;

class Island extends Sprite {

  private var _map:TileSystem;

  private var _humans:Array<Human>;
  private var _npcAis:Array<Ai>;
  private var _playerAi:Player;

  public function new() {
    super();

    _map = new TileSystem();
    addChild(_map);
    _map.x = _map.y = 0;

    _humans = [];
    _npcAis = [];
    var nHumans = 1 + Constants.CPU_UNITS;
    for(i in 0...nHumans) {
      var rnd = Math.floor(Math.random() * Rs.humans.length);
      _humans.push(new Human(rnd));
      _map.addHuman(_humans[i]);
      if (i == 0) {
        _playerAi = new Player(_humans[i]);
      } else {
        _npcAis.push(new Ai(_humans[i]));
      }
    }
  }

  public function everyFrame(deltaTime:Float) {
    _playerAi.everyFrame(deltaTime);
    _map.everyFrame(deltaTime);
    for (ai in _npcAis) {
      ai.everyFrame(deltaTime);
    }
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

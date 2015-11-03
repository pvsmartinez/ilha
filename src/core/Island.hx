package core;

import openfl.display.Sprite;
import openfl.Lib;

import core.TileMap;
import core.Human;
import core.Player;

class Island extends Sprite {

  private var _floor:TileMap;
  private var _stuff:TileMap;

  private var _player:Human;
  private var _playerAi:Player;

  public function new() {
    super();

    _floor = new TileMap("floor", floor);
    _floor.draw("info/floorMap.json");

    _player = new Human("townfolk1_f");
    _playerAi = new Player(_player);

    _stuff = new TileMap("trees", trees);
    _stuff.draw("info/treeMap.json");

    addChild(_floor);
    addChild(_player);
    _player.x = 100;
    _player.y = 100;
    addChild(_stuff);

    _floor.x = _stuff.x = 0;
    _floor.y = _stuff.y = 0;

  }

  public function everyFrame(deltaTime:Float) {
    _playerAi.everyFrame([_floor, _stuff], deltaTime);
    _stuff.everyFrame(deltaTime);
    camera();
  }

  private function camera() {
    var safeZone:Int = 100;
    var posX = _player.x + this.x;
    var posY = _player.y + this.y;
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

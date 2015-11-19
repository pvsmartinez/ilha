package core;

import openfl.Lib;

import core.Constants;
import core.Island;

class Camera {

  public static function position(il:Island) {
    var safeZone:Int = 200;
    var posX = il.humans[0].x + il.x;
    var posY = il.humans[0].y + il.y;
    if (posX < safeZone)
      il.x += Math.abs(posX - safeZone);
    if (posX > Lib.current.stage.stageWidth - safeZone)
      il.x -= Math.abs(posX - (Lib.current.stage.stageWidth - safeZone));
    if (posY < safeZone)
      il.y += Math.abs(posY - safeZone);
    if (posY > Lib.current.stage.stageHeight - safeZone)
      il.y -= Math.abs(posY - (Lib.current.stage.stageHeight - safeZone));
    if (il.x > 0)
      il.x = 0;
    if (il.y > 0)
      il.y = 0;
    if (il.x < Lib.current.stage.stageWidth - Constants.TILESIZE * (Constants.MAPWIDTH - 2))
      il.x = Lib.current.stage.stageWidth - Constants.TILESIZE * (Constants.MAPWIDTH - 2);
    if (il.y < Lib.current.stage.stageHeight - Constants.TILESIZE * (Constants.MAPHEIGHT - 1))
      il.y = Lib.current.stage.stageHeight - Constants.TILESIZE * (Constants.MAPHEIGHT - 1);
  }
}

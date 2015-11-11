package core;

import openfl.events.KeyboardEvent;
import openfl.Lib;

class KeyState
{

    private static var _keys:Array<Bool> = [];

    public static var lastKey:Int = -1;

    public static function init()
    {
        for (i in 0...200) _keys.push(false);

        Lib.current.stage.addEventListener(KeyboardEvent.KEY_UP, onKeyUp);
        Lib.current.stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
    }

    private static function onKeyUp(e)
    {
        _keys[e.keyCode] = false;
        lastKey = -1;
    }

    private static function onKeyDown(e)
    {
        _keys[e.keyCode] = true;
        lastKey = e.keyCode;
    }

    public static function isKeyDown(keyCode:Int, ?fragile:Bool = false):Bool
    {
      var flag = _keys[keyCode];
      _keys[keyCode] = (fragile) ? false : _keys[keyCode];
      return flag;
    }

}

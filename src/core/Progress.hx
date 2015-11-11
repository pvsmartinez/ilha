package core;

import openfl.display.Sprite;

import core.Body;

class Progress extends Sprite {

  private var _sizeX:Float;
  private var _sizeY:Float;
  private var _barY:Float = 20;
  private var _prog:Sprite = new Sprite();

  public function new(target:Body) {
    super();
    _sizeX = target.sizeX;
    _sizeY = target.sizeY;
    this.graphics.lineStyle (4, 0xffffff);
		this.graphics.drawRect(target.x - _sizeX/2, target.y - _sizeY - _barY, _sizeX, _barY);
    addChild(_prog);
    _prog.graphics.beginFill(0xffffff);
		_prog.graphics.drawRect(target.x - _sizeX/2, target.y - _sizeY - _barY, _sizeX, _barY);
		_prog.graphics.endFill();
    _prog.scaleX = 0;
  }

  public function draw(percent:Float) {
    if (percent < 0)
      percent = 0;
    if (percent > 1)
      percent = 1;
    _prog.scaleX = percent;

  }

}

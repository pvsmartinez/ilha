package ;

import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;

class Component extends Sprite
{

	public function new(radius:Int)
	{
		super();
    addHitArea(radius);
	}

	public function action(trigger:Bool) {

	}

  private function addHitArea(radius:Int):Void {
    this.graphics.beginFill(0xffffff, 0.5);
		this.graphics.drawCircle(0, 0, radius);
		this.graphics.endFill();
  }

  private function addPng(img:String):Void {
    var bitmapData = Assets.getBitmapData ("assets/"+img+".png");
    var bitmap = new Bitmap (bitmapData);
    this.addChild(bitmap);
    bitmap.x = - bitmap.width / 2;
    bitmap.y = - bitmap.height / 2;
  }

}

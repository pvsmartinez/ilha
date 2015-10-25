package;

import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.Assets;
import openfl.Lib;

class Menu extends Sprite {

  public var title:TextField = new TextField();
  public var play:TextField = new TextField();
  private var titleFormat:TextFormat = new TextFormat(Assets.getFont("fonts/pixelart.ttf").fontName, 100, 0xFFFFFF, true);
  private var playFormat:TextFormat = new TextFormat(Assets.getFont("fonts/pixelart.ttf").fontName, 50, 0xFFFFFF, false);

  public function new () {
    super ();
    drawMenu();
  }

  private function drawMenu() {
    title.width = Lib.current.stage.stageWidth;
    play.width = Lib.current.stage.stageWidth;
    title.selectable = false;
    play.selectable = false;
    title.setTextFormat(titleFormat);
    play.setTextFormat(playFormat);
    title.text = "THE ISLAND";
    play.text = "SPACE TO PLAY";
    this.addChild(title);
    this.addChild(play);
    title.x = Lib.current.stage.stageWidth/2 - title.textWidth/2;
    title.y = Lib.current.stage.stageHeight/2 - title.textHeight/2;
    play.x = Lib.current.stage.stageWidth/2 - play.textWidth/2;
    play.y = title.y + title.textHeight/2 + 50;
  }

}

package ;

enum Kinds {
  bush;
  cherry;
}

class Collectable extends Component
{

  public var carried:Bool = false;

	public function new(kind:Kinds)
	{
    var radius:Int;
    var png:String;
    switch ( kind ) {
      case bush:
        radius = 100;
        png = "bush";
      case cherry:
        radius = 50;
        png = "cherry";
    }
		super(radius);
    super.addPng(png);
	}

  public override function action(trigger:Bool) {
    carried = trigger;
  }

}

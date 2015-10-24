package ;

enum Resources {
  cherry;
  wood;
}

class Resource extends Stuff {

  private var kind:Resources;

	public function new(kind:Resources) {
    var png:String = "resources/" + kind;
    super(png, 35, 35);
    this.kind = kind;
  }

}

package ;

enum Resources {
  cherry;
  wood;
  fish;
}

class Resource extends Stuff {

  private var kind:Resources;

	public function new(kind:String) {
    var png:String = "resources/" + kind;
    super(png, 35, 35);
    this.kind = Type.createEnum(Resources, kind);
  }

}

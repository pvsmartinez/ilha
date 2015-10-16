package ;

class Body extends Component
{

	public function new()
	{
		super(50);
    super.addPng("yoshi");
	}

	public function interact(keys:Array<Bool>,stuff:Array<Component>):Void {
		for (cmp in stuff) {
			if(this.hitTestObject(cmp)) {
				if(keys[0]){
					cmp.action(true);
				} else {
					cmp.action(false);
				}
			}
		}
	}

  public function move(l:Bool, u:Bool, r:Bool, d:Bool):Void {
    if (l) {
      this.x -= 5;
    }
    if (u) {
      this.y -= 5;
    }
    if (r) {
      this.x += 5;
    }
    if (d) {
      this.y += 5;
    }
  }

}

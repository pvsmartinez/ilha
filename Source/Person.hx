package ;

class Person extends Body {

	public var resources:Array<Resource> = [];

	public function new() {
		super('yoshi', 50, 50);
		this.speed = 5;
	}

	override public function move(l:Bool, u:Bool, r:Bool, d:Bool):Void {
		super.move(l, u, r, d);
		moveResources();

	}

	public function addResource(resource:Resource) {
		resources.push(resource);
	}

	public function moveResources():Void {
		for(i in 0 ... resources.length){

			var referenceObject:Body;

			if(i == 0){
				referenceObject = this;
			}
			else{
				referenceObject = resources[i-1];
			}

			if(!resources[i].hitTestObject(referenceObject)) {
				var dx = resources[i].x - this.x;
				var dy = resources[i].y - this.y;
				var l:Bool;
				var u:Bool;
				var r:Bool;
				var d:Bool;

				resources[i].speed = this.speed;

				if(dx > 0){
					l = true;
					r = false;
				}
				else {
					l = false;
					r = true;
				}
				if(dy > 0){
					u = true;
					d = false;
				}
				else {
					u = false;
					d = true;
				}

				resources[i].move(l, u, r, d);

			}
		}
	}

	public function action(stuff:Array<Source>):Resource {
		for (st in stuff) {
			if(this.hitTestObject(st)){
				var resource = st.extract();

				if(resource != null)
					resources.push(resource);
				return resource;
				// return st.extract();
			}
		}
		return null;
	}
}

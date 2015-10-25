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

			// Pedro: Alterei o if para mover segundo distancia, não hitTestObject
			// condicional antigo: (!resources[i].hitTestObject(referenceObject))
			var dx = resources[i].x - referenceObject.x;
			var dy = resources[i].y - referenceObject.y;
			var dist = Math.sqrt((dx*dx)+(dy*dy));
			var followDistance = (resources[i].width + referenceObject.width)/2;
			if( dist > followDistance ) {

				var l:Bool = false;
				var u:Bool = false;
				var r:Bool = false;
				var d:Bool = false;

				resources[i].speed = Math.floor((dist - followDistance) / 4);

				if(dx > 0 + followDistance/2){
					l = true;
				} else if(dx < 0 - followDistance/2) {
					r = true;
				}
				if(dy > 0 + followDistance/2){
					u = true;
				} else if (dy < 0 - followDistance/2) {
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

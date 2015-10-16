#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_FlashRenderContext
#include <lime/graphics/FlashRenderContext.h>
#endif
namespace lime{
namespace graphics{

Void FlashRenderContext_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.FlashRenderContext","new",0xd07498e5,"lime.graphics.FlashRenderContext.new","lime/graphics/FlashRenderContext.hx",62,0x50ca064b)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//FlashRenderContext_obj::~FlashRenderContext_obj() { }

Dynamic FlashRenderContext_obj::__CreateEmpty() { return  new FlashRenderContext_obj; }
hx::ObjectPtr< FlashRenderContext_obj > FlashRenderContext_obj::__new()
{  hx::ObjectPtr< FlashRenderContext_obj > _result_ = new FlashRenderContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlashRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlashRenderContext_obj > _result_ = new FlashRenderContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlashRenderContext_obj::addChild( Dynamic child){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","addChild",0x08980516,"lime.graphics.FlashRenderContext.addChild","lime/graphics/FlashRenderContext.hx",69,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(69)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,addChild,return )

Dynamic FlashRenderContext_obj::addChildAt( Dynamic child,int index){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","addChildAt",0x62742fa9,"lime.graphics.FlashRenderContext.addChildAt","lime/graphics/FlashRenderContext.hx",70,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(70)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,addChildAt,return )

Void FlashRenderContext_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","addEventListener",0x1a729428,"lime.graphics.FlashRenderContext.addEventListener","lime/graphics/FlashRenderContext.hx",71,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlashRenderContext_obj,addEventListener,(void))

bool FlashRenderContext_obj::areInaccessibleObjectsUnderPoint( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","areInaccessibleObjectsUnderPoint",0xd7e55098,"lime.graphics.FlashRenderContext.areInaccessibleObjectsUnderPoint","lime/graphics/FlashRenderContext.hx",72,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(72)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,areInaccessibleObjectsUnderPoint,return )

bool FlashRenderContext_obj::contains( Dynamic child){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","contains",0x75fc8f7a,"lime.graphics.FlashRenderContext.contains","lime/graphics/FlashRenderContext.hx",73,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(73)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,contains,return )

bool FlashRenderContext_obj::dispatchEvent( Dynamic event){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","dispatchEvent",0xb5dd47c5,"lime.graphics.FlashRenderContext.dispatchEvent","lime/graphics/FlashRenderContext.hx",74,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(74)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,dispatchEvent,return )

Dynamic FlashRenderContext_obj::getBounds( Dynamic targetCoordinateSpace){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getBounds",0xea0189f0,"lime.graphics.FlashRenderContext.getBounds","lime/graphics/FlashRenderContext.hx",75,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(75)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getBounds,return )

Dynamic FlashRenderContext_obj::getChildAt( int index){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getChildAt",0x4a4b89d4,"lime.graphics.FlashRenderContext.getChildAt","lime/graphics/FlashRenderContext.hx",76,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(76)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getChildAt,return )

Dynamic FlashRenderContext_obj::getChildByName( ::String name){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getChildByName",0x3d6be523,"lime.graphics.FlashRenderContext.getChildByName","lime/graphics/FlashRenderContext.hx",77,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(77)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getChildByName,return )

int FlashRenderContext_obj::getChildIndex( Dynamic child){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getChildIndex",0xa87ae8d1,"lime.graphics.FlashRenderContext.getChildIndex","lime/graphics/FlashRenderContext.hx",78,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(78)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getChildIndex,return )

cpp::ArrayBase FlashRenderContext_obj::getObjectsUnderPoint( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getObjectsUnderPoint",0x2d3e6271,"lime.graphics.FlashRenderContext.getObjectsUnderPoint","lime/graphics/FlashRenderContext.hx",79,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(79)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getObjectsUnderPoint,return )

Dynamic FlashRenderContext_obj::getRect( Dynamic targetCoordinateSpace){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","getRect",0x3699ebdf,"lime.graphics.FlashRenderContext.getRect","lime/graphics/FlashRenderContext.hx",80,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(80)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,getRect,return )

Dynamic FlashRenderContext_obj::globalToLocal( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","globalToLocal",0x5b26cf92,"lime.graphics.FlashRenderContext.globalToLocal","lime/graphics/FlashRenderContext.hx",81,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(81)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,globalToLocal,return )

Dynamic FlashRenderContext_obj::globalToLocal3D( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","globalToLocal3D",0x8e2784c3,"lime.graphics.FlashRenderContext.globalToLocal3D","lime/graphics/FlashRenderContext.hx",82,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(82)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,globalToLocal3D,return )

bool FlashRenderContext_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","hasEventListener",0x35f8b74f,"lime.graphics.FlashRenderContext.hasEventListener","lime/graphics/FlashRenderContext.hx",83,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(83)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,hasEventListener,return )

bool FlashRenderContext_obj::hitTestObject( Dynamic obj){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","hitTestObject",0xc6dcd5a9,"lime.graphics.FlashRenderContext.hitTestObject","lime/graphics/FlashRenderContext.hx",84,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(84)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,hitTestObject,return )

bool FlashRenderContext_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","hitTestPoint",0x245828a6,"lime.graphics.FlashRenderContext.hitTestPoint","lime/graphics/FlashRenderContext.hx",85,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(85)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlashRenderContext_obj,hitTestPoint,return )

Dynamic FlashRenderContext_obj::local3DToGlobal( Dynamic point3d){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","local3DToGlobal",0xa2e3343f,"lime.graphics.FlashRenderContext.local3DToGlobal","lime/graphics/FlashRenderContext.hx",86,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point3d,"point3d")
	HX_STACK_LINE(86)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,local3DToGlobal,return )

Dynamic FlashRenderContext_obj::localToGlobal( Dynamic point){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","localToGlobal",0x3763c28e,"lime.graphics.FlashRenderContext.localToGlobal","lime/graphics/FlashRenderContext.hx",87,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(87)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,localToGlobal,return )

Dynamic FlashRenderContext_obj::removeChild( Dynamic child){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","removeChild",0x6581dc3d,"lime.graphics.FlashRenderContext.removeChild","lime/graphics/FlashRenderContext.hx",88,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(88)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,removeChild,return )

Dynamic FlashRenderContext_obj::removeChildAt( int index){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","removeChildAt",0x2edf5e90,"lime.graphics.FlashRenderContext.removeChildAt","lime/graphics/FlashRenderContext.hx",89,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(89)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,removeChildAt,return )

Void FlashRenderContext_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","removeChildren",0xd4b8813e,"lime.graphics.FlashRenderContext.removeChildren","lime/graphics/FlashRenderContext.hx",90,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,removeChildren,(void))

Void FlashRenderContext_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","removeEventListener",0xea526a4f,"lime.graphics.FlashRenderContext.removeEventListener","lime/graphics/FlashRenderContext.hx",91,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlashRenderContext_obj,removeEventListener,(void))

bool FlashRenderContext_obj::requestSoftKeyboard( ){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","requestSoftKeyboard",0x6986d825,"lime.graphics.FlashRenderContext.requestSoftKeyboard","lime/graphics/FlashRenderContext.hx",92,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlashRenderContext_obj,requestSoftKeyboard,return )

Void FlashRenderContext_obj::setChildIndex( Dynamic child,int index){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","setChildIndex",0xed80cadd,"lime.graphics.FlashRenderContext.setChildIndex","lime/graphics/FlashRenderContext.hx",93,0x50ca064b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,setChildIndex,(void))

Void FlashRenderContext_obj::startDrag( hx::Null< bool >  __o_lockCenter,Dynamic bounds){
bool lockCenter = __o_lockCenter.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","startDrag",0x02f11fbb,"lime.graphics.FlashRenderContext.startDrag","lime/graphics/FlashRenderContext.hx",94,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lockCenter,"lockCenter")
	HX_STACK_ARG(bounds,"bounds")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,startDrag,(void))

Void FlashRenderContext_obj::startTouchDrag( int touchPointID,hx::Null< bool >  __o_lockCenter,Dynamic bounds){
bool lockCenter = __o_lockCenter.Default(false);
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","startTouchDrag",0xc10fb62c,"lime.graphics.FlashRenderContext.startTouchDrag","lime/graphics/FlashRenderContext.hx",95,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(touchPointID,"touchPointID")
	HX_STACK_ARG(lockCenter,"lockCenter")
	HX_STACK_ARG(bounds,"bounds")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlashRenderContext_obj,startTouchDrag,(void))

Void FlashRenderContext_obj::stopAllMovieClips( ){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","stopAllMovieClips",0x64a12837,"lime.graphics.FlashRenderContext.stopAllMovieClips","lime/graphics/FlashRenderContext.hx",96,0x50ca064b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlashRenderContext_obj,stopAllMovieClips,(void))

Void FlashRenderContext_obj::stopDrag( ){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","stopDrag",0xdeaba671,"lime.graphics.FlashRenderContext.stopDrag","lime/graphics/FlashRenderContext.hx",97,0x50ca064b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlashRenderContext_obj,stopDrag,(void))

Void FlashRenderContext_obj::stopTouchDrag( int touchPointID){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","stopTouchDrag",0xba631bb6,"lime.graphics.FlashRenderContext.stopTouchDrag","lime/graphics/FlashRenderContext.hx",98,0x50ca064b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touchPointID,"touchPointID")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,stopTouchDrag,(void))

Void FlashRenderContext_obj::swapChildren( Dynamic child1,Dynamic child2){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","swapChildren",0x2089c9cd,"lime.graphics.FlashRenderContext.swapChildren","lime/graphics/FlashRenderContext.hx",99,0x50ca064b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,swapChildren,(void))

Void FlashRenderContext_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("lime.graphics.FlashRenderContext","swapChildrenAt",0xade9d020,"lime.graphics.FlashRenderContext.swapChildrenAt","lime/graphics/FlashRenderContext.hx",100,0x50ca064b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlashRenderContext_obj,swapChildrenAt,(void))

::String FlashRenderContext_obj::toString( ){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","toString",0x81f00607,"lime.graphics.FlashRenderContext.toString","lime/graphics/FlashRenderContext.hx",101,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlashRenderContext_obj,toString,return )

bool FlashRenderContext_obj::willTrigger( ::String type){
	HX_STACK_FRAME("lime.graphics.FlashRenderContext","willTrigger",0xf9d449cb,"lime.graphics.FlashRenderContext.willTrigger","lime/graphics/FlashRenderContext.hx",102,0x50ca064b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(102)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlashRenderContext_obj,willTrigger,return )


FlashRenderContext_obj::FlashRenderContext_obj()
{
}

void FlashRenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlashRenderContext);
	HX_MARK_MEMBER_NAME(accessibilityImplementation,"accessibilityImplementation");
	HX_MARK_MEMBER_NAME(accessibilityProperties,"accessibilityProperties");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(blendShader,"blendShader");
	HX_MARK_MEMBER_NAME(buttonMode,"buttonMode");
	HX_MARK_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_MARK_MEMBER_NAME(contextMenu,"contextMenu");
	HX_MARK_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_MARK_MEMBER_NAME(dropTarget,"dropTarget");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(focusRect,"focusRect");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(hitArea,"hitArea");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(rotationX,"rotationX");
	HX_MARK_MEMBER_NAME(rotationY,"rotationY");
	HX_MARK_MEMBER_NAME(rotationZ,"rotationZ");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleZ,"scaleZ");
	HX_MARK_MEMBER_NAME(scrollRect,"scrollRect");
	HX_MARK_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_MARK_MEMBER_NAME(soundTransform,"soundTransform");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(tabEnabled,"tabEnabled");
	HX_MARK_MEMBER_NAME(tabIndex,"tabIndex");
	HX_MARK_MEMBER_NAME(textSnapshot,"textSnapshot");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_END_CLASS();
}

void FlashRenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accessibilityImplementation,"accessibilityImplementation");
	HX_VISIT_MEMBER_NAME(accessibilityProperties,"accessibilityProperties");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(blendShader,"blendShader");
	HX_VISIT_MEMBER_NAME(buttonMode,"buttonMode");
	HX_VISIT_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(contextMenu,"contextMenu");
	HX_VISIT_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_VISIT_MEMBER_NAME(dropTarget,"dropTarget");
	HX_VISIT_MEMBER_NAME(filters,"filters");
	HX_VISIT_MEMBER_NAME(focusRect,"focusRect");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(hitArea,"hitArea");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(rotationX,"rotationX");
	HX_VISIT_MEMBER_NAME(rotationY,"rotationY");
	HX_VISIT_MEMBER_NAME(rotationZ,"rotationZ");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleZ,"scaleZ");
	HX_VISIT_MEMBER_NAME(scrollRect,"scrollRect");
	HX_VISIT_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_VISIT_MEMBER_NAME(soundTransform,"soundTransform");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(tabEnabled,"tabEnabled");
	HX_VISIT_MEMBER_NAME(tabIndex,"tabIndex");
	HX_VISIT_MEMBER_NAME(textSnapshot,"textSnapshot");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
}

Dynamic FlashRenderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return mouseY; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { return scaleZ; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return filters; }
		if (HX_FIELD_EQ(inName,"hitArea") ) { return hitArea; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		if (HX_FIELD_EQ(inName,"tabIndex") ) { return tabIndex; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"focusRect") ) { return focusRect; }
		if (HX_FIELD_EQ(inName,"rotationX") ) { return rotationX; }
		if (HX_FIELD_EQ(inName,"rotationY") ) { return rotationY; }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { return rotationZ; }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { return buttonMode; }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { return dropTarget; }
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return scale9Grid; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return scrollRect; }
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { return tabEnabled; }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blendShader") ) { return blendShader; }
		if (HX_FIELD_EQ(inName,"contextMenu") ) { return contextMenu; }
		if (HX_FIELD_EQ(inName,"numChildren") ) { return numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return mouseEnabled; }
		if (HX_FIELD_EQ(inName,"textSnapshot") ) { return textSnapshot; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"stopTouchDrag") ) { return stopTouchDrag_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return soundTransform; }
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"startTouchDrag") ) { return startTouchDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalToLocal3D") ) { return globalToLocal3D_dyn(); }
		if (HX_FIELD_EQ(inName,"local3DToGlobal") ) { return local3DToGlobal_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return opaqueBackground; }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { return needsSoftKeyboard; }
		if (HX_FIELD_EQ(inName,"stopAllMovieClips") ) { return stopAllMovieClips_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return doubleClickEnabled; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return requestSoftKeyboard_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accessibilityProperties") ) { return accessibilityProperties; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"accessibilityImplementation") ) { return accessibilityImplementation; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { return softKeyboardInputAreaOfInterest; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlashRenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { scaleZ=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitArea") ) { hitArea=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabIndex") ) { tabIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusRect") ) { focusRect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationX") ) { rotationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationY") ) { rotationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { rotationZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { buttonMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { dropTarget=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { scrollRect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { tabEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blendShader") ) { blendShader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contextMenu") ) { contextMenu=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { mouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textSnapshot") ) { textSnapshot=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { soundTransform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { needsSoftKeyboard=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accessibilityProperties") ) { accessibilityProperties=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"accessibilityImplementation") ) { accessibilityImplementation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { softKeyboardInputAreaOfInterest=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlashRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("accessibilityImplementation","\x60","\xc1","\x4a","\xed"));
	outFields->push(HX_HCSTRING("accessibilityProperties","\x21","\x3c","\x9d","\xfa"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("blendShader","\x56","\xae","\x92","\xd1"));
	outFields->push(HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("contextMenu","\x2e","\x2b","\x5d","\x25"));
	outFields->push(HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"));
	outFields->push(HX_HCSTRING("dropTarget","\xe0","\x6c","\x5c","\xc6"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("focusRect","\x1c","\xa5","\x32","\x23"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5"));
	outFields->push(HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c"));
	outFields->push(HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c"));
	outFields->push(HX_HCSTRING("rotationZ","\x5c","\x59","\xef","\x6c"));
	outFields->push(HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleZ","\x90","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("softKeyboardInputAreaOfInterest","\x47","\x41","\x03","\xf6"));
	outFields->push(HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("tabEnabled","\xac","\xf6","\x08","\x40"));
	outFields->push(HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c"));
	outFields->push(HX_HCSTRING("textSnapshot","\x11","\x96","\x2f","\x56"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,accessibilityImplementation),HX_HCSTRING("accessibilityImplementation","\x60","\xc1","\x4a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,accessibilityProperties),HX_HCSTRING("accessibilityProperties","\x21","\x3c","\x9d","\xfa")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,blendShader),HX_HCSTRING("blendShader","\x56","\xae","\x92","\xd1")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,buttonMode),HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,cacheAsBitmap),HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,contextMenu),HX_HCSTRING("contextMenu","\x2e","\x2b","\x5d","\x25")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,doubleClickEnabled),HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,dropTarget),HX_HCSTRING("dropTarget","\xe0","\x6c","\x5c","\xc6")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlashRenderContext_obj,filters),HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,focusRect),HX_HCSTRING("focusRect","\x1c","\xa5","\x32","\x23")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,hitArea),HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,loaderInfo),HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,mask),HX_HCSTRING("mask","\xec","\x40","\x56","\x48")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,mouseChildren),HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,mouseEnabled),HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsString,(int)offsetof(FlashRenderContext_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,needsSoftKeyboard),HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9")},
	{hx::fsInt,(int)offsetof(FlashRenderContext_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,opaqueBackground),HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,rotationX),HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,rotationY),HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,rotationZ),HX_HCSTRING("rotationZ","\x5c","\x59","\xef","\x6c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,scale9Grid),HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,scaleX),HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,scaleY),HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,scaleZ),HX_HCSTRING("scaleZ","\x90","\xea","\x25","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,scrollRect),HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,softKeyboardInputAreaOfInterest),HX_HCSTRING("softKeyboardInputAreaOfInterest","\x47","\x41","\x03","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,soundTransform),HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,tabChildren),HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,tabEnabled),HX_HCSTRING("tabEnabled","\xac","\xf6","\x08","\x40")},
	{hx::fsInt,(int)offsetof(FlashRenderContext_obj,tabIndex),HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,textSnapshot),HX_HCSTRING("textSnapshot","\x11","\x96","\x2f","\x56")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlashRenderContext_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,useHandCursor),HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89")},
	{hx::fsBool,(int)offsetof(FlashRenderContext_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlashRenderContext_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("accessibilityImplementation","\x60","\xc1","\x4a","\xed"),
	HX_HCSTRING("accessibilityProperties","\x21","\x3c","\x9d","\xfa"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("blendShader","\x56","\xae","\x92","\xd1"),
	HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"),
	HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"),
	HX_HCSTRING("contextMenu","\x2e","\x2b","\x5d","\x25"),
	HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"),
	HX_HCSTRING("dropTarget","\xe0","\x6c","\x5c","\xc6"),
	HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"),
	HX_HCSTRING("focusRect","\x1c","\xa5","\x32","\x23"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5"),
	HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"),
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"),
	HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9"),
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c"),
	HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c"),
	HX_HCSTRING("rotationZ","\x5c","\x59","\xef","\x6c"),
	HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"),
	HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"),
	HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"),
	HX_HCSTRING("scaleZ","\x90","\xea","\x25","\x3c"),
	HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"),
	HX_HCSTRING("softKeyboardInputAreaOfInterest","\x47","\x41","\x03","\xf6"),
	HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"),
	HX_HCSTRING("tabEnabled","\xac","\xf6","\x08","\x40"),
	HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c"),
	HX_HCSTRING("textSnapshot","\x11","\x96","\x2f","\x56"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("globalToLocal3D","\xbe","\x88","\xf9","\x6e"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("hitTestObject","\xe4","\x54","\x64","\xd7"),
	HX_HCSTRING("hitTestPoint","\xcb","\xa9","\x21","\xe4"),
	HX_HCSTRING("local3DToGlobal","\x3a","\x38","\xb5","\x83"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("requestSoftKeyboard","\xa0","\xf5","\xa9","\xd4"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("startDrag","\x76","\xa5","\x63","\xfb"),
	HX_HCSTRING("startTouchDrag","\x91","\x8a","\x17","\x27"),
	HX_HCSTRING("stopAllMovieClips","\xf2","\x60","\xf8","\xa0"),
	HX_HCSTRING("stopDrag","\x16","\x71","\x2a","\x95"),
	HX_HCSTRING("stopTouchDrag","\xf1","\x9a","\xea","\xca"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("willTrigger","\x46","\xf4","\x3f","\xd8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashRenderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class FlashRenderContext_obj::__mClass;

void FlashRenderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.FlashRenderContext","\x73","\x42","\xdb","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlashRenderContext_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics

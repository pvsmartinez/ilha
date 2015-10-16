#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
namespace lime{
namespace graphics{

Void CanvasRenderContext_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.CanvasRenderContext","new",0xa1374169,"lime.graphics.CanvasRenderContext.new","lime/graphics/CanvasRenderContext.hx",32,0x7702fe07)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CanvasRenderContext_obj::~CanvasRenderContext_obj() { }

Dynamic CanvasRenderContext_obj::__CreateEmpty() { return  new CanvasRenderContext_obj; }
hx::ObjectPtr< CanvasRenderContext_obj > CanvasRenderContext_obj::__new()
{  hx::ObjectPtr< CanvasRenderContext_obj > _result_ = new CanvasRenderContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic CanvasRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasRenderContext_obj > _result_ = new CanvasRenderContext_obj();
	_result_->__construct();
	return _result_;}

Void CanvasRenderContext_obj::arc( Float x,Float y,Float radius,Float startAngle,Float endAngle,bool anticlockwise){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","arc",0xa12d6f5b,"lime.graphics.CanvasRenderContext.arc","lime/graphics/CanvasRenderContext.hx",39,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(startAngle,"startAngle")
		HX_STACK_ARG(endAngle,"endAngle")
		HX_STACK_ARG(anticlockwise,"anticlockwise")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,arc,(void))

Void CanvasRenderContext_obj::arcTo( Float x1,Float y1,Float x2,Float y2,Float radius){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","arcTo",0x5aec85b6,"lime.graphics.CanvasRenderContext.arcTo","lime/graphics/CanvasRenderContext.hx",40,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(radius,"radius")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CanvasRenderContext_obj,arcTo,(void))

Void CanvasRenderContext_obj::beginPath( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","beginPath",0xeffb2237,"lime.graphics.CanvasRenderContext.beginPath","lime/graphics/CanvasRenderContext.hx",41,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,beginPath,(void))

Void CanvasRenderContext_obj::bezierCurveTo( Float cp1x,Float cp1y,Float cp2x,Float cp2y,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","bezierCurveTo",0xaa1bcff4,"lime.graphics.CanvasRenderContext.bezierCurveTo","lime/graphics/CanvasRenderContext.hx",42,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cp1x,"cp1x")
		HX_STACK_ARG(cp1y,"cp1y")
		HX_STACK_ARG(cp2x,"cp2x")
		HX_STACK_ARG(cp2y,"cp2y")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,bezierCurveTo,(void))

Void CanvasRenderContext_obj::clearRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","clearRect",0x1c37931a,"lime.graphics.CanvasRenderContext.clearRect","lime/graphics/CanvasRenderContext.hx",43,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,clearRect,(void))

Void CanvasRenderContext_obj::clearShadow( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","clearShadow",0x66c6f756,"lime.graphics.CanvasRenderContext.clearShadow","lime/graphics/CanvasRenderContext.hx",44,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,clearShadow,(void))

Void CanvasRenderContext_obj::clip( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","clip",0x67e1e5a7,"lime.graphics.CanvasRenderContext.clip","lime/graphics/CanvasRenderContext.hx",45,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,clip,(void))

Void CanvasRenderContext_obj::closePath( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","closePath",0x70efc346,"lime.graphics.CanvasRenderContext.closePath","lime/graphics/CanvasRenderContext.hx",46,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,closePath,(void))

Dynamic CanvasRenderContext_obj::createDynamicImageData( Float sw,Float sh){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","createDynamicImageData",0x9c04b759,"lime.graphics.CanvasRenderContext.createDynamicImageData","lime/graphics/CanvasRenderContext.hx",48,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sw,"sw")
	HX_STACK_ARG(sh,"sh")
	HX_STACK_LINE(48)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,createDynamicImageData,return )

Dynamic CanvasRenderContext_obj::createLinearGradient( Float x0,Float y0,Float x1,Float y1){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","createLinearGradient",0x026ac5e8,"lime.graphics.CanvasRenderContext.createLinearGradient","lime/graphics/CanvasRenderContext.hx",49,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_LINE(49)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,createLinearGradient,return )

Dynamic CanvasRenderContext_obj::createPattern( Dynamic image,::String repetitionType){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","createPattern",0x698654fd,"lime.graphics.CanvasRenderContext.createPattern","lime/graphics/CanvasRenderContext.hx",51,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(repetitionType,"repetitionType")
	HX_STACK_LINE(51)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,createPattern,return )

Dynamic CanvasRenderContext_obj::createRadialGradient( Float x0,Float y0,Float r0,Float x1,Float y1,Float r1){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","createRadialGradient",0xe4cdbce2,"lime.graphics.CanvasRenderContext.createRadialGradient","lime/graphics/CanvasRenderContext.hx",52,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_LINE(52)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,createRadialGradient,return )

Void CanvasRenderContext_obj::drawImage( Dynamic element,Float sx,Float sy,Dynamic sw,Dynamic sh,Dynamic dx,Dynamic dy,Dynamic dw,Dynamic dh){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","drawImage",0xe243b280,"lime.graphics.CanvasRenderContext.drawImage","lime/graphics/CanvasRenderContext.hx",61,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(element,"element")
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sw,"sw")
		HX_STACK_ARG(sh,"sh")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dw,"dw")
		HX_STACK_ARG(dh,"dh")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(CanvasRenderContext_obj,drawImage,(void))

Void CanvasRenderContext_obj::drawImageFromRect( Dynamic image,Dynamic sx,Dynamic sy,Dynamic sw,Dynamic sh,Dynamic dx,Dynamic dy,Dynamic dw,Dynamic dh,::String compositeOperation){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","drawImageFromRect",0x341f0a4e,"lime.graphics.CanvasRenderContext.drawImageFromRect","lime/graphics/CanvasRenderContext.hx",62,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sw,"sw")
		HX_STACK_ARG(sh,"sh")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dw,"dw")
		HX_STACK_ARG(dh,"dh")
		HX_STACK_ARG(compositeOperation,"compositeOperation")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(CanvasRenderContext_obj,drawImageFromRect,(void))

Void CanvasRenderContext_obj::fill( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","fill",0x69db455a,"lime.graphics.CanvasRenderContext.fill","lime/graphics/CanvasRenderContext.hx",63,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,fill,(void))

Void CanvasRenderContext_obj::fillRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","fillRect",0xa1f2739e,"lime.graphics.CanvasRenderContext.fillRect","lime/graphics/CanvasRenderContext.hx",64,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,fillRect,(void))

Void CanvasRenderContext_obj::fillText( ::String text,Float x,Float y,Dynamic maxWidth){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","fillText",0xa344f327,"lime.graphics.CanvasRenderContext.fillText","lime/graphics/CanvasRenderContext.hx",65,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(maxWidth,"maxWidth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,fillText,(void))

Dynamic CanvasRenderContext_obj::getDynamicImageData( Float sx,Float sy,Float sw,Float sh){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","getDynamicImageData",0x1668ff65,"lime.graphics.CanvasRenderContext.getDynamicImageData","lime/graphics/CanvasRenderContext.hx",66,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sx,"sx")
	HX_STACK_ARG(sy,"sy")
	HX_STACK_ARG(sw,"sw")
	HX_STACK_ARG(sh,"sh")
	HX_STACK_LINE(66)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,getDynamicImageData,return )

Dynamic CanvasRenderContext_obj::getDynamicImageDataHD( Float sx,Float sy,Float sw,Float sh){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","getDynamicImageDataHD",0x4233a1a1,"lime.graphics.CanvasRenderContext.getDynamicImageDataHD","lime/graphics/CanvasRenderContext.hx",67,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sx,"sx")
	HX_STACK_ARG(sy,"sy")
	HX_STACK_ARG(sw,"sw")
	HX_STACK_ARG(sh,"sh")
	HX_STACK_LINE(67)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,getDynamicImageDataHD,return )

Array< Float > CanvasRenderContext_obj::getLineDash( ){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","getLineDash",0x5b398825,"lime.graphics.CanvasRenderContext.getLineDash","lime/graphics/CanvasRenderContext.hx",68,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,getLineDash,return )

bool CanvasRenderContext_obj::isPointInPath( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","isPointInPath",0xe640cf19,"lime.graphics.CanvasRenderContext.isPointInPath","lime/graphics/CanvasRenderContext.hx",69,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(69)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,isPointInPath,return )

Void CanvasRenderContext_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","lineTo",0x72ac6126,"lime.graphics.CanvasRenderContext.lineTo","lime/graphics/CanvasRenderContext.hx",70,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,lineTo,(void))

Dynamic CanvasRenderContext_obj::measureText( ::String text){
	HX_STACK_FRAME("lime.graphics.CanvasRenderContext","measureText",0x063a1d34,"lime.graphics.CanvasRenderContext.measureText","lime/graphics/CanvasRenderContext.hx",71,0x7702fe07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(71)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,measureText,return )

Void CanvasRenderContext_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","moveTo",0x52b8ed83,"lime.graphics.CanvasRenderContext.moveTo","lime/graphics/CanvasRenderContext.hx",72,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,moveTo,(void))

Void CanvasRenderContext_obj::putDynamicImageData( Dynamic dynamicImageData,Float dx,Float dy,Float dirtyX,Float dirtyY,Float dirtyWidth,Float dirtyHeight){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","putDynamicImageData",0x6a1da39e,"lime.graphics.CanvasRenderContext.putDynamicImageData","lime/graphics/CanvasRenderContext.hx",74,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dynamicImageData,"dynamicImageData")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dirtyX,"dirtyX")
		HX_STACK_ARG(dirtyY,"dirtyY")
		HX_STACK_ARG(dirtyWidth,"dirtyWidth")
		HX_STACK_ARG(dirtyHeight,"dirtyHeight")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(CanvasRenderContext_obj,putDynamicImageData,(void))

Void CanvasRenderContext_obj::putDynamicImageDataHD( Dynamic dynamicImageData,Float dx,Float dy,Float dirtyX,Float dirtyY,Float dirtyWidth,Float dirtyHeight){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","putDynamicImageDataHD",0x6784861a,"lime.graphics.CanvasRenderContext.putDynamicImageDataHD","lime/graphics/CanvasRenderContext.hx",76,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dynamicImageData,"dynamicImageData")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dirtyX,"dirtyX")
		HX_STACK_ARG(dirtyY,"dirtyY")
		HX_STACK_ARG(dirtyWidth,"dirtyWidth")
		HX_STACK_ARG(dirtyHeight,"dirtyHeight")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(CanvasRenderContext_obj,putDynamicImageDataHD,(void))

Void CanvasRenderContext_obj::quadraticCurveTo( Float cpx,Float cpy,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","quadraticCurveTo",0x29e52569,"lime.graphics.CanvasRenderContext.quadraticCurveTo","lime/graphics/CanvasRenderContext.hx",77,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cpx,"cpx")
		HX_STACK_ARG(cpy,"cpy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,quadraticCurveTo,(void))

Void CanvasRenderContext_obj::rect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","rect",0x71c6c3fb,"lime.graphics.CanvasRenderContext.rect","lime/graphics/CanvasRenderContext.hx",78,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,rect,(void))

Void CanvasRenderContext_obj::restore( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","restore",0x2f3b90d7,"lime.graphics.CanvasRenderContext.restore","lime/graphics/CanvasRenderContext.hx",79,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,restore,(void))

Void CanvasRenderContext_obj::rotate( Float angle){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","rotate",0x512c60f2,"lime.graphics.CanvasRenderContext.rotate","lime/graphics/CanvasRenderContext.hx",80,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,rotate,(void))

Void CanvasRenderContext_obj::save( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","save",0x726d0214,"lime.graphics.CanvasRenderContext.save","lime/graphics/CanvasRenderContext.hx",81,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,save,(void))

Void CanvasRenderContext_obj::scale( Float sx,Float sy){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","scale",0xae3753d3,"lime.graphics.CanvasRenderContext.scale","lime/graphics/CanvasRenderContext.hx",82,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,scale,(void))

Void CanvasRenderContext_obj::setAlpha( Float alpha){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setAlpha",0x65043eb3,"lime.graphics.CanvasRenderContext.setAlpha","lime/graphics/CanvasRenderContext.hx",83,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alpha,"alpha")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setAlpha,(void))

Void CanvasRenderContext_obj::setCompositeOperation( ::String compositeOperation){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setCompositeOperation",0x588252ab,"lime.graphics.CanvasRenderContext.setCompositeOperation","lime/graphics/CanvasRenderContext.hx",84,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(compositeOperation,"compositeOperation")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setCompositeOperation,(void))

Void CanvasRenderContext_obj::setFillColor( Float c,Float m,Float y,Float k,Float a){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setFillColor",0x8997fdb5,"lime.graphics.CanvasRenderContext.setFillColor","lime/graphics/CanvasRenderContext.hx",88,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(a,"a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CanvasRenderContext_obj,setFillColor,(void))

Void CanvasRenderContext_obj::setLineCap( ::String cap){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setLineCap",0x4b125b13,"lime.graphics.CanvasRenderContext.setLineCap","lime/graphics/CanvasRenderContext.hx",89,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cap,"cap")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setLineCap,(void))

Void CanvasRenderContext_obj::setLineDash( Array< Float > dash){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setLineDash",0x65a68f31,"lime.graphics.CanvasRenderContext.setLineDash","lime/graphics/CanvasRenderContext.hx",90,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dash,"dash")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setLineDash,(void))

Void CanvasRenderContext_obj::setLineJoin( ::String join){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setLineJoin",0x69a86dc9,"lime.graphics.CanvasRenderContext.setLineJoin","lime/graphics/CanvasRenderContext.hx",91,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(join,"join")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setLineJoin,(void))

Void CanvasRenderContext_obj::setLineWidth( Float width){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setLineWidth",0x81f21f47,"lime.graphics.CanvasRenderContext.setLineWidth","lime/graphics/CanvasRenderContext.hx",92,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setLineWidth,(void))

Void CanvasRenderContext_obj::setMiterLimit( Float limit){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setMiterLimit",0x65af1181,"lime.graphics.CanvasRenderContext.setMiterLimit","lime/graphics/CanvasRenderContext.hx",93,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(limit,"limit")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CanvasRenderContext_obj,setMiterLimit,(void))

Void CanvasRenderContext_obj::setShadow( Float width,Float height,Float blur,Float c,Float m,Float y,Float k,Float a){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setShadow",0xd9979aeb,"lime.graphics.CanvasRenderContext.setShadow","lime/graphics/CanvasRenderContext.hx",97,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(blur,"blur")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(a,"a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(CanvasRenderContext_obj,setShadow,(void))

Void CanvasRenderContext_obj::setStrokeColor( Float c,Float m,Float y,Float k,Float a){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setStrokeColor",0x6deff7a0,"lime.graphics.CanvasRenderContext.setStrokeColor","lime/graphics/CanvasRenderContext.hx",101,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(a,"a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CanvasRenderContext_obj,setStrokeColor,(void))

Void CanvasRenderContext_obj::setTransform( Float m11,Float m12,Float m21,Float m22,Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","setTransform",0xb6279341,"lime.graphics.CanvasRenderContext.setTransform","lime/graphics/CanvasRenderContext.hx",102,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m11,"m11")
		HX_STACK_ARG(m12,"m12")
		HX_STACK_ARG(m21,"m21")
		HX_STACK_ARG(m22,"m22")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,setTransform,(void))

Void CanvasRenderContext_obj::stroke( ){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","stroke",0x9740ce4f,"lime.graphics.CanvasRenderContext.stroke","lime/graphics/CanvasRenderContext.hx",103,0x7702fe07)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CanvasRenderContext_obj,stroke,(void))

Void CanvasRenderContext_obj::strokeRect( Float x,Float y,Float width,Float height,Dynamic lineWidth){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","strokeRect",0x75e81b13,"lime.graphics.CanvasRenderContext.strokeRect","lime/graphics/CanvasRenderContext.hx",104,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(lineWidth,"lineWidth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CanvasRenderContext_obj,strokeRect,(void))

Void CanvasRenderContext_obj::strokeText( ::String text,Float x,Float y,Dynamic maxWidth){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","strokeText",0x773a9a9c,"lime.graphics.CanvasRenderContext.strokeText","lime/graphics/CanvasRenderContext.hx",105,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(maxWidth,"maxWidth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CanvasRenderContext_obj,strokeText,(void))

Void CanvasRenderContext_obj::transform( Float m11,Float m12,Float m21,Float m22,Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","transform",0xa2628b35,"lime.graphics.CanvasRenderContext.transform","lime/graphics/CanvasRenderContext.hx",106,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m11,"m11")
		HX_STACK_ARG(m12,"m12")
		HX_STACK_ARG(m21,"m21")
		HX_STACK_ARG(m22,"m22")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(CanvasRenderContext_obj,transform,(void))

Void CanvasRenderContext_obj::translate( Float tx,Float ty){
{
		HX_STACK_FRAME("lime.graphics.CanvasRenderContext","translate",0xa64f3517,"lime.graphics.CanvasRenderContext.translate","lime/graphics/CanvasRenderContext.hx",107,0x7702fe07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CanvasRenderContext_obj,translate,(void))


CanvasRenderContext_obj::CanvasRenderContext_obj()
{
}

void CanvasRenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderContext);
	HX_MARK_MEMBER_NAME(backingStorePixelRatio,"backingStorePixelRatio");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(fillStyle,"fillStyle");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(globalAlpha,"globalAlpha");
	HX_MARK_MEMBER_NAME(globalCompositeOperation,"globalCompositeOperation");
	HX_MARK_MEMBER_NAME(imageSmoothingEnabled,"imageSmoothingEnabled");
	HX_MARK_MEMBER_NAME(lineCap,"lineCap");
	HX_MARK_MEMBER_NAME(lineDash,"lineDash");
	HX_MARK_MEMBER_NAME(lineDashOffset,"lineDashOffset");
	HX_MARK_MEMBER_NAME(lineJoin,"lineJoin");
	HX_MARK_MEMBER_NAME(lineWidth,"lineWidth");
	HX_MARK_MEMBER_NAME(miterLimit,"miterLimit");
	HX_MARK_MEMBER_NAME(shadowBlur,"shadowBlur");
	HX_MARK_MEMBER_NAME(shadowColor,"shadowColor");
	HX_MARK_MEMBER_NAME(shadowOffsetX,"shadowOffsetX");
	HX_MARK_MEMBER_NAME(shadowOffsetY,"shadowOffsetY");
	HX_MARK_MEMBER_NAME(strokeStyle,"strokeStyle");
	HX_MARK_MEMBER_NAME(textAlign,"textAlign");
	HX_MARK_MEMBER_NAME(textBaseline,"textBaseline");
	HX_MARK_END_CLASS();
}

void CanvasRenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backingStorePixelRatio,"backingStorePixelRatio");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(fillStyle,"fillStyle");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(globalAlpha,"globalAlpha");
	HX_VISIT_MEMBER_NAME(globalCompositeOperation,"globalCompositeOperation");
	HX_VISIT_MEMBER_NAME(imageSmoothingEnabled,"imageSmoothingEnabled");
	HX_VISIT_MEMBER_NAME(lineCap,"lineCap");
	HX_VISIT_MEMBER_NAME(lineDash,"lineDash");
	HX_VISIT_MEMBER_NAME(lineDashOffset,"lineDashOffset");
	HX_VISIT_MEMBER_NAME(lineJoin,"lineJoin");
	HX_VISIT_MEMBER_NAME(lineWidth,"lineWidth");
	HX_VISIT_MEMBER_NAME(miterLimit,"miterLimit");
	HX_VISIT_MEMBER_NAME(shadowBlur,"shadowBlur");
	HX_VISIT_MEMBER_NAME(shadowColor,"shadowColor");
	HX_VISIT_MEMBER_NAME(shadowOffsetX,"shadowOffsetX");
	HX_VISIT_MEMBER_NAME(shadowOffsetY,"shadowOffsetY");
	HX_VISIT_MEMBER_NAME(strokeStyle,"strokeStyle");
	HX_VISIT_MEMBER_NAME(textAlign,"textAlign");
	HX_VISIT_MEMBER_NAME(textBaseline,"textBaseline");
}

Dynamic CanvasRenderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arc") ) { return arc_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"arcTo") ) { return arcTo_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"stroke") ) { return stroke_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { return lineCap; }
		if (HX_FIELD_EQ(inName,"restore") ) { return restore_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lineDash") ) { return lineDash; }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { return lineJoin; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"fillText") ) { return fillText_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillStyle") ) { return fillStyle; }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth; }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return textAlign; }
		if (HX_FIELD_EQ(inName,"beginPath") ) { return beginPath_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"closePath") ) { return closePath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		if (HX_FIELD_EQ(inName,"setShadow") ) { return setShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { return miterLimit; }
		if (HX_FIELD_EQ(inName,"shadowBlur") ) { return shadowBlur; }
		if (HX_FIELD_EQ(inName,"setLineCap") ) { return setLineCap_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeRect") ) { return strokeRect_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeText") ) { return strokeText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"globalAlpha") ) { return globalAlpha; }
		if (HX_FIELD_EQ(inName,"shadowColor") ) { return shadowColor; }
		if (HX_FIELD_EQ(inName,"strokeStyle") ) { return strokeStyle; }
		if (HX_FIELD_EQ(inName,"clearShadow") ) { return clearShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineDash") ) { return getLineDash_dyn(); }
		if (HX_FIELD_EQ(inName,"measureText") ) { return measureText_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineDash") ) { return setLineDash_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineJoin") ) { return setLineJoin_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textBaseline") ) { return textBaseline; }
		if (HX_FIELD_EQ(inName,"setFillColor") ) { return setFillColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineWidth") ) { return setLineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setTransform") ) { return setTransform_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadowOffsetX") ) { return shadowOffsetX; }
		if (HX_FIELD_EQ(inName,"shadowOffsetY") ) { return shadowOffsetY; }
		if (HX_FIELD_EQ(inName,"bezierCurveTo") ) { return bezierCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createPattern") ) { return createPattern_dyn(); }
		if (HX_FIELD_EQ(inName,"isPointInPath") ) { return isPointInPath_dyn(); }
		if (HX_FIELD_EQ(inName,"setMiterLimit") ) { return setMiterLimit_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lineDashOffset") ) { return lineDashOffset; }
		if (HX_FIELD_EQ(inName,"setStrokeColor") ) { return setStrokeColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { return quadraticCurveTo_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawImageFromRect") ) { return drawImageFromRect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getDynamicImageData") ) { return getDynamicImageData_dyn(); }
		if (HX_FIELD_EQ(inName,"putDynamicImageData") ) { return putDynamicImageData_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createLinearGradient") ) { return createLinearGradient_dyn(); }
		if (HX_FIELD_EQ(inName,"createRadialGradient") ) { return createRadialGradient_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"imageSmoothingEnabled") ) { return imageSmoothingEnabled; }
		if (HX_FIELD_EQ(inName,"getDynamicImageDataHD") ) { return getDynamicImageDataHD_dyn(); }
		if (HX_FIELD_EQ(inName,"putDynamicImageDataHD") ) { return putDynamicImageDataHD_dyn(); }
		if (HX_FIELD_EQ(inName,"setCompositeOperation") ) { return setCompositeOperation_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"backingStorePixelRatio") ) { return backingStorePixelRatio; }
		if (HX_FIELD_EQ(inName,"createDynamicImageData") ) { return createDynamicImageData_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"globalCompositeOperation") ) { return globalCompositeOperation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasRenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { lineCap=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lineDash") ) { lineDash=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { lineJoin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillStyle") ) { fillStyle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { lineWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textAlign") ) { textAlign=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { miterLimit=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowBlur") ) { shadowBlur=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"globalAlpha") ) { globalAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowColor") ) { shadowColor=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strokeStyle") ) { strokeStyle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textBaseline") ) { textBaseline=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shadowOffsetX") ) { shadowOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowOffsetY") ) { shadowOffsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lineDashOffset") ) { lineDashOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"imageSmoothingEnabled") ) { imageSmoothingEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"backingStorePixelRatio") ) { backingStorePixelRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"globalCompositeOperation") ) { globalCompositeOperation=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("backingStorePixelRatio","\x0b","\xcd","\xc6","\xfc"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("fillStyle","\xae","\xcb","\xc4","\x52"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("globalAlpha","\xfb","\xfe","\xd4","\xf9"));
	outFields->push(HX_HCSTRING("globalCompositeOperation","\x63","\x05","\xf9","\xc0"));
	outFields->push(HX_HCSTRING("imageSmoothingEnabled","\xe8","\x4e","\x0e","\x94"));
	outFields->push(HX_HCSTRING("lineCap","\x7e","\x84","\x90","\x1f"));
	outFields->push(HX_HCSTRING("lineDash","\x66","\xa3","\x8c","\x7f"));
	outFields->push(HX_HCSTRING("lineDashOffset","\x99","\x3f","\x8a","\x01"));
	outFields->push(HX_HCSTRING("lineJoin","\xfe","\x81","\x8e","\x83"));
	outFields->push(HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"));
	outFields->push(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"));
	outFields->push(HX_HCSTRING("shadowBlur","\xa7","\xa6","\x44","\x10"));
	outFields->push(HX_HCSTRING("shadowColor","\x63","\x8d","\x28","\xc1"));
	outFields->push(HX_HCSTRING("shadowOffsetX","\x65","\x25","\x70","\xae"));
	outFields->push(HX_HCSTRING("shadowOffsetY","\x66","\x25","\x70","\xae"));
	outFields->push(HX_HCSTRING("strokeStyle","\x59","\xe6","\xd7","\x9c"));
	outFields->push(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));
	outFields->push(HX_HCSTRING("textBaseline","\x52","\x5a","\xa3","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,backingStorePixelRatio),HX_HCSTRING("backingStorePixelRatio","\x0b","\xcd","\xc6","\xfc")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CanvasRenderContext_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CanvasRenderContext_obj,fillStyle),HX_HCSTRING("fillStyle","\xae","\xcb","\xc4","\x52")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,globalAlpha),HX_HCSTRING("globalAlpha","\xfb","\xfe","\xd4","\xf9")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,globalCompositeOperation),HX_HCSTRING("globalCompositeOperation","\x63","\x05","\xf9","\xc0")},
	{hx::fsBool,(int)offsetof(CanvasRenderContext_obj,imageSmoothingEnabled),HX_HCSTRING("imageSmoothingEnabled","\xe8","\x4e","\x0e","\x94")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,lineCap),HX_HCSTRING("lineCap","\x7e","\x84","\x90","\x1f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(CanvasRenderContext_obj,lineDash),HX_HCSTRING("lineDash","\x66","\xa3","\x8c","\x7f")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,lineDashOffset),HX_HCSTRING("lineDashOffset","\x99","\x3f","\x8a","\x01")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,lineJoin),HX_HCSTRING("lineJoin","\xfe","\x81","\x8e","\x83")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,lineWidth),HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,miterLimit),HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,shadowBlur),HX_HCSTRING("shadowBlur","\xa7","\xa6","\x44","\x10")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,shadowColor),HX_HCSTRING("shadowColor","\x63","\x8d","\x28","\xc1")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,shadowOffsetX),HX_HCSTRING("shadowOffsetX","\x65","\x25","\x70","\xae")},
	{hx::fsFloat,(int)offsetof(CanvasRenderContext_obj,shadowOffsetY),HX_HCSTRING("shadowOffsetY","\x66","\x25","\x70","\xae")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CanvasRenderContext_obj,strokeStyle),HX_HCSTRING("strokeStyle","\x59","\xe6","\xd7","\x9c")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,textAlign),HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba")},
	{hx::fsString,(int)offsetof(CanvasRenderContext_obj,textBaseline),HX_HCSTRING("textBaseline","\x52","\x5a","\xa3","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("backingStorePixelRatio","\x0b","\xcd","\xc6","\xfc"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("fillStyle","\xae","\xcb","\xc4","\x52"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("globalAlpha","\xfb","\xfe","\xd4","\xf9"),
	HX_HCSTRING("globalCompositeOperation","\x63","\x05","\xf9","\xc0"),
	HX_HCSTRING("imageSmoothingEnabled","\xe8","\x4e","\x0e","\x94"),
	HX_HCSTRING("lineCap","\x7e","\x84","\x90","\x1f"),
	HX_HCSTRING("lineDash","\x66","\xa3","\x8c","\x7f"),
	HX_HCSTRING("lineDashOffset","\x99","\x3f","\x8a","\x01"),
	HX_HCSTRING("lineJoin","\xfe","\x81","\x8e","\x83"),
	HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"),
	HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"),
	HX_HCSTRING("shadowBlur","\xa7","\xa6","\x44","\x10"),
	HX_HCSTRING("shadowColor","\x63","\x8d","\x28","\xc1"),
	HX_HCSTRING("shadowOffsetX","\x65","\x25","\x70","\xae"),
	HX_HCSTRING("shadowOffsetY","\x66","\x25","\x70","\xae"),
	HX_HCSTRING("strokeStyle","\x59","\xe6","\xd7","\x9c"),
	HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"),
	HX_HCSTRING("textBaseline","\x52","\x5a","\xa3","\x45"),
	HX_HCSTRING("arc","\x52","\xfe","\x49","\x00"),
	HX_HCSTRING("arcTo","\x6d","\x00","\x84","\x25"),
	HX_HCSTRING("beginPath","\x6e","\xc4","\x2b","\x93"),
	HX_HCSTRING("bezierCurveTo","\xab","\x59","\x4f","\x3a"),
	HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"),
	HX_HCSTRING("clearShadow","\x4d","\xd5","\x0d","\xb1"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("createDynamicImageData","\xc2","\xbe","\xd3","\x3c"),
	HX_HCSTRING("createLinearGradient","\x11","\xf1","\xb9","\x10"),
	HX_HCSTRING("createPattern","\xb4","\xde","\xb9","\xf9"),
	HX_HCSTRING("createRadialGradient","\x0b","\xe8","\x1c","\xf3"),
	HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"),
	HX_HCSTRING("drawImageFromRect","\x85","\x3b","\x9f","\x9d"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("fillText","\xd0","\xc4","\x0b","\x6e"),
	HX_HCSTRING("getDynamicImageData","\x5c","\x2c","\x41","\x05"),
	HX_HCSTRING("getDynamicImageDataHD","\x58","\x3a","\x2a","\xb9"),
	HX_HCSTRING("getLineDash","\x1c","\x66","\x80","\xa5"),
	HX_HCSTRING("isPointInPath","\xd0","\x58","\x74","\x76"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("measureText","\x2b","\xfb","\x80","\x50"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("putDynamicImageData","\x95","\xd0","\xf5","\x58"),
	HX_HCSTRING("putDynamicImageDataHD","\xd1","\x1e","\x7b","\xde"),
	HX_HCSTRING("quadraticCurveTo","\x12","\x48","\xc3","\x82"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("restore","\x4e","\x67","\xb0","\x6a"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setAlpha","\x5c","\x10","\xcb","\x2f"),
	HX_HCSTRING("setCompositeOperation","\x62","\xeb","\x78","\xcf"),
	HX_HCSTRING("setFillColor","\xde","\x57","\x53","\x3d"),
	HX_HCSTRING("setLineCap","\xfc","\xa8","\x6f","\x72"),
	HX_HCSTRING("setLineDash","\x28","\x6d","\xed","\xaf"),
	HX_HCSTRING("setLineJoin","\xc0","\x4b","\xef","\xb3"),
	HX_HCSTRING("setLineWidth","\x70","\x79","\xad","\x35"),
	HX_HCSTRING("setMiterLimit","\x38","\x9b","\xe2","\xf5"),
	HX_HCSTRING("setShadow","\x22","\x3d","\xc8","\x7c"),
	HX_HCSTRING("setStrokeColor","\x09","\xee","\xd4","\x0a"),
	HX_HCSTRING("setTransform","\x6a","\xed","\xe2","\x69"),
	HX_HCSTRING("stroke","\xb8","\xb3","\x34","\x11"),
	HX_HCSTRING("strokeRect","\xfc","\x68","\x45","\x9d"),
	HX_HCSTRING("strokeText","\x85","\xe8","\x97","\x9e"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasRenderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasRenderContext_obj::__mClass;

void CanvasRenderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.CanvasRenderContext","\xf7","\x58","\x76","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasRenderContext_obj >;
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

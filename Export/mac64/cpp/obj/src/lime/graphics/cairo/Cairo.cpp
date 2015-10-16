#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{

Void Cairo_obj::__construct(Dynamic surface)
{
HX_STACK_FRAME("lime.graphics.cairo.Cairo","new",0x5bfa2aca,"lime.graphics.cairo.Cairo.new","lime/graphics/cairo/Cairo.hx",43,0x0918a4c7)
HX_STACK_THIS(this)
HX_STACK_ARG(surface,"surface")
{
	HX_STACK_LINE(45)
	bool tmp = (surface != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(48)
		this->handle = ((Dynamic)(::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_create.call(hx::DynamicPtr(surface))));
	}
}
;
	return null();
}

//Cairo_obj::~Cairo_obj() { }

Dynamic Cairo_obj::__CreateEmpty() { return  new Cairo_obj; }
hx::ObjectPtr< Cairo_obj > Cairo_obj::__new(Dynamic surface)
{  hx::ObjectPtr< Cairo_obj > _result_ = new Cairo_obj();
	_result_->__construct(surface);
	return _result_;}

Dynamic Cairo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cairo_obj > _result_ = new Cairo_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Cairo_obj::arc( Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","arc",0x5bf058bc,"lime.graphics.cairo.Cairo.arc","lime/graphics/cairo/Cairo.hx",59,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xc,"xc")
		HX_STACK_ARG(yc,"yc")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(angle1,"angle1")
		HX_STACK_ARG(angle2,"angle2")
		HX_STACK_LINE(59)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_arc.call(hx::DynamicPtr(this->handle),xc,yc,radius,angle1,angle2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,arc,(void))

Void Cairo_obj::arcNegative( Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","arcNegative",0xdc455751,"lime.graphics.cairo.Cairo.arcNegative","lime/graphics/cairo/Cairo.hx",68,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xc,"xc")
		HX_STACK_ARG(yc,"yc")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(angle1,"angle1")
		HX_STACK_ARG(angle2,"angle2")
		HX_STACK_LINE(68)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_arc_negative.call(hx::DynamicPtr(this->handle),xc,yc,radius,angle1,angle2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,arcNegative,(void))

Void Cairo_obj::clip( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","clip",0x17ab3126,"lime.graphics.cairo.Cairo.clip","lime/graphics/cairo/Cairo.hx",77,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_clip.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,clip,(void))

Void Cairo_obj::clipExtents( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","clipExtents",0x66b7e2c3,"lime.graphics.cairo.Cairo.clipExtents","lime/graphics/cairo/Cairo.hx",86,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(86)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_clip_extents.call(hx::DynamicPtr(this->handle),x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,clipExtents,(void))

Void Cairo_obj::clipPreserve( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","clipPreserve",0x0025ef12,"lime.graphics.cairo.Cairo.clipPreserve","lime/graphics/cairo/Cairo.hx",95,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_clip_preserve.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,clipPreserve,(void))

Void Cairo_obj::closePath( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","closePath",0x73e96b67,"lime.graphics.cairo.Cairo.closePath","lime/graphics/cairo/Cairo.hx",104,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_close_path.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,closePath,(void))

Void Cairo_obj::copyPage( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","copyPage",0xf9d7e5fa,"lime.graphics.cairo.Cairo.copyPage","lime/graphics/cairo/Cairo.hx",113,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_copy_page.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,copyPage,(void))

Void Cairo_obj::curveTo( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","curveTo",0x0ddd3774,"lime.graphics.cairo.Cairo.curveTo","lime/graphics/cairo/Cairo.hx",122,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
		HX_STACK_LINE(122)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_curve_to.call(hx::DynamicPtr(this->handle),x1,y1,x2,y2,x3,y3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,curveTo,(void))

Void Cairo_obj::fill( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","fill",0x19a490d9,"lime.graphics.cairo.Cairo.fill","lime/graphics/cairo/Cairo.hx",131,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_fill.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,fill,(void))

Void Cairo_obj::fillExtents( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","fillExtents",0x3c7e2f70,"lime.graphics.cairo.Cairo.fillExtents","lime/graphics/cairo/Cairo.hx",140,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(140)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_fill_extents.call(hx::DynamicPtr(this->handle),x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,fillExtents,(void))

Void Cairo_obj::fillPreserve( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","fillPreserve",0x37e2b9c5,"lime.graphics.cairo.Cairo.fillPreserve","lime/graphics/cairo/Cairo.hx",149,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_fill_preserve.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,fillPreserve,(void))

Void Cairo_obj::identityMatrix( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","identityMatrix",0xb1e7bbf5,"lime.graphics.cairo.Cairo.identityMatrix","lime/graphics/cairo/Cairo.hx",158,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_identity_matrix.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,identityMatrix,(void))

bool Cairo_obj::inClip( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","inClip",0x3186d12b,"lime.graphics.cairo.Cairo.inClip","lime/graphics/cairo/Cairo.hx",167,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(167)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_in_clip.call(hx::DynamicPtr(this->handle),x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inClip,return )

bool Cairo_obj::inFill( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","inFill",0x338030de,"lime.graphics.cairo.Cairo.inFill","lime/graphics/cairo/Cairo.hx",178,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(178)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_in_fill.call(hx::DynamicPtr(this->handle),x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inFill,return )

bool Cairo_obj::inStroke( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","inStroke",0xc49aa2d3,"lime.graphics.cairo.Cairo.inStroke","lime/graphics/cairo/Cairo.hx",189,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(189)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_in_stroke.call(hx::DynamicPtr(this->handle),x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inStroke,return )

Void Cairo_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lineTo",0x9ffeca65,"lime.graphics.cairo.Cairo.lineTo","lime/graphics/cairo/Cairo.hx",200,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(200)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_line_to.call(hx::DynamicPtr(this->handle),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lineTo,(void))

Void Cairo_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","moveTo",0x800b56c2,"lime.graphics.cairo.Cairo.moveTo","lime/graphics/cairo/Cairo.hx",209,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(209)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_move_to.call(hx::DynamicPtr(this->handle),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,moveTo,(void))

Void Cairo_obj::mask( Dynamic pattern){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","mask",0x1e3f0342,"lime.graphics.cairo.Cairo.mask","lime/graphics/cairo/Cairo.hx",218,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pattern,"pattern")
		HX_STACK_LINE(218)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_mask.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(pattern));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,mask,(void))

Void Cairo_obj::maskSurface( Dynamic surface,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","maskSurface",0x3893570b,"lime.graphics.cairo.Cairo.maskSurface","lime/graphics/cairo/Cairo.hx",227,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(227)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_mask_surface.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(surface),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,maskSurface,(void))

Void Cairo_obj::newPath( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","newPath",0x3973698f,"lime.graphics.cairo.Cairo.newPath","lime/graphics/cairo/Cairo.hx",236,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_new_path.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,newPath,(void))

Void Cairo_obj::paint( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","paint",0x13100088,"lime.graphics.cairo.Cairo.paint","lime/graphics/cairo/Cairo.hx",245,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_paint.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,paint,(void))

Void Cairo_obj::paintWithAlpha( Float alpha){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","paintWithAlpha",0x79d699d0,"lime.graphics.cairo.Cairo.paintWithAlpha","lime/graphics/cairo/Cairo.hx",254,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(254)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_paint_with_alpha.call(hx::DynamicPtr(this->handle),alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,paintWithAlpha,(void))

Dynamic Cairo_obj::popGroup( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","popGroup",0x2de29d44,"lime.graphics.cairo.Cairo.popGroup","lime/graphics/cairo/Cairo.hx",260,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(263)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_pop_group.call(hx::DynamicPtr(this->handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(263)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(263)
	return tmp;
	HX_STACK_LINE(263)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,popGroup,return )

Void Cairo_obj::popGroupToSource( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","popGroupToSource",0x2889961a,"lime.graphics.cairo.Cairo.popGroupToSource","lime/graphics/cairo/Cairo.hx",274,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(274)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_pop_group_to_source.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,popGroupToSource,(void))

Void Cairo_obj::pushGroup( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","pushGroup",0x3dd920ef,"lime.graphics.cairo.Cairo.pushGroup","lime/graphics/cairo/Cairo.hx",283,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_push_group.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,pushGroup,(void))

Void Cairo_obj::pushGroupWithContent( int content){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","pushGroupWithContent",0x80fe7b24,"lime.graphics.cairo.Cairo.pushGroupWithContent","lime/graphics/cairo/Cairo.hx",292,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(292)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_push_group_with_content.call(hx::DynamicPtr(this->handle),content);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,pushGroupWithContent,(void))

Void Cairo_obj::recreate( Dynamic surface){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","recreate",0x8765b845,"lime.graphics.cairo.Cairo.recreate","lime/graphics/cairo/Cairo.hx",301,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_LINE(301)
		this->handle = ((Dynamic)(::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_create.call(hx::DynamicPtr(surface))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,recreate,(void))

Void Cairo_obj::rectangle( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","rectangle",0x7945da19,"lime.graphics.cairo.Cairo.rectangle","lime/graphics/cairo/Cairo.hx",309,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(309)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rectangle.call(hx::DynamicPtr(this->handle),x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,rectangle,(void))

Void Cairo_obj::relCurveTo( Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","relCurveTo",0x07a5a287,"lime.graphics.cairo.Cairo.relCurveTo","lime/graphics/cairo/Cairo.hx",318,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx1,"dx1")
		HX_STACK_ARG(dy1,"dy1")
		HX_STACK_ARG(dx2,"dx2")
		HX_STACK_ARG(dy2,"dy2")
		HX_STACK_ARG(dx3,"dx3")
		HX_STACK_ARG(dy3,"dy3")
		HX_STACK_LINE(318)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rel_curve_to.call(hx::DynamicPtr(this->handle),dx1,dy1,dx2,dy2,dx3,dy3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,relCurveTo,(void))

Void Cairo_obj::relLineTo( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","relLineTo",0x8c73a2b2,"lime.graphics.cairo.Cairo.relLineTo","lime/graphics/cairo/Cairo.hx",327,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(327)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rel_line_to.call(hx::DynamicPtr(this->handle),dx,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,relLineTo,(void))

Void Cairo_obj::relMoveTo( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","relMoveTo",0x6c802f0f,"lime.graphics.cairo.Cairo.relMoveTo","lime/graphics/cairo/Cairo.hx",336,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(336)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rel_move_to.call(hx::DynamicPtr(this->handle),dx,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,relMoveTo,(void))

Void Cairo_obj::resetClip( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","resetClip",0xe7777e29,"lime.graphics.cairo.Cairo.resetClip","lime/graphics/cairo/Cairo.hx",345,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(345)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_reset_clip.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,resetClip,(void))

Void Cairo_obj::restore( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","restore",0xaa053eb8,"lime.graphics.cairo.Cairo.restore","lime/graphics/cairo/Cairo.hx",354,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(354)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_restore.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,restore,(void))

Void Cairo_obj::save( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","save",0x22364d93,"lime.graphics.cairo.Cairo.save","lime/graphics/cairo/Cairo.hx",363,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_save.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,save,(void))

Void Cairo_obj::setFontSize( Float size){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setFontSize",0xa7b85c5c,"lime.graphics.cairo.Cairo.setFontSize","lime/graphics/cairo/Cairo.hx",372,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(372)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_font_size.call(hx::DynamicPtr(this->handle),size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,setFontSize,(void))

Void Cairo_obj::setSourceRGB( Float r,Float g,Float b){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setSourceRGB",0x59e04946,"lime.graphics.cairo.Cairo.setSourceRGB","lime/graphics/cairo/Cairo.hx",381,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(381)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_source_rgb.call(hx::DynamicPtr(this->handle),r,g,b);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,setSourceRGB,(void))

Void Cairo_obj::setSourceRGBA( Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setSourceRGBA",0x4a5fd43b,"lime.graphics.cairo.Cairo.setSourceRGBA","lime/graphics/cairo/Cairo.hx",390,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(390)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_source_rgba.call(hx::DynamicPtr(this->handle),r,g,b,a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,setSourceRGBA,(void))

Void Cairo_obj::setSourceSurface( Dynamic surface,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setSourceSurface",0xcd3700e6,"lime.graphics.cairo.Cairo.setSourceSurface","lime/graphics/cairo/Cairo.hx",399,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(399)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_source_surface.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(surface),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,setSourceSurface,(void))

Void Cairo_obj::showPage( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","showPage",0xdcc04342,"lime.graphics.cairo.Cairo.showPage","lime/graphics/cairo/Cairo.hx",408,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(408)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_show_page.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,showPage,(void))

Void Cairo_obj::showText( ::String utf8){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","showText",0xdf6835a0,"lime.graphics.cairo.Cairo.showText","lime/graphics/cairo/Cairo.hx",417,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(utf8,"utf8")
		HX_STACK_LINE(417)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_show_text.call(hx::DynamicPtr(this->handle),utf8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,showText,(void))

int Cairo_obj::status( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","status",0xb95a6b08,"lime.graphics.cairo.Cairo.status","lime/graphics/cairo/Cairo.hx",426,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(426)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_status.call(hx::DynamicPtr(this->handle));
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,status,return )

Void Cairo_obj::stroke( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","stroke",0xc493378e,"lime.graphics.cairo.Cairo.stroke","lime/graphics/cairo/Cairo.hx",437,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(437)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_stroke.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,stroke,(void))

Void Cairo_obj::strokeExtents( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","strokeExtents",0x11faf95b,"lime.graphics.cairo.Cairo.strokeExtents","lime/graphics/cairo/Cairo.hx",446,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(446)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_stroke_extents.call(hx::DynamicPtr(this->handle),x1,y1,x2,y2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,strokeExtents,(void))

Void Cairo_obj::strokePreserve( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","strokePreserve",0x2f969d7a,"lime.graphics.cairo.Cairo.strokePreserve","lime/graphics/cairo/Cairo.hx",455,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_stroke_preserve.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,strokePreserve,(void))

Void Cairo_obj::transform( ::lime::math::Matrix3 matrix){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","transform",0xa55c3356,"lime.graphics.cairo.Cairo.transform","lime/graphics/cairo/Cairo.hx",464,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(464)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_transform.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(matrix));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,transform,(void))

Void Cairo_obj::rotate( Float amount){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","rotate",0x7e7eca31,"lime.graphics.cairo.Cairo.rotate","lime/graphics/cairo/Cairo.hx",472,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(472)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rotate.call(hx::DynamicPtr(this->handle),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,rotate,(void))

Void Cairo_obj::scale( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","scale",0xce901774,"lime.graphics.cairo.Cairo.scale","lime/graphics/cairo/Cairo.hx",480,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(480)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_scale.call(hx::DynamicPtr(this->handle),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,scale,(void))

Void Cairo_obj::translate( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","translate",0xa948dd38,"lime.graphics.cairo.Cairo.translate","lime/graphics/cairo/Cairo.hx",489,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(489)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_translate.call(hx::DynamicPtr(this->handle),x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,translate,(void))

int Cairo_obj::get_antialias( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_antialias",0x6c40ed6f,"lime.graphics.cairo.Cairo.get_antialias","lime/graphics/cairo/Cairo.hx",504,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(507)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_antialias.call(hx::DynamicPtr(this->handle));
	HX_STACK_LINE(510)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_antialias,return )

int Cairo_obj::set_antialias( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_antialias",0xb146cf7b,"lime.graphics.cairo.Cairo.set_antialias","lime/graphics/cairo/Cairo.hx",515,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(518)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_antialias.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(521)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_antialias,return )

::lime::math::Vector2 Cairo_obj::get_currentPoint( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_currentPoint",0x71e87136,"lime.graphics.cairo.Cairo.get_currentPoint","lime/graphics/cairo/Cairo.hx",526,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(529)
	Dynamic vec = ((Dynamic)(::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_current_point.call(hx::DynamicPtr(this->handle))));		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(530)
	::lime::math::Vector2 tmp = ::lime::math::Vector2_obj::__new(vec->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),vec->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	return tmp;
	HX_STACK_LINE(533)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_currentPoint,return )

Array< Float > Cairo_obj::get_dash( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_dash",0xed05b631,"lime.graphics.cairo.Cairo.get_dash","lime/graphics/cairo/Cairo.hx",538,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(541)
	Dynamic result = ((Dynamic)(::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_dash.call(hx::DynamicPtr(this->handle))));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(542)
	Dynamic tmp = result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(542)
	return tmp;
	HX_STACK_LINE(545)
	return Array_obj< Float >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_dash,return )

Array< Float > Cairo_obj::set_dash( Array< Float > value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_dash",0x9b630fa5,"lime.graphics.cairo.Cairo.set_dash","lime/graphics/cairo/Cairo.hx",550,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(553)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_dash.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value));
	HX_STACK_LINE(556)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_dash,return )

int Cairo_obj::get_dashCount( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_dashCount",0x2993ecde,"lime.graphics.cairo.Cairo.get_dashCount","lime/graphics/cairo/Cairo.hx",561,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(564)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_dash_count.call(hx::DynamicPtr(this->handle));
	HX_STACK_LINE(567)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_dashCount,return )

int Cairo_obj::get_fillRule( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_fillRule",0xee732d7e,"lime.graphics.cairo.Cairo.get_fillRule","lime/graphics/cairo/Cairo.hx",572,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(575)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_fill_rule.call(hx::DynamicPtr(this->handle));
	HX_STACK_LINE(578)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_fillRule,return )

int Cairo_obj::set_fillRule( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_fillRule",0x036c50f2,"lime.graphics.cairo.Cairo.set_fillRule","lime/graphics/cairo/Cairo.hx",583,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(586)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_fill_rule.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(589)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(589)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_fillRule,return )

Dynamic Cairo_obj::get_fontFace( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_fontFace",0x47e18e6b,"lime.graphics.cairo.Cairo.get_fontFace","lime/graphics/cairo/Cairo.hx",594,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(597)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(597)
	{
		HX_STACK_LINE(597)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_font_face.call(hx::DynamicPtr(this->handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(597)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(597)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(597)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(597)
	return tmp;
	HX_STACK_LINE(600)
	return ((Dynamic)((int)0));
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_fontFace,return )

Dynamic Cairo_obj::set_fontFace( Dynamic value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_fontFace",0x5cdab1df,"lime.graphics.cairo.Cairo.set_fontFace","lime/graphics/cairo/Cairo.hx",605,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(608)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_font_face.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value));
	HX_STACK_LINE(611)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_fontFace,return )

Dynamic Cairo_obj::get_fontOptions( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_fontOptions",0x8029ee50,"lime.graphics.cairo.Cairo.get_fontOptions","lime/graphics/cairo/Cairo.hx",616,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(619)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(619)
	{
		HX_STACK_LINE(619)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_font_options.call(hx::DynamicPtr(this->handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(619)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(619)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(619)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(619)
	return tmp;
	HX_STACK_LINE(619)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_fontOptions,return )

Dynamic Cairo_obj::set_fontOptions( Dynamic value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_fontOptions",0x7bf56b5c,"lime.graphics.cairo.Cairo.set_fontOptions","lime/graphics/cairo/Cairo.hx",627,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(630)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_font_options.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value));
	HX_STACK_LINE(633)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_fontOptions,return )

Dynamic Cairo_obj::get_groupTarget( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_groupTarget",0x8da19cf1,"lime.graphics.cairo.Cairo.get_groupTarget","lime/graphics/cairo/Cairo.hx",638,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(641)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(641)
	{
		HX_STACK_LINE(641)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_group_target.call(hx::DynamicPtr(this->handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(641)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(641)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(641)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(641)
	return tmp;
	HX_STACK_LINE(641)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_groupTarget,return )

bool Cairo_obj::get_hasCurrentPoint( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_hasCurrentPoint",0x7885e152,"lime.graphics.cairo.Cairo.get_hasCurrentPoint","lime/graphics/cairo/Cairo.hx",649,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(652)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_has_current_point.call(hx::DynamicPtr(this->handle));
	HX_STACK_LINE(655)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_hasCurrentPoint,return )

int Cairo_obj::get_lineCap( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_lineCap",0x4e10b8ff,"lime.graphics.cairo.Cairo.get_lineCap","lime/graphics/cairo/Cairo.hx",660,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(663)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_line_cap.call(hx::DynamicPtr(this->handle));
	HX_STACK_LINE(666)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineCap,return )

int Cairo_obj::set_lineCap( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_lineCap",0x587dc00b,"lime.graphics.cairo.Cairo.set_lineCap","lime/graphics/cairo/Cairo.hx",671,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(674)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_line_cap.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(677)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(677)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineCap,return )

int Cairo_obj::get_lineJoin( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_lineJoin",0x053c3e5d,"lime.graphics.cairo.Cairo.get_lineJoin","lime/graphics/cairo/Cairo.hx",682,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(685)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_line_join.call(hx::DynamicPtr(this->handle));
	HX_STACK_LINE(688)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineJoin,return )

int Cairo_obj::set_lineJoin( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_lineJoin",0x1a3561d1,"lime.graphics.cairo.Cairo.set_lineJoin","lime/graphics/cairo/Cairo.hx",693,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(696)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_line_join.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(699)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(699)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineJoin,return )

Float Cairo_obj::get_lineWidth( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_lineWidth",0x07b4d033,"lime.graphics.cairo.Cairo.get_lineWidth","lime/graphics/cairo/Cairo.hx",704,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(707)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_line_width.call(hx::DynamicPtr(this->handle));
	HX_STACK_LINE(710)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineWidth,return )

Float Cairo_obj::set_lineWidth( Float value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_lineWidth",0x4cbab23f,"lime.graphics.cairo.Cairo.set_lineWidth","lime/graphics/cairo/Cairo.hx",715,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(718)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_line_width.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(721)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(721)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineWidth,return )

::lime::math::Matrix3 Cairo_obj::get_matrix( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_matrix",0x1c6bcce0,"lime.graphics.cairo.Cairo.get_matrix","lime/graphics/cairo/Cairo.hx",726,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(729)
	Dynamic m = ((Dynamic)(::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_matrix.call(hx::DynamicPtr(this->handle))));		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(730)
	::lime::math::Matrix3 tmp = ::lime::math::Matrix3_obj::__new(m->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	return tmp;
	HX_STACK_LINE(733)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_matrix,return )

::lime::math::Matrix3 Cairo_obj::set_matrix( ::lime::math::Matrix3 value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_matrix",0x1fe96b54,"lime.graphics.cairo.Cairo.set_matrix","lime/graphics/cairo/Cairo.hx",738,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(741)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_matrix.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value));
	HX_STACK_LINE(744)
	::lime::math::Matrix3 tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(744)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_matrix,return )

Float Cairo_obj::get_miterLimit( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_miterLimit",0xea472f15,"lime.graphics.cairo.Cairo.get_miterLimit","lime/graphics/cairo/Cairo.hx",749,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(752)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_miter_limit.call(hx::DynamicPtr(this->handle));
	HX_STACK_LINE(755)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_miterLimit,return )

Float Cairo_obj::set_miterLimit( Float value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_miterLimit",0x0a671789,"lime.graphics.cairo.Cairo.set_miterLimit","lime/graphics/cairo/Cairo.hx",760,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(763)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_miter_limit.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(766)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(766)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_miterLimit,return )

int Cairo_obj::get_operator( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_operator",0xc620d803,"lime.graphics.cairo.Cairo.get_operator","lime/graphics/cairo/Cairo.hx",771,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(774)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_operator.call(hx::DynamicPtr(this->handle));
	HX_STACK_LINE(777)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_operator,return )

int Cairo_obj::set_operator( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_operator",0xdb19fb77,"lime.graphics.cairo.Cairo.set_operator","lime/graphics/cairo/Cairo.hx",782,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(785)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_operator.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(788)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(788)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_operator,return )

Dynamic Cairo_obj::get_source( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_source",0x92d5477a,"lime.graphics.cairo.Cairo.get_source","lime/graphics/cairo/Cairo.hx",793,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(796)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(796)
	{
		HX_STACK_LINE(796)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_source.call(hx::DynamicPtr(this->handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(796)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(796)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(796)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(796)
	return tmp;
	HX_STACK_LINE(799)
	return ((Dynamic)((int)0));
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_source,return )

Dynamic Cairo_obj::set_source( Dynamic value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_source",0x9652e5ee,"lime.graphics.cairo.Cairo.set_source","lime/graphics/cairo/Cairo.hx",804,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(807)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_source.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(value));
	HX_STACK_LINE(810)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(810)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_source,return )

Dynamic Cairo_obj::get_target( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_target",0xe79089f0,"lime.graphics.cairo.Cairo.get_target","lime/graphics/cairo/Cairo.hx",815,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(818)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(818)
	{
		HX_STACK_LINE(818)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_target.call(hx::DynamicPtr(this->handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(818)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(818)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(818)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(818)
	return tmp;
	HX_STACK_LINE(818)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_target,return )

Float Cairo_obj::get_tolerance( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_tolerance",0x29d353ce,"lime.graphics.cairo.Cairo.get_tolerance","lime/graphics/cairo/Cairo.hx",829,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(829)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_tolerance.call(hx::DynamicPtr(this->handle));
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_tolerance,return )

Float Cairo_obj::set_tolerance( Float value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_tolerance",0x6ed935da,"lime.graphics.cairo.Cairo.set_tolerance","lime/graphics/cairo/Cairo.hx",837,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(840)
	::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_tolerance.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(843)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(843)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_tolerance,return )

int Cairo_obj::version;

::String Cairo_obj::versionString;

int Cairo_obj::get_version( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_version",0xab721b99,"lime.graphics.cairo.Cairo.get_version","lime/graphics/cairo/Cairo.hx",851,0x0918a4c7)
	HX_STACK_LINE(851)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_version.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_version,return )

::String Cairo_obj::get_versionString( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_versionString",0xb090f14a,"lime.graphics.cairo.Cairo.get_versionString","lime/graphics/cairo/Cairo.hx",862,0x0918a4c7)
	HX_STACK_LINE(862)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_version_string.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_versionString,return )

Void Cairo_obj::lime_cairo_arc( Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_arc",0x19e3c0c7,"lime.graphics.cairo.Cairo.lime_cairo_arc","lime/graphics/cairo/Cairo.hx",878,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(xc,"xc")
		HX_STACK_ARG(yc,"yc")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(angle1,"angle1")
		HX_STACK_ARG(angle2,"angle2")
		HX_STACK_LINE(878)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_arc.call(hx::DynamicPtr(handle),xc,yc,radius,angle1,angle2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,lime_cairo_arc,(void))

Void Cairo_obj::lime_cairo_arc_negative( Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_arc_negative",0xfe5f8c2d,"lime.graphics.cairo.Cairo.lime_cairo_arc_negative","lime/graphics/cairo/Cairo.hx",879,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(xc,"xc")
		HX_STACK_ARG(yc,"yc")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(angle1,"angle1")
		HX_STACK_ARG(angle2,"angle2")
		HX_STACK_LINE(879)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_arc_negative.call(hx::DynamicPtr(handle),xc,yc,radius,angle1,angle2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,lime_cairo_arc_negative,(void))

Void Cairo_obj::lime_cairo_clip( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_clip",0x8eb2d2bb,"lime.graphics.cairo.Cairo.lime_cairo_clip","lime/graphics/cairo/Cairo.hx",880,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(880)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_clip.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_clip,(void))

Void Cairo_obj::lime_cairo_clip_preserve( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_clip_preserve",0x4638e110,"lime.graphics.cairo.Cairo.lime_cairo_clip_preserve","lime/graphics/cairo/Cairo.hx",881,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(881)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_clip_preserve.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_clip_preserve,(void))

Void Cairo_obj::lime_cairo_clip_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_clip_extents",0x5941ba85,"lime.graphics.cairo.Cairo.lime_cairo_clip_extents","lime/graphics/cairo/Cairo.hx",882,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(882)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_clip_extents.call(hx::DynamicPtr(handle),x1,y1,x2,y2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,lime_cairo_clip_extents,(void))

Void Cairo_obj::lime_cairo_close_path( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_close_path",0xcf2794f7,"lime.graphics.cairo.Cairo.lime_cairo_close_path","lime/graphics/cairo/Cairo.hx",883,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(883)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_close_path.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_close_path,(void))

Void Cairo_obj::lime_cairo_copy_page( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_copy_page",0x07d7328e,"lime.graphics.cairo.Cairo.lime_cairo_copy_page","lime/graphics/cairo/Cairo.hx",884,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(884)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_copy_page.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_copy_page,(void))

Dynamic Cairo_obj::lime_cairo_create( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_create",0x30d0dba7,"lime.graphics.cairo.Cairo.lime_cairo_create","lime/graphics/cairo/Cairo.hx",885,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(885)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_create.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_create,return )

Void Cairo_obj::lime_cairo_curve_to( Dynamic handle,Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_curve_to",0x685c3bb6,"lime.graphics.cairo.Cairo.lime_cairo_curve_to","lime/graphics/cairo/Cairo.hx",886,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
		HX_STACK_LINE(886)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_curve_to.call(hx::DynamicPtr(handle),x1,y1,x2,y2,x3,y3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Cairo_obj,lime_cairo_curve_to,(void))

Void Cairo_obj::lime_cairo_fill( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_fill",0x90ac326e,"lime.graphics.cairo.Cairo.lime_cairo_fill","lime/graphics/cairo/Cairo.hx",887,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(887)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_fill.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_fill,(void))

Void Cairo_obj::lime_cairo_fill_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_fill_extents",0x90fe8538,"lime.graphics.cairo.Cairo.lime_cairo_fill_extents","lime/graphics/cairo/Cairo.hx",888,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(888)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_fill_extents.call(hx::DynamicPtr(handle),x1,y1,x2,y2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,lime_cairo_fill_extents,(void))

Void Cairo_obj::lime_cairo_fill_preserve( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_fill_preserve",0xd3ad72fd,"lime.graphics.cairo.Cairo.lime_cairo_fill_preserve","lime/graphics/cairo/Cairo.hx",889,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(889)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_fill_preserve.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_fill_preserve,(void))

int Cairo_obj::lime_cairo_get_antialias( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_antialias",0x1d14f13a,"lime.graphics.cairo.Cairo.lime_cairo_get_antialias","lime/graphics/cairo/Cairo.hx",890,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(890)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_antialias.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_antialias,return )

Dynamic Cairo_obj::lime_cairo_get_current_point( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_current_point",0x91185916,"lime.graphics.cairo.Cairo.lime_cairo_get_current_point","lime/graphics/cairo/Cairo.hx",891,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(891)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_current_point.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_current_point,return )

Dynamic Cairo_obj::lime_cairo_get_dash( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_dash",0x41a64646,"lime.graphics.cairo.Cairo.lime_cairo_get_dash","lime/graphics/cairo/Cairo.hx",892,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(892)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_dash.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_dash,return )

int Cairo_obj::lime_cairo_get_dash_count( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_dash_count",0x85c7cad6,"lime.graphics.cairo.Cairo.lime_cairo_get_dash_count","lime/graphics/cairo/Cairo.hx",893,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(893)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_dash_count.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_dash_count,return )

int Cairo_obj::lime_cairo_get_fill_rule( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_fill_rule",0xe1696604,"lime.graphics.cairo.Cairo.lime_cairo_get_fill_rule","lime/graphics/cairo/Cairo.hx",894,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(894)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_fill_rule.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_fill_rule,return )

Dynamic Cairo_obj::lime_cairo_get_font_face( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_font_face",0xb6a01ed9,"lime.graphics.cairo.Cairo.lime_cairo_get_font_face","lime/graphics/cairo/Cairo.hx",895,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(895)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(895)
	{
		HX_STACK_LINE(895)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_font_face.call(hx::DynamicPtr(handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(895)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(895)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(895)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(895)
	return tmp;
	HX_STACK_LINE(895)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_font_face,return )

Dynamic Cairo_obj::lime_cairo_get_font_options( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_font_options",0xd39ad6a2,"lime.graphics.cairo.Cairo.lime_cairo_get_font_options","lime/graphics/cairo/Cairo.hx",896,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(896)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(896)
	{
		HX_STACK_LINE(896)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_font_options.call(hx::DynamicPtr(handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(896)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(896)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(896)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(896)
	return tmp;
	HX_STACK_LINE(896)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_font_options,return )

Dynamic Cairo_obj::lime_cairo_get_group_target( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_group_target",0x0cf0cc85,"lime.graphics.cairo.Cairo.lime_cairo_get_group_target","lime/graphics/cairo/Cairo.hx",897,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(897)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(897)
	{
		HX_STACK_LINE(897)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_group_target.call(hx::DynamicPtr(handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(897)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(897)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(897)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(897)
	return tmp;
	HX_STACK_LINE(897)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_group_target,return )

int Cairo_obj::lime_cairo_get_line_cap( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_line_cap",0x02a755fb,"lime.graphics.cairo.Cairo.lime_cairo_get_line_cap","lime/graphics/cairo/Cairo.hx",898,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(898)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_line_cap.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_line_cap,return )

int Cairo_obj::lime_cairo_get_line_join( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_line_join",0x546efde1,"lime.graphics.cairo.Cairo.lime_cairo_get_line_join","lime/graphics/cairo/Cairo.hx",899,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(899)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_line_join.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_line_join,return )

Float Cairo_obj::lime_cairo_get_line_width( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_line_width",0x04e9a42f,"lime.graphics.cairo.Cairo.lime_cairo_get_line_width","lime/graphics/cairo/Cairo.hx",900,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(900)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_line_width.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_line_width,return )

Dynamic Cairo_obj::lime_cairo_get_matrix( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_matrix",0x46604c35,"lime.graphics.cairo.Cairo.lime_cairo_get_matrix","lime/graphics/cairo/Cairo.hx",901,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(901)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_matrix.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_matrix,return )

Float Cairo_obj::lime_cairo_get_miter_limit( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_miter_limit",0xf5108dcd,"lime.graphics.cairo.Cairo.lime_cairo_get_miter_limit","lime/graphics/cairo/Cairo.hx",902,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(902)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_miter_limit.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_miter_limit,return )

int Cairo_obj::lime_cairo_get_operator( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_operator",0xb5b39698,"lime.graphics.cairo.Cairo.lime_cairo_get_operator","lime/graphics/cairo/Cairo.hx",903,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(903)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_operator.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_operator,return )

Dynamic Cairo_obj::lime_cairo_get_source( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_source",0xbcc9c6cf,"lime.graphics.cairo.Cairo.lime_cairo_get_source","lime/graphics/cairo/Cairo.hx",904,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(904)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(904)
	{
		HX_STACK_LINE(904)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_source.call(hx::DynamicPtr(handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(904)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(904)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(904)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(904)
	return tmp;
	HX_STACK_LINE(904)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_source,return )

Dynamic Cairo_obj::lime_cairo_get_target( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_target",0x11850945,"lime.graphics.cairo.Cairo.lime_cairo_get_target","lime/graphics/cairo/Cairo.hx",905,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(905)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(905)
	{
		HX_STACK_LINE(905)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_target.call(hx::DynamicPtr(handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(905)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(905)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(905)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(905)
	return tmp;
	HX_STACK_LINE(905)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_target,return )

Float Cairo_obj::lime_cairo_get_tolerance( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_get_tolerance",0xdaa75799,"lime.graphics.cairo.Cairo.lime_cairo_get_tolerance","lime/graphics/cairo/Cairo.hx",906,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(906)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_get_tolerance.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_get_tolerance,return )

bool Cairo_obj::lime_cairo_has_current_point( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_has_current_point",0x624fe6da,"lime.graphics.cairo.Cairo.lime_cairo_has_current_point","lime/graphics/cairo/Cairo.hx",907,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(907)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_has_current_point.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_has_current_point,return )

Void Cairo_obj::lime_cairo_identity_matrix( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_identity_matrix",0x53186457,"lime.graphics.cairo.Cairo.lime_cairo_identity_matrix","lime/graphics/cairo/Cairo.hx",908,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(908)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_identity_matrix.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_identity_matrix,(void))

bool Cairo_obj::lime_cairo_in_clip( Dynamic handle,Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_in_clip",0x72e7919f,"lime.graphics.cairo.Cairo.lime_cairo_in_clip","lime/graphics/cairo/Cairo.hx",909,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(909)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_in_clip.call(hx::DynamicPtr(handle),x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,lime_cairo_in_clip,return )

bool Cairo_obj::lime_cairo_in_fill( Dynamic handle,Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_in_fill",0x74e0f152,"lime.graphics.cairo.Cairo.lime_cairo_in_fill","lime/graphics/cairo/Cairo.hx",910,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(910)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_in_fill.call(hx::DynamicPtr(handle),x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,lime_cairo_in_fill,return )

bool Cairo_obj::lime_cairo_in_stroke( Dynamic handle,Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_in_stroke",0xb0036847,"lime.graphics.cairo.Cairo.lime_cairo_in_stroke","lime/graphics/cairo/Cairo.hx",911,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(911)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_in_stroke.call(hx::DynamicPtr(handle),x,y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,lime_cairo_in_stroke,return )

Void Cairo_obj::lime_cairo_line_to( Dynamic handle,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_line_to",0x942a751b,"lime.graphics.cairo.Cairo.lime_cairo_line_to","lime/graphics/cairo/Cairo.hx",912,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(912)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_line_to.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,lime_cairo_line_to,(void))

Void Cairo_obj::lime_cairo_mask( Dynamic handle,Dynamic pattern){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_mask",0x9546a4d7,"lime.graphics.cairo.Cairo.lime_cairo_mask","lime/graphics/cairo/Cairo.hx",913,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(pattern,"pattern")
		HX_STACK_LINE(913)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_mask.call(hx::DynamicPtr(handle),hx::DynamicPtr(pattern));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_mask,(void))

Void Cairo_obj::lime_cairo_mask_surface( Dynamic handle,Dynamic surface,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_mask_surface",0xb24b9385,"lime.graphics.cairo.Cairo.lime_cairo_mask_surface","lime/graphics/cairo/Cairo.hx",914,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(914)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_mask_surface.call(hx::DynamicPtr(handle),hx::DynamicPtr(surface),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,lime_cairo_mask_surface,(void))

Void Cairo_obj::lime_cairo_move_to( Dynamic handle,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_move_to",0xbf18ba1e,"lime.graphics.cairo.Cairo.lime_cairo_move_to","lime/graphics/cairo/Cairo.hx",915,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(915)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_move_to.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,lime_cairo_move_to,(void))

Void Cairo_obj::lime_cairo_new_path( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_new_path",0x0d080a8f,"lime.graphics.cairo.Cairo.lime_cairo_new_path","lime/graphics/cairo/Cairo.hx",916,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(916)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_new_path.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_new_path,(void))

Void Cairo_obj::lime_cairo_paint( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_paint",0xc2b5c153,"lime.graphics.cairo.Cairo.lime_cairo_paint","lime/graphics/cairo/Cairo.hx",917,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(917)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_paint.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_paint,(void))

Void Cairo_obj::lime_cairo_paint_with_alpha( Dynamic handle,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_paint_with_alpha",0x495de3d1,"lime.graphics.cairo.Cairo.lime_cairo_paint_with_alpha","lime/graphics/cairo/Cairo.hx",918,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(918)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_paint_with_alpha.call(hx::DynamicPtr(handle),alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_paint_with_alpha,(void))

Dynamic Cairo_obj::lime_cairo_pop_group( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_pop_group",0xf563e306,"lime.graphics.cairo.Cairo.lime_cairo_pop_group","lime/graphics/cairo/Cairo.hx",919,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(919)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(919)
	{
		HX_STACK_LINE(919)
		::hx::Object * inVal = ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_pop_group.call(hx::DynamicPtr(handle));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(919)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(919)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(919)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(919)
	return tmp;
	HX_STACK_LINE(919)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_pop_group,return )

Void Cairo_obj::lime_cairo_pop_group_to_source( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_pop_group_to_source",0x4c0274a6,"lime.graphics.cairo.Cairo.lime_cairo_pop_group_to_source","lime/graphics/cairo/Cairo.hx",920,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(920)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_pop_group_to_source.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_pop_group_to_source,(void))

Void Cairo_obj::lime_cairo_push_group( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_push_group",0x4f379205,"lime.graphics.cairo.Cairo.lime_cairo_push_group","lime/graphics/cairo/Cairo.hx",921,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(921)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_push_group.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_push_group,(void))

Void Cairo_obj::lime_cairo_push_group_with_content( Dynamic handle,int content){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_push_group_with_content",0x55fd347a,"lime.graphics.cairo.Cairo.lime_cairo_push_group_with_content","lime/graphics/cairo/Cairo.hx",922,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(922)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_push_group_with_content.call(hx::DynamicPtr(handle),content);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_push_group_with_content,(void))

Void Cairo_obj::lime_cairo_rectangle( Dynamic handle,Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_rectangle",0x31235c64,"lime.graphics.cairo.Cairo.lime_cairo_rectangle","lime/graphics/cairo/Cairo.hx",923,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(923)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rectangle.call(hx::DynamicPtr(handle),x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,lime_cairo_rectangle,(void))

Void Cairo_obj::lime_cairo_rel_curve_to( Dynamic handle,Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_rel_curve_to",0x2afa781c,"lime.graphics.cairo.Cairo.lime_cairo_rel_curve_to","lime/graphics/cairo/Cairo.hx",924,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(dx1,"dx1")
		HX_STACK_ARG(dy1,"dy1")
		HX_STACK_ARG(dx2,"dx2")
		HX_STACK_ARG(dy2,"dy2")
		HX_STACK_ARG(dx3,"dx3")
		HX_STACK_ARG(dy3,"dy3")
		HX_STACK_LINE(924)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rel_curve_to.call(hx::DynamicPtr(handle),dx1,dy1,dx2,dy2,dx3,dy3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Cairo_obj,lime_cairo_rel_curve_to,(void))

Void Cairo_obj::lime_cairo_rel_line_to( Dynamic handle,Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_rel_line_to",0xcc244775,"lime.graphics.cairo.Cairo.lime_cairo_rel_line_to","lime/graphics/cairo/Cairo.hx",925,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(925)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rel_line_to.call(hx::DynamicPtr(handle),dx,dy);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,lime_cairo_rel_line_to,(void))

Void Cairo_obj::lime_cairo_rel_move_to( Dynamic handle,Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_rel_move_to",0xf7128c78,"lime.graphics.cairo.Cairo.lime_cairo_rel_move_to","lime/graphics/cairo/Cairo.hx",926,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(926)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rel_move_to.call(hx::DynamicPtr(handle),dx,dy);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,lime_cairo_rel_move_to,(void))

Void Cairo_obj::lime_cairo_reset_clip( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_reset_clip",0xe452f8ab,"lime.graphics.cairo.Cairo.lime_cairo_reset_clip","lime/graphics/cairo/Cairo.hx",927,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(927)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_reset_clip.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_reset_clip,(void))

Void Cairo_obj::lime_cairo_restore( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_restore",0xdf350843,"lime.graphics.cairo.Cairo.lime_cairo_restore","lime/graphics/cairo/Cairo.hx",928,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(928)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_restore.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_restore,(void))

Void Cairo_obj::lime_cairo_rotate( Dynamic handle,Float amount){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_rotate",0x7fe1bb06,"lime.graphics.cairo.Cairo.lime_cairo_rotate","lime/graphics/cairo/Cairo.hx",929,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(929)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_rotate.call(hx::DynamicPtr(handle),amount);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_rotate,(void))

Void Cairo_obj::lime_cairo_save( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_save",0x993def28,"lime.graphics.cairo.Cairo.lime_cairo_save","lime/graphics/cairo/Cairo.hx",930,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(930)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_save.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_save,(void))

Void Cairo_obj::lime_cairo_scale( Dynamic handle,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_scale",0x7e35d83f,"lime.graphics.cairo.Cairo.lime_cairo_scale","lime/graphics/cairo/Cairo.hx",931,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(931)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_scale.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,lime_cairo_scale,(void))

Void Cairo_obj::lime_cairo_set_antialias( Dynamic handle,int cap){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_antialias",0x621ad346,"lime.graphics.cairo.Cairo.lime_cairo_set_antialias","lime/graphics/cairo/Cairo.hx",932,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(932)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_antialias.call(hx::DynamicPtr(handle),cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_antialias,(void))

Void Cairo_obj::lime_cairo_set_dash( Dynamic handle,Dynamic dash){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_dash",0xf0039fba,"lime.graphics.cairo.Cairo.lime_cairo_set_dash","lime/graphics/cairo/Cairo.hx",933,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(dash,"dash")
		HX_STACK_LINE(933)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_dash.call(hx::DynamicPtr(handle),hx::DynamicPtr(dash));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_dash,(void))

Void Cairo_obj::lime_cairo_set_fill_rule( Dynamic handle,int cap){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_fill_rule",0x266f4810,"lime.graphics.cairo.Cairo.lime_cairo_set_fill_rule","lime/graphics/cairo/Cairo.hx",934,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(934)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_fill_rule.call(hx::DynamicPtr(handle),cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_fill_rule,(void))

Void Cairo_obj::lime_cairo_set_font_face( Dynamic handle,Dynamic face){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_font_face",0xfba600e5,"lime.graphics.cairo.Cairo.lime_cairo_set_font_face","lime/graphics/cairo/Cairo.hx",935,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(face,"face")
		HX_STACK_LINE(935)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_font_face.call(hx::DynamicPtr(handle),hx::DynamicPtr(face));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_font_face,(void))

Void Cairo_obj::lime_cairo_set_font_options( Dynamic handle,Dynamic options){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_font_options",0x29dcc416,"lime.graphics.cairo.Cairo.lime_cairo_set_font_options","lime/graphics/cairo/Cairo.hx",936,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(options,"options")
		HX_STACK_LINE(936)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_font_options.call(hx::DynamicPtr(handle),hx::DynamicPtr(options));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_font_options,(void))

Void Cairo_obj::lime_cairo_set_font_size( Dynamic handle,Float size){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_font_size",0x0443ed09,"lime.graphics.cairo.Cairo.lime_cairo_set_font_size","lime/graphics/cairo/Cairo.hx",937,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(937)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_font_size.call(hx::DynamicPtr(handle),size);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_font_size,(void))

Void Cairo_obj::lime_cairo_set_line_cap( Dynamic handle,int cap){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_line_cap",0x17a0796f,"lime.graphics.cairo.Cairo.lime_cairo_set_line_cap","lime/graphics/cairo/Cairo.hx",938,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(938)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_line_cap.call(hx::DynamicPtr(handle),cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_line_cap,(void))

Void Cairo_obj::lime_cairo_set_line_join( Dynamic handle,int join){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_line_join",0x9974dfed,"lime.graphics.cairo.Cairo.lime_cairo_set_line_join","lime/graphics/cairo/Cairo.hx",939,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(join,"join")
		HX_STACK_LINE(939)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_line_join.call(hx::DynamicPtr(handle),join);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_line_join,(void))

Void Cairo_obj::lime_cairo_set_line_width( Dynamic handle,Float width){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_line_width",0x25098ca3,"lime.graphics.cairo.Cairo.lime_cairo_set_line_width","lime/graphics/cairo/Cairo.hx",940,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(940)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_line_width.call(hx::DynamicPtr(handle),width);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_line_width,(void))

Void Cairo_obj::lime_cairo_set_matrix( Dynamic handle,Dynamic matrix){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_matrix",0x49ddeaa9,"lime.graphics.cairo.Cairo.lime_cairo_set_matrix","lime/graphics/cairo/Cairo.hx",941,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(941)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_matrix.call(hx::DynamicPtr(handle),hx::DynamicPtr(matrix));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_matrix,(void))

Void Cairo_obj::lime_cairo_set_miter_limit( Dynamic handle,Float miterLimit){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_miter_limit",0xf0dc0ad9,"lime.graphics.cairo.Cairo.lime_cairo_set_miter_limit","lime/graphics/cairo/Cairo.hx",942,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(miterLimit,"miterLimit")
		HX_STACK_LINE(942)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_miter_limit.call(hx::DynamicPtr(handle),miterLimit);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_miter_limit,(void))

Void Cairo_obj::lime_cairo_set_operator( Dynamic handle,int op){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_operator",0xcaacba0c,"lime.graphics.cairo.Cairo.lime_cairo_set_operator","lime/graphics/cairo/Cairo.hx",943,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(op,"op")
		HX_STACK_LINE(943)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_operator.call(hx::DynamicPtr(handle),op);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_operator,(void))

Void Cairo_obj::lime_cairo_set_source( Dynamic handle,Dynamic pattern){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_source",0xc0476543,"lime.graphics.cairo.Cairo.lime_cairo_set_source","lime/graphics/cairo/Cairo.hx",944,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(pattern,"pattern")
		HX_STACK_LINE(944)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_source.call(hx::DynamicPtr(handle),hx::DynamicPtr(pattern));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_source,(void))

Void Cairo_obj::lime_cairo_set_source_rgb( Dynamic handle,Float r,Float g,Float b){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_source_rgb",0x3b58e2d1,"lime.graphics.cairo.Cairo.lime_cairo_set_source_rgb","lime/graphics/cairo/Cairo.hx",945,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(945)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_source_rgb.call(hx::DynamicPtr(handle),r,g,b);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,lime_cairo_set_source_rgb,(void))

Void Cairo_obj::lime_cairo_set_source_rgba( Dynamic handle,Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_source_rgba",0xb26d9470,"lime.graphics.cairo.Cairo.lime_cairo_set_source_rgba","lime/graphics/cairo/Cairo.hx",946,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(946)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_source_rgba.call(hx::DynamicPtr(handle),r,g,b,a);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,lime_cairo_set_source_rgba,(void))

Void Cairo_obj::lime_cairo_set_source_surface( Dynamic handle,Dynamic surface,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_source_surface",0xe9e49ff1,"lime.graphics.cairo.Cairo.lime_cairo_set_source_surface","lime/graphics/cairo/Cairo.hx",947,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(947)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_source_surface.call(hx::DynamicPtr(handle),hx::DynamicPtr(surface),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,lime_cairo_set_source_surface,(void))

Void Cairo_obj::lime_cairo_set_tolerance( Dynamic handle,Float tolerance){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_set_tolerance",0x1fad39a5,"lime.graphics.cairo.Cairo.lime_cairo_set_tolerance","lime/graphics/cairo/Cairo.hx",948,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(tolerance,"tolerance")
		HX_STACK_LINE(948)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_set_tolerance.call(hx::DynamicPtr(handle),tolerance);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_set_tolerance,(void))

Void Cairo_obj::lime_cairo_show_page( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_show_page",0xb0407446,"lime.graphics.cairo.Cairo.lime_cairo_show_page","lime/graphics/cairo/Cairo.hx",949,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(949)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_show_page.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_show_page,(void))

Void Cairo_obj::lime_cairo_show_text( Dynamic handle,::String text){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_show_text",0xb2e866a4,"lime.graphics.cairo.Cairo.lime_cairo_show_text","lime/graphics/cairo/Cairo.hx",950,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(950)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_show_text.call(hx::DynamicPtr(handle),text);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_show_text,(void))

int Cairo_obj::lime_cairo_status( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_status",0xbabd5bdd,"lime.graphics.cairo.Cairo.lime_cairo_status","lime/graphics/cairo/Cairo.hx",951,0x0918a4c7)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(951)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_status.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_status,return )

Void Cairo_obj::lime_cairo_stroke( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_stroke",0xc5f62863,"lime.graphics.cairo.Cairo.lime_cairo_stroke","lime/graphics/cairo/Cairo.hx",952,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(952)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_stroke.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_stroke,(void))

Void Cairo_obj::lime_cairo_stroke_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_stroke_extents",0xa1cef82d,"lime.graphics.cairo.Cairo.lime_cairo_stroke_extents","lime/graphics/cairo/Cairo.hx",953,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(953)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_stroke_extents.call(hx::DynamicPtr(handle),x1,y1,x2,y2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,lime_cairo_stroke_extents,(void))

Void Cairo_obj::lime_cairo_stroke_preserve( Dynamic handle){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_stroke_preserve",0x79419668,"lime.graphics.cairo.Cairo.lime_cairo_stroke_preserve","lime/graphics/cairo/Cairo.hx",954,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(954)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_stroke_preserve.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,lime_cairo_stroke_preserve,(void))

Void Cairo_obj::lime_cairo_transform( Dynamic handle,Dynamic matrix){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_transform",0x5d39b5a1,"lime.graphics.cairo.Cairo.lime_cairo_transform","lime/graphics/cairo/Cairo.hx",955,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(955)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_transform.call(hx::DynamicPtr(handle),hx::DynamicPtr(matrix));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lime_cairo_transform,(void))

Void Cairo_obj::lime_cairo_translate( Dynamic handle,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_translate",0x61265f83,"lime.graphics.cairo.Cairo.lime_cairo_translate","lime/graphics/cairo/Cairo.hx",956,0x0918a4c7)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(956)
		::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_translate.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,lime_cairo_translate,(void))

int Cairo_obj::lime_cairo_version( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_version",0xf176880d,"lime.graphics.cairo.Cairo.lime_cairo_version","lime/graphics/cairo/Cairo.hx",957,0x0918a4c7)
	HX_STACK_LINE(957)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_version.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,lime_cairo_version,return )

::String Cairo_obj::lime_cairo_version_string( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","lime_cairo_version_string",0xfd217e03,"lime.graphics.cairo.Cairo.lime_cairo_version_string","lime/graphics/cairo/Cairo.hx",958,0x0918a4c7)
	HX_STACK_LINE(958)
	return ::lime::graphics::cairo::Cairo_obj::cffi_lime_cairo_version_string.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,lime_cairo_version_string,return )

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_arc;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_arc_negative;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_clip;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_clip_preserve;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_clip_extents;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_close_path;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_copy_page;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_create;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_curve_to;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_fill;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_fill_extents;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_fill_preserve;

::cpp::Function< int ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_antialias;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_current_point;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_dash;

::cpp::Function< int ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_dash_count;

::cpp::Function< int ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_fill_rule;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_font_face;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_font_options;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_group_target;

::cpp::Function< int ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_line_cap;

::cpp::Function< int ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_line_join;

::cpp::Function< Float ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_line_width;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_matrix;

::cpp::Function< Float ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_miter_limit;

::cpp::Function< int ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_operator;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_source;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_target;

::cpp::Function< Float ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_get_tolerance;

::cpp::Function< bool ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_has_current_point;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_identity_matrix;

::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_in_clip;

::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_in_fill;

::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_in_stroke;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_line_to;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > Cairo_obj::cffi_lime_cairo_mask;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_mask_surface;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_move_to;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_new_path;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_paint;

::cpp::Function< void ( ::hx::Object * ,Float ) > Cairo_obj::cffi_lime_cairo_paint_with_alpha;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_pop_group;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_pop_group_to_source;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_push_group;

::cpp::Function< void ( ::hx::Object * ,int ) > Cairo_obj::cffi_lime_cairo_push_group_with_content;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_rectangle;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_rel_curve_to;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_rel_line_to;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_rel_move_to;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_reset_clip;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_restore;

::cpp::Function< void ( ::hx::Object * ,Float ) > Cairo_obj::cffi_lime_cairo_rotate;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_save;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_scale;

::cpp::Function< void ( ::hx::Object * ,int ) > Cairo_obj::cffi_lime_cairo_set_antialias;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > Cairo_obj::cffi_lime_cairo_set_dash;

::cpp::Function< void ( ::hx::Object * ,int ) > Cairo_obj::cffi_lime_cairo_set_fill_rule;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > Cairo_obj::cffi_lime_cairo_set_font_face;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > Cairo_obj::cffi_lime_cairo_set_font_options;

::cpp::Function< void ( ::hx::Object * ,Float ) > Cairo_obj::cffi_lime_cairo_set_font_size;

::cpp::Function< void ( ::hx::Object * ,int ) > Cairo_obj::cffi_lime_cairo_set_line_cap;

::cpp::Function< void ( ::hx::Object * ,int ) > Cairo_obj::cffi_lime_cairo_set_line_join;

::cpp::Function< void ( ::hx::Object * ,Float ) > Cairo_obj::cffi_lime_cairo_set_line_width;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > Cairo_obj::cffi_lime_cairo_set_matrix;

::cpp::Function< void ( ::hx::Object * ,Float ) > Cairo_obj::cffi_lime_cairo_set_miter_limit;

::cpp::Function< void ( ::hx::Object * ,int ) > Cairo_obj::cffi_lime_cairo_set_operator;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > Cairo_obj::cffi_lime_cairo_set_source;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_set_source_rgb;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_set_source_rgba;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_set_source_surface;

::cpp::Function< void ( ::hx::Object * ,Float ) > Cairo_obj::cffi_lime_cairo_set_tolerance;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_show_page;

::cpp::Function< void ( ::hx::Object * ,::String ) > Cairo_obj::cffi_lime_cairo_show_text;

::cpp::Function< int ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_status;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_stroke;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_stroke_extents;

::cpp::Function< void ( ::hx::Object * ) > Cairo_obj::cffi_lime_cairo_stroke_preserve;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > Cairo_obj::cffi_lime_cairo_transform;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > Cairo_obj::cffi_lime_cairo_translate;

::cpp::Function< int ( ) > Cairo_obj::cffi_lime_cairo_version;

::cpp::Function< ::String ( ) > Cairo_obj::cffi_lime_cairo_version_string;


Cairo_obj::Cairo_obj()
{
}

void Cairo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cairo);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Cairo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic Cairo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arc") ) { return arc_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dash") ) { if (inCallProp == hx::paccAlways) return get_dash(); }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"mask") ) { return mask_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return get_matrix(); }
		if (HX_FIELD_EQ(inName,"source") ) { if (inCallProp == hx::paccAlways) return get_source(); }
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp == hx::paccAlways ? get_target() : target; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"inClip") ) { return inClip_dyn(); }
		if (HX_FIELD_EQ(inName,"inFill") ) { return inFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"status") ) { return status_dyn(); }
		if (HX_FIELD_EQ(inName,"stroke") ) { return stroke_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { if (inCallProp == hx::paccAlways) return get_lineCap(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"newPath") ) { return newPath_dyn(); }
		if (HX_FIELD_EQ(inName,"restore") ) { return restore_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRule") ) { if (inCallProp == hx::paccAlways) return get_fillRule(); }
		if (HX_FIELD_EQ(inName,"fontFace") ) { if (inCallProp == hx::paccAlways) return get_fontFace(); }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { if (inCallProp == hx::paccAlways) return get_lineJoin(); }
		if (HX_FIELD_EQ(inName,"operator") ) { if (inCallProp == hx::paccAlways) return get_operator(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"copyPage") ) { return copyPage_dyn(); }
		if (HX_FIELD_EQ(inName,"inStroke") ) { return inStroke_dyn(); }
		if (HX_FIELD_EQ(inName,"popGroup") ) { return popGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"recreate") ) { return recreate_dyn(); }
		if (HX_FIELD_EQ(inName,"showPage") ) { return showPage_dyn(); }
		if (HX_FIELD_EQ(inName,"showText") ) { return showText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dash") ) { return get_dash_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dash") ) { return set_dash_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { if (inCallProp == hx::paccAlways) return get_antialias(); }
		if (HX_FIELD_EQ(inName,"dashCount") ) { if (inCallProp == hx::paccAlways) return get_dashCount(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { if (inCallProp == hx::paccAlways) return get_lineWidth(); }
		if (HX_FIELD_EQ(inName,"tolerance") ) { if (inCallProp == hx::paccAlways) return get_tolerance(); }
		if (HX_FIELD_EQ(inName,"closePath") ) { return closePath_dyn(); }
		if (HX_FIELD_EQ(inName,"pushGroup") ) { return pushGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"rectangle") ) { return rectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"relLineTo") ) { return relLineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"relMoveTo") ) { return relMoveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"resetClip") ) { return resetClip_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { if (inCallProp == hx::paccAlways) return get_miterLimit(); }
		if (HX_FIELD_EQ(inName,"relCurveTo") ) { return relCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_source") ) { return get_source_dyn(); }
		if (HX_FIELD_EQ(inName,"set_source") ) { return set_source_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fontOptions") ) { if (inCallProp == hx::paccAlways) return get_fontOptions(); }
		if (HX_FIELD_EQ(inName,"groupTarget") ) { if (inCallProp == hx::paccAlways) return get_groupTarget(); }
		if (HX_FIELD_EQ(inName,"arcNegative") ) { return arcNegative_dyn(); }
		if (HX_FIELD_EQ(inName,"clipExtents") ) { return clipExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"fillExtents") ) { return fillExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"maskSurface") ) { return maskSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"setFontSize") ) { return setFontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineCap") ) { return get_lineCap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineCap") ) { return set_lineCap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentPoint") ) { if (inCallProp == hx::paccAlways) return get_currentPoint(); }
		if (HX_FIELD_EQ(inName,"clipPreserve") ) { return clipPreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"fillPreserve") ) { return fillPreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"setSourceRGB") ) { return setSourceRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fillRule") ) { return get_fillRule_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fillRule") ) { return set_fillRule_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontFace") ) { return get_fontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontFace") ) { return set_fontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineJoin") ) { return get_lineJoin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineJoin") ) { return set_lineJoin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_operator") ) { return get_operator_dyn(); }
		if (HX_FIELD_EQ(inName,"set_operator") ) { return set_operator_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setSourceRGBA") ) { return setSourceRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeExtents") ) { return strokeExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antialias") ) { return get_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialias") ) { return set_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dashCount") ) { return get_dashCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineWidth") ) { return get_lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineWidth") ) { return set_lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tolerance") ) { return get_tolerance_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tolerance") ) { return set_tolerance_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"identityMatrix") ) { return identityMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"paintWithAlpha") ) { return paintWithAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"strokePreserve") ) { return strokePreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"get_miterLimit") ) { return get_miterLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"set_miterLimit") ) { return set_miterLimit_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasCurrentPoint") ) { if (inCallProp == hx::paccAlways) return get_hasCurrentPoint(); }
		if (HX_FIELD_EQ(inName,"get_fontOptions") ) { return get_fontOptions_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontOptions") ) { return set_fontOptions_dyn(); }
		if (HX_FIELD_EQ(inName,"get_groupTarget") ) { return get_groupTarget_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"popGroupToSource") ) { return popGroupToSource_dyn(); }
		if (HX_FIELD_EQ(inName,"setSourceSurface") ) { return setSourceSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentPoint") ) { return get_currentPoint_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_hasCurrentPoint") ) { return get_hasCurrentPoint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pushGroupWithContent") ) { return pushGroupWithContent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Cairo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = inCallProp == hx::paccAlways ? get_version() : version; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { outValue = inCallProp == hx::paccAlways ? get_versionString() : versionString; return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc") ) { outValue = lime_cairo_arc_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip") ) { outValue = lime_cairo_clip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill") ) { outValue = lime_cairo_fill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask") ) { outValue = lime_cairo_mask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_save") ) { outValue = lime_cairo_save_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_cairo_paint") ) { outValue = lime_cairo_paint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_scale") ) { outValue = lime_cairo_scale_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_versionString") ) { outValue = get_versionString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_create") ) { outValue = lime_cairo_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rotate") ) { outValue = lime_cairo_rotate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_status") ) { outValue = lime_cairo_status_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke") ) { outValue = lime_cairo_stroke_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_cairo_in_clip") ) { outValue = lime_cairo_in_clip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_fill") ) { outValue = lime_cairo_in_fill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_line_to") ) { outValue = lime_cairo_line_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_move_to") ) { outValue = lime_cairo_move_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_restore") ) { outValue = lime_cairo_restore_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_version") ) { outValue = lime_cairo_version_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_cairo_curve_to") ) { outValue = lime_cairo_curve_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash") ) { outValue = lime_cairo_get_dash_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_new_path") ) { outValue = lime_cairo_new_path_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_dash") ) { outValue = lime_cairo_set_dash_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_arc") ) { outValue = cffi_lime_cairo_arc; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_cairo_copy_page") ) { outValue = lime_cairo_copy_page_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_stroke") ) { outValue = lime_cairo_in_stroke_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group") ) { outValue = lime_cairo_pop_group_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rectangle") ) { outValue = lime_cairo_rectangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_page") ) { outValue = lime_cairo_show_page_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_text") ) { outValue = lime_cairo_show_text_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_transform") ) { outValue = lime_cairo_transform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_translate") ) { outValue = lime_cairo_translate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip") ) { outValue = cffi_lime_cairo_clip; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill") ) { outValue = cffi_lime_cairo_fill; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_mask") ) { outValue = cffi_lime_cairo_mask; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_save") ) { outValue = cffi_lime_cairo_save; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_cairo_close_path") ) { outValue = lime_cairo_close_path_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_matrix") ) { outValue = lime_cairo_get_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_source") ) { outValue = lime_cairo_get_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_target") ) { outValue = lime_cairo_get_target_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group") ) { outValue = lime_cairo_push_group_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_reset_clip") ) { outValue = lime_cairo_reset_clip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_matrix") ) { outValue = lime_cairo_set_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source") ) { outValue = lime_cairo_set_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_paint") ) { outValue = cffi_lime_cairo_paint; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_scale") ) { outValue = cffi_lime_cairo_scale; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_line_to") ) { outValue = lime_cairo_rel_line_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_move_to") ) { outValue = lime_cairo_rel_move_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_create") ) { outValue = cffi_lime_cairo_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rotate") ) { outValue = cffi_lime_cairo_rotate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_status") ) { outValue = cffi_lime_cairo_status; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke") ) { outValue = cffi_lime_cairo_stroke; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc_negative") ) { outValue = lime_cairo_arc_negative_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_extents") ) { outValue = lime_cairo_clip_extents_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_extents") ) { outValue = lime_cairo_fill_extents_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_cap") ) { outValue = lime_cairo_get_line_cap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_operator") ) { outValue = lime_cairo_get_operator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask_surface") ) { outValue = lime_cairo_mask_surface_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_curve_to") ) { outValue = lime_cairo_rel_curve_to_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_cap") ) { outValue = lime_cairo_set_line_cap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_operator") ) { outValue = lime_cairo_set_operator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_clip") ) { outValue = cffi_lime_cairo_in_clip; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_fill") ) { outValue = cffi_lime_cairo_in_fill; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_line_to") ) { outValue = cffi_lime_cairo_line_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_move_to") ) { outValue = cffi_lime_cairo_move_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_restore") ) { outValue = cffi_lime_cairo_restore; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_version") ) { outValue = cffi_lime_cairo_version; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_preserve") ) { outValue = lime_cairo_clip_preserve_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_preserve") ) { outValue = lime_cairo_fill_preserve_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_antialias") ) { outValue = lime_cairo_get_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_fill_rule") ) { outValue = lime_cairo_get_fill_rule_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_font_face") ) { outValue = lime_cairo_get_font_face_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_join") ) { outValue = lime_cairo_get_line_join_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_tolerance") ) { outValue = lime_cairo_get_tolerance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_antialias") ) { outValue = lime_cairo_set_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_fill_rule") ) { outValue = lime_cairo_set_fill_rule_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_face") ) { outValue = lime_cairo_set_font_face_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_size") ) { outValue = lime_cairo_set_font_size_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_join") ) { outValue = lime_cairo_set_line_join_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_tolerance") ) { outValue = lime_cairo_set_tolerance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_curve_to") ) { outValue = cffi_lime_cairo_curve_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_dash") ) { outValue = cffi_lime_cairo_get_dash; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_new_path") ) { outValue = cffi_lime_cairo_new_path; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_dash") ) { outValue = cffi_lime_cairo_set_dash; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash_count") ) { outValue = lime_cairo_get_dash_count_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_width") ) { outValue = lime_cairo_get_line_width_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_width") ) { outValue = lime_cairo_set_line_width_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgb") ) { outValue = lime_cairo_set_source_rgb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_extents") ) { outValue = lime_cairo_stroke_extents_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_version_string") ) { outValue = lime_cairo_version_string_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_copy_page") ) { outValue = cffi_lime_cairo_copy_page; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_stroke") ) { outValue = cffi_lime_cairo_in_stroke; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pop_group") ) { outValue = cffi_lime_cairo_pop_group; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rectangle") ) { outValue = cffi_lime_cairo_rectangle; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_page") ) { outValue = cffi_lime_cairo_show_page; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_text") ) { outValue = cffi_lime_cairo_show_text; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_transform") ) { outValue = cffi_lime_cairo_transform; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_translate") ) { outValue = cffi_lime_cairo_translate; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_miter_limit") ) { outValue = lime_cairo_get_miter_limit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_identity_matrix") ) { outValue = lime_cairo_identity_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_miter_limit") ) { outValue = lime_cairo_set_miter_limit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgba") ) { outValue = lime_cairo_set_source_rgba_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_preserve") ) { outValue = lime_cairo_stroke_preserve_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_close_path") ) { outValue = cffi_lime_cairo_close_path; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_matrix") ) { outValue = cffi_lime_cairo_get_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_source") ) { outValue = cffi_lime_cairo_get_source; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_target") ) { outValue = cffi_lime_cairo_get_target; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_push_group") ) { outValue = cffi_lime_cairo_push_group; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_reset_clip") ) { outValue = cffi_lime_cairo_reset_clip; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_matrix") ) { outValue = cffi_lime_cairo_set_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source") ) { outValue = cffi_lime_cairo_set_source; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_font_options") ) { outValue = lime_cairo_get_font_options_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_group_target") ) { outValue = lime_cairo_get_group_target_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_paint_with_alpha") ) { outValue = lime_cairo_paint_with_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_options") ) { outValue = lime_cairo_set_font_options_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_line_to") ) { outValue = cffi_lime_cairo_rel_line_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_move_to") ) { outValue = cffi_lime_cairo_rel_move_to; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_current_point") ) { outValue = lime_cairo_get_current_point_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_has_current_point") ) { outValue = lime_cairo_has_current_point_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_arc_negative") ) { outValue = cffi_lime_cairo_arc_negative; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip_extents") ) { outValue = cffi_lime_cairo_clip_extents; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill_extents") ) { outValue = cffi_lime_cairo_fill_extents; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_cap") ) { outValue = cffi_lime_cairo_get_line_cap; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_operator") ) { outValue = cffi_lime_cairo_get_operator; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_mask_surface") ) { outValue = cffi_lime_cairo_mask_surface; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_curve_to") ) { outValue = cffi_lime_cairo_rel_curve_to; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_cap") ) { outValue = cffi_lime_cairo_set_line_cap; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_operator") ) { outValue = cffi_lime_cairo_set_operator; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_surface") ) { outValue = lime_cairo_set_source_surface_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip_preserve") ) { outValue = cffi_lime_cairo_clip_preserve; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill_preserve") ) { outValue = cffi_lime_cairo_fill_preserve; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_antialias") ) { outValue = cffi_lime_cairo_get_antialias; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_fill_rule") ) { outValue = cffi_lime_cairo_get_fill_rule; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_font_face") ) { outValue = cffi_lime_cairo_get_font_face; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_join") ) { outValue = cffi_lime_cairo_get_line_join; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_tolerance") ) { outValue = cffi_lime_cairo_get_tolerance; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_antialias") ) { outValue = cffi_lime_cairo_set_antialias; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_fill_rule") ) { outValue = cffi_lime_cairo_set_fill_rule; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_face") ) { outValue = cffi_lime_cairo_set_font_face; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_size") ) { outValue = cffi_lime_cairo_set_font_size; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_join") ) { outValue = cffi_lime_cairo_set_line_join; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_tolerance") ) { outValue = cffi_lime_cairo_set_tolerance; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group_to_source") ) { outValue = lime_cairo_pop_group_to_source_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_dash_count") ) { outValue = cffi_lime_cairo_get_dash_count; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_width") ) { outValue = cffi_lime_cairo_get_line_width; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_width") ) { outValue = cffi_lime_cairo_set_line_width; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_rgb") ) { outValue = cffi_lime_cairo_set_source_rgb; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke_extents") ) { outValue = cffi_lime_cairo_stroke_extents; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_version_string") ) { outValue = cffi_lime_cairo_version_string; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_miter_limit") ) { outValue = cffi_lime_cairo_get_miter_limit; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_identity_matrix") ) { outValue = cffi_lime_cairo_identity_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_miter_limit") ) { outValue = cffi_lime_cairo_set_miter_limit; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_rgba") ) { outValue = cffi_lime_cairo_set_source_rgba; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke_preserve") ) { outValue = cffi_lime_cairo_stroke_preserve; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_font_options") ) { outValue = cffi_lime_cairo_get_font_options; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_group_target") ) { outValue = cffi_lime_cairo_get_group_target; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_paint_with_alpha") ) { outValue = cffi_lime_cairo_paint_with_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_options") ) { outValue = cffi_lime_cairo_set_font_options; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_current_point") ) { outValue = cffi_lime_cairo_get_current_point; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_has_current_point") ) { outValue = cffi_lime_cairo_has_current_point; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group_with_content") ) { outValue = lime_cairo_push_group_with_content_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_surface") ) { outValue = cffi_lime_cairo_set_source_surface; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pop_group_to_source") ) { outValue = cffi_lime_cairo_pop_group_to_source; return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_push_group_with_content") ) { outValue = cffi_lime_cairo_push_group_with_content; return true;  }
	}
	return false;
}

Dynamic Cairo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dash") ) { if (inCallProp == hx::paccAlways) return set_dash(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue); }
		if (HX_FIELD_EQ(inName,"source") ) { if (inCallProp == hx::paccAlways) return set_source(inValue); }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { if (inCallProp == hx::paccAlways) return set_lineCap(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRule") ) { if (inCallProp == hx::paccAlways) return set_fillRule(inValue); }
		if (HX_FIELD_EQ(inName,"fontFace") ) { if (inCallProp == hx::paccAlways) return set_fontFace(inValue); }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { if (inCallProp == hx::paccAlways) return set_lineJoin(inValue); }
		if (HX_FIELD_EQ(inName,"operator") ) { if (inCallProp == hx::paccAlways) return set_operator(inValue); }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { if (inCallProp == hx::paccAlways) return set_antialias(inValue); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { if (inCallProp == hx::paccAlways) return set_lineWidth(inValue); }
		if (HX_FIELD_EQ(inName,"tolerance") ) { if (inCallProp == hx::paccAlways) return set_tolerance(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { if (inCallProp == hx::paccAlways) return set_miterLimit(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fontOptions") ) { if (inCallProp == hx::paccAlways) return set_fontOptions(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Cairo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { versionString=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_arc") ) { cffi_lime_cairo_arc=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip") ) { cffi_lime_cairo_clip=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill") ) { cffi_lime_cairo_fill=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_mask") ) { cffi_lime_cairo_mask=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_save") ) { cffi_lime_cairo_save=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_paint") ) { cffi_lime_cairo_paint=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_scale") ) { cffi_lime_cairo_scale=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_create") ) { cffi_lime_cairo_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rotate") ) { cffi_lime_cairo_rotate=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_status") ) { cffi_lime_cairo_status=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke") ) { cffi_lime_cairo_stroke=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_clip") ) { cffi_lime_cairo_in_clip=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_fill") ) { cffi_lime_cairo_in_fill=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_line_to") ) { cffi_lime_cairo_line_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_move_to") ) { cffi_lime_cairo_move_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_restore") ) { cffi_lime_cairo_restore=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_version") ) { cffi_lime_cairo_version=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_curve_to") ) { cffi_lime_cairo_curve_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_dash") ) { cffi_lime_cairo_get_dash=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_new_path") ) { cffi_lime_cairo_new_path=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_dash") ) { cffi_lime_cairo_set_dash=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_copy_page") ) { cffi_lime_cairo_copy_page=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_in_stroke") ) { cffi_lime_cairo_in_stroke=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pop_group") ) { cffi_lime_cairo_pop_group=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rectangle") ) { cffi_lime_cairo_rectangle=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_page") ) { cffi_lime_cairo_show_page=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_show_text") ) { cffi_lime_cairo_show_text=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_transform") ) { cffi_lime_cairo_transform=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_translate") ) { cffi_lime_cairo_translate=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_close_path") ) { cffi_lime_cairo_close_path=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_matrix") ) { cffi_lime_cairo_get_matrix=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_source") ) { cffi_lime_cairo_get_source=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_target") ) { cffi_lime_cairo_get_target=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_push_group") ) { cffi_lime_cairo_push_group=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_reset_clip") ) { cffi_lime_cairo_reset_clip=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_matrix") ) { cffi_lime_cairo_set_matrix=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source") ) { cffi_lime_cairo_set_source=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_line_to") ) { cffi_lime_cairo_rel_line_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_move_to") ) { cffi_lime_cairo_rel_move_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_arc_negative") ) { cffi_lime_cairo_arc_negative=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip_extents") ) { cffi_lime_cairo_clip_extents=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill_extents") ) { cffi_lime_cairo_fill_extents=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_cap") ) { cffi_lime_cairo_get_line_cap=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_operator") ) { cffi_lime_cairo_get_operator=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_mask_surface") ) { cffi_lime_cairo_mask_surface=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_rel_curve_to") ) { cffi_lime_cairo_rel_curve_to=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_cap") ) { cffi_lime_cairo_set_line_cap=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_operator") ) { cffi_lime_cairo_set_operator=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_clip_preserve") ) { cffi_lime_cairo_clip_preserve=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_fill_preserve") ) { cffi_lime_cairo_fill_preserve=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_antialias") ) { cffi_lime_cairo_get_antialias=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_fill_rule") ) { cffi_lime_cairo_get_fill_rule=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_font_face") ) { cffi_lime_cairo_get_font_face=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_join") ) { cffi_lime_cairo_get_line_join=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_tolerance") ) { cffi_lime_cairo_get_tolerance=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_antialias") ) { cffi_lime_cairo_set_antialias=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_fill_rule") ) { cffi_lime_cairo_set_fill_rule=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_face") ) { cffi_lime_cairo_set_font_face=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_size") ) { cffi_lime_cairo_set_font_size=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_join") ) { cffi_lime_cairo_set_line_join=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_tolerance") ) { cffi_lime_cairo_set_tolerance=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_dash_count") ) { cffi_lime_cairo_get_dash_count=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_line_width") ) { cffi_lime_cairo_get_line_width=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_line_width") ) { cffi_lime_cairo_set_line_width=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_rgb") ) { cffi_lime_cairo_set_source_rgb=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke_extents") ) { cffi_lime_cairo_stroke_extents=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_version_string") ) { cffi_lime_cairo_version_string=ioValue.Cast< ::cpp::Function< ::String ( ) > >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_miter_limit") ) { cffi_lime_cairo_get_miter_limit=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_identity_matrix") ) { cffi_lime_cairo_identity_matrix=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_miter_limit") ) { cffi_lime_cairo_set_miter_limit=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_rgba") ) { cffi_lime_cairo_set_source_rgba=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_stroke_preserve") ) { cffi_lime_cairo_stroke_preserve=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_font_options") ) { cffi_lime_cairo_get_font_options=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_group_target") ) { cffi_lime_cairo_get_group_target=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_paint_with_alpha") ) { cffi_lime_cairo_paint_with_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_font_options") ) { cffi_lime_cairo_set_font_options=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_get_current_point") ) { cffi_lime_cairo_get_current_point=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_has_current_point") ) { cffi_lime_cairo_has_current_point=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_set_source_surface") ) { cffi_lime_cairo_set_source_surface=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_pop_group_to_source") ) { cffi_lime_cairo_pop_group_to_source=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"cffi_lime_cairo_push_group_with_content") ) { cffi_lime_cairo_push_group_with_content=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
	}
	return false;
}

void Cairo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antialias","\xae","\xd6","\xe9","\x75"));
	outFields->push(HX_HCSTRING("currentPoint","\x57","\x99","\x9b","\x0d"));
	outFields->push(HX_HCSTRING("dash","\x52","\x55","\x63","\x42"));
	outFields->push(HX_HCSTRING("dashCount","\x1d","\xd6","\x3c","\x33"));
	outFields->push(HX_HCSTRING("fillRule","\x1f","\x71","\xc5","\x6c"));
	outFields->push(HX_HCSTRING("fontFace","\x0c","\xd2","\x33","\xc6"));
	outFields->push(HX_HCSTRING("fontOptions","\x4f","\xe5","\xce","\xf4"));
	outFields->push(HX_HCSTRING("groupTarget","\xf0","\x93","\x46","\x02"));
	outFields->push(HX_HCSTRING("hasCurrentPoint","\xd1","\xc3","\x0b","\x75"));
	outFields->push(HX_HCSTRING("lineCap","\x7e","\x84","\x90","\x1f"));
	outFields->push(HX_HCSTRING("lineJoin","\xfe","\x81","\x8e","\x83"));
	outFields->push(HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"));
	outFields->push(HX_HCSTRING("operator","\xa4","\x1b","\x73","\x44"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("tolerance","\x0d","\x3d","\x7c","\x33"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Cairo_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(void *) &Cairo_obj::versionString,HX_HCSTRING("versionString","\x09","\xe6","\xa0","\x51")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_arc,HX_HCSTRING("cffi_lime_cairo_arc","\xaa","\x4b","\x23","\x6b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_arc_negative,HX_HCSTRING("cffi_lime_cairo_arc_negative","\xea","\x0c","\xe7","\xb3")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_clip,HX_HCSTRING("cffi_lime_cairo_clip","\x78","\xce","\x0c","\x55")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_clip_preserve,HX_HCSTRING("cffi_lime_cairo_clip_preserve","\xb3","\x05","\x42","\x67")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_clip_extents,HX_HCSTRING("cffi_lime_cairo_clip_extents","\x42","\x3b","\xc9","\x0e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_close_path,HX_HCSTRING("cffi_lime_cairo_close_path","\x74","\x7c","\x08","\x9d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_copy_page,HX_HCSTRING("cffi_lime_cairo_copy_page","\xb1","\x89","\xe2","\xc3")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_create,HX_HCSTRING("cffi_lime_cairo_create","\xa4","\x00","\x6f","\xbe")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_curve_to,HX_HCSTRING("cffi_lime_cairo_curve_to","\xf3","\x59","\x8b","\x35")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_fill,HX_HCSTRING("cffi_lime_cairo_fill","\x2b","\x2e","\x06","\x57")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_fill_extents,HX_HCSTRING("cffi_lime_cairo_fill_extents","\xf5","\x05","\x86","\x46")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_fill_preserve,HX_HCSTRING("cffi_lime_cairo_fill_preserve","\xa0","\x97","\xb6","\xf4")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_antialias,HX_HCSTRING("cffi_lime_cairo_get_antialias","\xdd","\x15","\x1e","\x3e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_current_point,HX_HCSTRING("cffi_lime_cairo_get_current_point","\x39","\x0b","\xd4","\xb1")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_dash,HX_HCSTRING("cffi_lime_cairo_get_dash","\x83","\x64","\xd5","\x0e")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_dash_count,HX_HCSTRING("cffi_lime_cairo_get_dash_count","\xd3","\xb4","\xbe","\x4c")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_fill_rule,HX_HCSTRING("cffi_lime_cairo_get_fill_rule","\xa7","\x8a","\x72","\x02")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_font_face,HX_HCSTRING("cffi_lime_cairo_get_font_face","\x7c","\x43","\xa9","\xd7")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_font_options,HX_HCSTRING("cffi_lime_cairo_get_font_options","\xdf","\xf9","\x9d","\x75")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_group_target,HX_HCSTRING("cffi_lime_cairo_get_group_target","\xc2","\xef","\xf3","\xae")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_line_cap,HX_HCSTRING("cffi_lime_cairo_get_line_cap","\xb8","\xd6","\x2e","\xb8")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_line_join,HX_HCSTRING("cffi_lime_cairo_get_line_join","\x84","\x22","\x78","\x75")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_line_width,HX_HCSTRING("cffi_lime_cairo_get_line_width","\x2c","\x8e","\xe0","\xcb")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_matrix,HX_HCSTRING("cffi_lime_cairo_get_matrix","\xb2","\x33","\x41","\x14")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_miter_limit,HX_HCSTRING("cffi_lime_cairo_get_miter_limit","\x30","\x61","\x26","\x46")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_operator,HX_HCSTRING("cffi_lime_cairo_get_operator","\x55","\x17","\x3b","\x6b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_source,HX_HCSTRING("cffi_lime_cairo_get_source","\x4c","\xae","\xaa","\x8a")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_target,HX_HCSTRING("cffi_lime_cairo_get_target","\xc2","\xf0","\x65","\xdf")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_get_tolerance,HX_HCSTRING("cffi_lime_cairo_get_tolerance","\x3c","\x7c","\xb0","\xfb")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_has_current_point,HX_HCSTRING("cffi_lime_cairo_has_current_point","\xfd","\x98","\x0b","\x83")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_identity_matrix,HX_HCSTRING("cffi_lime_cairo_identity_matrix","\xba","\x37","\x2e","\xa4")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_in_clip,HX_HCSTRING("cffi_lime_cairo_in_clip","\x02","\xca","\xa9","\xcf")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_in_fill,HX_HCSTRING("cffi_lime_cairo_in_fill","\xb5","\x29","\xa3","\xd1")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_in_stroke,HX_HCSTRING("cffi_lime_cairo_in_stroke","\x6a","\xbf","\x0e","\x6c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_line_to,HX_HCSTRING("cffi_lime_cairo_line_to","\x7e","\xad","\xec","\xf0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_mask,HX_HCSTRING("cffi_lime_cairo_mask","\x94","\xa0","\xa0","\x5b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_mask_surface,HX_HCSTRING("cffi_lime_cairo_mask_surface","\x42","\x14","\xd3","\x67")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_move_to,HX_HCSTRING("cffi_lime_cairo_move_to","\x81","\xf2","\xda","\x1b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_new_path,HX_HCSTRING("cffi_lime_cairo_new_path","\xcc","\x28","\x37","\xda")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_paint,HX_HCSTRING("cffi_lime_cairo_paint","\xf6","\x0a","\x18","\x8b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_paint_with_alpha,HX_HCSTRING("cffi_lime_cairo_paint_with_alpha","\x0e","\x07","\x61","\xeb")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_pop_group,HX_HCSTRING("cffi_lime_cairo_pop_group","\x29","\x3a","\x6f","\xb1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_pop_group_to_source,HX_HCSTRING("cffi_lime_cairo_pop_group_to_source","\x89","\x35","\xa9","\xd8")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_push_group,HX_HCSTRING("cffi_lime_cairo_push_group","\x82","\x79","\x18","\x1d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_push_group_with_content,HX_HCSTRING("cffi_lime_cairo_push_group_with_content","\xdd","\xa2","\xf9","\xd0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_rectangle,HX_HCSTRING("cffi_lime_cairo_rectangle","\x87","\xb3","\x2e","\xed")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_rel_curve_to,HX_HCSTRING("cffi_lime_cairo_rel_curve_to","\xd9","\xf8","\x81","\xe0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_rel_line_to,HX_HCSTRING("cffi_lime_cairo_rel_line_to","\x58","\xed","\x0d","\x23")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_rel_move_to,HX_HCSTRING("cffi_lime_cairo_rel_move_to","\x5b","\x32","\xfc","\x4d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_reset_clip,HX_HCSTRING("cffi_lime_cairo_reset_clip","\x28","\xe0","\x33","\xb2")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_restore,HX_HCSTRING("cffi_lime_cairo_restore","\xa6","\x40","\xf7","\x3b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_rotate,HX_HCSTRING("cffi_lime_cairo_rotate","\x03","\xe0","\x7f","\x0d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_save,HX_HCSTRING("cffi_lime_cairo_save","\xe5","\xea","\x97","\x5f")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_scale,HX_HCSTRING("cffi_lime_cairo_scale","\xe2","\x21","\x98","\x46")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_antialias,HX_HCSTRING("cffi_lime_cairo_set_antialias","\xe9","\xf7","\x23","\x83")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_dash,HX_HCSTRING("cffi_lime_cairo_set_dash","\xf7","\xbd","\x32","\xbd")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_fill_rule,HX_HCSTRING("cffi_lime_cairo_set_fill_rule","\xb3","\x6c","\x78","\x47")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_font_face,HX_HCSTRING("cffi_lime_cairo_set_font_face","\x88","\x25","\xaf","\x1c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_font_options,HX_HCSTRING("cffi_lime_cairo_set_font_options","\x53","\xe7","\xdf","\xcb")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_font_size,HX_HCSTRING("cffi_lime_cairo_set_font_size","\xac","\x11","\x4d","\x25")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_line_cap,HX_HCSTRING("cffi_lime_cairo_set_line_cap","\x2c","\xfa","\x27","\xcd")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_line_join,HX_HCSTRING("cffi_lime_cairo_set_line_join","\x90","\x04","\x7e","\xba")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_line_width,HX_HCSTRING("cffi_lime_cairo_set_line_width","\xa0","\x76","\x00","\xec")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_matrix,HX_HCSTRING("cffi_lime_cairo_set_matrix","\x26","\xd2","\xbe","\x17")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_miter_limit,HX_HCSTRING("cffi_lime_cairo_set_miter_limit","\x3c","\xde","\xf1","\x41")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_operator,HX_HCSTRING("cffi_lime_cairo_set_operator","\xc9","\x3a","\x34","\x80")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_source,HX_HCSTRING("cffi_lime_cairo_set_source","\xc0","\x4c","\x28","\x8e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_source_rgb,HX_HCSTRING("cffi_lime_cairo_set_source_rgb","\xce","\xcc","\x4f","\x02")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_source_rgba,HX_HCSTRING("cffi_lime_cairo_set_source_rgba","\xd3","\x67","\x83","\x03")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_source_surface,HX_HCSTRING("cffi_lime_cairo_set_source_surface","\x6e","\xcc","\x64","\x6d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_set_tolerance,HX_HCSTRING("cffi_lime_cairo_set_tolerance","\x48","\x5e","\xb6","\x40")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_show_page,HX_HCSTRING("cffi_lime_cairo_show_page","\x69","\xcb","\x4b","\x6c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::String ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_show_text,HX_HCSTRING("cffi_lime_cairo_show_text","\xc7","\xbd","\xf3","\x6e")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_status,HX_HCSTRING("cffi_lime_cairo_status","\xda","\x80","\x5b","\x48")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_stroke,HX_HCSTRING("cffi_lime_cairo_stroke","\x60","\x4d","\x94","\x53")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_stroke_extents,HX_HCSTRING("cffi_lime_cairo_stroke_extents","\x2a","\xe2","\xc5","\x68")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_stroke_preserve,HX_HCSTRING("cffi_lime_cairo_stroke_preserve","\xcb","\x69","\x57","\xca")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_transform,HX_HCSTRING("cffi_lime_cairo_transform","\xc4","\x0c","\x45","\x19")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_translate,HX_HCSTRING("cffi_lime_cairo_translate","\xa6","\xb6","\x31","\x1d")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_version,HX_HCSTRING("cffi_lime_cairo_version","\x70","\xc0","\x38","\x4e")},
	{hx::fsObject /*::cpp::Function< ::String ( ) >*/ ,(void *) &Cairo_obj::cffi_lime_cairo_version_string,HX_HCSTRING("cffi_lime_cairo_version_string","\x00","\x68","\x18","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("arc","\x52","\xfe","\x49","\x00"),
	HX_HCSTRING("arcNegative","\xe7","\x82","\xbf","\x33"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("clipExtents","\x59","\x0e","\x32","\xbe"),
	HX_HCSTRING("clipPreserve","\xbc","\xe6","\x91","\x33"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("copyPage","\xa4","\x40","\xf0","\xce"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("fillExtents","\x06","\x5b","\xf8","\x93"),
	HX_HCSTRING("fillPreserve","\x6f","\xb1","\x4e","\x6b"),
	HX_HCSTRING("identityMatrix","\x1f","\x72","\x00","\x92"),
	HX_HCSTRING("inClip","\x55","\x4d","\x28","\x7e"),
	HX_HCSTRING("inFill","\x08","\xad","\x21","\x80"),
	HX_HCSTRING("inStroke","\x7d","\xfd","\xb2","\x99"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("maskSurface","\xa1","\x82","\x0d","\x90"),
	HX_HCSTRING("newPath","\x25","\x92","\x1e","\xfa"),
	HX_HCSTRING("paint","\x9e","\xb7","\x4e","\xbd"),
	HX_HCSTRING("paintWithAlpha","\xfa","\x4f","\xef","\x59"),
	HX_HCSTRING("popGroup","\xee","\xf7","\xfa","\x02"),
	HX_HCSTRING("popGroupToSource","\xc4","\xaa","\xdb","\xc8"),
	HX_HCSTRING("pushGroup","\x05","\x1b","\x10","\xde"),
	HX_HCSTRING("pushGroupWithContent","\xce","\x2c","\x09","\x98"),
	HX_HCSTRING("recreate","\xef","\x12","\x7e","\x5c"),
	HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19"),
	HX_HCSTRING("relCurveTo","\xb1","\x7b","\x89","\x97"),
	HX_HCSTRING("relLineTo","\xc8","\x9c","\xaa","\x2c"),
	HX_HCSTRING("relMoveTo","\x25","\x29","\xb7","\x0c"),
	HX_HCSTRING("resetClip","\x3f","\x78","\xae","\x87"),
	HX_HCSTRING("restore","\x4e","\x67","\xb0","\x6a"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("setFontSize","\xf2","\x87","\x32","\xff"),
	HX_HCSTRING("setSourceRGB","\xf0","\x40","\x4c","\x8d"),
	HX_HCSTRING("setSourceRGBA","\x51","\x91","\x6c","\x15"),
	HX_HCSTRING("setSourceSurface","\x90","\x15","\x89","\x6d"),
	HX_HCSTRING("showPage","\xec","\x9d","\xd8","\xb1"),
	HX_HCSTRING("showText","\x4a","\x90","\x80","\xb4"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("stroke","\xb8","\xb3","\x34","\x11"),
	HX_HCSTRING("strokeExtents","\x71","\xb6","\x07","\xdd"),
	HX_HCSTRING("strokePreserve","\xa4","\x53","\xaf","\x0f"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("get_antialias","\x85","\xaa","\x4d","\x37"),
	HX_HCSTRING("set_antialias","\x91","\x8c","\x53","\x7c"),
	HX_HCSTRING("get_currentPoint","\xe0","\x85","\x3a","\x12"),
	HX_HCSTRING("get_dash","\xdb","\x10","\x1e","\xc2"),
	HX_HCSTRING("set_dash","\x4f","\x6a","\x7b","\x70"),
	HX_HCSTRING("get_dashCount","\xf4","\xa9","\xa0","\xf4"),
	HX_HCSTRING("get_fillRule","\x28","\x25","\xdf","\x21"),
	HX_HCSTRING("set_fillRule","\x9c","\x48","\xd8","\x36"),
	HX_HCSTRING("get_fontFace","\x15","\x86","\x4d","\x7b"),
	HX_HCSTRING("set_fontFace","\x89","\xa9","\x46","\x90"),
	HX_HCSTRING("get_fontOptions","\xe6","\x9c","\xb0","\xb5"),
	HX_HCSTRING("set_fontOptions","\xf2","\x19","\x7c","\xb1"),
	HX_HCSTRING("get_groupTarget","\x87","\x4b","\x28","\xc3"),
	HX_HCSTRING("get_hasCurrentPoint","\xe8","\x92","\x16","\x00"),
	HX_HCSTRING("get_lineCap","\x95","\xe4","\x8a","\xa5"),
	HX_HCSTRING("set_lineCap","\xa1","\xeb","\xf7","\xaf"),
	HX_HCSTRING("get_lineJoin","\x07","\x36","\xa8","\x38"),
	HX_HCSTRING("set_lineJoin","\x7b","\x59","\xa1","\x4d"),
	HX_HCSTRING("get_lineWidth","\x49","\x8d","\xc1","\xd2"),
	HX_HCSTRING("set_lineWidth","\x55","\x6f","\xc7","\x17"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_miterLimit","\x3f","\xe5","\x5f","\xca"),
	HX_HCSTRING("set_miterLimit","\xb3","\xcd","\x7f","\xea"),
	HX_HCSTRING("get_operator","\xad","\xcf","\x8c","\xf9"),
	HX_HCSTRING("set_operator","\x21","\xf3","\x85","\x0e"),
	HX_HCSTRING("get_source","\xa4","\x20","\xb9","\x22"),
	HX_HCSTRING("set_source","\x18","\xbf","\x36","\x26"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("get_tolerance","\xe4","\x10","\xe0","\xf4"),
	HX_HCSTRING("set_tolerance","\xf0","\xf2","\xe5","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cairo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Cairo_obj::version,"version");
	HX_MARK_MEMBER_NAME(Cairo_obj::versionString,"versionString");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_arc,"cffi_lime_cairo_arc");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_arc_negative,"cffi_lime_cairo_arc_negative");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_clip,"cffi_lime_cairo_clip");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_clip_preserve,"cffi_lime_cairo_clip_preserve");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_clip_extents,"cffi_lime_cairo_clip_extents");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_close_path,"cffi_lime_cairo_close_path");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_copy_page,"cffi_lime_cairo_copy_page");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_create,"cffi_lime_cairo_create");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_curve_to,"cffi_lime_cairo_curve_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_fill,"cffi_lime_cairo_fill");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_fill_extents,"cffi_lime_cairo_fill_extents");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_fill_preserve,"cffi_lime_cairo_fill_preserve");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_antialias,"cffi_lime_cairo_get_antialias");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_current_point,"cffi_lime_cairo_get_current_point");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_dash,"cffi_lime_cairo_get_dash");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_dash_count,"cffi_lime_cairo_get_dash_count");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_fill_rule,"cffi_lime_cairo_get_fill_rule");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_font_face,"cffi_lime_cairo_get_font_face");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_font_options,"cffi_lime_cairo_get_font_options");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_group_target,"cffi_lime_cairo_get_group_target");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_line_cap,"cffi_lime_cairo_get_line_cap");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_line_join,"cffi_lime_cairo_get_line_join");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_line_width,"cffi_lime_cairo_get_line_width");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_matrix,"cffi_lime_cairo_get_matrix");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_miter_limit,"cffi_lime_cairo_get_miter_limit");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_operator,"cffi_lime_cairo_get_operator");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_source,"cffi_lime_cairo_get_source");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_target,"cffi_lime_cairo_get_target");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_tolerance,"cffi_lime_cairo_get_tolerance");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_has_current_point,"cffi_lime_cairo_has_current_point");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_identity_matrix,"cffi_lime_cairo_identity_matrix");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_in_clip,"cffi_lime_cairo_in_clip");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_in_fill,"cffi_lime_cairo_in_fill");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_in_stroke,"cffi_lime_cairo_in_stroke");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_line_to,"cffi_lime_cairo_line_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_mask,"cffi_lime_cairo_mask");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_mask_surface,"cffi_lime_cairo_mask_surface");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_move_to,"cffi_lime_cairo_move_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_new_path,"cffi_lime_cairo_new_path");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_paint,"cffi_lime_cairo_paint");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_paint_with_alpha,"cffi_lime_cairo_paint_with_alpha");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_pop_group,"cffi_lime_cairo_pop_group");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_pop_group_to_source,"cffi_lime_cairo_pop_group_to_source");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_push_group,"cffi_lime_cairo_push_group");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_push_group_with_content,"cffi_lime_cairo_push_group_with_content");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rectangle,"cffi_lime_cairo_rectangle");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rel_curve_to,"cffi_lime_cairo_rel_curve_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rel_line_to,"cffi_lime_cairo_rel_line_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rel_move_to,"cffi_lime_cairo_rel_move_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_reset_clip,"cffi_lime_cairo_reset_clip");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_restore,"cffi_lime_cairo_restore");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rotate,"cffi_lime_cairo_rotate");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_save,"cffi_lime_cairo_save");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_scale,"cffi_lime_cairo_scale");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_antialias,"cffi_lime_cairo_set_antialias");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_dash,"cffi_lime_cairo_set_dash");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_fill_rule,"cffi_lime_cairo_set_fill_rule");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_font_face,"cffi_lime_cairo_set_font_face");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_font_options,"cffi_lime_cairo_set_font_options");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_font_size,"cffi_lime_cairo_set_font_size");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_line_cap,"cffi_lime_cairo_set_line_cap");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_line_join,"cffi_lime_cairo_set_line_join");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_line_width,"cffi_lime_cairo_set_line_width");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_matrix,"cffi_lime_cairo_set_matrix");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_miter_limit,"cffi_lime_cairo_set_miter_limit");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_operator,"cffi_lime_cairo_set_operator");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_source,"cffi_lime_cairo_set_source");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_source_rgb,"cffi_lime_cairo_set_source_rgb");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_source_rgba,"cffi_lime_cairo_set_source_rgba");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_source_surface,"cffi_lime_cairo_set_source_surface");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_tolerance,"cffi_lime_cairo_set_tolerance");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_show_page,"cffi_lime_cairo_show_page");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_show_text,"cffi_lime_cairo_show_text");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_status,"cffi_lime_cairo_status");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_stroke,"cffi_lime_cairo_stroke");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_stroke_extents,"cffi_lime_cairo_stroke_extents");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_stroke_preserve,"cffi_lime_cairo_stroke_preserve");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_transform,"cffi_lime_cairo_transform");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_translate,"cffi_lime_cairo_translate");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_version,"cffi_lime_cairo_version");
	HX_MARK_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_version_string,"cffi_lime_cairo_version_string");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cairo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Cairo_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Cairo_obj::versionString,"versionString");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_arc,"cffi_lime_cairo_arc");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_arc_negative,"cffi_lime_cairo_arc_negative");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_clip,"cffi_lime_cairo_clip");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_clip_preserve,"cffi_lime_cairo_clip_preserve");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_clip_extents,"cffi_lime_cairo_clip_extents");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_close_path,"cffi_lime_cairo_close_path");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_copy_page,"cffi_lime_cairo_copy_page");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_create,"cffi_lime_cairo_create");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_curve_to,"cffi_lime_cairo_curve_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_fill,"cffi_lime_cairo_fill");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_fill_extents,"cffi_lime_cairo_fill_extents");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_fill_preserve,"cffi_lime_cairo_fill_preserve");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_antialias,"cffi_lime_cairo_get_antialias");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_current_point,"cffi_lime_cairo_get_current_point");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_dash,"cffi_lime_cairo_get_dash");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_dash_count,"cffi_lime_cairo_get_dash_count");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_fill_rule,"cffi_lime_cairo_get_fill_rule");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_font_face,"cffi_lime_cairo_get_font_face");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_font_options,"cffi_lime_cairo_get_font_options");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_group_target,"cffi_lime_cairo_get_group_target");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_line_cap,"cffi_lime_cairo_get_line_cap");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_line_join,"cffi_lime_cairo_get_line_join");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_line_width,"cffi_lime_cairo_get_line_width");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_matrix,"cffi_lime_cairo_get_matrix");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_miter_limit,"cffi_lime_cairo_get_miter_limit");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_operator,"cffi_lime_cairo_get_operator");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_source,"cffi_lime_cairo_get_source");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_target,"cffi_lime_cairo_get_target");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_get_tolerance,"cffi_lime_cairo_get_tolerance");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_has_current_point,"cffi_lime_cairo_has_current_point");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_identity_matrix,"cffi_lime_cairo_identity_matrix");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_in_clip,"cffi_lime_cairo_in_clip");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_in_fill,"cffi_lime_cairo_in_fill");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_in_stroke,"cffi_lime_cairo_in_stroke");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_line_to,"cffi_lime_cairo_line_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_mask,"cffi_lime_cairo_mask");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_mask_surface,"cffi_lime_cairo_mask_surface");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_move_to,"cffi_lime_cairo_move_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_new_path,"cffi_lime_cairo_new_path");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_paint,"cffi_lime_cairo_paint");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_paint_with_alpha,"cffi_lime_cairo_paint_with_alpha");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_pop_group,"cffi_lime_cairo_pop_group");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_pop_group_to_source,"cffi_lime_cairo_pop_group_to_source");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_push_group,"cffi_lime_cairo_push_group");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_push_group_with_content,"cffi_lime_cairo_push_group_with_content");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rectangle,"cffi_lime_cairo_rectangle");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rel_curve_to,"cffi_lime_cairo_rel_curve_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rel_line_to,"cffi_lime_cairo_rel_line_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rel_move_to,"cffi_lime_cairo_rel_move_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_reset_clip,"cffi_lime_cairo_reset_clip");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_restore,"cffi_lime_cairo_restore");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_rotate,"cffi_lime_cairo_rotate");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_save,"cffi_lime_cairo_save");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_scale,"cffi_lime_cairo_scale");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_antialias,"cffi_lime_cairo_set_antialias");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_dash,"cffi_lime_cairo_set_dash");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_fill_rule,"cffi_lime_cairo_set_fill_rule");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_font_face,"cffi_lime_cairo_set_font_face");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_font_options,"cffi_lime_cairo_set_font_options");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_font_size,"cffi_lime_cairo_set_font_size");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_line_cap,"cffi_lime_cairo_set_line_cap");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_line_join,"cffi_lime_cairo_set_line_join");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_line_width,"cffi_lime_cairo_set_line_width");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_matrix,"cffi_lime_cairo_set_matrix");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_miter_limit,"cffi_lime_cairo_set_miter_limit");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_operator,"cffi_lime_cairo_set_operator");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_source,"cffi_lime_cairo_set_source");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_source_rgb,"cffi_lime_cairo_set_source_rgb");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_source_rgba,"cffi_lime_cairo_set_source_rgba");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_source_surface,"cffi_lime_cairo_set_source_surface");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_set_tolerance,"cffi_lime_cairo_set_tolerance");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_show_page,"cffi_lime_cairo_show_page");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_show_text,"cffi_lime_cairo_show_text");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_status,"cffi_lime_cairo_status");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_stroke,"cffi_lime_cairo_stroke");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_stroke_extents,"cffi_lime_cairo_stroke_extents");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_stroke_preserve,"cffi_lime_cairo_stroke_preserve");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_transform,"cffi_lime_cairo_transform");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_translate,"cffi_lime_cairo_translate");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_version,"cffi_lime_cairo_version");
	HX_VISIT_MEMBER_NAME(Cairo_obj::cffi_lime_cairo_version_string,"cffi_lime_cairo_version_string");
};

#endif

hx::Class Cairo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("versionString","\x09","\xe6","\xa0","\x51"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("get_versionString","\x60","\xf1","\x10","\x58"),
	HX_HCSTRING("lime_cairo_arc","\xf1","\x76","\xfc","\xf9"),
	HX_HCSTRING("lime_cairo_arc_negative","\xc3","\xc0","\xb7","\xd8"),
	HX_HCSTRING("lime_cairo_clip","\x51","\x81","\x39","\xc4"),
	HX_HCSTRING("lime_cairo_clip_preserve","\xba","\xaf","\x0e","\x79"),
	HX_HCSTRING("lime_cairo_clip_extents","\x1b","\xef","\x99","\x33"),
	HX_HCSTRING("lime_cairo_close_path","\x0d","\x58","\x78","\xe1"),
	HX_HCSTRING("lime_cairo_copy_page","\x38","\xe4","\xe1","\x1e"),
	HX_HCSTRING("lime_cairo_create","\xbd","\xdb","\x50","\xd8"),
	HX_HCSTRING("lime_cairo_curve_to","\x4c","\xed","\xec","\xef"),
	HX_HCSTRING("lime_cairo_fill","\x04","\xe1","\x32","\xc6"),
	HX_HCSTRING("lime_cairo_fill_extents","\xce","\xb9","\x56","\x6b"),
	HX_HCSTRING("lime_cairo_fill_preserve","\xa7","\x41","\x83","\x06"),
	HX_HCSTRING("lime_cairo_get_antialias","\xe4","\xbf","\xea","\x4f"),
	HX_HCSTRING("lime_cairo_get_current_point","\xc0","\xc4","\x0b","\xc0"),
	HX_HCSTRING("lime_cairo_get_dash","\xdc","\xf7","\x36","\xc9"),
	HX_HCSTRING("lime_cairo_get_dash_count","\xec","\xd0","\x06","\xce"),
	HX_HCSTRING("lime_cairo_get_fill_rule","\xae","\x34","\x3f","\x14"),
	HX_HCSTRING("lime_cairo_get_font_face","\x83","\xed","\x75","\xe9"),
	HX_HCSTRING("lime_cairo_get_font_options","\x38","\x0e","\x38","\xee"),
	HX_HCSTRING("lime_cairo_get_group_target","\x1b","\x04","\x8e","\x27"),
	HX_HCSTRING("lime_cairo_get_line_cap","\x91","\x8a","\xff","\xdc"),
	HX_HCSTRING("lime_cairo_get_line_join","\x8b","\xcc","\x44","\x87"),
	HX_HCSTRING("lime_cairo_get_line_width","\x45","\xaa","\x28","\x4d"),
	HX_HCSTRING("lime_cairo_get_matrix","\x4b","\x0f","\xb1","\x58"),
	HX_HCSTRING("lime_cairo_get_miter_limit","\xf7","\xda","\xf6","\xe3"),
	HX_HCSTRING("lime_cairo_get_operator","\x2e","\xcb","\x0b","\x90"),
	HX_HCSTRING("lime_cairo_get_source","\xe5","\x89","\x1a","\xcf"),
	HX_HCSTRING("lime_cairo_get_target","\x5b","\xcc","\xd5","\x23"),
	HX_HCSTRING("lime_cairo_get_tolerance","\x43","\x26","\x7d","\x0d"),
	HX_HCSTRING("lime_cairo_has_current_point","\x84","\x52","\x43","\x91"),
	HX_HCSTRING("lime_cairo_identity_matrix","\x81","\xb1","\xfe","\x41"),
	HX_HCSTRING("lime_cairo_in_clip","\xc9","\xa4","\x67","\x5b"),
	HX_HCSTRING("lime_cairo_in_fill","\x7c","\x04","\x61","\x5d"),
	HX_HCSTRING("lime_cairo_in_stroke","\xf1","\x19","\x0e","\xc7"),
	HX_HCSTRING("lime_cairo_line_to","\x45","\x88","\xaa","\x7c"),
	HX_HCSTRING("lime_cairo_mask","\x6d","\x53","\xcd","\xca"),
	HX_HCSTRING("lime_cairo_mask_surface","\x1b","\xc8","\xa3","\x8c"),
	HX_HCSTRING("lime_cairo_move_to","\x48","\xcd","\x98","\xa7"),
	HX_HCSTRING("lime_cairo_new_path","\x25","\xbc","\x98","\x94"),
	HX_HCSTRING("lime_cairo_paint","\xfd","\xd5","\x07","\x63"),
	HX_HCSTRING("lime_cairo_paint_with_alpha","\x67","\x1b","\xfb","\x63"),
	HX_HCSTRING("lime_cairo_pop_group","\xb0","\x94","\x6e","\x0c"),
	HX_HCSTRING("lime_cairo_pop_group_to_source","\xd0","\x9e","\x67","\xaf"),
	HX_HCSTRING("lime_cairo_push_group","\x1b","\x55","\x88","\x61"),
	HX_HCSTRING("lime_cairo_push_group_with_content","\xa4","\xbb","\x13","\xd3"),
	HX_HCSTRING("lime_cairo_rectangle","\x0e","\x0e","\x2e","\x48"),
	HX_HCSTRING("lime_cairo_rel_curve_to","\xb2","\xac","\x52","\x05"),
	HX_HCSTRING("lime_cairo_rel_line_to","\x9f","\x37","\x7e","\xc0"),
	HX_HCSTRING("lime_cairo_rel_move_to","\xa2","\x7c","\x6c","\xeb"),
	HX_HCSTRING("lime_cairo_reset_clip","\xc1","\xbb","\xa3","\xf6"),
	HX_HCSTRING("lime_cairo_restore","\x6d","\x1b","\xb5","\xc7"),
	HX_HCSTRING("lime_cairo_rotate","\x1c","\xbb","\x61","\x27"),
	HX_HCSTRING("lime_cairo_save","\xbe","\x9d","\xc4","\xce"),
	HX_HCSTRING("lime_cairo_scale","\xe9","\xec","\x87","\x1e"),
	HX_HCSTRING("lime_cairo_set_antialias","\xf0","\xa1","\xf0","\x94"),
	HX_HCSTRING("lime_cairo_set_dash","\x50","\x51","\x94","\x77"),
	HX_HCSTRING("lime_cairo_set_fill_rule","\xba","\x16","\x45","\x59"),
	HX_HCSTRING("lime_cairo_set_font_face","\x8f","\xcf","\x7b","\x2e"),
	HX_HCSTRING("lime_cairo_set_font_options","\xac","\xfb","\x79","\x44"),
	HX_HCSTRING("lime_cairo_set_font_size","\xb3","\xbb","\x19","\x37"),
	HX_HCSTRING("lime_cairo_set_line_cap","\x05","\xae","\xf8","\xf1"),
	HX_HCSTRING("lime_cairo_set_line_join","\x97","\xae","\x4a","\xcc"),
	HX_HCSTRING("lime_cairo_set_line_width","\xb9","\x92","\x48","\x6d"),
	HX_HCSTRING("lime_cairo_set_matrix","\xbf","\xad","\x2e","\x5c"),
	HX_HCSTRING("lime_cairo_set_miter_limit","\x03","\x58","\xc2","\xdf"),
	HX_HCSTRING("lime_cairo_set_operator","\xa2","\xee","\x04","\xa5"),
	HX_HCSTRING("lime_cairo_set_source","\x59","\x28","\x98","\xd2"),
	HX_HCSTRING("lime_cairo_set_source_rgb","\xe7","\xe8","\x97","\x83"),
	HX_HCSTRING("lime_cairo_set_source_rgba","\x9a","\xe1","\x53","\xa1"),
	HX_HCSTRING("lime_cairo_set_source_surface","\x07","\x69","\xef","\xcf"),
	HX_HCSTRING("lime_cairo_set_tolerance","\x4f","\x08","\x83","\x52"),
	HX_HCSTRING("lime_cairo_show_page","\xf0","\x25","\x4b","\xc7"),
	HX_HCSTRING("lime_cairo_show_text","\x4e","\x18","\xf3","\xc9"),
	HX_HCSTRING("lime_cairo_status","\xf3","\x5b","\x3d","\x62"),
	HX_HCSTRING("lime_cairo_stroke","\x79","\x28","\x76","\x6d"),
	HX_HCSTRING("lime_cairo_stroke_extents","\x43","\xfe","\x0d","\xea"),
	HX_HCSTRING("lime_cairo_stroke_preserve","\x92","\xe3","\x27","\x68"),
	HX_HCSTRING("lime_cairo_transform","\x4b","\x67","\x44","\x74"),
	HX_HCSTRING("lime_cairo_translate","\x2d","\x11","\x31","\x78"),
	HX_HCSTRING("lime_cairo_version","\x37","\x9b","\xf6","\xd9"),
	HX_HCSTRING("lime_cairo_version_string","\x19","\x84","\x60","\x45"),
	HX_HCSTRING("cffi_lime_cairo_arc","\xaa","\x4b","\x23","\x6b"),
	HX_HCSTRING("cffi_lime_cairo_arc_negative","\xea","\x0c","\xe7","\xb3"),
	HX_HCSTRING("cffi_lime_cairo_clip","\x78","\xce","\x0c","\x55"),
	HX_HCSTRING("cffi_lime_cairo_clip_preserve","\xb3","\x05","\x42","\x67"),
	HX_HCSTRING("cffi_lime_cairo_clip_extents","\x42","\x3b","\xc9","\x0e"),
	HX_HCSTRING("cffi_lime_cairo_close_path","\x74","\x7c","\x08","\x9d"),
	HX_HCSTRING("cffi_lime_cairo_copy_page","\xb1","\x89","\xe2","\xc3"),
	HX_HCSTRING("cffi_lime_cairo_create","\xa4","\x00","\x6f","\xbe"),
	HX_HCSTRING("cffi_lime_cairo_curve_to","\xf3","\x59","\x8b","\x35"),
	HX_HCSTRING("cffi_lime_cairo_fill","\x2b","\x2e","\x06","\x57"),
	HX_HCSTRING("cffi_lime_cairo_fill_extents","\xf5","\x05","\x86","\x46"),
	HX_HCSTRING("cffi_lime_cairo_fill_preserve","\xa0","\x97","\xb6","\xf4"),
	HX_HCSTRING("cffi_lime_cairo_get_antialias","\xdd","\x15","\x1e","\x3e"),
	HX_HCSTRING("cffi_lime_cairo_get_current_point","\x39","\x0b","\xd4","\xb1"),
	HX_HCSTRING("cffi_lime_cairo_get_dash","\x83","\x64","\xd5","\x0e"),
	HX_HCSTRING("cffi_lime_cairo_get_dash_count","\xd3","\xb4","\xbe","\x4c"),
	HX_HCSTRING("cffi_lime_cairo_get_fill_rule","\xa7","\x8a","\x72","\x02"),
	HX_HCSTRING("cffi_lime_cairo_get_font_face","\x7c","\x43","\xa9","\xd7"),
	HX_HCSTRING("cffi_lime_cairo_get_font_options","\xdf","\xf9","\x9d","\x75"),
	HX_HCSTRING("cffi_lime_cairo_get_group_target","\xc2","\xef","\xf3","\xae"),
	HX_HCSTRING("cffi_lime_cairo_get_line_cap","\xb8","\xd6","\x2e","\xb8"),
	HX_HCSTRING("cffi_lime_cairo_get_line_join","\x84","\x22","\x78","\x75"),
	HX_HCSTRING("cffi_lime_cairo_get_line_width","\x2c","\x8e","\xe0","\xcb"),
	HX_HCSTRING("cffi_lime_cairo_get_matrix","\xb2","\x33","\x41","\x14"),
	HX_HCSTRING("cffi_lime_cairo_get_miter_limit","\x30","\x61","\x26","\x46"),
	HX_HCSTRING("cffi_lime_cairo_get_operator","\x55","\x17","\x3b","\x6b"),
	HX_HCSTRING("cffi_lime_cairo_get_source","\x4c","\xae","\xaa","\x8a"),
	HX_HCSTRING("cffi_lime_cairo_get_target","\xc2","\xf0","\x65","\xdf"),
	HX_HCSTRING("cffi_lime_cairo_get_tolerance","\x3c","\x7c","\xb0","\xfb"),
	HX_HCSTRING("cffi_lime_cairo_has_current_point","\xfd","\x98","\x0b","\x83"),
	HX_HCSTRING("cffi_lime_cairo_identity_matrix","\xba","\x37","\x2e","\xa4"),
	HX_HCSTRING("cffi_lime_cairo_in_clip","\x02","\xca","\xa9","\xcf"),
	HX_HCSTRING("cffi_lime_cairo_in_fill","\xb5","\x29","\xa3","\xd1"),
	HX_HCSTRING("cffi_lime_cairo_in_stroke","\x6a","\xbf","\x0e","\x6c"),
	HX_HCSTRING("cffi_lime_cairo_line_to","\x7e","\xad","\xec","\xf0"),
	HX_HCSTRING("cffi_lime_cairo_mask","\x94","\xa0","\xa0","\x5b"),
	HX_HCSTRING("cffi_lime_cairo_mask_surface","\x42","\x14","\xd3","\x67"),
	HX_HCSTRING("cffi_lime_cairo_move_to","\x81","\xf2","\xda","\x1b"),
	HX_HCSTRING("cffi_lime_cairo_new_path","\xcc","\x28","\x37","\xda"),
	HX_HCSTRING("cffi_lime_cairo_paint","\xf6","\x0a","\x18","\x8b"),
	HX_HCSTRING("cffi_lime_cairo_paint_with_alpha","\x0e","\x07","\x61","\xeb"),
	HX_HCSTRING("cffi_lime_cairo_pop_group","\x29","\x3a","\x6f","\xb1"),
	HX_HCSTRING("cffi_lime_cairo_pop_group_to_source","\x89","\x35","\xa9","\xd8"),
	HX_HCSTRING("cffi_lime_cairo_push_group","\x82","\x79","\x18","\x1d"),
	HX_HCSTRING("cffi_lime_cairo_push_group_with_content","\xdd","\xa2","\xf9","\xd0"),
	HX_HCSTRING("cffi_lime_cairo_rectangle","\x87","\xb3","\x2e","\xed"),
	HX_HCSTRING("cffi_lime_cairo_rel_curve_to","\xd9","\xf8","\x81","\xe0"),
	HX_HCSTRING("cffi_lime_cairo_rel_line_to","\x58","\xed","\x0d","\x23"),
	HX_HCSTRING("cffi_lime_cairo_rel_move_to","\x5b","\x32","\xfc","\x4d"),
	HX_HCSTRING("cffi_lime_cairo_reset_clip","\x28","\xe0","\x33","\xb2"),
	HX_HCSTRING("cffi_lime_cairo_restore","\xa6","\x40","\xf7","\x3b"),
	HX_HCSTRING("cffi_lime_cairo_rotate","\x03","\xe0","\x7f","\x0d"),
	HX_HCSTRING("cffi_lime_cairo_save","\xe5","\xea","\x97","\x5f"),
	HX_HCSTRING("cffi_lime_cairo_scale","\xe2","\x21","\x98","\x46"),
	HX_HCSTRING("cffi_lime_cairo_set_antialias","\xe9","\xf7","\x23","\x83"),
	HX_HCSTRING("cffi_lime_cairo_set_dash","\xf7","\xbd","\x32","\xbd"),
	HX_HCSTRING("cffi_lime_cairo_set_fill_rule","\xb3","\x6c","\x78","\x47"),
	HX_HCSTRING("cffi_lime_cairo_set_font_face","\x88","\x25","\xaf","\x1c"),
	HX_HCSTRING("cffi_lime_cairo_set_font_options","\x53","\xe7","\xdf","\xcb"),
	HX_HCSTRING("cffi_lime_cairo_set_font_size","\xac","\x11","\x4d","\x25"),
	HX_HCSTRING("cffi_lime_cairo_set_line_cap","\x2c","\xfa","\x27","\xcd"),
	HX_HCSTRING("cffi_lime_cairo_set_line_join","\x90","\x04","\x7e","\xba"),
	HX_HCSTRING("cffi_lime_cairo_set_line_width","\xa0","\x76","\x00","\xec"),
	HX_HCSTRING("cffi_lime_cairo_set_matrix","\x26","\xd2","\xbe","\x17"),
	HX_HCSTRING("cffi_lime_cairo_set_miter_limit","\x3c","\xde","\xf1","\x41"),
	HX_HCSTRING("cffi_lime_cairo_set_operator","\xc9","\x3a","\x34","\x80"),
	HX_HCSTRING("cffi_lime_cairo_set_source","\xc0","\x4c","\x28","\x8e"),
	HX_HCSTRING("cffi_lime_cairo_set_source_rgb","\xce","\xcc","\x4f","\x02"),
	HX_HCSTRING("cffi_lime_cairo_set_source_rgba","\xd3","\x67","\x83","\x03"),
	HX_HCSTRING("cffi_lime_cairo_set_source_surface","\x6e","\xcc","\x64","\x6d"),
	HX_HCSTRING("cffi_lime_cairo_set_tolerance","\x48","\x5e","\xb6","\x40"),
	HX_HCSTRING("cffi_lime_cairo_show_page","\x69","\xcb","\x4b","\x6c"),
	HX_HCSTRING("cffi_lime_cairo_show_text","\xc7","\xbd","\xf3","\x6e"),
	HX_HCSTRING("cffi_lime_cairo_status","\xda","\x80","\x5b","\x48"),
	HX_HCSTRING("cffi_lime_cairo_stroke","\x60","\x4d","\x94","\x53"),
	HX_HCSTRING("cffi_lime_cairo_stroke_extents","\x2a","\xe2","\xc5","\x68"),
	HX_HCSTRING("cffi_lime_cairo_stroke_preserve","\xcb","\x69","\x57","\xca"),
	HX_HCSTRING("cffi_lime_cairo_transform","\xc4","\x0c","\x45","\x19"),
	HX_HCSTRING("cffi_lime_cairo_translate","\xa6","\xb6","\x31","\x1d"),
	HX_HCSTRING("cffi_lime_cairo_version","\x70","\xc0","\x38","\x4e"),
	HX_HCSTRING("cffi_lime_cairo_version_string","\x00","\x68","\x18","\xc4"),
	::String(null()) };

void Cairo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo.Cairo","\xd8","\xbd","\x0e","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Cairo_obj::__GetStatic;
	__mClass->mSetStaticField = &Cairo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Cairo_obj >;
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

void Cairo_obj::__boot()
{
	cffi_lime_cairo_arc= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_arc","\xf1","\x76","\xfc","\xf9"),HX_HCSTRING("odddddv","\x41","\x24","\xf6","\xd9"),false));
	cffi_lime_cairo_arc_negative= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_arc_negative","\xc3","\xc0","\xb7","\xd8"),HX_HCSTRING("odddddv","\x41","\x24","\xf6","\xd9"),false));
	cffi_lime_cairo_clip= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_clip","\x51","\x81","\x39","\xc4"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_clip_preserve= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_clip_preserve","\xba","\xaf","\x0e","\x79"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_clip_extents= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_clip_extents","\x1b","\xef","\x99","\x33"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_close_path= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_close_path","\x0d","\x58","\x78","\xe1"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_copy_page= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_copy_page","\x38","\xe4","\xe1","\x1e"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_create","\xbd","\xdb","\x50","\xd8"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_curve_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_curve_to","\x4c","\xed","\xec","\xef"),HX_HCSTRING("oddddddv","\x67","\x85","\x69","\xdd"),false));
	cffi_lime_cairo_fill= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_fill","\x04","\xe1","\x32","\xc6"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_fill_extents= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_fill_extents","\xce","\xb9","\x56","\x6b"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_fill_preserve= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_fill_preserve","\xa7","\x41","\x83","\x06"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_antialias= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_antialias","\xe4","\xbf","\xea","\x4f"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_current_point= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_current_point","\xc0","\xc4","\x0b","\xc0"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_dash= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_dash","\xdc","\xf7","\x36","\xc9"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_dash_count= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_dash_count","\xec","\xd0","\x06","\xce"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_fill_rule= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_fill_rule","\xae","\x34","\x3f","\x14"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_font_face= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_font_face","\x83","\xed","\x75","\xe9"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_font_options= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_font_options","\x38","\x0e","\x38","\xee"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_group_target= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_group_target","\x1b","\x04","\x8e","\x27"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_line_cap= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_line_cap","\x91","\x8a","\xff","\xdc"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_line_join= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_line_join","\x8b","\xcc","\x44","\x87"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_line_width= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_line_width","\x45","\xaa","\x28","\x4d"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_matrix= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_matrix","\x4b","\x0f","\xb1","\x58"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_miter_limit= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_miter_limit","\xf7","\xda","\xf6","\xe3"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_operator= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_operator","\x2e","\xcb","\x0b","\x90"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_source= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_source","\xe5","\x89","\x1a","\xcf"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_target= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_target","\x5b","\xcc","\xd5","\x23"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_get_tolerance= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_tolerance","\x43","\x26","\x7d","\x0d"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_cairo_has_current_point= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_has_current_point","\x84","\x52","\x43","\x91"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_cairo_identity_matrix= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_identity_matrix","\x81","\xb1","\xfe","\x41"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_in_clip= ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_in_clip","\xc9","\xa4","\x67","\x5b"),HX_HCSTRING("oddb","\xd3","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_in_fill= ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_in_fill","\x7c","\x04","\x61","\x5d"),HX_HCSTRING("oddb","\xd3","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_in_stroke= ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_in_stroke","\xf1","\x19","\x0e","\xc7"),HX_HCSTRING("oddb","\xd3","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_line_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_line_to","\x45","\x88","\xaa","\x7c"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_mask= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_mask","\x6d","\x53","\xcd","\xca"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_mask_surface= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_mask_surface","\x1b","\xc8","\xa3","\x8c"),HX_HCSTRING("ooddv","\xd6","\x4b","\x25","\x33"),false));
	cffi_lime_cairo_move_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_move_to","\x48","\xcd","\x98","\xa7"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_new_path= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_new_path","\x25","\xbc","\x98","\x94"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_paint= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_paint","\xfd","\xd5","\x07","\x63"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_paint_with_alpha= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_paint_with_alpha","\x67","\x1b","\xfb","\x63"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_pop_group= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pop_group","\xb0","\x94","\x6e","\x0c"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pop_group_to_source= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pop_group_to_source","\xd0","\x9e","\x67","\xaf"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_push_group= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_push_group","\x1b","\x55","\x88","\x61"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_push_group_with_content= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_push_group_with_content","\xa4","\xbb","\x13","\xd3"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_rectangle= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rectangle","\x0e","\x0e","\x2e","\x48"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_rel_curve_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rel_curve_to","\xb2","\xac","\x52","\x05"),HX_HCSTRING("oddddddv","\x67","\x85","\x69","\xdd"),false));
	cffi_lime_cairo_rel_line_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rel_line_to","\x9f","\x37","\x7e","\xc0"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_rel_move_to= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rel_move_to","\xa2","\x7c","\x6c","\xeb"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_reset_clip= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_reset_clip","\xc1","\xbb","\xa3","\xf6"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_restore= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_restore","\x6d","\x1b","\xb5","\xc7"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_rotate= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rotate","\x1c","\xbb","\x61","\x27"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_save= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_save","\xbe","\x9d","\xc4","\xce"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_scale= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_scale","\xe9","\xec","\x87","\x1e"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_set_antialias= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_antialias","\xf0","\xa1","\xf0","\x94"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_dash= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_dash","\x50","\x51","\x94","\x77"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_set_fill_rule= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_fill_rule","\xba","\x16","\x45","\x59"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_font_face= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_font_face","\x8f","\xcf","\x7b","\x2e"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_set_font_options= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_font_options","\xac","\xfb","\x79","\x44"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_set_font_size= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_font_size","\xb3","\xbb","\x19","\x37"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_set_line_cap= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_line_cap","\x05","\xae","\xf8","\xf1"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_line_join= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_line_join","\x97","\xae","\x4a","\xcc"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_line_width= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_line_width","\xb9","\x92","\x48","\x6d"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_set_matrix= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_matrix","\xbf","\xad","\x2e","\x5c"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_set_miter_limit= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_miter_limit","\x03","\x58","\xc2","\xdf"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_set_operator= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_operator","\xa2","\xee","\x04","\xa5"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_set_source= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source","\x59","\x28","\x98","\xd2"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_set_source_rgb= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source_rgb","\xe7","\xe8","\x97","\x83"),HX_HCSTRING("odddv","\x01","\xf3","\xdf","\x2b"),false));
	cffi_lime_cairo_set_source_rgba= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source_rgba","\x9a","\xe1","\x53","\xa1"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_set_source_surface= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source_surface","\x07","\x69","\xef","\xcf"),HX_HCSTRING("ooddv","\xd6","\x4b","\x25","\x33"),false));
	cffi_lime_cairo_set_tolerance= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_tolerance","\x4f","\x08","\x83","\x52"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_cairo_show_page= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_show_page","\xf0","\x25","\x4b","\xc7"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_show_text= ::cpp::Function< void ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_show_text","\x4e","\x18","\xf3","\xc9"),HX_HCSTRING("osv","\xd2","\x9e","\x54","\x00"),false));
	cffi_lime_cairo_status= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_status","\xf3","\x5b","\x3d","\x62"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_stroke= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_stroke","\x79","\x28","\x76","\x6d"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_stroke_extents= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_stroke_extents","\x43","\xfe","\x0d","\xea"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_stroke_preserve= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_stroke_preserve","\x92","\xe3","\x27","\x68"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_cairo_transform= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_transform","\x4b","\x67","\x44","\x74"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_cairo_translate= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_translate","\x2d","\x11","\x31","\x78"),HX_HCSTRING("oddv","\xe7","\xe7","\xaa","\x49"),false));
	cffi_lime_cairo_version= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_version","\x37","\x9b","\xf6","\xd9"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_cairo_version_string= ::cpp::Function< ::String ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_version_string","\x19","\x84","\x60","\x45"),HX_HCSTRING("s","\x73","\x00","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo

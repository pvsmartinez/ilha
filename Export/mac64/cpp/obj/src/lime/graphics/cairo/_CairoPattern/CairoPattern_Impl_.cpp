#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoPattern{

Void CairoPattern_Impl__obj::__construct()
{
	return null();
}

//CairoPattern_Impl__obj::~CairoPattern_Impl__obj() { }

Dynamic CairoPattern_Impl__obj::__CreateEmpty() { return  new CairoPattern_Impl__obj; }
hx::ObjectPtr< CairoPattern_Impl__obj > CairoPattern_Impl__obj::__new()
{  hx::ObjectPtr< CairoPattern_Impl__obj > _result_ = new CairoPattern_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoPattern_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoPattern_Impl__obj > _result_ = new CairoPattern_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoPattern_Impl__obj::_new( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","_new",0xc71fdbd0,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_._new","lime/graphics/cairo/CairoPattern.hx",23,0x9806f3a5)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(23)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,_new,return )

Void CairoPattern_Impl__obj::addColorStopRGB( Dynamic this1,Float offset,Float r,Float g,Float b){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGB",0xfbbadaba,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGB","lime/graphics/cairo/CairoPattern.hx",31,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(31)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgb.call(hx::DynamicPtr(this1),offset,r,g,b);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoPattern_Impl__obj,addColorStopRGB,(void))

Void CairoPattern_Impl__obj::addColorStopRGBA( Dynamic this1,Float offset,Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGBA",0x47c48847,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGBA","lime/graphics/cairo/CairoPattern.hx",40,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(40)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgba.call(hx::DynamicPtr(this1),offset,r,g,b,a);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,addColorStopRGBA,(void))

Dynamic CairoPattern_Impl__obj::createForSurface( Dynamic surface){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createForSurface",0x941f592f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createForSurface","lime/graphics/cairo/CairoPattern.hx",46,0x9806f3a5)
	HX_STACK_ARG(surface,"surface")
	HX_STACK_LINE(49)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_for_surface.call(hx::DynamicPtr(surface));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(49)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(49)
	return tmp;
	HX_STACK_LINE(49)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,createForSurface,return )

Dynamic CairoPattern_Impl__obj::createLinear( Float x0,Float y0,Float x1,Float y1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createLinear",0xc4d8df70,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createLinear","lime/graphics/cairo/CairoPattern.hx",57,0x9806f3a5)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_LINE(60)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_linear.call(x0,y0,x1,y1);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(60)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(60)
	return tmp;
	HX_STACK_LINE(60)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createLinear,return )

Dynamic CairoPattern_Impl__obj::createRadial( Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRadial",0x892f4c6a,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRadial","lime/graphics/cairo/CairoPattern.hx",68,0x9806f3a5)
	HX_STACK_ARG(cx0,"cx0")
	HX_STACK_ARG(cy0,"cy0")
	HX_STACK_ARG(radius0,"radius0")
	HX_STACK_ARG(cx1,"cx1")
	HX_STACK_ARG(cy1,"cy1")
	HX_STACK_ARG(radius1,"radius1")
	HX_STACK_LINE(71)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_radial.call(cx0,cy0,radius0,cx1,cy1,radius1);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(71)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(71)
	return tmp;
	HX_STACK_LINE(71)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,createRadial,return )

Dynamic CairoPattern_Impl__obj::createRGB( Float r,Float g,Float b){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGB",0xccf31ca2,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGB","lime/graphics/cairo/CairoPattern.hx",79,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(82)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgb.call(r,g,b);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(82)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(82)
	return tmp;
	HX_STACK_LINE(82)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoPattern_Impl__obj,createRGB,return )

Dynamic CairoPattern_Impl__obj::createRGBA( Float r,Float g,Float b,Float a){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGBA",0x87c5f15f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGBA","lime/graphics/cairo/CairoPattern.hx",90,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(93)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgba.call(r,g,b,a);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(93)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(93)
	return tmp;
	HX_STACK_LINE(93)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createRGBA,return )

int CairoPattern_Impl__obj::get_colorStopCount( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_colorStopCount",0x1c959302,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_colorStopCount","lime/graphics/cairo/CairoPattern.hx",111,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(111)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_color_stop_count.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_colorStopCount,return )

int CairoPattern_Impl__obj::get_extend( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_extend",0xe14a0552,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_extend","lime/graphics/cairo/CairoPattern.hx",122,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(122)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_extend.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_extend,return )

int CairoPattern_Impl__obj::set_extend( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_extend",0xe4c7a3c6,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_extend","lime/graphics/cairo/CairoPattern.hx",130,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(133)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_extend.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(136)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_extend,return )

int CairoPattern_Impl__obj::get_filter( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_filter",0x9f645330,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_filter","lime/graphics/cairo/CairoPattern.hx",144,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(144)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_filter.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_filter,return )

int CairoPattern_Impl__obj::set_filter( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_filter",0xa2e1f1a4,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_filter","lime/graphics/cairo/CairoPattern.hx",152,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(155)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_filter.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(158)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_filter,return )

::lime::math::Matrix3 CairoPattern_Impl__obj::get_matrix( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_matrix",0xd5f769b9,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_matrix","lime/graphics/cairo/CairoPattern.hx",163,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(166)
	Dynamic m = ((Dynamic)(::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_matrix.call(hx::DynamicPtr(this1))));		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(167)
	::lime::math::Matrix3 tmp = ::lime::math::Matrix3_obj::__new(m->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_matrix,return )

::lime::math::Matrix3 CairoPattern_Impl__obj::set_matrix( Dynamic this1,::lime::math::Matrix3 value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_matrix",0xd975082d,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_matrix","lime/graphics/cairo/CairoPattern.hx",175,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(178)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_matrix.call(hx::DynamicPtr(this1),hx::DynamicPtr(value));
	HX_STACK_LINE(181)
	::lime::math::Matrix3 tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_matrix,return )

Void CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb( Dynamic handle,Float offset,Float red,Float green,Float blue){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_add_color_stop_rgb",0xa9be880b,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_add_color_stop_rgb","lime/graphics/cairo/CairoPattern.hx",194,0x9806f3a5)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_LINE(194)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgb.call(hx::DynamicPtr(handle),offset,red,green,blue);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoPattern_Impl__obj,lime_cairo_pattern_add_color_stop_rgb,(void))

Void CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba( Dynamic handle,Float offset,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_add_color_stop_rgba",0xdcf881f6,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_add_color_stop_rgba","lime/graphics/cairo/CairoPattern.hx",195,0x9806f3a5)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(195)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgba.call(hx::DynamicPtr(handle),offset,red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,lime_cairo_pattern_add_color_stop_rgba,(void))

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface( Dynamic surface){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_create_for_surface",0x95808075,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_create_for_surface","lime/graphics/cairo/CairoPattern.hx",196,0x9806f3a5)
	HX_STACK_ARG(surface,"surface")
	HX_STACK_LINE(196)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_for_surface.call(hx::DynamicPtr(surface));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(196)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(196)
	return tmp;
	HX_STACK_LINE(196)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,lime_cairo_pattern_create_for_surface,return )

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_linear( Float x0,Float y0,Float x1,Float y1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_create_linear",0xffcbc1e7,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_create_linear","lime/graphics/cairo/CairoPattern.hx",197,0x9806f3a5)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_LINE(197)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_linear.call(x0,y0,x1,y1);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(197)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(197)
	return tmp;
	HX_STACK_LINE(197)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,lime_cairo_pattern_create_linear,return )

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_radial( Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_create_radial",0xc4222ee1,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_create_radial","lime/graphics/cairo/CairoPattern.hx",198,0x9806f3a5)
	HX_STACK_ARG(cx0,"cx0")
	HX_STACK_ARG(cy0,"cy0")
	HX_STACK_ARG(radius0,"radius0")
	HX_STACK_ARG(cx1,"cx1")
	HX_STACK_ARG(cy1,"cy1")
	HX_STACK_ARG(radius1,"radius1")
	HX_STACK_LINE(198)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_radial.call(cx0,cy0,radius0,cx1,cy1,radius1);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(198)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(198)
	return tmp;
	HX_STACK_LINE(198)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,lime_cairo_pattern_create_radial,return )

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb( Float r,Float g,Float b){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_create_rgb",0x515635cb,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_create_rgb","lime/graphics/cairo/CairoPattern.hx",199,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(199)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgb.call(r,g,b);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(199)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(199)
	return tmp;
	HX_STACK_LINE(199)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoPattern_Impl__obj,lime_cairo_pattern_create_rgb,return )

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba( Float r,Float g,Float b,Float a){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_create_rgba",0xda18dc36,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_create_rgba","lime/graphics/cairo/CairoPattern.hx",200,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(200)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgba.call(r,g,b,a);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(200)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(200)
	return tmp;
	HX_STACK_LINE(200)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,lime_cairo_pattern_create_rgba,return )

int CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_get_color_stop_count",0x70768b38,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_get_color_stop_count","lime/graphics/cairo/CairoPattern.hx",201,0x9806f3a5)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(201)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_color_stop_count.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,lime_cairo_pattern_get_color_stop_count,return )

int CairoPattern_Impl__obj::lime_cairo_pattern_get_extend( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_get_extend",0xa221c264,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_get_extend","lime/graphics/cairo/CairoPattern.hx",202,0x9806f3a5)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(202)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_extend.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,lime_cairo_pattern_get_extend,return )

int CairoPattern_Impl__obj::lime_cairo_pattern_get_filter( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_get_filter",0x603c1042,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_get_filter","lime/graphics/cairo/CairoPattern.hx",203,0x9806f3a5)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(203)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_filter.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,lime_cairo_pattern_get_filter,return )

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_get_matrix",0x96cf26cb,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_get_matrix","lime/graphics/cairo/CairoPattern.hx",204,0x9806f3a5)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(204)
	return ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_matrix.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,lime_cairo_pattern_get_matrix,return )

Void CairoPattern_Impl__obj::lime_cairo_pattern_set_extend( Dynamic handle,int extend){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_set_extend",0xa59f60d8,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_set_extend","lime/graphics/cairo/CairoPattern.hx",205,0x9806f3a5)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(extend,"extend")
		HX_STACK_LINE(205)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_extend.call(hx::DynamicPtr(handle),extend);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,lime_cairo_pattern_set_extend,(void))

Void CairoPattern_Impl__obj::lime_cairo_pattern_set_filter( Dynamic handle,int filter){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_set_filter",0x63b9aeb6,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_set_filter","lime/graphics/cairo/CairoPattern.hx",206,0x9806f3a5)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(206)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_filter.call(hx::DynamicPtr(handle),filter);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,lime_cairo_pattern_set_filter,(void))

Void CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix( Dynamic handle,Dynamic matrix){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","lime_cairo_pattern_set_matrix",0x9a4cc53f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.lime_cairo_pattern_set_matrix","lime/graphics/cairo/CairoPattern.hx",207,0x9806f3a5)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(207)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_matrix.call(hx::DynamicPtr(handle),hx::DynamicPtr(matrix));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,lime_cairo_pattern_set_matrix,(void))

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgb;

::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgba;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_for_surface;

::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_linear;

::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ,Float ,Float ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_radial;

::cpp::Function< ::hx::Object * ( Float ,Float ,Float ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgb;

::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgba;

::cpp::Function< int ( ::hx::Object * ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_color_stop_count;

::cpp::Function< int ( ::hx::Object * ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_extend;

::cpp::Function< int ( ::hx::Object * ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_filter;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_matrix;

::cpp::Function< void ( ::hx::Object * ,int ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_extend;

::cpp::Function< void ( ::hx::Object * ,int ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_filter;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_matrix;


CairoPattern_Impl__obj::CairoPattern_Impl__obj()
{
}

bool CairoPattern_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createRGB") ) { outValue = createRGB_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRGBA") ) { outValue = createRGBA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_extend") ) { outValue = get_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_extend") ) { outValue = set_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_filter") ) { outValue = get_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_filter") ) { outValue = set_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { outValue = set_matrix_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLinear") ) { outValue = createLinear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createRadial") ) { outValue = createRadial_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addColorStopRGB") ) { outValue = addColorStopRGB_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addColorStopRGBA") ) { outValue = addColorStopRGBA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createForSurface") ) { outValue = createForSurface_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_colorStopCount") ) { outValue = get_colorStopCount_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_rgb") ) { outValue = lime_cairo_pattern_create_rgb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_get_extend") ) { outValue = lime_cairo_pattern_get_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_get_filter") ) { outValue = lime_cairo_pattern_get_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_get_matrix") ) { outValue = lime_cairo_pattern_get_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_set_extend") ) { outValue = lime_cairo_pattern_set_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_set_filter") ) { outValue = lime_cairo_pattern_set_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_set_matrix") ) { outValue = lime_cairo_pattern_set_matrix_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_rgba") ) { outValue = lime_cairo_pattern_create_rgba_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_linear") ) { outValue = lime_cairo_pattern_create_linear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_radial") ) { outValue = lime_cairo_pattern_create_radial_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_add_color_stop_rgb") ) { outValue = lime_cairo_pattern_add_color_stop_rgb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_create_for_surface") ) { outValue = lime_cairo_pattern_create_for_surface_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_add_color_stop_rgba") ) { outValue = lime_cairo_pattern_add_color_stop_rgba_dyn(); return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_cairo_pattern_get_color_stop_count") ) { outValue = lime_cairo_pattern_get_color_stop_count_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgb,HX_HCSTRING("cffi_lime_cairo_pattern_add_color_stop_rgb","\xc1","\xeb","\x6e","\x90")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgba,HX_HCSTRING("cffi_lime_cairo_pattern_add_color_stop_rgba","\x80","\x5d","\x9f","\xd0")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_for_surface,HX_HCSTRING("cffi_lime_cairo_pattern_create_for_surface","\x2b","\xe4","\x30","\x7c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_linear,HX_HCSTRING("cffi_lime_cairo_pattern_create_linear","\xf1","\xf9","\x21","\xfd")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ,Float ,Float ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_radial,HX_HCSTRING("cffi_lime_cairo_pattern_create_radial","\xeb","\x66","\x78","\xc1")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,Float ,Float ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgb,HX_HCSTRING("cffi_lime_cairo_pattern_create_rgb","\x81","\xf3","\xe0","\x6b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgba,HX_HCSTRING("cffi_lime_cairo_pattern_create_rgba","\xc0","\x1d","\xf4","\xf8")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_color_stop_count,HX_HCSTRING("cffi_lime_cairo_pattern_get_color_stop_count","\x6e","\xc8","\xcf","\xae")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_extend,HX_HCSTRING("cffi_lime_cairo_pattern_get_extend","\x1a","\x80","\xac","\xbc")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_filter,HX_HCSTRING("cffi_lime_cairo_pattern_get_filter","\xf8","\xcd","\xc6","\x7a")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_matrix,HX_HCSTRING("cffi_lime_cairo_pattern_get_matrix","\x81","\xe4","\x59","\xb1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_extend,HX_HCSTRING("cffi_lime_cairo_pattern_set_extend","\x8e","\x1e","\x2a","\xc0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_filter,HX_HCSTRING("cffi_lime_cairo_pattern_set_filter","\x6c","\x6c","\x44","\x7e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_matrix,HX_HCSTRING("cffi_lime_cairo_pattern_set_matrix","\xf5","\x82","\xd7","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgb,"cffi_lime_cairo_pattern_add_color_stop_rgb");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgba,"cffi_lime_cairo_pattern_add_color_stop_rgba");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_for_surface,"cffi_lime_cairo_pattern_create_for_surface");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_linear,"cffi_lime_cairo_pattern_create_linear");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_radial,"cffi_lime_cairo_pattern_create_radial");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgb,"cffi_lime_cairo_pattern_create_rgb");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgba,"cffi_lime_cairo_pattern_create_rgba");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_color_stop_count,"cffi_lime_cairo_pattern_get_color_stop_count");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_extend,"cffi_lime_cairo_pattern_get_extend");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_filter,"cffi_lime_cairo_pattern_get_filter");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_matrix,"cffi_lime_cairo_pattern_get_matrix");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_extend,"cffi_lime_cairo_pattern_set_extend");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_filter,"cffi_lime_cairo_pattern_set_filter");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_matrix,"cffi_lime_cairo_pattern_set_matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgb,"cffi_lime_cairo_pattern_add_color_stop_rgb");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_add_color_stop_rgba,"cffi_lime_cairo_pattern_add_color_stop_rgba");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_for_surface,"cffi_lime_cairo_pattern_create_for_surface");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_linear,"cffi_lime_cairo_pattern_create_linear");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_radial,"cffi_lime_cairo_pattern_create_radial");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgb,"cffi_lime_cairo_pattern_create_rgb");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_create_rgba,"cffi_lime_cairo_pattern_create_rgba");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_color_stop_count,"cffi_lime_cairo_pattern_get_color_stop_count");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_extend,"cffi_lime_cairo_pattern_get_extend");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_filter,"cffi_lime_cairo_pattern_get_filter");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_get_matrix,"cffi_lime_cairo_pattern_get_matrix");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_extend,"cffi_lime_cairo_pattern_set_extend");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_filter,"cffi_lime_cairo_pattern_set_filter");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::cffi_lime_cairo_pattern_set_matrix,"cffi_lime_cairo_pattern_set_matrix");
};

#endif

hx::Class CairoPattern_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("addColorStopRGB","\xc9","\x58","\xf1","\xf2"),
	HX_HCSTRING("addColorStopRGBA","\x58","\x57","\x3c","\xa0"),
	HX_HCSTRING("createForSurface","\x40","\x28","\x97","\xec"),
	HX_HCSTRING("createLinear","\x01","\x92","\xf5","\x0e"),
	HX_HCSTRING("createRadial","\xfb","\xfe","\x4b","\xd3"),
	HX_HCSTRING("createRGB","\x71","\x95","\xe4","\x49"),
	HX_HCSTRING("createRGBA","\xb0","\x2d","\x1e","\x5e"),
	HX_HCSTRING("get_colorStopCount","\x53","\x08","\xec","\x5d"),
	HX_HCSTRING("get_extend","\xa3","\x41","\xa2","\xb7"),
	HX_HCSTRING("set_extend","\x17","\xe0","\x1f","\xbb"),
	HX_HCSTRING("get_filter","\x81","\x8f","\xbc","\x75"),
	HX_HCSTRING("set_filter","\xf5","\x2d","\x3a","\x79"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgb","\x5a","\x49","\x3d","\xbb"),
	HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgba","\xc7","\xe5","\x62","\x1a"),
	HX_HCSTRING("lime_cairo_pattern_create_for_surface","\xc4","\x41","\xff","\xa6"),
	HX_HCSTRING("lime_cairo_pattern_create_linear","\xf8","\x82","\x42","\xcf"),
	HX_HCSTRING("lime_cairo_pattern_create_radial","\xf2","\xef","\x98","\x93"),
	HX_HCSTRING("lime_cairo_pattern_create_rgb","\x1a","\x90","\x6b","\xce"),
	HX_HCSTRING("lime_cairo_pattern_create_rgba","\x07","\x87","\xb2","\xcf"),
	HX_HCSTRING("lime_cairo_pattern_get_color_stop_count","\x47","\x7e","\x23","\xf0"),
	HX_HCSTRING("lime_cairo_pattern_get_extend","\xb3","\x1c","\x37","\x1f"),
	HX_HCSTRING("lime_cairo_pattern_get_filter","\x91","\x6a","\x51","\xdd"),
	HX_HCSTRING("lime_cairo_pattern_get_matrix","\x1a","\x81","\xe4","\x13"),
	HX_HCSTRING("lime_cairo_pattern_set_extend","\x27","\xbb","\xb4","\x22"),
	HX_HCSTRING("lime_cairo_pattern_set_filter","\x05","\x09","\xcf","\xe0"),
	HX_HCSTRING("lime_cairo_pattern_set_matrix","\x8e","\x1f","\x62","\x17"),
	HX_HCSTRING("cffi_lime_cairo_pattern_add_color_stop_rgb","\xc1","\xeb","\x6e","\x90"),
	HX_HCSTRING("cffi_lime_cairo_pattern_add_color_stop_rgba","\x80","\x5d","\x9f","\xd0"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_for_surface","\x2b","\xe4","\x30","\x7c"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_linear","\xf1","\xf9","\x21","\xfd"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_radial","\xeb","\x66","\x78","\xc1"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_rgb","\x81","\xf3","\xe0","\x6b"),
	HX_HCSTRING("cffi_lime_cairo_pattern_create_rgba","\xc0","\x1d","\xf4","\xf8"),
	HX_HCSTRING("cffi_lime_cairo_pattern_get_color_stop_count","\x6e","\xc8","\xcf","\xae"),
	HX_HCSTRING("cffi_lime_cairo_pattern_get_extend","\x1a","\x80","\xac","\xbc"),
	HX_HCSTRING("cffi_lime_cairo_pattern_get_filter","\xf8","\xcd","\xc6","\x7a"),
	HX_HCSTRING("cffi_lime_cairo_pattern_get_matrix","\x81","\xe4","\x59","\xb1"),
	HX_HCSTRING("cffi_lime_cairo_pattern_set_extend","\x8e","\x1e","\x2a","\xc0"),
	HX_HCSTRING("cffi_lime_cairo_pattern_set_filter","\x6c","\x6c","\x44","\x7e"),
	HX_HCSTRING("cffi_lime_cairo_pattern_set_matrix","\xf5","\x82","\xd7","\xb4"),
	::String(null()) };

void CairoPattern_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","\x5f","\x30","\x47","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoPattern_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoPattern_Impl__obj >;
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

void CairoPattern_Impl__obj::__boot()
{
	cffi_lime_cairo_pattern_add_color_stop_rgb= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgb","\x5a","\x49","\x3d","\xbb"),HX_HCSTRING("oddddv","\xa7","\x9e","\x14","\x38"),false));
	cffi_lime_cairo_pattern_add_color_stop_rgba= ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgba","\xc7","\xe5","\x62","\x1a"),HX_HCSTRING("odddddv","\x41","\x24","\xf6","\xd9"),false));
	cffi_lime_cairo_pattern_create_for_surface= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_for_surface","\xc4","\x41","\xff","\xa6"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_create_linear= ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_linear","\xf8","\x82","\x42","\xcf"),HX_HCSTRING("ddddo","\x6f","\x91","\x77","\xd6"),false));
	cffi_lime_cairo_pattern_create_radial= ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_radial","\xf2","\xef","\x98","\x93"),HX_HCSTRING("ddddddo","\xef","\x09","\x8a","\x10"),false));
	cffi_lime_cairo_pattern_create_rgb= ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_rgb","\x1a","\x90","\x6b","\xce"),HX_HCSTRING("dddo","\x0b","\x8f","\x65","\x42"),false));
	cffi_lime_cairo_pattern_create_rgba= ::cpp::Function< ::hx::Object * ( Float ,Float ,Float ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_rgba","\x07","\x87","\xb2","\xcf"),HX_HCSTRING("ddddo","\x6f","\x91","\x77","\xd6"),false));
	cffi_lime_cairo_pattern_get_color_stop_count= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_color_stop_count","\x47","\x7e","\x23","\xf0"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_get_extend= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_extend","\xb3","\x1c","\x37","\x1f"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_get_filter= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_filter","\x91","\x6a","\x51","\xdd"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_get_matrix= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_matrix","\x1a","\x81","\xe4","\x13"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_cairo_pattern_set_extend= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_set_extend","\x27","\xbb","\xb4","\x22"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_pattern_set_filter= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_set_filter","\x05","\x09","\xcf","\xe0"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_pattern_set_matrix= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_set_matrix","\x8e","\x1f","\x62","\x17"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoPattern

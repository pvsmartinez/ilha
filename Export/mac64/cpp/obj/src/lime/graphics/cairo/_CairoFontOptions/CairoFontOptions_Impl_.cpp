#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontOptions{

Void CairoFontOptions_Impl__obj::__construct()
{
	return null();
}

//CairoFontOptions_Impl__obj::~CairoFontOptions_Impl__obj() { }

Dynamic CairoFontOptions_Impl__obj::__CreateEmpty() { return  new CairoFontOptions_Impl__obj; }
hx::ObjectPtr< CairoFontOptions_Impl__obj > CairoFontOptions_Impl__obj::__new()
{  hx::ObjectPtr< CairoFontOptions_Impl__obj > _result_ = new CairoFontOptions_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoFontOptions_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFontOptions_Impl__obj > _result_ = new CairoFontOptions_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoFontOptions_Impl__obj::_new( ){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","_new",0x3ba81ab0,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_._new","lime/graphics/cairo/CairoFontOptions.hx",21,0x355ba586)
	HX_STACK_LINE(21)
	Dynamic this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(24)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_create.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(24)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(24)
	this1 = tmp;
	HX_STACK_LINE(21)
	Dynamic tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_Impl__obj,_new,return )

int CairoFontOptions_Impl__obj::get_antialias( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_antialias",0xacf70356,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_antialias","lime/graphics/cairo/CairoFontOptions.hx",39,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(42)
	return ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_antialias.call(hx::DynamicPtr(this1));
	HX_STACK_LINE(45)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_antialias,return )

int CairoFontOptions_Impl__obj::set_antialias( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_antialias",0xf1fce562,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_antialias","lime/graphics/cairo/CairoFontOptions.hx",50,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(53)
	::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_antialias.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(56)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_antialias,return )

int CairoFontOptions_Impl__obj::get_hintMetrics( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_hintMetrics",0xb7d30224,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",61,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(64)
	return ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_metrics.call(hx::DynamicPtr(this1));
	HX_STACK_LINE(67)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_hintMetrics,return )

int CairoFontOptions_Impl__obj::set_hintMetrics( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_hintMetrics",0xb39e7f30,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",72,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(75)
	::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_metrics.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(78)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_hintMetrics,return )

int CairoFontOptions_Impl__obj::get_hintStyle( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_hintStyle",0xb5ba9ad2,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",84,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(87)
	return ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_style.call(hx::DynamicPtr(this1));
	HX_STACK_LINE(90)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_hintStyle,return )

int CairoFontOptions_Impl__obj::set_hintStyle( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_hintStyle",0xfac07cde,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",95,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(98)
	::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_style.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(101)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_hintStyle,return )

int CairoFontOptions_Impl__obj::get_subpixelOrder( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","get_subpixelOrder",0x298e5e50,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.get_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",106,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(109)
	return ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_subpixel_order.call(hx::DynamicPtr(this1));
	HX_STACK_LINE(112)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,get_subpixelOrder,return )

int CairoFontOptions_Impl__obj::set_subpixelOrder( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","set_subpixelOrder",0x4cfc365c,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.set_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",117,0x355ba586)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(120)
	::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_subpixel_order.call(hx::DynamicPtr(this1),value);
	HX_STACK_LINE(123)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,set_subpixelOrder,return )

Dynamic CairoFontOptions_Impl__obj::lime_cairo_font_options_create( ){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","lime_cairo_font_options_create",0x9787eb5b,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.lime_cairo_font_options_create","lime/graphics/cairo/CairoFontOptions.hx",136,0x355ba586)
	HX_STACK_LINE(136)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_create.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(136)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(136)
	return tmp;
	HX_STACK_LINE(136)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_Impl__obj,lime_cairo_font_options_create,return )

int CairoFontOptions_Impl__obj::lime_cairo_font_options_get_antialias( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","lime_cairo_font_options_get_antialias",0x37660006,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.lime_cairo_font_options_get_antialias","lime/graphics/cairo/CairoFontOptions.hx",137,0x355ba586)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(137)
	return ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_antialias.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,lime_cairo_font_options_get_antialias,return )

int CairoFontOptions_Impl__obj::lime_cairo_font_options_get_hint_metrics( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","lime_cairo_font_options_get_hint_metrics",0xd4dcd5f3,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.lime_cairo_font_options_get_hint_metrics","lime/graphics/cairo/CairoFontOptions.hx",138,0x355ba586)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(138)
	return ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_metrics.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,lime_cairo_font_options_get_hint_metrics,return )

int CairoFontOptions_Impl__obj::lime_cairo_font_options_get_hint_style( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","lime_cairo_font_options_get_hint_style",0x19d88ce1,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.lime_cairo_font_options_get_hint_style","lime/graphics/cairo/CairoFontOptions.hx",139,0x355ba586)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(139)
	return ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_style.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,lime_cairo_font_options_get_hint_style,return )

int CairoFontOptions_Impl__obj::lime_cairo_font_options_get_subpixel_order( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","lime_cairo_font_options_get_subpixel_order",0x1c5564fd,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.lime_cairo_font_options_get_subpixel_order","lime/graphics/cairo/CairoFontOptions.hx",140,0x355ba586)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(140)
	return ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_subpixel_order.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_Impl__obj,lime_cairo_font_options_get_subpixel_order,return )

Void CairoFontOptions_Impl__obj::lime_cairo_font_options_set_antialias( Dynamic handle,int v){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","lime_cairo_font_options_set_antialias",0x7c6be212,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.lime_cairo_font_options_set_antialias","lime/graphics/cairo/CairoFontOptions.hx",141,0x355ba586)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(141)
		::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_antialias.call(hx::DynamicPtr(handle),v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,lime_cairo_font_options_set_antialias,(void))

Void CairoFontOptions_Impl__obj::lime_cairo_font_options_set_hint_metrics( Dynamic handle,int v){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","lime_cairo_font_options_set_hint_metrics",0x2b1ec367,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.lime_cairo_font_options_set_hint_metrics","lime/graphics/cairo/CairoFontOptions.hx",142,0x355ba586)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(142)
		::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_metrics.call(hx::DynamicPtr(handle),v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,lime_cairo_font_options_set_hint_metrics,(void))

Void CairoFontOptions_Impl__obj::lime_cairo_font_options_set_hint_style( Dynamic handle,int v){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","lime_cairo_font_options_set_hint_style",0x39f87555,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.lime_cairo_font_options_set_hint_style","lime/graphics/cairo/CairoFontOptions.hx",143,0x355ba586)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(143)
		::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_style.call(hx::DynamicPtr(handle),v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,lime_cairo_font_options_set_hint_style,(void))

Void CairoFontOptions_Impl__obj::lime_cairo_font_options_set_subpixel_order( Dynamic handle,int v){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","lime_cairo_font_options_set_subpixel_order",0xf9049771,"lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_.lime_cairo_font_options_set_subpixel_order","lime/graphics/cairo/CairoFontOptions.hx",144,0x355ba586)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(144)
		::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_subpixel_order.call(hx::DynamicPtr(handle),v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFontOptions_Impl__obj,lime_cairo_font_options_set_subpixel_order,(void))

::cpp::Function< ::hx::Object * ( ) > CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_create;

::cpp::Function< int ( ::hx::Object * ) > CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_antialias;

::cpp::Function< int ( ::hx::Object * ) > CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_metrics;

::cpp::Function< int ( ::hx::Object * ) > CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_style;

::cpp::Function< int ( ::hx::Object * ) > CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_subpixel_order;

::cpp::Function< void ( ::hx::Object * ,int ) > CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_antialias;

::cpp::Function< void ( ::hx::Object * ,int ) > CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_metrics;

::cpp::Function< void ( ::hx::Object * ,int ) > CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_style;

::cpp::Function< void ( ::hx::Object * ,int ) > CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_subpixel_order;


CairoFontOptions_Impl__obj::CairoFontOptions_Impl__obj()
{
}

bool CairoFontOptions_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_antialias") ) { outValue = get_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_antialias") ) { outValue = set_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_hintStyle") ) { outValue = get_hintStyle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_hintStyle") ) { outValue = set_hintStyle_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_hintMetrics") ) { outValue = get_hintMetrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_hintMetrics") ) { outValue = set_hintMetrics_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_subpixelOrder") ) { outValue = get_subpixelOrder_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_subpixelOrder") ) { outValue = set_subpixelOrder_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_create") ) { outValue = lime_cairo_font_options_create_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_antialias") ) { outValue = lime_cairo_font_options_get_antialias_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_antialias") ) { outValue = lime_cairo_font_options_set_antialias_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_style") ) { outValue = lime_cairo_font_options_get_hint_style_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_style") ) { outValue = lime_cairo_font_options_set_hint_style_dyn(); return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_metrics") ) { outValue = lime_cairo_font_options_get_hint_metrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_metrics") ) { outValue = lime_cairo_font_options_set_hint_metrics_dyn(); return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_subpixel_order") ) { outValue = lime_cairo_font_options_get_subpixel_order_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_subpixel_order") ) { outValue = lime_cairo_font_options_set_subpixel_order_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_create,HX_HCSTRING("cffi_lime_cairo_font_options_create","\x05","\xd6","\xdf","\xc6")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_antialias,HX_HCSTRING("cffi_lime_cairo_font_options_get_antialias","\x9c","\x1e","\xbf","\xc8")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_metrics,HX_HCSTRING("cffi_lime_cairo_font_options_get_hint_metrics","\x1d","\x79","\xb0","\x18")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_style,HX_HCSTRING("cffi_lime_cairo_font_options_get_hint_style","\x8b","\x31","\x7a","\xb6")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_subpixel_order,HX_HCSTRING("cffi_lime_cairo_font_options_get_subpixel_order","\xa7","\xa6","\xb7","\xb6")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_antialias,HX_HCSTRING("cffi_lime_cairo_font_options_set_antialias","\xa8","\x00","\xc5","\x0d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_metrics,HX_HCSTRING("cffi_lime_cairo_font_options_set_hint_metrics","\x91","\x66","\xf2","\x6e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_style,HX_HCSTRING("cffi_lime_cairo_font_options_set_hint_style","\xff","\x19","\x9a","\xd6")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_subpixel_order,HX_HCSTRING("cffi_lime_cairo_font_options_set_subpixel_order","\x1b","\xd9","\x66","\x93")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_create,"cffi_lime_cairo_font_options_create");
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_antialias,"cffi_lime_cairo_font_options_get_antialias");
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_metrics,"cffi_lime_cairo_font_options_get_hint_metrics");
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_style,"cffi_lime_cairo_font_options_get_hint_style");
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_subpixel_order,"cffi_lime_cairo_font_options_get_subpixel_order");
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_antialias,"cffi_lime_cairo_font_options_set_antialias");
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_metrics,"cffi_lime_cairo_font_options_set_hint_metrics");
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_style,"cffi_lime_cairo_font_options_set_hint_style");
	HX_MARK_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_subpixel_order,"cffi_lime_cairo_font_options_set_subpixel_order");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_create,"cffi_lime_cairo_font_options_create");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_antialias,"cffi_lime_cairo_font_options_get_antialias");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_metrics,"cffi_lime_cairo_font_options_get_hint_metrics");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_hint_style,"cffi_lime_cairo_font_options_get_hint_style");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_get_subpixel_order,"cffi_lime_cairo_font_options_get_subpixel_order");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_antialias,"cffi_lime_cairo_font_options_set_antialias");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_metrics,"cffi_lime_cairo_font_options_set_hint_metrics");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_hint_style,"cffi_lime_cairo_font_options_set_hint_style");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_Impl__obj::cffi_lime_cairo_font_options_set_subpixel_order,"cffi_lime_cairo_font_options_set_subpixel_order");
};

#endif

hx::Class CairoFontOptions_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_antialias","\x85","\xaa","\x4d","\x37"),
	HX_HCSTRING("set_antialias","\x91","\x8c","\x53","\x7c"),
	HX_HCSTRING("get_hintMetrics","\x13","\x13","\x85","\x82"),
	HX_HCSTRING("set_hintMetrics","\x1f","\x90","\x50","\x7e"),
	HX_HCSTRING("get_hintStyle","\x01","\x42","\x11","\x40"),
	HX_HCSTRING("set_hintStyle","\x0d","\x24","\x17","\x85"),
	HX_HCSTRING("get_subpixelOrder","\xff","\xc8","\x99","\x91"),
	HX_HCSTRING("set_subpixelOrder","\x0b","\xa1","\x07","\xb5"),
	HX_HCSTRING("lime_cairo_font_options_create","\x4c","\x3f","\x9e","\x9d"),
	HX_HCSTRING("lime_cairo_font_options_get_antialias","\x35","\x7c","\x8d","\xf3"),
	HX_HCSTRING("lime_cairo_font_options_get_hint_metrics","\x24","\xe1","\x9b","\x00"),
	HX_HCSTRING("lime_cairo_font_options_get_hint_style","\xd2","\xb9","\x3d","\x00"),
	HX_HCSTRING("lime_cairo_font_options_get_subpixel_order","\x6e","\x5e","\x52","\xfe"),
	HX_HCSTRING("lime_cairo_font_options_set_antialias","\x41","\x5e","\x93","\x38"),
	HX_HCSTRING("lime_cairo_font_options_set_hint_metrics","\x98","\xce","\xdd","\x56"),
	HX_HCSTRING("lime_cairo_font_options_set_hint_style","\x46","\xa2","\x5d","\x20"),
	HX_HCSTRING("lime_cairo_font_options_set_subpixel_order","\xe2","\x90","\x01","\xdb"),
	HX_HCSTRING("cffi_lime_cairo_font_options_create","\x05","\xd6","\xdf","\xc6"),
	HX_HCSTRING("cffi_lime_cairo_font_options_get_antialias","\x9c","\x1e","\xbf","\xc8"),
	HX_HCSTRING("cffi_lime_cairo_font_options_get_hint_metrics","\x1d","\x79","\xb0","\x18"),
	HX_HCSTRING("cffi_lime_cairo_font_options_get_hint_style","\x8b","\x31","\x7a","\xb6"),
	HX_HCSTRING("cffi_lime_cairo_font_options_get_subpixel_order","\xa7","\xa6","\xb7","\xb6"),
	HX_HCSTRING("cffi_lime_cairo_font_options_set_antialias","\xa8","\x00","\xc5","\x0d"),
	HX_HCSTRING("cffi_lime_cairo_font_options_set_hint_metrics","\x91","\x66","\xf2","\x6e"),
	HX_HCSTRING("cffi_lime_cairo_font_options_set_hint_style","\xff","\x19","\x9a","\xd6"),
	HX_HCSTRING("cffi_lime_cairo_font_options_set_subpixel_order","\x1b","\xd9","\x66","\x93"),
	::String(null()) };

void CairoFontOptions_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_","\x7f","\x5d","\x67","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFontOptions_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoFontOptions_Impl__obj >;
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

void CairoFontOptions_Impl__obj::__boot()
{
	cffi_lime_cairo_font_options_create= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_create","\x4c","\x3f","\x9e","\x9d"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_cairo_font_options_get_antialias= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_antialias","\x35","\x7c","\x8d","\xf3"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_font_options_get_hint_metrics= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_hint_metrics","\x24","\xe1","\x9b","\x00"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_font_options_get_hint_style= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_hint_style","\xd2","\xb9","\x3d","\x00"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_font_options_get_subpixel_order= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_subpixel_order","\x6e","\x5e","\x52","\xfe"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_font_options_set_antialias= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_antialias","\x41","\x5e","\x93","\x38"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_font_options_set_hint_metrics= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_hint_metrics","\x98","\xce","\xdd","\x56"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_font_options_set_hint_style= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_hint_style","\x46","\xa2","\x5d","\x20"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_cairo_font_options_set_subpixel_order= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_subpixel_order","\xe2","\x90","\x01","\xdb"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontOptions

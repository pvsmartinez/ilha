#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoImageSurface{

Void CairoImageSurface_Impl__obj::__construct()
{
	return null();
}

//CairoImageSurface_Impl__obj::~CairoImageSurface_Impl__obj() { }

Dynamic CairoImageSurface_Impl__obj::__CreateEmpty() { return  new CairoImageSurface_Impl__obj; }
hx::ObjectPtr< CairoImageSurface_Impl__obj > CairoImageSurface_Impl__obj::__new()
{  hx::ObjectPtr< CairoImageSurface_Impl__obj > _result_ = new CairoImageSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoImageSurface_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoImageSurface_Impl__obj > _result_ = new CairoImageSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoImageSurface_Impl__obj::_new( int format,int width,int height){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","_new",0x1720eff8,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_._new","lime/graphics/cairo/CairoImageSurface.hx",21,0x38340d55)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(21)
	Dynamic this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(24)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create.call(format,width,height);		HX_STACK_VAR(inVal,"inVal");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoImageSurface_Impl__obj,_new,return )

Dynamic CairoImageSurface_Impl__obj::create( Dynamic data,int format,int width,int height,int stride){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","create",0xbc2e5553,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.create","lime/graphics/cairo/CairoImageSurface.hx",32,0x38340d55)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(stride,"stride")
	HX_STACK_LINE(35)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		Float data1 = data;		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::hx::Object * inVal = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create_for_data.call(data1,format,width,height,stride);		HX_STACK_VAR(inVal,"inVal");
			HX_STACK_LINE(35)
			::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			tmp = Dynamic(tmp2);
		}
	}
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoImageSurface_Impl__obj,create,return )

Dynamic CairoImageSurface_Impl__obj::fromImage( ::lime::graphics::Image image){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","fromImage",0x22dd6b9a,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.fromImage","lime/graphics/cairo/CairoImageSurface.hx",43,0x38340d55)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(46)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::lime::utils::ArrayBufferView tmp1 = image->get_data();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		Dynamic handle = tmp1->buffer;		HX_STACK_VAR(handle,"handle");
		HX_STACK_LINE(46)
		tmp = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_bytes_get_data_pointer.call(hx::DynamicPtr(handle));
	}
	HX_STACK_LINE(46)
	int tmp1 = image->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	int tmp2 = image->height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	int tmp3 = image->buffer->get_stride();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	Dynamic tmp4 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create(tmp,(int)0,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,fromImage,return )

Dynamic CairoImageSurface_Impl__obj::get_data( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_data",0x7a9683ca,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_data","lime/graphics/cairo/CairoImageSurface.hx",64,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(64)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_data.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_data,return )

int CairoImageSurface_Impl__obj::get_format( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_format",0x0b2064d7,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_format","lime/graphics/cairo/CairoImageSurface.hx",75,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(75)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_format.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_format,return )

int CairoImageSurface_Impl__obj::get_height( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_height",0x0fdddd87,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_height","lime/graphics/cairo/CairoImageSurface.hx",86,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(86)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_height.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_height,return )

int CairoImageSurface_Impl__obj::get_stride( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_stride",0x1ec1f5b9,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_stride","lime/graphics/cairo/CairoImageSurface.hx",97,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(97)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_stride.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_stride,return )

int CairoImageSurface_Impl__obj::get_width( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_width",0xbef77466,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_width","lime/graphics/cairo/CairoImageSurface.hx",108,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(108)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_width.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_width,return )

Float CairoImageSurface_Impl__obj::lime_bytes_get_data_pointer( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","lime_bytes_get_data_pointer",0xf26497f8,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.lime_bytes_get_data_pointer","lime/graphics/cairo/CairoImageSurface.hx",124,0x38340d55)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(124)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_bytes_get_data_pointer.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,lime_bytes_get_data_pointer,return )

Dynamic CairoImageSurface_Impl__obj::lime_cairo_image_surface_create( int format,int width,int height){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","lime_cairo_image_surface_create",0xbaca5efc,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.lime_cairo_image_surface_create","lime/graphics/cairo/CairoImageSurface.hx",125,0x38340d55)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(125)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create.call(format,width,height);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(125)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(125)
	return tmp;
	HX_STACK_LINE(125)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoImageSurface_Impl__obj,lime_cairo_image_surface_create,return )

Dynamic CairoImageSurface_Impl__obj::lime_cairo_image_surface_create_for_data( Float data,int format,int width,int height,int stride){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","lime_cairo_image_surface_create_for_data",0xe0e96343,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.lime_cairo_image_surface_create_for_data","lime/graphics/cairo/CairoImageSurface.hx",126,0x38340d55)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(stride,"stride")
	HX_STACK_LINE(126)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		::hx::Object * inVal = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create_for_data.call(data,format,width,height,stride);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(126)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(126)
	return tmp;
	HX_STACK_LINE(126)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoImageSurface_Impl__obj,lime_cairo_image_surface_create_for_data,return )

Float CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_data( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","lime_cairo_image_surface_get_data",0x5f8709b3,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.lime_cairo_image_surface_get_data","lime/graphics/cairo/CairoImageSurface.hx",127,0x38340d55)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(127)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_data.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,lime_cairo_image_surface_get_data,return )

int CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_format( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","lime_cairo_image_surface_get_format",0x71acf700,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.lime_cairo_image_surface_get_format","lime/graphics/cairo/CairoImageSurface.hx",128,0x38340d55)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(128)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_format.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,lime_cairo_image_surface_get_format,return )

int CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_height( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","lime_cairo_image_surface_get_height",0x766a6fb0,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.lime_cairo_image_surface_get_height","lime/graphics/cairo/CairoImageSurface.hx",129,0x38340d55)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(129)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_height.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,lime_cairo_image_surface_get_height,return )

int CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_stride( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","lime_cairo_image_surface_get_stride",0x854e87e2,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.lime_cairo_image_surface_get_stride","lime/graphics/cairo/CairoImageSurface.hx",130,0x38340d55)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(130)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_stride.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,lime_cairo_image_surface_get_stride,return )

int CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_width( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","lime_cairo_image_surface_get_width",0x2c7c1a5d,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.lime_cairo_image_surface_get_width","lime/graphics/cairo/CairoImageSurface.hx",131,0x38340d55)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(131)
	return ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_width.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,lime_cairo_image_surface_get_width,return )

::cpp::Function< Float ( ::hx::Object * ) > CairoImageSurface_Impl__obj::cffi_lime_bytes_get_data_pointer;

::cpp::Function< ::hx::Object * ( int ,int ,int ) > CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create;

::cpp::Function< ::hx::Object * ( Float ,int ,int ,int ,int ) > CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create_for_data;

::cpp::Function< Float ( ::hx::Object * ) > CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_data;

::cpp::Function< int ( ::hx::Object * ) > CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_format;

::cpp::Function< int ( ::hx::Object * ) > CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_height;

::cpp::Function< int ( ::hx::Object * ) > CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_stride;

::cpp::Function< int ( ::hx::Object * ) > CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_width;


CairoImageSurface_Impl__obj::CairoImageSurface_Impl__obj()
{
}

bool CairoImageSurface_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { outValue = get_data_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_format") ) { outValue = get_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_stride") ) { outValue = get_stride_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bytes_get_data_pointer") ) { outValue = lime_bytes_get_data_pointer_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_create") ) { outValue = lime_cairo_image_surface_create_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_data") ) { outValue = lime_cairo_image_surface_get_data_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_width") ) { outValue = lime_cairo_image_surface_get_width_dyn(); return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_format") ) { outValue = lime_cairo_image_surface_get_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_height") ) { outValue = lime_cairo_image_surface_get_height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_get_stride") ) { outValue = lime_cairo_image_surface_get_stride_dyn(); return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_cairo_image_surface_create_for_data") ) { outValue = lime_cairo_image_surface_create_for_data_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &CairoImageSurface_Impl__obj::cffi_lime_bytes_get_data_pointer,HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,int ,int ) >*/ ,(void *) &CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create,HX_HCSTRING("cffi_lime_cairo_image_surface_create","\x5a","\xb9","\x1e","\xbf")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,int ,int ,int ,int ) >*/ ,(void *) &CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create_for_data,HX_HCSTRING("cffi_lime_cairo_image_surface_create_for_data","\x25","\xcd","\x91","\x7b")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_data,HX_HCSTRING("cffi_lime_cairo_image_surface_get_data","\x91","\x37","\x6d","\x65")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_format,HX_HCSTRING("cffi_lime_cairo_image_surface_get_format","\x5e","\xd8","\xe0","\x5f")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_height,HX_HCSTRING("cffi_lime_cairo_image_surface_get_height","\x0e","\x51","\x9e","\x64")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_stride,HX_HCSTRING("cffi_lime_cairo_image_surface_get_stride","\x40","\x69","\x82","\x73")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_width,HX_HCSTRING("cffi_lime_cairo_image_surface_get_width","\xbf","\x0e","\xfe","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create,"cffi_lime_cairo_image_surface_create");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create_for_data,"cffi_lime_cairo_image_surface_create_for_data");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_data,"cffi_lime_cairo_image_surface_get_data");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_format,"cffi_lime_cairo_image_surface_get_format");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_height,"cffi_lime_cairo_image_surface_get_height");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_stride,"cffi_lime_cairo_image_surface_get_stride");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_width,"cffi_lime_cairo_image_surface_get_width");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create,"cffi_lime_cairo_image_surface_create");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_create_for_data,"cffi_lime_cairo_image_surface_create_for_data");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_data,"cffi_lime_cairo_image_surface_get_data");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_format,"cffi_lime_cairo_image_surface_get_format");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_height,"cffi_lime_cairo_image_surface_get_height");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_stride,"cffi_lime_cairo_image_surface_get_stride");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::cffi_lime_cairo_image_surface_get_width,"cffi_lime_cairo_image_surface_get_width");
};

#endif

hx::Class CairoImageSurface_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_stride","\xe2","\x8f","\xb7","\x01"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),
	HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce"),
	HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63"),
	HX_HCSTRING("lime_cairo_image_surface_get_data","\xaa","\x94","\xc4","\x6f"),
	HX_HCSTRING("lime_cairo_image_surface_get_format","\xb7","\x6d","\x9c","\x34"),
	HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39"),
	HX_HCSTRING("lime_cairo_image_surface_get_stride","\x99","\xfe","\x3d","\x48"),
	HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52"),
	HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_create","\x5a","\xb9","\x1e","\xbf"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_create_for_data","\x25","\xcd","\x91","\x7b"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_data","\x91","\x37","\x6d","\x65"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_format","\x5e","\xd8","\xe0","\x5f"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_height","\x0e","\x51","\x9e","\x64"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_stride","\x40","\x69","\x82","\x73"),
	HX_HCSTRING("cffi_lime_cairo_image_surface_get_width","\xbf","\x0e","\xfe","\x4f"),
	::String(null()) };

void CairoImageSurface_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","\x37","\x8d","\x2e","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoImageSurface_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoImageSurface_Impl__obj >;
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

void CairoImageSurface_Impl__obj::__boot()
{
	cffi_lime_bytes_get_data_pointer= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_cairo_image_surface_create= ::cpp::Function< ::hx::Object * ( int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce"),HX_HCSTRING("iiio","\xc6","\x6f","\xb7","\x45"),false));
	cffi_lime_cairo_image_surface_create_for_data= ::cpp::Function< ::hx::Object * ( Float ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63"),HX_HCSTRING("diiiio","\xcb","\x6d","\x7a","\xb6"),false));
	cffi_lime_cairo_image_surface_get_data= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_data","\xaa","\x94","\xc4","\x6f"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_cairo_image_surface_get_format= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_format","\xb7","\x6d","\x9c","\x34"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_image_surface_get_height= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_image_surface_get_stride= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_stride","\x99","\xfe","\x3d","\x48"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_cairo_image_surface_get_width= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoImageSurface

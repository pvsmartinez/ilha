#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#define INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoImageSurface,CairoImageSurface_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoImageSurface{


class HXCPP_CLASS_ATTRIBUTES  CairoImageSurface_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoImageSurface_Impl__obj OBJ_;
		CairoImageSurface_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoImageSurface_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoImageSurface_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CairoImageSurface_Impl_","\xba","\x74","\x06","\x3c"); }

		static void __boot();
		static Dynamic _new( int format,int width,int height);
		static Dynamic _new_dyn();

		static Dynamic create( Dynamic data,int format,int width,int height,int stride);
		static Dynamic create_dyn();

		static Dynamic fromImage( ::lime::graphics::Image image);
		static Dynamic fromImage_dyn();

		static Dynamic get_data( Dynamic this1);
		static Dynamic get_data_dyn();

		static int get_format( Dynamic this1);
		static Dynamic get_format_dyn();

		static int get_height( Dynamic this1);
		static Dynamic get_height_dyn();

		static int get_stride( Dynamic this1);
		static Dynamic get_stride_dyn();

		static int get_width( Dynamic this1);
		static Dynamic get_width_dyn();

		static Float lime_bytes_get_data_pointer( Dynamic handle);
		static Dynamic lime_bytes_get_data_pointer_dyn();

		static Dynamic lime_cairo_image_surface_create( int format,int width,int height);
		static Dynamic lime_cairo_image_surface_create_dyn();

		static Dynamic lime_cairo_image_surface_create_for_data( Float data,int format,int width,int height,int stride);
		static Dynamic lime_cairo_image_surface_create_for_data_dyn();

		static Float lime_cairo_image_surface_get_data( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_data_dyn();

		static int lime_cairo_image_surface_get_format( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_format_dyn();

		static int lime_cairo_image_surface_get_height( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_height_dyn();

		static int lime_cairo_image_surface_get_stride( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_stride_dyn();

		static int lime_cairo_image_surface_get_width( Dynamic handle);
		static Dynamic lime_cairo_image_surface_get_width_dyn();

		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_bytes_get_data_pointer;
		static ::cpp::Function< ::hx::Object * ( int ,int ,int ) > cffi_lime_cairo_image_surface_create;
		static ::cpp::Function< ::hx::Object * ( Float ,int ,int ,int ,int ) > cffi_lime_cairo_image_surface_create_for_data;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_data;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_format;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_height;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_stride;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_image_surface_get_width;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoImageSurface

#endif /* INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_ */ 

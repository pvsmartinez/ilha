#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#define INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoFontOptions,CairoFontOptions_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontOptions{


class HXCPP_CLASS_ATTRIBUTES  CairoFontOptions_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoFontOptions_Impl__obj OBJ_;
		CairoFontOptions_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoFontOptions.CairoFontOptions_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoFontOptions_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoFontOptions_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CairoFontOptions_Impl_","\xa7","\xb1","\x95","\xe4"); }

		static void __boot();
		static Dynamic _new( );
		static Dynamic _new_dyn();

		static int get_antialias( Dynamic this1);
		static Dynamic get_antialias_dyn();

		static int set_antialias( Dynamic this1,int value);
		static Dynamic set_antialias_dyn();

		static int get_hintMetrics( Dynamic this1);
		static Dynamic get_hintMetrics_dyn();

		static int set_hintMetrics( Dynamic this1,int value);
		static Dynamic set_hintMetrics_dyn();

		static int get_hintStyle( Dynamic this1);
		static Dynamic get_hintStyle_dyn();

		static int set_hintStyle( Dynamic this1,int value);
		static Dynamic set_hintStyle_dyn();

		static int get_subpixelOrder( Dynamic this1);
		static Dynamic get_subpixelOrder_dyn();

		static int set_subpixelOrder( Dynamic this1,int value);
		static Dynamic set_subpixelOrder_dyn();

		static Dynamic lime_cairo_font_options_create( );
		static Dynamic lime_cairo_font_options_create_dyn();

		static int lime_cairo_font_options_get_antialias( Dynamic handle);
		static Dynamic lime_cairo_font_options_get_antialias_dyn();

		static int lime_cairo_font_options_get_hint_metrics( Dynamic handle);
		static Dynamic lime_cairo_font_options_get_hint_metrics_dyn();

		static int lime_cairo_font_options_get_hint_style( Dynamic handle);
		static Dynamic lime_cairo_font_options_get_hint_style_dyn();

		static int lime_cairo_font_options_get_subpixel_order( Dynamic handle);
		static Dynamic lime_cairo_font_options_get_subpixel_order_dyn();

		static Void lime_cairo_font_options_set_antialias( Dynamic handle,int v);
		static Dynamic lime_cairo_font_options_set_antialias_dyn();

		static Void lime_cairo_font_options_set_hint_metrics( Dynamic handle,int v);
		static Dynamic lime_cairo_font_options_set_hint_metrics_dyn();

		static Void lime_cairo_font_options_set_hint_style( Dynamic handle,int v);
		static Dynamic lime_cairo_font_options_set_hint_style_dyn();

		static Void lime_cairo_font_options_set_subpixel_order( Dynamic handle,int v);
		static Dynamic lime_cairo_font_options_set_subpixel_order_dyn();

		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_cairo_font_options_create;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_options_get_antialias;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_options_get_hint_metrics;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_options_get_hint_style;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_options_get_subpixel_order;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_font_options_set_antialias;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_font_options_set_hint_metrics;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_font_options_set_hint_style;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_font_options_set_subpixel_order;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontOptions

#endif /* INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_ */ 

#ifndef INCLUDED_lime_graphics_cairo__CairoFontFace_CairoFontFace_Impl_
#define INCLUDED_lime_graphics_cairo__CairoFontFace_CairoFontFace_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoFontFace,CairoFontFace_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontFace{


class HXCPP_CLASS_ATTRIBUTES  CairoFontFace_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoFontFace_Impl__obj OBJ_;
		CairoFontFace_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoFontFace_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoFontFace_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CairoFontFace_Impl_","\x34","\x3a","\x95","\xc0"); }

		static void __boot();
		static Dynamic _new( );
		static Dynamic _new_dyn();

		static int status( Dynamic this1);
		static Dynamic status_dyn();

		static int lime_cairo_font_face_status( Dynamic handle);
		static Dynamic lime_cairo_font_face_status_dyn();

		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_font_face_status;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontFace

#endif /* INCLUDED_lime_graphics_cairo__CairoFontFace_CairoFontFace_Impl_ */ 

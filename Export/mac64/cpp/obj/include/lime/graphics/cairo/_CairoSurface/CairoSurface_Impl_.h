#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#define INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoSurface,CairoSurface_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSurface{


class HXCPP_CLASS_ATTRIBUTES  CairoSurface_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoSurface_Impl__obj OBJ_;
		CairoSurface_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoSurface.CairoSurface_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoSurface_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoSurface_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CairoSurface_Impl_","\x05","\x91","\x98","\x4d"); }

		static void __boot();
		static Void flush( Dynamic this1);
		static Dynamic flush_dyn();

		static Void lime_cairo_surface_flush( Dynamic surface);
		static Dynamic lime_cairo_surface_flush_dyn();

		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_surface_flush;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSurface

#endif /* INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_ */ 

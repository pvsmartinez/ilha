#ifndef INCLUDED_openfl_display_GradientType
#define INCLUDED_openfl_display_GradientType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,GradientType)
namespace openfl{
namespace display{


class GradientType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GradientType_obj OBJ_;

	public:
		GradientType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.display.GradientType","\x34","\xfc","\xdd","\x41"); }
		::String __ToString() const { return HX_HCSTRING("GradientType.","\x04","\xf0","\x81","\x94") + tag; }

		static ::openfl::display::GradientType LINEAR;
		static inline ::openfl::display::GradientType LINEAR_dyn() { return LINEAR; }
		static ::openfl::display::GradientType RADIAL;
		static inline ::openfl::display::GradientType RADIAL_dyn() { return RADIAL; }
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GradientType */ 

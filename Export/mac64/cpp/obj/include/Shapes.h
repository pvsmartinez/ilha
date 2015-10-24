#ifndef INCLUDED_Shapes
#define INCLUDED_Shapes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Shapes)


class Shapes_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Shapes_obj OBJ_;

	public:
		Shapes_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("Shapes","\x52","\x4e","\xbe","\x51"); }
		::String __ToString() const { return HX_HCSTRING("Shapes.","\x9c","\x39","\xc6","\x34") + tag; }

		static ::Shapes circle;
		static inline ::Shapes circle_dyn() { return circle; }
		static ::Shapes square;
		static inline ::Shapes square_dyn() { return square; }
};


#endif /* INCLUDED_Shapes */ 

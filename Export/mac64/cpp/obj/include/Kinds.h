#ifndef INCLUDED_Kinds
#define INCLUDED_Kinds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Kinds)


class Kinds_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Kinds_obj OBJ_;

	public:
		Kinds_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("Kinds","\x7f","\xb8","\xc8","\x74"); }
		::String __ToString() const { return HX_HCSTRING("Kinds.","\xcf","\xb6","\xd8","\xba") + tag; }

		static ::Kinds bush;
		static inline ::Kinds bush_dyn() { return bush; }
		static ::Kinds cherry;
		static inline ::Kinds cherry_dyn() { return cherry; }
};


#endif /* INCLUDED_Kinds */ 

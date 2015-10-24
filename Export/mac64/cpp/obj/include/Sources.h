#ifndef INCLUDED_Sources
#define INCLUDED_Sources

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sources)


class Sources_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Sources_obj OBJ_;

	public:
		Sources_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("Sources","\x18","\x37","\x9a","\x86"); }
		::String __ToString() const { return HX_HCSTRING("Sources.","\x16","\xfe","\x55","\x40") + tag; }

		static ::Sources bush;
		static inline ::Sources bush_dyn() { return bush; }
		static ::Sources tree;
		static inline ::Sources tree_dyn() { return tree; }
};


#endif /* INCLUDED_Sources */ 

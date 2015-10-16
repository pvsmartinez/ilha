#ifndef INCLUDED_lime_system_Endian
#define INCLUDED_lime_system_Endian

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_system,Endian)
namespace lime{
namespace _system{


class Endian_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Endian_obj OBJ_;

	public:
		Endian_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.system.Endian","\x41","\x85","\x63","\xb4"); }
		::String __ToString() const { return HX_HCSTRING("Endian.","\x13","\x17","\x4e","\x0a") + tag; }

		static ::lime::_system::Endian _BIG_ENDIAN;
		static inline ::lime::_system::Endian _BIG_ENDIAN_dyn() { return _BIG_ENDIAN; }
		static ::lime::_system::Endian _LITTLE_ENDIAN;
		static inline ::lime::_system::Endian _LITTLE_ENDIAN_dyn() { return _LITTLE_ENDIAN; }
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_Endian */ 

#ifndef INCLUDED_lime_system_SensorType
#define INCLUDED_lime_system_SensorType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_system,SensorType)
namespace lime{
namespace _system{


class SensorType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SensorType_obj OBJ_;

	public:
		SensorType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.system.SensorType","\xba","\x2d","\xf6","\xed"); }
		::String __ToString() const { return HX_HCSTRING("SensorType.","\x7a","\xf3","\x58","\x45") + tag; }

		static ::lime::_system::SensorType ACCELEROMETER;
		static inline ::lime::_system::SensorType ACCELEROMETER_dyn() { return ACCELEROMETER; }
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_SensorType */ 

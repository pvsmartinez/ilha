#ifndef INCLUDED_lime_system_Sensor
#define INCLUDED_lime_system_Sensor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,app,Event_Float_Float_Float_Void)
HX_DECLARE_CLASS2(lime,_system,Sensor)
HX_DECLARE_CLASS2(lime,_system,SensorType)
namespace lime{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  Sensor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sensor_obj OBJ_;
		Sensor_obj();
		Void __construct(::lime::_system::SensorType type,int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.system.Sensor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sensor_obj > __new(::lime::_system::SensorType type,int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sensor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sensor","\x5a","\xa6","\x24","\xa0"); }

		static void __boot();
		static ::haxe::ds::IntMap sensorByID;
		static Array< ::Dynamic > sensors;
		static Array< ::Dynamic > getSensors( ::lime::_system::SensorType type);
		static Dynamic getSensors_dyn();

		static Void registerSensor( ::lime::_system::SensorType type,int id);
		static Dynamic registerSensor_dyn();

		int id;
		::lime::app::Event_Float_Float_Float_Void onUpdate;
		::lime::_system::SensorType type;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_Sensor */ 

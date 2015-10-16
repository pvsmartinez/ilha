#include <hxcpp.h>

#ifndef INCLUDED_lime_system_SensorType
#include <lime/system/SensorType.h>
#endif
namespace lime{
namespace _system{

::lime::_system::SensorType SensorType_obj::ACCELEROMETER;

HX_DEFINE_CREATE_ENUM(SensorType_obj)

int SensorType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ACCELEROMETER","\xaf","\xc6","\x4d","\xef")) return 0;
	return super::__FindIndex(inName);
}

int SensorType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ACCELEROMETER","\xaf","\xc6","\x4d","\xef")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SensorType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ACCELEROMETER","\xaf","\xc6","\x4d","\xef")) return ACCELEROMETER;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ACCELEROMETER","\xaf","\xc6","\x4d","\xef"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SensorType_obj::ACCELEROMETER,"ACCELEROMETER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SensorType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SensorType_obj::ACCELEROMETER,"ACCELEROMETER");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class SensorType_obj::__mClass;

Dynamic __Create_SensorType_obj() { return new SensorType_obj; }

void SensorType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.system.SensorType","\xba","\x2d","\xf6","\xed"), hx::TCanCast< SensorType_obj >,sStaticFields,sMemberFields,
	&__Create_SensorType_obj, &__Create,
	&super::__SGetClass(), &CreateSensorType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SensorType_obj::__boot()
{
hx::Static(ACCELEROMETER) = hx::CreateEnum< SensorType_obj >(HX_HCSTRING("ACCELEROMETER","\xaf","\xc6","\x4d","\xef"),0);
}


} // end namespace lime
} // end namespace system

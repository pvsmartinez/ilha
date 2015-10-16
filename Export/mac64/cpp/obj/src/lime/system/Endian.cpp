#include <hxcpp.h>

#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
namespace lime{
namespace _system{

::lime::_system::Endian Endian_obj::_BIG_ENDIAN;

::lime::_system::Endian Endian_obj::_LITTLE_ENDIAN;

HX_DEFINE_CREATE_ENUM(Endian_obj)

int Endian_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2")) return 1;
	if (inName==HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb")) return 0;
	return super::__FindIndex(inName);
}

int Endian_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2")) return 0;
	if (inName==HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Endian_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2")) return _BIG_ENDIAN;
	if (inName==HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb")) return _LITTLE_ENDIAN;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb"),
	HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Endian_obj::_BIG_ENDIAN,"_BIG_ENDIAN");
	HX_MARK_MEMBER_NAME(Endian_obj::_LITTLE_ENDIAN,"_LITTLE_ENDIAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Endian_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Endian_obj::_BIG_ENDIAN,"_BIG_ENDIAN");
	HX_VISIT_MEMBER_NAME(Endian_obj::_LITTLE_ENDIAN,"_LITTLE_ENDIAN");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Endian_obj::__mClass;

Dynamic __Create_Endian_obj() { return new Endian_obj; }

void Endian_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.system.Endian","\x41","\x85","\x63","\xb4"), hx::TCanCast< Endian_obj >,sStaticFields,sMemberFields,
	&__Create_Endian_obj, &__Create,
	&super::__SGetClass(), &CreateEndian_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Endian_obj::__boot()
{
hx::Static(_BIG_ENDIAN) = hx::CreateEnum< Endian_obj >(HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2"),1);
hx::Static(_LITTLE_ENDIAN) = hx::CreateEnum< Endian_obj >(HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb"),0);
}


} // end namespace lime
} // end namespace system

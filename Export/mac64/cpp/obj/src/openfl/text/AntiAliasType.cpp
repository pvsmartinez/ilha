#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
namespace openfl{
namespace text{

::openfl::text::AntiAliasType AntiAliasType_obj::ADVANCED;

::openfl::text::AntiAliasType AntiAliasType_obj::NORMAL;

HX_DEFINE_CREATE_ENUM(AntiAliasType_obj)

int AntiAliasType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ADVANCED","\xa2","\xf9","\x00","\x95")) return 0;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return 1;
	return super::__FindIndex(inName);
}

int AntiAliasType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ADVANCED","\xa2","\xf9","\x00","\x95")) return 0;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic AntiAliasType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ADVANCED","\xa2","\xf9","\x00","\x95")) return ADVANCED;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return NORMAL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ADVANCED","\xa2","\xf9","\x00","\x95"),
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AntiAliasType_obj::ADVANCED,"ADVANCED");
	HX_MARK_MEMBER_NAME(AntiAliasType_obj::NORMAL,"NORMAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AntiAliasType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AntiAliasType_obj::ADVANCED,"ADVANCED");
	HX_VISIT_MEMBER_NAME(AntiAliasType_obj::NORMAL,"NORMAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class AntiAliasType_obj::__mClass;

Dynamic __Create_AntiAliasType_obj() { return new AntiAliasType_obj; }

void AntiAliasType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.text.AntiAliasType","\xe5","\x8a","\xad","\x22"), hx::TCanCast< AntiAliasType_obj >,sStaticFields,sMemberFields,
	&__Create_AntiAliasType_obj, &__Create,
	&super::__SGetClass(), &CreateAntiAliasType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void AntiAliasType_obj::__boot()
{
hx::Static(ADVANCED) = hx::CreateEnum< AntiAliasType_obj >(HX_HCSTRING("ADVANCED","\xa2","\xf9","\x00","\x95"),0);
hx::Static(NORMAL) = hx::CreateEnum< AntiAliasType_obj >(HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),1);
}


} // end namespace openfl
} // end namespace text

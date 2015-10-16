#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
namespace openfl{
namespace display{

::openfl::display::SpreadMethod SpreadMethod_obj::PAD;

::openfl::display::SpreadMethod SpreadMethod_obj::REFLECT;

::openfl::display::SpreadMethod SpreadMethod_obj::REPEAT;

HX_DEFINE_CREATE_ENUM(SpreadMethod_obj)

int SpreadMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("PAD","\x33","\xed","\x3c","\x00")) return 2;
	if (inName==HX_HCSTRING("REFLECT","\x1d","\x58","\xfd","\x68")) return 1;
	if (inName==HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")) return 0;
	return super::__FindIndex(inName);
}

int SpreadMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("PAD","\x33","\xed","\x3c","\x00")) return 0;
	if (inName==HX_HCSTRING("REFLECT","\x1d","\x58","\xfd","\x68")) return 0;
	if (inName==HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SpreadMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("PAD","\x33","\xed","\x3c","\x00")) return PAD;
	if (inName==HX_HCSTRING("REFLECT","\x1d","\x58","\xfd","\x68")) return REFLECT;
	if (inName==HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")) return REPEAT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),
	HX_HCSTRING("REFLECT","\x1d","\x58","\xfd","\x68"),
	HX_HCSTRING("PAD","\x33","\xed","\x3c","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpreadMethod_obj::PAD,"PAD");
	HX_MARK_MEMBER_NAME(SpreadMethod_obj::REFLECT,"REFLECT");
	HX_MARK_MEMBER_NAME(SpreadMethod_obj::REPEAT,"REPEAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpreadMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpreadMethod_obj::PAD,"PAD");
	HX_VISIT_MEMBER_NAME(SpreadMethod_obj::REFLECT,"REFLECT");
	HX_VISIT_MEMBER_NAME(SpreadMethod_obj::REPEAT,"REPEAT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class SpreadMethod_obj::__mClass;

Dynamic __Create_SpreadMethod_obj() { return new SpreadMethod_obj; }

void SpreadMethod_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display.SpreadMethod","\x1e","\xf1","\x24","\x3a"), hx::TCanCast< SpreadMethod_obj >,sStaticFields,sMemberFields,
	&__Create_SpreadMethod_obj, &__Create,
	&super::__SGetClass(), &CreateSpreadMethod_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SpreadMethod_obj::__boot()
{
hx::Static(PAD) = hx::CreateEnum< SpreadMethod_obj >(HX_HCSTRING("PAD","\x33","\xed","\x3c","\x00"),2);
hx::Static(REFLECT) = hx::CreateEnum< SpreadMethod_obj >(HX_HCSTRING("REFLECT","\x1d","\x58","\xfd","\x68"),1);
hx::Static(REPEAT) = hx::CreateEnum< SpreadMethod_obj >(HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),0);
}


} // end namespace openfl
} // end namespace display

#include <hxcpp.h>

#ifndef INCLUDED_Kinds
#include <Kinds.h>
#endif

::Kinds Kinds_obj::bush;

::Kinds Kinds_obj::cherry;

HX_DEFINE_CREATE_ENUM(Kinds_obj)

int Kinds_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("bush","\x28","\x15","\x20","\x41")) return 0;
	if (inName==HX_HCSTRING("cherry","\x99","\x7e","\x1a","\xba")) return 1;
	return super::__FindIndex(inName);
}

int Kinds_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("bush","\x28","\x15","\x20","\x41")) return 0;
	if (inName==HX_HCSTRING("cherry","\x99","\x7e","\x1a","\xba")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Kinds_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("bush","\x28","\x15","\x20","\x41")) return bush;
	if (inName==HX_HCSTRING("cherry","\x99","\x7e","\x1a","\xba")) return cherry;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("bush","\x28","\x15","\x20","\x41"),
	HX_HCSTRING("cherry","\x99","\x7e","\x1a","\xba"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Kinds_obj::bush,"bush");
	HX_MARK_MEMBER_NAME(Kinds_obj::cherry,"cherry");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Kinds_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Kinds_obj::bush,"bush");
	HX_VISIT_MEMBER_NAME(Kinds_obj::cherry,"cherry");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Kinds_obj::__mClass;

Dynamic __Create_Kinds_obj() { return new Kinds_obj; }

void Kinds_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("Kinds","\x7f","\xb8","\xc8","\x74"), hx::TCanCast< Kinds_obj >,sStaticFields,sMemberFields,
	&__Create_Kinds_obj, &__Create,
	&super::__SGetClass(), &CreateKinds_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Kinds_obj::__boot()
{
hx::Static(bush) = hx::CreateEnum< Kinds_obj >(HX_HCSTRING("bush","\x28","\x15","\x20","\x41"),0);
hx::Static(cherry) = hx::CreateEnum< Kinds_obj >(HX_HCSTRING("cherry","\x99","\x7e","\x1a","\xba"),1);
}



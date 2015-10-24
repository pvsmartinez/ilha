#include <hxcpp.h>

#ifndef INCLUDED_Sources
#include <Sources.h>
#endif

::Sources Sources_obj::bush;

::Sources Sources_obj::tree;

HX_DEFINE_CREATE_ENUM(Sources_obj)

int Sources_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("bush","\x28","\x15","\x20","\x41")) return 0;
	if (inName==HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d")) return 1;
	return super::__FindIndex(inName);
}

int Sources_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("bush","\x28","\x15","\x20","\x41")) return 0;
	if (inName==HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Sources_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("bush","\x28","\x15","\x20","\x41")) return bush;
	if (inName==HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d")) return tree;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("bush","\x28","\x15","\x20","\x41"),
	HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sources_obj::bush,"bush");
	HX_MARK_MEMBER_NAME(Sources_obj::tree,"tree");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sources_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sources_obj::bush,"bush");
	HX_VISIT_MEMBER_NAME(Sources_obj::tree,"tree");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Sources_obj::__mClass;

Dynamic __Create_Sources_obj() { return new Sources_obj; }

void Sources_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("Sources","\x18","\x37","\x9a","\x86"), hx::TCanCast< Sources_obj >,sStaticFields,sMemberFields,
	&__Create_Sources_obj, &__Create,
	&super::__SGetClass(), &CreateSources_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Sources_obj::__boot()
{
hx::Static(bush) = hx::CreateEnum< Sources_obj >(HX_HCSTRING("bush","\x28","\x15","\x20","\x41"),0);
hx::Static(tree) = hx::CreateEnum< Sources_obj >(HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"),1);
}



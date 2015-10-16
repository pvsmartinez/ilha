#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_GridFitType
#include <openfl/text/GridFitType.h>
#endif
namespace openfl{
namespace text{

::openfl::text::GridFitType GridFitType_obj::NONE;

::openfl::text::GridFitType GridFitType_obj::PIXEL;

::openfl::text::GridFitType GridFitType_obj::SUBPIXEL;

HX_DEFINE_CREATE_ENUM(GridFitType_obj)

int GridFitType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("PIXEL","\x66","\xfe","\x91","\x40")) return 1;
	if (inName==HX_HCSTRING("SUBPIXEL","\x06","\x3d","\x1b","\xfe")) return 2;
	return super::__FindIndex(inName);
}

int GridFitType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("PIXEL","\x66","\xfe","\x91","\x40")) return 0;
	if (inName==HX_HCSTRING("SUBPIXEL","\x06","\x3d","\x1b","\xfe")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GridFitType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("PIXEL","\x66","\xfe","\x91","\x40")) return PIXEL;
	if (inName==HX_HCSTRING("SUBPIXEL","\x06","\x3d","\x1b","\xfe")) return SUBPIXEL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("PIXEL","\x66","\xfe","\x91","\x40"),
	HX_HCSTRING("SUBPIXEL","\x06","\x3d","\x1b","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GridFitType_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GridFitType_obj::PIXEL,"PIXEL");
	HX_MARK_MEMBER_NAME(GridFitType_obj::SUBPIXEL,"SUBPIXEL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GridFitType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GridFitType_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GridFitType_obj::PIXEL,"PIXEL");
	HX_VISIT_MEMBER_NAME(GridFitType_obj::SUBPIXEL,"SUBPIXEL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GridFitType_obj::__mClass;

Dynamic __Create_GridFitType_obj() { return new GridFitType_obj; }

void GridFitType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.text.GridFitType","\x42","\x30","\x8f","\xab"), hx::TCanCast< GridFitType_obj >,sStaticFields,sMemberFields,
	&__Create_GridFitType_obj, &__Create,
	&super::__SGetClass(), &CreateGridFitType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GridFitType_obj::__boot()
{
hx::Static(NONE) = hx::CreateEnum< GridFitType_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),0);
hx::Static(PIXEL) = hx::CreateEnum< GridFitType_obj >(HX_HCSTRING("PIXEL","\x66","\xfe","\x91","\x40"),1);
hx::Static(SUBPIXEL) = hx::CreateEnum< GridFitType_obj >(HX_HCSTRING("SUBPIXEL","\x06","\x3d","\x1b","\xfe"),2);
}


} // end namespace openfl
} // end namespace text

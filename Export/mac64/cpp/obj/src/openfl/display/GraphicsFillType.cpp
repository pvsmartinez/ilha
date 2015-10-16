#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
namespace openfl{
namespace display{

::openfl::display::GraphicsFillType GraphicsFillType_obj::BITMAP_FILL;

::openfl::display::GraphicsFillType GraphicsFillType_obj::END_FILL;

::openfl::display::GraphicsFillType GraphicsFillType_obj::GRADIENT_FILL;

::openfl::display::GraphicsFillType GraphicsFillType_obj::SOLID_FILL;

HX_DEFINE_CREATE_ENUM(GraphicsFillType_obj)

int GraphicsFillType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BITMAP_FILL","\x13","\x54","\x04","\xe7")) return 2;
	if (inName==HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27")) return 3;
	if (inName==HX_HCSTRING("GRADIENT_FILL","\x72","\xe2","\x76","\xe8")) return 1;
	if (inName==HX_HCSTRING("SOLID_FILL","\x77","\x3e","\x0f","\x59")) return 0;
	return super::__FindIndex(inName);
}

int GraphicsFillType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BITMAP_FILL","\x13","\x54","\x04","\xe7")) return 0;
	if (inName==HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27")) return 0;
	if (inName==HX_HCSTRING("GRADIENT_FILL","\x72","\xe2","\x76","\xe8")) return 0;
	if (inName==HX_HCSTRING("SOLID_FILL","\x77","\x3e","\x0f","\x59")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GraphicsFillType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BITMAP_FILL","\x13","\x54","\x04","\xe7")) return BITMAP_FILL;
	if (inName==HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27")) return END_FILL;
	if (inName==HX_HCSTRING("GRADIENT_FILL","\x72","\xe2","\x76","\xe8")) return GRADIENT_FILL;
	if (inName==HX_HCSTRING("SOLID_FILL","\x77","\x3e","\x0f","\x59")) return SOLID_FILL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("SOLID_FILL","\x77","\x3e","\x0f","\x59"),
	HX_HCSTRING("GRADIENT_FILL","\x72","\xe2","\x76","\xe8"),
	HX_HCSTRING("BITMAP_FILL","\x13","\x54","\x04","\xe7"),
	HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsFillType_obj::BITMAP_FILL,"BITMAP_FILL");
	HX_MARK_MEMBER_NAME(GraphicsFillType_obj::END_FILL,"END_FILL");
	HX_MARK_MEMBER_NAME(GraphicsFillType_obj::GRADIENT_FILL,"GRADIENT_FILL");
	HX_MARK_MEMBER_NAME(GraphicsFillType_obj::SOLID_FILL,"SOLID_FILL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsFillType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsFillType_obj::BITMAP_FILL,"BITMAP_FILL");
	HX_VISIT_MEMBER_NAME(GraphicsFillType_obj::END_FILL,"END_FILL");
	HX_VISIT_MEMBER_NAME(GraphicsFillType_obj::GRADIENT_FILL,"GRADIENT_FILL");
	HX_VISIT_MEMBER_NAME(GraphicsFillType_obj::SOLID_FILL,"SOLID_FILL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GraphicsFillType_obj::__mClass;

Dynamic __Create_GraphicsFillType_obj() { return new GraphicsFillType_obj; }

void GraphicsFillType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display.GraphicsFillType","\x32","\xcb","\x26","\xbc"), hx::TCanCast< GraphicsFillType_obj >,sStaticFields,sMemberFields,
	&__Create_GraphicsFillType_obj, &__Create,
	&super::__SGetClass(), &CreateGraphicsFillType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GraphicsFillType_obj::__boot()
{
hx::Static(BITMAP_FILL) = hx::CreateEnum< GraphicsFillType_obj >(HX_HCSTRING("BITMAP_FILL","\x13","\x54","\x04","\xe7"),2);
hx::Static(END_FILL) = hx::CreateEnum< GraphicsFillType_obj >(HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27"),3);
hx::Static(GRADIENT_FILL) = hx::CreateEnum< GraphicsFillType_obj >(HX_HCSTRING("GRADIENT_FILL","\x72","\xe2","\x76","\xe8"),1);
hx::Static(SOLID_FILL) = hx::CreateEnum< GraphicsFillType_obj >(HX_HCSTRING("SOLID_FILL","\x77","\x3e","\x0f","\x59"),0);
}


} // end namespace openfl
} // end namespace display

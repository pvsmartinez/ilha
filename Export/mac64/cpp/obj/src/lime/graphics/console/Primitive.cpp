#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_console_Primitive
#include <lime/graphics/console/Primitive.h>
#endif
namespace lime{
namespace graphics{
namespace console{

::lime::graphics::console::Primitive Primitive_obj::Line;

::lime::graphics::console::Primitive Primitive_obj::LineStrip;

::lime::graphics::console::Primitive Primitive_obj::Point;

::lime::graphics::console::Primitive Primitive_obj::Triangle;

::lime::graphics::console::Primitive Primitive_obj::TriangleStrip;

HX_DEFINE_CREATE_ENUM(Primitive_obj)

int Primitive_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Line","\x14","\x44","\x8c","\x32")) return 1;
	if (inName==HX_HCSTRING("LineStrip","\x24","\x36","\xe6","\x6c")) return 2;
	if (inName==HX_HCSTRING("Point","\x30","\x24","\xbd","\x59")) return 0;
	if (inName==HX_HCSTRING("Triangle","\xe8","\x7a","\x77","\x67")) return 3;
	if (inName==HX_HCSTRING("TriangleStrip","\xd0","\xbe","\x3f","\x8d")) return 4;
	return super::__FindIndex(inName);
}

int Primitive_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Line","\x14","\x44","\x8c","\x32")) return 0;
	if (inName==HX_HCSTRING("LineStrip","\x24","\x36","\xe6","\x6c")) return 0;
	if (inName==HX_HCSTRING("Point","\x30","\x24","\xbd","\x59")) return 0;
	if (inName==HX_HCSTRING("Triangle","\xe8","\x7a","\x77","\x67")) return 0;
	if (inName==HX_HCSTRING("TriangleStrip","\xd0","\xbe","\x3f","\x8d")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Primitive_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Line","\x14","\x44","\x8c","\x32")) return Line;
	if (inName==HX_HCSTRING("LineStrip","\x24","\x36","\xe6","\x6c")) return LineStrip;
	if (inName==HX_HCSTRING("Point","\x30","\x24","\xbd","\x59")) return Point;
	if (inName==HX_HCSTRING("Triangle","\xe8","\x7a","\x77","\x67")) return Triangle;
	if (inName==HX_HCSTRING("TriangleStrip","\xd0","\xbe","\x3f","\x8d")) return TriangleStrip;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"),
	HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),
	HX_HCSTRING("LineStrip","\x24","\x36","\xe6","\x6c"),
	HX_HCSTRING("Triangle","\xe8","\x7a","\x77","\x67"),
	HX_HCSTRING("TriangleStrip","\xd0","\xbe","\x3f","\x8d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Primitive_obj::Line,"Line");
	HX_MARK_MEMBER_NAME(Primitive_obj::LineStrip,"LineStrip");
	HX_MARK_MEMBER_NAME(Primitive_obj::Point,"Point");
	HX_MARK_MEMBER_NAME(Primitive_obj::Triangle,"Triangle");
	HX_MARK_MEMBER_NAME(Primitive_obj::TriangleStrip,"TriangleStrip");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Primitive_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Primitive_obj::Line,"Line");
	HX_VISIT_MEMBER_NAME(Primitive_obj::LineStrip,"LineStrip");
	HX_VISIT_MEMBER_NAME(Primitive_obj::Point,"Point");
	HX_VISIT_MEMBER_NAME(Primitive_obj::Triangle,"Triangle");
	HX_VISIT_MEMBER_NAME(Primitive_obj::TriangleStrip,"TriangleStrip");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Primitive_obj::__mClass;

Dynamic __Create_Primitive_obj() { return new Primitive_obj; }

void Primitive_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.graphics.console.Primitive","\x06","\x53","\x83","\x00"), hx::TCanCast< Primitive_obj >,sStaticFields,sMemberFields,
	&__Create_Primitive_obj, &__Create,
	&super::__SGetClass(), &CreatePrimitive_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Primitive_obj::__boot()
{
hx::Static(Line) = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),1);
hx::Static(LineStrip) = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("LineStrip","\x24","\x36","\xe6","\x6c"),2);
hx::Static(Point) = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"),0);
hx::Static(Triangle) = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("Triangle","\xe8","\x7a","\x77","\x67"),3);
hx::Static(TriangleStrip) = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("TriangleStrip","\xd0","\xbe","\x3f","\x8d"),4);
}


} // end namespace lime
} // end namespace graphics
} // end namespace console

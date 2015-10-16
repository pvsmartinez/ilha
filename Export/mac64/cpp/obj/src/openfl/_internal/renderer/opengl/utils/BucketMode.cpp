#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::DrawTiles;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::DrawTriangles;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::Fill;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::Line;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::None;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::PatternFill;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::PatternLine;

HX_DEFINE_CREATE_ENUM(BucketMode_obj)

int BucketMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a")) return 6;
	if (inName==HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26")) return 5;
	if (inName==HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e")) return 1;
	if (inName==HX_HCSTRING("Line","\x14","\x44","\x8c","\x32")) return 3;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	if (inName==HX_HCSTRING("PatternFill","\xd3","\x00","\x48","\x23")) return 2;
	if (inName==HX_HCSTRING("PatternLine","\x44","\x4a","\x3f","\x27")) return 4;
	return super::__FindIndex(inName);
}

int BucketMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a")) return 0;
	if (inName==HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26")) return 0;
	if (inName==HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e")) return 0;
	if (inName==HX_HCSTRING("Line","\x14","\x44","\x8c","\x32")) return 0;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return 0;
	if (inName==HX_HCSTRING("PatternFill","\xd3","\x00","\x48","\x23")) return 0;
	if (inName==HX_HCSTRING("PatternLine","\x44","\x4a","\x3f","\x27")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BucketMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a")) return DrawTiles;
	if (inName==HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26")) return DrawTriangles;
	if (inName==HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e")) return Fill;
	if (inName==HX_HCSTRING("Line","\x14","\x44","\x8c","\x32")) return Line;
	if (inName==HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33")) return None;
	if (inName==HX_HCSTRING("PatternFill","\xd3","\x00","\x48","\x23")) return PatternFill;
	if (inName==HX_HCSTRING("PatternLine","\x44","\x4a","\x3f","\x27")) return PatternLine;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),
	HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e"),
	HX_HCSTRING("PatternFill","\xd3","\x00","\x48","\x23"),
	HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),
	HX_HCSTRING("PatternLine","\x44","\x4a","\x3f","\x27"),
	HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26"),
	HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BucketMode_obj::DrawTiles,"DrawTiles");
	HX_MARK_MEMBER_NAME(BucketMode_obj::DrawTriangles,"DrawTriangles");
	HX_MARK_MEMBER_NAME(BucketMode_obj::Fill,"Fill");
	HX_MARK_MEMBER_NAME(BucketMode_obj::Line,"Line");
	HX_MARK_MEMBER_NAME(BucketMode_obj::None,"None");
	HX_MARK_MEMBER_NAME(BucketMode_obj::PatternFill,"PatternFill");
	HX_MARK_MEMBER_NAME(BucketMode_obj::PatternLine,"PatternLine");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BucketMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::DrawTiles,"DrawTiles");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::DrawTriangles,"DrawTriangles");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::Fill,"Fill");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::Line,"Line");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::None,"None");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::PatternFill,"PatternFill");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::PatternLine,"PatternLine");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class BucketMode_obj::__mClass;

Dynamic __Create_BucketMode_obj() { return new BucketMode_obj; }

void BucketMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.renderer.opengl.utils.BucketMode","\x0e","\xb9","\x05","\x60"), hx::TCanCast< BucketMode_obj >,sStaticFields,sMemberFields,
	&__Create_BucketMode_obj, &__Create,
	&super::__SGetClass(), &CreateBucketMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BucketMode_obj::__boot()
{
hx::Static(DrawTiles) = hx::CreateEnum< BucketMode_obj >(HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a"),6);
hx::Static(DrawTriangles) = hx::CreateEnum< BucketMode_obj >(HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26"),5);
hx::Static(Fill) = hx::CreateEnum< BucketMode_obj >(HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e"),1);
hx::Static(Line) = hx::CreateEnum< BucketMode_obj >(HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),3);
hx::Static(None) = hx::CreateEnum< BucketMode_obj >(HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),0);
hx::Static(PatternFill) = hx::CreateEnum< BucketMode_obj >(HX_HCSTRING("PatternFill","\xd3","\x00","\x48","\x23"),2);
hx::Static(PatternLine) = hx::CreateEnum< BucketMode_obj >(HX_HCSTRING("PatternLine","\x44","\x4a","\x3f","\x27"),4);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

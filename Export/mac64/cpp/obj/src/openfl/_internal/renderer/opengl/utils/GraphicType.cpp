#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Circle;

::openfl::_internal::renderer::opengl::utils::GraphicType  GraphicType_obj::DrawTiles(::openfl::display::Tilesheet sheet,Array< Float > tileData,bool smooth,int flags,int count)
	{ return hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a"),5,hx::DynamicArray(0,5).Add(sheet).Add(tileData).Add(smooth).Add(flags).Add(count)); }

::openfl::_internal::renderer::opengl::utils::GraphicType  GraphicType_obj::DrawTriangles(Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,int blendMode)
	{ return hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26"),4,hx::DynamicArray(0,6).Add(vertices).Add(indices).Add(uvtData).Add(culling).Add(colors).Add(blendMode)); }

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Ellipse;

::openfl::_internal::renderer::opengl::utils::GraphicType  GraphicType_obj::OverrideMatrix(::openfl::geom::Matrix matrix)
	{ return hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63"),6,hx::DynamicArray(0,1).Add(matrix)); }

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Polygon;

::openfl::_internal::renderer::opengl::utils::GraphicType  GraphicType_obj::Rectangle(bool rounded)
	{ return hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb"),1,hx::DynamicArray(0,1).Add(rounded)); }

HX_DEFINE_CREATE_ENUM(GraphicType_obj)

int GraphicType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a")) return 2;
	if (inName==HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a")) return 5;
	if (inName==HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26")) return 4;
	if (inName==HX_HCSTRING("Ellipse","\xbe","\x68","\xd7","\xd8")) return 3;
	if (inName==HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63")) return 6;
	if (inName==HX_HCSTRING("Polygon","\x5a","\x2a","\xe2","\xdf")) return 0;
	if (inName==HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC5(GraphicType_obj,DrawTiles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicType_obj,DrawTriangles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicType_obj,OverrideMatrix,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicType_obj,Rectangle,return)

int GraphicType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a")) return 0;
	if (inName==HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a")) return 5;
	if (inName==HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26")) return 6;
	if (inName==HX_HCSTRING("Ellipse","\xbe","\x68","\xd7","\xd8")) return 0;
	if (inName==HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63")) return 1;
	if (inName==HX_HCSTRING("Polygon","\x5a","\x2a","\xe2","\xdf")) return 0;
	if (inName==HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic GraphicType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a")) return Circle;
	if (inName==HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a")) return DrawTiles_dyn();
	if (inName==HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26")) return DrawTriangles_dyn();
	if (inName==HX_HCSTRING("Ellipse","\xbe","\x68","\xd7","\xd8")) return Ellipse;
	if (inName==HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63")) return OverrideMatrix_dyn();
	if (inName==HX_HCSTRING("Polygon","\x5a","\x2a","\xe2","\xdf")) return Polygon;
	if (inName==HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb")) return Rectangle_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Polygon","\x5a","\x2a","\xe2","\xdf"),
	HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb"),
	HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a"),
	HX_HCSTRING("Ellipse","\xbe","\x68","\xd7","\xd8"),
	HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26"),
	HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a"),
	HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicType_obj::Circle,"Circle");
	HX_MARK_MEMBER_NAME(GraphicType_obj::Ellipse,"Ellipse");
	HX_MARK_MEMBER_NAME(GraphicType_obj::Polygon,"Polygon");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicType_obj::Circle,"Circle");
	HX_VISIT_MEMBER_NAME(GraphicType_obj::Ellipse,"Ellipse");
	HX_VISIT_MEMBER_NAME(GraphicType_obj::Polygon,"Polygon");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GraphicType_obj::__mClass;

Dynamic __Create_GraphicType_obj() { return new GraphicType_obj; }

void GraphicType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.renderer.opengl.utils.GraphicType","\x41","\xb2","\x69","\x10"), hx::TCanCast< GraphicType_obj >,sStaticFields,sMemberFields,
	&__Create_GraphicType_obj, &__Create,
	&super::__SGetClass(), &CreateGraphicType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GraphicType_obj::__boot()
{
hx::Static(Circle) = hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a"),2);
hx::Static(Ellipse) = hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("Ellipse","\xbe","\x68","\xd7","\xd8"),3);
hx::Static(Polygon) = hx::CreateEnum< GraphicType_obj >(HX_HCSTRING("Polygon","\x5a","\x2a","\xe2","\xdf"),0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

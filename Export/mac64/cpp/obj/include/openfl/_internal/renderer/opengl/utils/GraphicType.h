#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#define INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GraphicType)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,display,TriangleCulling)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class GraphicType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GraphicType_obj OBJ_;

	public:
		GraphicType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.renderer.opengl.utils.GraphicType","\x41","\xb2","\x69","\x10"); }
		::String __ToString() const { return HX_HCSTRING("GraphicType.","\x8c","\x30","\x12","\x53") + tag; }

		static ::openfl::_internal::renderer::opengl::utils::GraphicType Circle;
		static inline ::openfl::_internal::renderer::opengl::utils::GraphicType Circle_dyn() { return Circle; }
		static ::openfl::_internal::renderer::opengl::utils::GraphicType DrawTiles(::openfl::display::Tilesheet sheet,Array< Float > tileData,bool smooth,int flags,int count);
		static Dynamic DrawTiles_dyn();
		static ::openfl::_internal::renderer::opengl::utils::GraphicType DrawTriangles(Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,int blendMode);
		static Dynamic DrawTriangles_dyn();
		static ::openfl::_internal::renderer::opengl::utils::GraphicType Ellipse;
		static inline ::openfl::_internal::renderer::opengl::utils::GraphicType Ellipse_dyn() { return Ellipse; }
		static ::openfl::_internal::renderer::opengl::utils::GraphicType OverrideMatrix(::openfl::geom::Matrix matrix);
		static Dynamic OverrideMatrix_dyn();
		static ::openfl::_internal::renderer::opengl::utils::GraphicType Polygon;
		static inline ::openfl::_internal::renderer::opengl::utils::GraphicType Polygon_dyn() { return Polygon; }
		static ::openfl::_internal::renderer::opengl::utils::GraphicType Rectangle(bool rounded);
		static Dynamic Rectangle_dyn();
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType */ 

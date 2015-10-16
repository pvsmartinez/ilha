#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#define INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BucketMode)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class BucketMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BucketMode_obj OBJ_;

	public:
		BucketMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.renderer.opengl.utils.BucketMode","\x0e","\xb9","\x05","\x60"); }
		::String __ToString() const { return HX_HCSTRING("BucketMode.","\x81","\x06","\xb5","\xff") + tag; }

		static ::openfl::_internal::renderer::opengl::utils::BucketMode DrawTiles;
		static inline ::openfl::_internal::renderer::opengl::utils::BucketMode DrawTiles_dyn() { return DrawTiles; }
		static ::openfl::_internal::renderer::opengl::utils::BucketMode DrawTriangles;
		static inline ::openfl::_internal::renderer::opengl::utils::BucketMode DrawTriangles_dyn() { return DrawTriangles; }
		static ::openfl::_internal::renderer::opengl::utils::BucketMode Fill;
		static inline ::openfl::_internal::renderer::opengl::utils::BucketMode Fill_dyn() { return Fill; }
		static ::openfl::_internal::renderer::opengl::utils::BucketMode Line;
		static inline ::openfl::_internal::renderer::opengl::utils::BucketMode Line_dyn() { return Line; }
		static ::openfl::_internal::renderer::opengl::utils::BucketMode None;
		static inline ::openfl::_internal::renderer::opengl::utils::BucketMode None_dyn() { return None; }
		static ::openfl::_internal::renderer::opengl::utils::BucketMode PatternFill;
		static inline ::openfl::_internal::renderer::opengl::utils::BucketMode PatternFill_dyn() { return PatternFill; }
		static ::openfl::_internal::renderer::opengl::utils::BucketMode PatternLine;
		static inline ::openfl::_internal::renderer::opengl::utils::BucketMode PatternLine_dyn() { return PatternLine; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode */ 

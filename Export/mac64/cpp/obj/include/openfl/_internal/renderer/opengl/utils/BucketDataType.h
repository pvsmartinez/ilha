#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#define INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BucketDataType)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class BucketDataType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BucketDataType_obj OBJ_;

	public:
		BucketDataType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.renderer.opengl.utils.BucketDataType","\x2f","\x69","\x7d","\x7e"); }
		::String __ToString() const { return HX_HCSTRING("BucketDataType.","\xc0","\x17","\x96","\xd2") + tag; }

		static ::openfl::_internal::renderer::opengl::utils::BucketDataType Fill;
		static inline ::openfl::_internal::renderer::opengl::utils::BucketDataType Fill_dyn() { return Fill; }
		static ::openfl::_internal::renderer::opengl::utils::BucketDataType Line;
		static inline ::openfl::_internal::renderer::opengl::utils::BucketDataType Line_dyn() { return Line; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType */ 

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#define INCLUDED_openfl__internal_renderer_opengl_utils_FillType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FillType)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class FillType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FillType_obj OBJ_;

	public:
		FillType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.renderer.opengl.utils.FillType","\xbe","\x48","\x92","\x56"); }
		::String __ToString() const { return HX_HCSTRING("FillType.","\x91","\x76","\x45","\x8b") + tag; }

		static ::openfl::_internal::renderer::opengl::utils::FillType Color(int color,Float alpha);
		static Dynamic Color_dyn();
		static ::openfl::_internal::renderer::opengl::utils::FillType Gradient;
		static inline ::openfl::_internal::renderer::opengl::utils::FillType Gradient_dyn() { return Gradient; }
		static ::openfl::_internal::renderer::opengl::utils::FillType None;
		static inline ::openfl::_internal::renderer::opengl::utils::FillType None_dyn() { return None; }
		static ::openfl::_internal::renderer::opengl::utils::FillType Texture(::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		static Dynamic Texture_dyn();
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_FillType */ 

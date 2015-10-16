#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler
#define INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,DrawPath)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FillType)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLStack)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,LineStyle)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,PathBuiler)
HX_DECLARE_CLASS2(openfl,display,Graphics)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  PathBuiler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PathBuiler_obj OBJ_;
		PathBuiler_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.opengl.utils.PathBuiler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PathBuiler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PathBuiler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PathBuiler","\x08","\x96","\x7b","\xdb"); }

		static void __boot();
		static ::openfl::_internal::renderer::opengl::utils::DrawPath __currentPath;
		static int __currentWinding;
		static Array< ::Dynamic > __drawPaths;
		static ::openfl::_internal::renderer::opengl::utils::LineStyle __line;
		static ::openfl::_internal::renderer::opengl::utils::FillType __fill;
		static int __fillIndex;
		static Void closePath( );
		static Dynamic closePath_dyn();

		static Void endFill( );
		static Dynamic endFill_dyn();

		static Void moveTo( Float x,Float y);
		static Dynamic moveTo_dyn();

		static Void lineTo( Float x,Float y);
		static Dynamic lineTo_dyn();

		static Void curveTo( Float cx,Float cy,Float x,Float y);
		static Dynamic curveTo_dyn();

		static Void cubicCurveTo( Float cx,Float cy,Float cx2,Float cy2,Float x,Float y);
		static Dynamic cubicCurveTo_dyn();

		static Void graphicDataPop( );
		static Dynamic graphicDataPop_dyn();

		static ::openfl::_internal::renderer::opengl::utils::GLStack build( ::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl);
		static Dynamic build_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler */ 

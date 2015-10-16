#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#define INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BlendModeManager)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  BlendModeManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BlendModeManager_obj OBJ_;
		BlendModeManager_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.BlendModeManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BlendModeManager_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlendModeManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BlendModeManager","\x99","\xa4","\xe7","\xa5"); }

		::openfl::display::BlendMode currentBlendMode;
		::lime::graphics::GLRenderContext gl;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool setBlendMode( ::openfl::display::BlendMode blendMode,Dynamic force);
		Dynamic setBlendMode_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager */ 

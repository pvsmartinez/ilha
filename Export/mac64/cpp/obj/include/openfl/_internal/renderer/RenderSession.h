#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#define INCLUDED_openfl__internal_renderer_RenderSession

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,CanvasRenderContext)
HX_DECLARE_CLASS2(lime,graphics,DOMRenderContext)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractMaskManager)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BlendModeManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FilterManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,ShaderManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,SpriteBatch)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,StencilManager)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES  RenderSession_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderSession_obj OBJ_;
		RenderSession_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.RenderSession")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RenderSession_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderSession_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RenderSession","\x80","\xda","\x75","\xd7"); }

		::lime::graphics::cairo::Cairo cairo;
		::lime::graphics::CanvasRenderContext context;
		::lime::graphics::DOMRenderContext element;
		::lime::graphics::GLRenderContext gl;
		::openfl::_internal::renderer::AbstractRenderer renderer;
		bool roundPixels;
		::String transformProperty;
		::String transformOriginProperty;
		::String vendorPrefix;
		int z;
		::openfl::geom::Matrix projectionMatrix;
		int drawCount;
		::openfl::display::BlendMode currentBlendMode;
		::openfl::_internal::renderer::opengl::utils::ShaderManager shaderManager;
		::openfl::_internal::renderer::AbstractMaskManager maskManager;
		::openfl::_internal::renderer::opengl::utils::FilterManager filterManager;
		::openfl::_internal::renderer::opengl::utils::BlendModeManager blendModeManager;
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spriteBatch;
		::openfl::_internal::renderer::opengl::utils::StencilManager stencilManager;
		::lime::graphics::opengl::GLFramebuffer defaultFramebuffer;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_RenderSession */ 

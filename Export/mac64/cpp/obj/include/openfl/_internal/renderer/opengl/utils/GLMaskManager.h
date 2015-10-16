#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLMaskManager
#define INCLUDED_openfl__internal_renderer_opengl_utils_GLMaskManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractMaskManager)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLMaskManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  GLMaskManager_obj : public ::openfl::_internal::renderer::AbstractMaskManager_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractMaskManager_obj super;
		typedef GLMaskManager_obj OBJ_;
		GLMaskManager_obj();
		Void __construct(::openfl::_internal::renderer::RenderSession renderSession);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.GLMaskManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLMaskManager_obj > __new(::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLMaskManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLMaskManager","\xbc","\xa0","\xef","\x07"); }

		::lime::graphics::GLRenderContext gl;
		Array< ::Dynamic > clips;
		::openfl::geom::Rectangle currentClip;
		::openfl::geom::Rectangle savedClip;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform);

		virtual Void pushMask( ::openfl::display::DisplayObject mask);

		virtual Void popMask( );

		virtual Void popRect( );

		virtual Void saveState( );

		virtual Void restoreState( );

		virtual Void setContext( ::lime::graphics::GLRenderContext gl);
		Dynamic setContext_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_GLMaskManager */ 

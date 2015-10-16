#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#define INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLBucket)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLBucketData)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLGraphicsData)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,StencilManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  StencilManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StencilManager_obj OBJ_;
		StencilManager_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.StencilManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StencilManager_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StencilManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StencilManager","\xf1","\x87","\xae","\xed"); }

		int count;
		::lime::graphics::GLRenderContext gl;
		bool reverse;
		Array< ::Dynamic > stencilStack;
		int stencilMask;
		virtual Void prepareGraphics( ::openfl::_internal::renderer::opengl::utils::GLBucketData fill,::openfl::_internal::renderer::RenderSession renderSession,::lime::utils::ArrayBufferView translationMatrix);
		Dynamic prepareGraphics_dyn();

		virtual Void pushBucket( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::RenderSession renderSession,::lime::utils::ArrayBufferView translationMatrix,Dynamic isMask);
		Dynamic pushBucket_dyn();

		virtual Void popBucket( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic popBucket_dyn();

		virtual Void pushMask( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic pushMask_dyn();

		virtual Void popMask( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic popMask_dyn();

		virtual Void bindGraphics( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLGraphicsData glData,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic bindGraphics_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void popStencil( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLGraphicsData glData,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic popStencil_dyn();

		virtual Void pushStencil( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLGraphicsData glData,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic pushStencil_dyn();

		virtual Void setContext( ::lime::graphics::GLRenderContext gl);
		Dynamic setContext_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager */ 

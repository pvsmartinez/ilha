#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#define INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,CanvasRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS4(openfl,_internal,renderer,canvas,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{


class HXCPP_CLASS_ATTRIBUTES  CanvasRenderer_obj : public ::openfl::_internal::renderer::AbstractRenderer_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractRenderer_obj super;
		typedef CanvasRenderer_obj OBJ_;
		CanvasRenderer_obj();
		Void __construct(int width,int height,::lime::graphics::CanvasRenderContext context);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.canvas.CanvasRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CanvasRenderer_obj > __new(int width,int height,::lime::graphics::CanvasRenderContext context);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CanvasRenderer","\x5b","\x02","\x4a","\x33"); }

		::lime::graphics::CanvasRenderContext context;
		virtual Void render( ::openfl::display::Stage stage);

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas

#endif /* INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer */ 

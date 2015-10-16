#ifndef INCLUDED_openfl__internal_renderer_console_ConsoleRenderer
#define INCLUDED_openfl__internal_renderer_console_ConsoleRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,ConsoleRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS4(openfl,_internal,renderer,console,ConsoleRenderer)
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
namespace console{


class HXCPP_CLASS_ATTRIBUTES  ConsoleRenderer_obj : public ::openfl::_internal::renderer::AbstractRenderer_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractRenderer_obj super;
		typedef ConsoleRenderer_obj OBJ_;
		ConsoleRenderer_obj();
		Void __construct(int width,int height,::lime::graphics::ConsoleRenderContext ctx);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.console.ConsoleRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConsoleRenderer_obj > __new(int width,int height,::lime::graphics::ConsoleRenderContext ctx);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ConsoleRenderer","\x9a","\x23","\x5d","\xae"); }

		virtual Void render( ::openfl::display::Stage stage);

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace console

#endif /* INCLUDED_openfl__internal_renderer_console_ConsoleRenderer */ 

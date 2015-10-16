#ifndef INCLUDED_openfl__internal_renderer_dom_DOMTextField
#define INCLUDED_openfl__internal_renderer_dom_DOMTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,dom,DOMTextField)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{


class HXCPP_CLASS_ATTRIBUTES  DOMTextField_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DOMTextField_obj OBJ_;
		DOMTextField_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.dom.DOMTextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DOMTextField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DOMTextField_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DOMTextField","\x0b","\x4a","\x36","\x4d"); }

		static Void measureText( ::openfl::text::TextField textField);
		static Dynamic measureText_dyn();

		static Void render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom

#endif /* INCLUDED_openfl__internal_renderer_dom_DOMTextField */ 

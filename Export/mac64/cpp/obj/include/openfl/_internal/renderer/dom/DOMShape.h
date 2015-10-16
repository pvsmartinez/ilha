#ifndef INCLUDED_openfl__internal_renderer_dom_DOMShape
#define INCLUDED_openfl__internal_renderer_dom_DOMShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,dom,DOMShape)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{


class HXCPP_CLASS_ATTRIBUTES  DOMShape_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DOMShape_obj OBJ_;
		DOMShape_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.dom.DOMShape")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DOMShape_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DOMShape_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DOMShape","\x5f","\x11","\x4b","\xdf"); }

		static Void render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom

#endif /* INCLUDED_openfl__internal_renderer_dom_DOMShape */ 

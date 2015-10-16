#ifndef INCLUDED_openfl__internal_renderer_dom_DOMBitmap
#define INCLUDED_openfl__internal_renderer_dom_DOMBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,dom,DOMBitmap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{


class HXCPP_CLASS_ATTRIBUTES  DOMBitmap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DOMBitmap_obj OBJ_;
		DOMBitmap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.dom.DOMBitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DOMBitmap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DOMBitmap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DOMBitmap","\xf1","\x57","\x46","\x56"); }

		static Void render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

		static Void renderCanvas( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic renderCanvas_dyn();

		static Void renderImage( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic renderImage_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom

#endif /* INCLUDED_openfl__internal_renderer_dom_DOMBitmap */ 

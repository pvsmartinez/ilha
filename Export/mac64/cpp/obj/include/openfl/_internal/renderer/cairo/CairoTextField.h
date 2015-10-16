#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#define INCLUDED_openfl__internal_renderer_cairo_CairoTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoTextField)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  CairoTextField_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoTextField_obj OBJ_;
		CairoTextField_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.cairo.CairoTextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoTextField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoTextField_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CairoTextField","\x45","\x17","\x7a","\x57"); }

		static Void render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoTextField */ 

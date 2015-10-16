#ifndef INCLUDED_openfl_display_OpenGLView
#define INCLUDED_openfl_display_OpenGLView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,DirectRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLView)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  OpenGLView_obj : public ::openfl::display::DirectRenderer_obj{
	public:
		typedef ::openfl::display::DirectRenderer_obj super;
		typedef OpenGLView_obj OBJ_;
		OpenGLView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.OpenGLView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OpenGLView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OpenGLView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OpenGLView","\x94","\x0e","\xac","\x6e"); }

		static void __boot();
		static ::String CONTEXT_LOST;
		static ::String CONTEXT_RESTORED;
		static bool isSupported;
		static bool get_isSupported( );
		static Dynamic get_isSupported_dyn();

		bool __added;
		bool __initialized;
		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_OpenGLView */ 

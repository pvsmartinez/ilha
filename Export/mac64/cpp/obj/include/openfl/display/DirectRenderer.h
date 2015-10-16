#ifndef INCLUDED_openfl_display_DirectRenderer
#define INCLUDED_openfl_display_DirectRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DirectRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DirectRenderer_obj : public ::openfl::display::DisplayObject_obj{
	public:
		typedef ::openfl::display::DisplayObject_obj super;
		typedef DirectRenderer_obj OBJ_;
		DirectRenderer_obj();
		Void __construct(::String __o_type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.DirectRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DirectRenderer_obj > __new(::String __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DirectRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DirectRenderer","\xac","\x31","\xba","\xef"); }

		Dynamic __render;
		virtual Dynamic get_render( );
		Dynamic get_render_dyn();

		virtual Dynamic set_render( Dynamic value);
		Dynamic set_render_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DirectRenderer */ 

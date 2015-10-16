#ifndef INCLUDED_Controller
#define INCLUDED_Controller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Body)
HX_DECLARE_CLASS0(Component)
HX_DECLARE_CLASS0(Controller)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)


class HXCPP_CLASS_ATTRIBUTES  Controller_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Controller_obj OBJ_;
		Controller_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Controller")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Controller_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Controller_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Controller","\xbc","\x9c","\x6f","\xfb"); }

		Array< bool > keys;
		virtual Void interact( ::Body target,Array< ::Dynamic > stuff);
		Dynamic interact_dyn();

		virtual Void move( ::Body target);
		Dynamic move_dyn();

		virtual Void onKeyDown( ::openfl::events::KeyboardEvent evt);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( ::openfl::events::KeyboardEvent evt);
		Dynamic onKeyUp_dyn();

};


#endif /* INCLUDED_Controller */ 

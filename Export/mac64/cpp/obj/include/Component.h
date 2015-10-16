#ifndef INCLUDED_Component
#define INCLUDED_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Component)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Component_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Component_obj OBJ_;
		Component_obj();
		Void __construct(int radius);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Component_obj > __new(int radius);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Component","\x9d","\xd0","\x26","\xb1"); }

		virtual Void action( bool trigger);
		Dynamic action_dyn();

		virtual Void addHitArea( int radius);
		Dynamic addHitArea_dyn();

		virtual Void addPng( ::String img);
		Dynamic addPng_dyn();

};


#endif /* INCLUDED_Component */ 

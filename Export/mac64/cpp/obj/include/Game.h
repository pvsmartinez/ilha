#ifndef INCLUDED_Game
#define INCLUDED_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Body)
HX_DECLARE_CLASS0(Controller)
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(Person)
HX_DECLARE_CLASS0(Stuff)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Game")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Game_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Game","\x12","\x20","\x38","\x2f"); }

		::Person player;
		::Controller ctrl;
		Array< ::Dynamic > stuff;
		virtual Void startGame( );
		Dynamic startGame_dyn();

		virtual Void insertPlayer( );
		Dynamic insertPlayer_dyn();

		virtual Void insertStuff( );
		Dynamic insertStuff_dyn();

		virtual Void everyFrame( ::openfl::events::Event evt);
		Dynamic everyFrame_dyn();

};


#endif /* INCLUDED_Game */ 

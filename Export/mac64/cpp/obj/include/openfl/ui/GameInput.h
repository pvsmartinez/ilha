#ifndef INCLUDED_openfl_ui_GameInput
#define INCLUDED_openfl_ui_GameInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,ui,GameInput)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)
namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  GameInput_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef GameInput_obj OBJ_;
		GameInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.ui.GameInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameInput_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GameInput","\x98","\x92","\x0b","\x95"); }

		static void __boot();
		static bool isSupported;
		static int numDevices;
		static ::haxe::ds::ObjectMap __devices;
		static Array< ::Dynamic > __instances;
		static ::openfl::ui::GameInputDevice getDeviceAt( int index);
		static Dynamic getDeviceAt_dyn();

		static ::openfl::ui::GameInputDevice __getDevice( ::lime::ui::Gamepad gamepad);
		static Dynamic __getDevice_dyn();

		static Void __onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);
		static Dynamic __onGamepadAxisMove_dyn();

		static Void __onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);
		static Dynamic __onGamepadButtonDown_dyn();

		static Void __onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);
		static Dynamic __onGamepadButtonUp_dyn();

		static Void __onGamepadConnect( ::lime::ui::Gamepad gamepad);
		static Dynamic __onGamepadConnect_dyn();

		static Void __onGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		static Dynamic __onGamepadDisconnect_dyn();

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_GameInput */ 

#ifndef INCLUDED_openfl_events_GameInputEvent
#define INCLUDED_openfl_events_GameInputEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,GameInputEvent)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  GameInputEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef GameInputEvent_obj OBJ_;
		GameInputEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.GameInputEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameInputEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameInputEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameInputEvent","\x62","\x3e","\xf4","\x2c"); }

		static void __boot();
		static ::String DEVICE_ADDED;
		static ::String DEVICE_REMOVED;
		static ::String DEVICE_UNUSABLE;
		::openfl::ui::GameInputDevice device;
		virtual ::openfl::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_GameInputEvent */ 

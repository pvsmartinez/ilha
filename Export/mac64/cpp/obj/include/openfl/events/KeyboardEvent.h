#ifndef INCLUDED_openfl_events_KeyboardEvent
#define INCLUDED_openfl_events_KeyboardEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  KeyboardEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef KeyboardEvent_obj OBJ_;
		KeyboardEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_charCodeValue,hx::Null< int >  __o_keyCodeValue,Dynamic keyLocationValue,hx::Null< bool >  __o_ctrlKeyValue,hx::Null< bool >  __o_altKeyValue,hx::Null< bool >  __o_shiftKeyValue,hx::Null< bool >  __o_controlKeyValue,hx::Null< bool >  __o_commandKeyValue);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.KeyboardEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< KeyboardEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_charCodeValue,hx::Null< int >  __o_keyCodeValue,Dynamic keyLocationValue,hx::Null< bool >  __o_ctrlKeyValue,hx::Null< bool >  __o_altKeyValue,hx::Null< bool >  __o_shiftKeyValue,hx::Null< bool >  __o_controlKeyValue,hx::Null< bool >  __o_commandKeyValue);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyboardEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("KeyboardEvent","\xd3","\x8d","\x88","\x91"); }

		static void __boot();
		static ::String KEY_DOWN;
		static ::String KEY_UP;
		bool altKey;
		int charCode;
		bool ctrlKey;
		bool commandKey;
		bool controlKey;
		int keyCode;
		int keyLocation;
		bool shiftKey;
		virtual ::openfl::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_KeyboardEvent */ 

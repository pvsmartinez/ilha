#ifndef INCLUDED_openfl_events_FullScreenEvent
#define INCLUDED_openfl_events_FullScreenEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,FullScreenEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  FullScreenEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef FullScreenEvent_obj OBJ_;
		FullScreenEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_fullScreen,hx::Null< bool >  __o_interactive);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.FullScreenEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FullScreenEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_fullScreen,hx::Null< bool >  __o_interactive);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FullScreenEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FullScreenEvent","\x9f","\xa7","\x78","\xf1"); }

		static void __boot();
		static ::String FULL_SCREEN;
		static ::String FULL_SCREEN_INTERACTIVE_ACCEPTED;
		bool fullScreen;
		bool interactive;
		virtual ::openfl::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_FullScreenEvent */ 

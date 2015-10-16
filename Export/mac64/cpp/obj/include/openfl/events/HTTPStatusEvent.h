#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#define INCLUDED_openfl_events_HTTPStatusEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,HTTPStatusEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  HTTPStatusEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef HTTPStatusEvent_obj OBJ_;
		HTTPStatusEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.HTTPStatusEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HTTPStatusEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTTPStatusEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HTTPStatusEvent","\xe0","\x4c","\x1b","\xfe"); }

		static void __boot();
		static ::String HTTP_RESPONSE_STATUS;
		static ::String HTTP_STATUS;
		cpp::ArrayBase responseHeaders;
		::String responseURL;
		int status;
};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_HTTPStatusEvent */ 

#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
namespace openfl{
namespace events{

::openfl::events::EventPhase EventPhase_obj::AT_TARGET;

::openfl::events::EventPhase EventPhase_obj::BUBBLING_PHASE;

::openfl::events::EventPhase EventPhase_obj::CAPTURING_PHASE;

HX_DEFINE_CREATE_ENUM(EventPhase_obj)

int EventPhase_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("AT_TARGET","\x5d","\xcc","\xbf","\xfb")) return 1;
	if (inName==HX_HCSTRING("BUBBLING_PHASE","\xe5","\xf7","\xce","\xf4")) return 2;
	if (inName==HX_HCSTRING("CAPTURING_PHASE","\xbf","\x7a","\xf0","\x84")) return 0;
	return super::__FindIndex(inName);
}

int EventPhase_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("AT_TARGET","\x5d","\xcc","\xbf","\xfb")) return 0;
	if (inName==HX_HCSTRING("BUBBLING_PHASE","\xe5","\xf7","\xce","\xf4")) return 0;
	if (inName==HX_HCSTRING("CAPTURING_PHASE","\xbf","\x7a","\xf0","\x84")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EventPhase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("AT_TARGET","\x5d","\xcc","\xbf","\xfb")) return AT_TARGET;
	if (inName==HX_HCSTRING("BUBBLING_PHASE","\xe5","\xf7","\xce","\xf4")) return BUBBLING_PHASE;
	if (inName==HX_HCSTRING("CAPTURING_PHASE","\xbf","\x7a","\xf0","\x84")) return CAPTURING_PHASE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CAPTURING_PHASE","\xbf","\x7a","\xf0","\x84"),
	HX_HCSTRING("AT_TARGET","\x5d","\xcc","\xbf","\xfb"),
	HX_HCSTRING("BUBBLING_PHASE","\xe5","\xf7","\xce","\xf4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventPhase_obj::AT_TARGET,"AT_TARGET");
	HX_MARK_MEMBER_NAME(EventPhase_obj::BUBBLING_PHASE,"BUBBLING_PHASE");
	HX_MARK_MEMBER_NAME(EventPhase_obj::CAPTURING_PHASE,"CAPTURING_PHASE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventPhase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventPhase_obj::AT_TARGET,"AT_TARGET");
	HX_VISIT_MEMBER_NAME(EventPhase_obj::BUBBLING_PHASE,"BUBBLING_PHASE");
	HX_VISIT_MEMBER_NAME(EventPhase_obj::CAPTURING_PHASE,"CAPTURING_PHASE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EventPhase_obj::__mClass;

Dynamic __Create_EventPhase_obj() { return new EventPhase_obj; }

void EventPhase_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.events.EventPhase","\xb8","\xb4","\x01","\xb4"), hx::TCanCast< EventPhase_obj >,sStaticFields,sMemberFields,
	&__Create_EventPhase_obj, &__Create,
	&super::__SGetClass(), &CreateEventPhase_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EventPhase_obj::__boot()
{
hx::Static(AT_TARGET) = hx::CreateEnum< EventPhase_obj >(HX_HCSTRING("AT_TARGET","\x5d","\xcc","\xbf","\xfb"),1);
hx::Static(BUBBLING_PHASE) = hx::CreateEnum< EventPhase_obj >(HX_HCSTRING("BUBBLING_PHASE","\xe5","\xf7","\xce","\xf4"),2);
hx::Static(CAPTURING_PHASE) = hx::CreateEnum< EventPhase_obj >(HX_HCSTRING("CAPTURING_PHASE","\xbf","\x7a","\xf0","\x84"),0);
}


} // end namespace openfl
} // end namespace events

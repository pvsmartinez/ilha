#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
namespace openfl{
namespace events{

Void FullScreenEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_fullScreen,hx::Null< bool >  __o_interactive)
{
HX_STACK_FRAME("openfl.events.FullScreenEvent","new",0x08c8725a,"openfl.events.FullScreenEvent.new","openfl/events/FullScreenEvent.hx",14,0x5d391076)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_fullScreen,"fullScreen")
HX_STACK_ARG(__o_interactive,"interactive")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
bool fullScreen = __o_fullScreen.Default(false);
bool interactive = __o_interactive.Default(false);
{
	HX_STACK_LINE(16)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(18)
	this->fullScreen = fullScreen;
	HX_STACK_LINE(19)
	this->interactive = interactive;
}
;
	return null();
}

//FullScreenEvent_obj::~FullScreenEvent_obj() { }

Dynamic FullScreenEvent_obj::__CreateEmpty() { return  new FullScreenEvent_obj; }
hx::ObjectPtr< FullScreenEvent_obj > FullScreenEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_fullScreen,hx::Null< bool >  __o_interactive)
{  hx::ObjectPtr< FullScreenEvent_obj > _result_ = new FullScreenEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_fullScreen,__o_interactive);
	return _result_;}

Dynamic FullScreenEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FullScreenEvent_obj > _result_ = new FullScreenEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::events::Event FullScreenEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.FullScreenEvent","clone",0xd0bfa7d7,"openfl.events.FullScreenEvent.clone","openfl/events/FullScreenEvent.hx",24,0x5d391076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	bool tmp3 = this->fullScreen;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	bool tmp4 = this->interactive;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	::openfl::events::FullScreenEvent tmp5 = ::openfl::events::FullScreenEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	::openfl::events::FullScreenEvent event = tmp5;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(27)
	Dynamic tmp6 = this->target;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	event->target = tmp6;
	HX_STACK_LINE(28)
	Dynamic tmp7 = this->currentTarget;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	event->currentTarget = tmp7;
	HX_STACK_LINE(30)
	::openfl::events::EventPhase tmp8 = this->eventPhase;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(30)
	event->eventPhase = tmp8;
	HX_STACK_LINE(32)
	::openfl::events::FullScreenEvent tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(32)
	return tmp9;
}


::String FullScreenEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.FullScreenEvent","toString",0x75cac472,"openfl.events.FullScreenEvent.toString","openfl/events/FullScreenEvent.hx",37,0x5d391076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::String tmp1 = (HX_HCSTRING("[FullscreenEvent type=\"","\x5b","\xf5","\xbf","\x84") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	bool tmp3 = this->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	bool tmp7 = this->cancelable;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(39)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(39)
	::String tmp10 = (tmp9 + HX_HCSTRING(" fullscreen=","\x82","\x6d","\xec","\xbb"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(39)
	bool tmp11 = this->fullScreen;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(39)
	::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(39)
	::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(39)
	::String tmp14 = (tmp13 + HX_HCSTRING(" interactive=","\x3b","\x98","\xcc","\x49"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(39)
	bool tmp15 = this->interactive;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(39)
	::String tmp16 = ::Std_obj::string(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(39)
	::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(39)
	::String tmp18 = (tmp17 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(39)
	return tmp18;
}


::String FullScreenEvent_obj::FULL_SCREEN;

::String FullScreenEvent_obj::FULL_SCREEN_INTERACTIVE_ACCEPTED;


FullScreenEvent_obj::FullScreenEvent_obj()
{
}

Dynamic FullScreenEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullScreen") ) { return fullScreen; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { return interactive; }
	}
	return super::__Field(inName,inCallProp);
}

bool FullScreenEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"FULL_SCREEN") ) { outValue = FULL_SCREEN; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"FULL_SCREEN_INTERACTIVE_ACCEPTED") ) { outValue = FULL_SCREEN_INTERACTIVE_ACCEPTED; return true;  }
	}
	return false;
}

Dynamic FullScreenEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fullScreen") ) { fullScreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { interactive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FullScreenEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"FULL_SCREEN") ) { FULL_SCREEN=ioValue.Cast< ::String >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"FULL_SCREEN_INTERACTIVE_ACCEPTED") ) { FULL_SCREEN_INTERACTIVE_ACCEPTED=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void FullScreenEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"));
	outFields->push(HX_HCSTRING("interactive","\xe2","\x3d","\x59","\x3c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FullScreenEvent_obj,fullScreen),HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e")},
	{hx::fsBool,(int)offsetof(FullScreenEvent_obj,interactive),HX_HCSTRING("interactive","\xe2","\x3d","\x59","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FullScreenEvent_obj::FULL_SCREEN,HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18")},
	{hx::fsString,(void *) &FullScreenEvent_obj::FULL_SCREEN_INTERACTIVE_ACCEPTED,HX_HCSTRING("FULL_SCREEN_INTERACTIVE_ACCEPTED","\xc7","\xef","\xc6","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),
	HX_HCSTRING("interactive","\xe2","\x3d","\x59","\x3c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FullScreenEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FullScreenEvent_obj::FULL_SCREEN,"FULL_SCREEN");
	HX_MARK_MEMBER_NAME(FullScreenEvent_obj::FULL_SCREEN_INTERACTIVE_ACCEPTED,"FULL_SCREEN_INTERACTIVE_ACCEPTED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FullScreenEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FullScreenEvent_obj::FULL_SCREEN,"FULL_SCREEN");
	HX_VISIT_MEMBER_NAME(FullScreenEvent_obj::FULL_SCREEN_INTERACTIVE_ACCEPTED,"FULL_SCREEN_INTERACTIVE_ACCEPTED");
};

#endif

hx::Class FullScreenEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18"),
	HX_HCSTRING("FULL_SCREEN_INTERACTIVE_ACCEPTED","\xc7","\xef","\xc6","\xd8"),
	::String(null()) };

void FullScreenEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.FullScreenEvent","\x68","\xfd","\x1d","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FullScreenEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &FullScreenEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FullScreenEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void FullScreenEvent_obj::__boot()
{
	FULL_SCREEN= HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e");
	FULL_SCREEN_INTERACTIVE_ACCEPTED= HX_HCSTRING("fullScreenInteractiveAccepted","\xce","\x77","\x06","\x29");
}

} // end namespace openfl
} // end namespace events

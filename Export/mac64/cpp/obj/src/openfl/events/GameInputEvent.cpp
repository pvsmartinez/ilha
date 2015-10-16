#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif
namespace openfl{
namespace events{

Void GameInputEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device)
{
HX_STACK_FRAME("openfl.events.GameInputEvent","new",0x8065662b,"openfl.events.GameInputEvent.new","openfl/events/GameInputEvent.hx",35,0x5318f185)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(device,"device")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(37)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(39)
	this->device = device;
}
;
	return null();
}

//GameInputEvent_obj::~GameInputEvent_obj() { }

Dynamic GameInputEvent_obj::__CreateEmpty() { return  new GameInputEvent_obj; }
hx::ObjectPtr< GameInputEvent_obj > GameInputEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device)
{  hx::ObjectPtr< GameInputEvent_obj > _result_ = new GameInputEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,device);
	return _result_;}

Dynamic GameInputEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInputEvent_obj > _result_ = new GameInputEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::events::Event GameInputEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.GameInputEvent","clone",0x205df1e8,"openfl.events.GameInputEvent.clone","openfl/events/GameInputEvent.hx",44,0x5318f185)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	::openfl::ui::GameInputDevice tmp3 = this->device;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	::openfl::events::GameInputEvent tmp4 = ::openfl::events::GameInputEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	return tmp4;
}


::String GameInputEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.GameInputEvent","toString",0x31f35b01,"openfl.events.GameInputEvent.toString","openfl/events/GameInputEvent.hx",51,0x5318f185)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::String tmp1 = (HX_HCSTRING("[GameInputEvent type=\"","\x42","\x44","\x39","\x08") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	bool tmp3 = this->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(53)
	bool tmp7 = this->cancelable;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(53)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(53)
	::String tmp10 = (tmp9 + HX_HCSTRING(" device=","\xc7","\x6a","\xb7","\xfd"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(53)
	::openfl::ui::GameInputDevice tmp11 = this->device;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(53)
	::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(53)
	::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(53)
	::String tmp14 = (tmp13 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(53)
	return tmp14;
}


::String GameInputEvent_obj::DEVICE_ADDED;

::String GameInputEvent_obj::DEVICE_REMOVED;

::String GameInputEvent_obj::DEVICE_UNUSABLE;


GameInputEvent_obj::GameInputEvent_obj()
{
}

void GameInputEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputEvent);
	HX_MARK_MEMBER_NAME(device,"device");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameInputEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameInputEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameInputEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"DEVICE_ADDED") ) { outValue = DEVICE_ADDED; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEVICE_REMOVED") ) { outValue = DEVICE_REMOVED; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DEVICE_UNUSABLE") ) { outValue = DEVICE_UNUSABLE; return true;  }
	}
	return false;
}

Dynamic GameInputEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< ::openfl::ui::GameInputDevice >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameInputEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"DEVICE_ADDED") ) { DEVICE_ADDED=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEVICE_REMOVED") ) { DEVICE_REMOVED=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DEVICE_UNUSABLE") ) { DEVICE_UNUSABLE=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void GameInputEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::ui::GameInputDevice*/ ,(int)offsetof(GameInputEvent_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GameInputEvent_obj::DEVICE_ADDED,HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6")},
	{hx::fsString,(void *) &GameInputEvent_obj::DEVICE_REMOVED,HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33")},
	{hx::fsString,(void *) &GameInputEvent_obj::DEVICE_UNUSABLE,HX_HCSTRING("DEVICE_UNUSABLE","\x1a","\xc6","\xb7","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#endif

hx::Class GameInputEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6"),
	HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33"),
	HX_HCSTRING("DEVICE_UNUSABLE","\x1a","\xc6","\xb7","\xaa"),
	::String(null()) };

void GameInputEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.GameInputEvent","\xb9","\x74","\x3e","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameInputEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &GameInputEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameInputEvent_obj >;
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

void GameInputEvent_obj::__boot()
{
	DEVICE_ADDED= HX_HCSTRING("deviceAdded","\x4a","\x08","\x84","\x0b");
	DEVICE_REMOVED= HX_HCSTRING("deviceRemoved","\xaa","\xc9","\x5b","\x59");
	DEVICE_UNUSABLE= HX_HCSTRING("deviceUnusable","\xc7","\xa8","\x5e","\x6b");
}

} // end namespace openfl
} // end namespace events

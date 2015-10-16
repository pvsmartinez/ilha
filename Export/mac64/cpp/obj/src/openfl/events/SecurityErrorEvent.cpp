#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace events{

Void SecurityErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{
HX_STACK_FRAME("openfl.events.SecurityErrorEvent","new",0x42af717b,"openfl.events.SecurityErrorEvent.new","openfl/events/SecurityErrorEvent.hx",55,0x4f4e3035)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(__o_id,"id")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int id = __o_id.Default(0);
{
	HX_STACK_LINE(57)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	int tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4);
}
;
	return null();
}

//SecurityErrorEvent_obj::~SecurityErrorEvent_obj() { }

Dynamic SecurityErrorEvent_obj::__CreateEmpty() { return  new SecurityErrorEvent_obj; }
hx::ObjectPtr< SecurityErrorEvent_obj > SecurityErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{  hx::ObjectPtr< SecurityErrorEvent_obj > _result_ = new SecurityErrorEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return _result_;}

Dynamic SecurityErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SecurityErrorEvent_obj > _result_ = new SecurityErrorEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::events::Event SecurityErrorEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.SecurityErrorEvent","clone",0x91bd7138,"openfl.events.SecurityErrorEvent.clone","openfl/events/SecurityErrorEvent.hx",62,0x4f4e3035)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	int tmp4 = this->errorID;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	::openfl::events::SecurityErrorEvent tmp5 = ::openfl::events::SecurityErrorEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	return tmp5;
}


::String SecurityErrorEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.SecurityErrorEvent","toString",0xccee4db1,"openfl.events.SecurityErrorEvent.toString","openfl/events/SecurityErrorEvent.hx",69,0x4f4e3035)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	::String tmp1 = (HX_HCSTRING("[SecurityErrorEvent type=\"","\xf2","\x78","\xc6","\x54") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	bool tmp3 = this->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	bool tmp7 = this->cancelable;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(71)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(71)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(71)
	::String tmp10 = (tmp9 + HX_HCSTRING(" text=","\xd0","\xd6","\x04","\xd9"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(71)
	::String tmp11 = this->text;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(71)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(71)
	::String tmp13 = (tmp12 + HX_HCSTRING(" errorID=","\x5a","\x81","\x5e","\x3d"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(71)
	int tmp14 = this->errorID;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(71)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(71)
	::String tmp16 = (tmp15 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(71)
	return tmp16;
}


::String SecurityErrorEvent_obj::SECURITY_ERROR;


SecurityErrorEvent_obj::SecurityErrorEvent_obj()
{
}

Dynamic SecurityErrorEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SecurityErrorEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"SECURITY_ERROR") ) { outValue = SECURITY_ERROR; return true;  }
	}
	return false;
}

bool SecurityErrorEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"SECURITY_ERROR") ) { SECURITY_ERROR=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &SecurityErrorEvent_obj::SECURITY_ERROR,HX_HCSTRING("SECURITY_ERROR","\xa9","\x85","\x3b","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SecurityErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SecurityErrorEvent_obj::SECURITY_ERROR,"SECURITY_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SecurityErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SecurityErrorEvent_obj::SECURITY_ERROR,"SECURITY_ERROR");
};

#endif

hx::Class SecurityErrorEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SECURITY_ERROR","\xa9","\x85","\x3b","\xcf"),
	::String(null()) };

void SecurityErrorEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.SecurityErrorEvent","\x09","\x98","\x2c","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SecurityErrorEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &SecurityErrorEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SecurityErrorEvent_obj >;
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

void SecurityErrorEvent_obj::__boot()
{
	SECURITY_ERROR= HX_HCSTRING("securityError","\xe8","\x28","\x7c","\xa2");
}

} // end namespace openfl
} // end namespace events

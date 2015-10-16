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
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace events{

Void ErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{
HX_STACK_FRAME("openfl.events.ErrorEvent","new",0x1354a39b,"openfl.events.ErrorEvent.new","openfl/events/ErrorEvent.hx",63,0x9d2fc215)
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
	HX_STACK_LINE(65)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	super::__construct(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(66)
	this->errorID = id;
}
;
	return null();
}

//ErrorEvent_obj::~ErrorEvent_obj() { }

Dynamic ErrorEvent_obj::__CreateEmpty() { return  new ErrorEvent_obj; }
hx::ObjectPtr< ErrorEvent_obj > ErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{  hx::ObjectPtr< ErrorEvent_obj > _result_ = new ErrorEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return _result_;}

Dynamic ErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ErrorEvent_obj > _result_ = new ErrorEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::events::Event ErrorEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.ErrorEvent","clone",0xbbab6b58,"openfl.events.ErrorEvent.clone","openfl/events/ErrorEvent.hx",71,0x9d2fc215)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	int tmp4 = this->errorID;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	::openfl::events::ErrorEvent tmp5 = ::openfl::events::ErrorEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	return tmp5;
}


::String ErrorEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.ErrorEvent","toString",0x299f6791,"openfl.events.ErrorEvent.toString","openfl/events/ErrorEvent.hx",78,0x9d2fc215)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::String tmp1 = (HX_HCSTRING("[ErrorEvent type=\"","\xd2","\xbe","\x97","\x6e") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	bool tmp3 = this->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(80)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(80)
	bool tmp7 = this->cancelable;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(80)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(80)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(80)
	::String tmp10 = (tmp9 + HX_HCSTRING(" text=","\xd0","\xd6","\x04","\xd9"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(80)
	::String tmp11 = this->text;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(80)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(80)
	::String tmp13 = (tmp12 + HX_HCSTRING(" errorID=","\x5a","\x81","\x5e","\x3d"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(80)
	int tmp14 = this->errorID;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(80)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(80)
	::String tmp16 = (tmp15 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(80)
	return tmp16;
}


::String ErrorEvent_obj::ERROR;


ErrorEvent_obj::ErrorEvent_obj()
{
}

Dynamic ErrorEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return errorID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ErrorEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { outValue = ERROR; return true;  }
	}
	return false;
}

Dynamic ErrorEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ErrorEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void ErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ErrorEvent_obj,errorID),HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ErrorEvent_obj::ERROR,HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

#endif

hx::Class ErrorEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),
	::String(null()) };

void ErrorEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.ErrorEvent","\x29","\x3a","\x86","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ErrorEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ErrorEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ErrorEvent_obj >;
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

void ErrorEvent_obj::__boot()
{
	ERROR= HX_HCSTRING("error","\xc8","\xcb","\x29","\x73");
}

} // end namespace openfl
} // end namespace events

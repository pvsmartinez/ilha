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
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace events{

Void IOErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{
HX_STACK_FRAME("openfl.events.IOErrorEvent","new",0x69722dc1,"openfl.events.IOErrorEvent.new","openfl/events/IOErrorEvent.hx",48,0x9ba976af)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(__o_id,"id")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int id = __o_id.Default(0);
{
	HX_STACK_LINE(50)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	int tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4);
}
;
	return null();
}

//IOErrorEvent_obj::~IOErrorEvent_obj() { }

Dynamic IOErrorEvent_obj::__CreateEmpty() { return  new IOErrorEvent_obj; }
hx::ObjectPtr< IOErrorEvent_obj > IOErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{  hx::ObjectPtr< IOErrorEvent_obj > _result_ = new IOErrorEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return _result_;}

Dynamic IOErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IOErrorEvent_obj > _result_ = new IOErrorEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::events::Event IOErrorEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.IOErrorEvent","clone",0xfbdc4afe,"openfl.events.IOErrorEvent.clone","openfl/events/IOErrorEvent.hx",55,0x9ba976af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	int tmp4 = this->errorID;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	::openfl::events::IOErrorEvent tmp5 = ::openfl::events::IOErrorEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	return tmp5;
}


::String IOErrorEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.IOErrorEvent","toString",0xfbbd53ab,"openfl.events.IOErrorEvent.toString","openfl/events/IOErrorEvent.hx",62,0x9ba976af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	::String tmp1 = (HX_HCSTRING("[IOErrorEvent type=\"","\x6c","\xd7","\x69","\x68") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	bool tmp3 = this->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	bool tmp7 = this->cancelable;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(64)
	::String tmp10 = (tmp9 + HX_HCSTRING(" text=","\xd0","\xd6","\x04","\xd9"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(64)
	::String tmp11 = this->text;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(64)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(64)
	::String tmp13 = (tmp12 + HX_HCSTRING(" errorID=","\x5a","\x81","\x5e","\x3d"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(64)
	int tmp14 = this->errorID;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(64)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(64)
	::String tmp16 = (tmp15 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(64)
	return tmp16;
}


::String IOErrorEvent_obj::IO_ERROR;


IOErrorEvent_obj::IOErrorEvent_obj()
{
}

Dynamic IOErrorEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool IOErrorEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"IO_ERROR") ) { outValue = IO_ERROR; return true;  }
	}
	return false;
}

bool IOErrorEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"IO_ERROR") ) { IO_ERROR=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &IOErrorEvent_obj::IO_ERROR,HX_HCSTRING("IO_ERROR","\x4f","\x7b","\x81","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
};

#endif

hx::Class IOErrorEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("IO_ERROR","\x4f","\x7b","\x81","\x11"),
	::String(null()) };

void IOErrorEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.IOErrorEvent","\x4f","\x39","\xfe","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IOErrorEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &IOErrorEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IOErrorEvent_obj >;
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

void IOErrorEvent_obj::__boot()
{
	IO_ERROR= HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76");
}

} // end namespace openfl
} // end namespace events

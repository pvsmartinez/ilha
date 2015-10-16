#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
namespace openfl{
namespace events{

Void HTTPStatusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status)
{
HX_STACK_FRAME("openfl.events.HTTPStatusEvent","new",0x992d4c1b,"openfl.events.HTTPStatusEvent.new","openfl/events/HTTPStatusEvent.hx",102,0x9d0269d5)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_status,"status")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int status = __o_status.Default(0);
{
	HX_STACK_LINE(104)
	this->status = status;
	HX_STACK_LINE(106)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//HTTPStatusEvent_obj::~HTTPStatusEvent_obj() { }

Dynamic HTTPStatusEvent_obj::__CreateEmpty() { return  new HTTPStatusEvent_obj; }
hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status)
{  hx::ObjectPtr< HTTPStatusEvent_obj > _result_ = new HTTPStatusEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_status);
	return _result_;}

Dynamic HTTPStatusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPStatusEvent_obj > _result_ = new HTTPStatusEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS;

::String HTTPStatusEvent_obj::HTTP_STATUS;


HTTPStatusEvent_obj::HTTPStatusEvent_obj()
{
}

void HTTPStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPStatusEvent);
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(responseURL,"responseURL");
	HX_MARK_MEMBER_NAME(status,"status");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HTTPStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(responseURL,"responseURL");
	HX_VISIT_MEMBER_NAME(status,"status");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HTTPStatusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { return responseURL; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return responseHeaders; }
	}
	return super::__Field(inName,inCallProp);
}

bool HTTPStatusEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HTTP_STATUS") ) { outValue = HTTP_STATUS; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"HTTP_RESPONSE_STATUS") ) { outValue = HTTP_RESPONSE_STATUS; return true;  }
	}
	return false;
}

Dynamic HTTPStatusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { responseURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPStatusEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HTTP_STATUS") ) { HTTP_STATUS=ioValue.Cast< ::String >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"HTTP_RESPONSE_STATUS") ) { HTTP_RESPONSE_STATUS=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void HTTPStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"));
	outFields->push(HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(HTTPStatusEvent_obj,responseHeaders),HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43")},
	{hx::fsString,(int)offsetof(HTTPStatusEvent_obj,responseURL),HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86")},
	{hx::fsInt,(int)offsetof(HTTPStatusEvent_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,HX_HCSTRING("HTTP_RESPONSE_STATUS","\x79","\xde","\x26","\x00")},
	{hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_STATUS,HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"),
	HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,"HTTP_RESPONSE_STATUS");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,"HTTP_RESPONSE_STATUS");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#endif

hx::Class HTTPStatusEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("HTTP_RESPONSE_STATUS","\x79","\xde","\x26","\x00"),
	HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94"),
	::String(null()) };

void HTTPStatusEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.HTTPStatusEvent","\xa9","\xa2","\xc0","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTTPStatusEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &HTTPStatusEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPStatusEvent_obj >;
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

void HTTPStatusEvent_obj::__boot()
{
	HTTP_RESPONSE_STATUS= HX_HCSTRING("httpResponseStatus","\x3b","\xae","\xf6","\x61");
	HTTP_STATUS= HX_HCSTRING("httpStatus","\xda","\x4c","\x74","\x0a");
}

} // end namespace openfl
} // end namespace events

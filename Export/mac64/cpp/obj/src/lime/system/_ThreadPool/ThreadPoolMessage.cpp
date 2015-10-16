#include <hxcpp.h>

#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessage
#include <lime/system/_ThreadPool/ThreadPoolMessage.h>
#endif
#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType
#include <lime/system/_ThreadPool/ThreadPoolMessageType.h>
#endif
namespace lime{
namespace _system{
namespace _ThreadPool{

Void ThreadPoolMessage_obj::__construct(::lime::_system::_ThreadPool::ThreadPoolMessageType type,Dynamic state)
{
HX_STACK_FRAME("lime.system._ThreadPool.ThreadPoolMessage","new",0x973bef04,"lime.system._ThreadPool.ThreadPoolMessage.new","lime/system/ThreadPool.hx",230,0x8993fbb2)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(state,"state")
{
	HX_STACK_LINE(232)
	this->type = type;
	HX_STACK_LINE(233)
	this->state = state;
}
;
	return null();
}

//ThreadPoolMessage_obj::~ThreadPoolMessage_obj() { }

Dynamic ThreadPoolMessage_obj::__CreateEmpty() { return  new ThreadPoolMessage_obj; }
hx::ObjectPtr< ThreadPoolMessage_obj > ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType type,Dynamic state)
{  hx::ObjectPtr< ThreadPoolMessage_obj > _result_ = new ThreadPoolMessage_obj();
	_result_->__construct(type,state);
	return _result_;}

Dynamic ThreadPoolMessage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ThreadPoolMessage_obj > _result_ = new ThreadPoolMessage_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


ThreadPoolMessage_obj::ThreadPoolMessage_obj()
{
}

void ThreadPoolMessage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadPoolMessage);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void ThreadPoolMessage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic ThreadPoolMessage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ThreadPoolMessage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::_system::_ThreadPool::ThreadPoolMessageType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadPoolMessage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadPoolMessage_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::lime::_system::_ThreadPool::ThreadPoolMessageType*/ ,(int)offsetof(ThreadPoolMessage_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadPoolMessage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadPoolMessage_obj::__mClass,"__mClass");
};

#endif

hx::Class ThreadPoolMessage_obj::__mClass;

void ThreadPoolMessage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system._ThreadPool.ThreadPoolMessage","\x12","\x5d","\xd7","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThreadPoolMessage_obj >;
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

} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool

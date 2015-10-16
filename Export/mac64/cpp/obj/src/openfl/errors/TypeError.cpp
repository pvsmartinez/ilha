#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
namespace openfl{
namespace errors{

Void TypeError_obj::__construct(::String __o_message)
{
HX_STACK_FRAME("openfl.errors.TypeError","new",0x4857781b,"openfl.errors.TypeError.new","openfl/errors/TypeError.hx",7,0xef0d65d5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(9)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp,(int)0);
	HX_STACK_LINE(11)
	this->name = HX_HCSTRING("TypeError","\x8e","\x06","\xd5","\xd9");
}
;
	return null();
}

//TypeError_obj::~TypeError_obj() { }

Dynamic TypeError_obj::__CreateEmpty() { return  new TypeError_obj; }
hx::ObjectPtr< TypeError_obj > TypeError_obj::__new(::String __o_message)
{  hx::ObjectPtr< TypeError_obj > _result_ = new TypeError_obj();
	_result_->__construct(__o_message);
	return _result_;}

Dynamic TypeError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeError_obj > _result_ = new TypeError_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


TypeError_obj::TypeError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeError_obj::__mClass,"__mClass");
};

#endif

hx::Class TypeError_obj::__mClass;

void TypeError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.TypeError","\xa9","\xce","\x64","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TypeError_obj >;
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

} // end namespace openfl
} // end namespace errors

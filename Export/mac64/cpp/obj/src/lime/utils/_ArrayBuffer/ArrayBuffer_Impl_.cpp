#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils__ArrayBuffer_ArrayBuffer_Impl_
#include <lime/utils/_ArrayBuffer/ArrayBuffer_Impl_.h>
#endif
namespace lime{
namespace utils{
namespace _ArrayBuffer{

Void ArrayBuffer_Impl__obj::__construct()
{
	return null();
}

//ArrayBuffer_Impl__obj::~ArrayBuffer_Impl__obj() { }

Dynamic ArrayBuffer_Impl__obj::__CreateEmpty() { return  new ArrayBuffer_Impl__obj; }
hx::ObjectPtr< ArrayBuffer_Impl__obj > ArrayBuffer_Impl__obj::__new()
{  hx::ObjectPtr< ArrayBuffer_Impl__obj > _result_ = new ArrayBuffer_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ArrayBuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBuffer_Impl__obj > _result_ = new ArrayBuffer_Impl__obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes ArrayBuffer_Impl__obj::_new( int byteLength){
	HX_STACK_FRAME("lime.utils._ArrayBuffer.ArrayBuffer_Impl_","_new",0x3fa42e74,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_._new","lime/utils/ArrayBuffer.hx",13,0x9f41eedd)
	HX_STACK_ARG(byteLength,"byteLength")
	HX_STACK_LINE(13)
	::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(14)
	int tmp = byteLength;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	this1 = tmp1;
	HX_STACK_LINE(13)
	::haxe::io::Bytes tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBuffer_Impl__obj,_new,return )


ArrayBuffer_Impl__obj::ArrayBuffer_Impl__obj()
{
}

bool ArrayBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBuffer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBuffer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBuffer_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null()) };

void ArrayBuffer_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._ArrayBuffer.ArrayBuffer_Impl_","\x3b","\xe0","\xeb","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArrayBuffer_Impl__obj >;
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
} // end namespace utils
} // end namespace _ArrayBuffer

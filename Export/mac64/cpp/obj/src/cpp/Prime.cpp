#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
namespace cpp{

Void Prime_obj::__construct()
{
	return null();
}

//Prime_obj::~Prime_obj() { }

Dynamic Prime_obj::__CreateEmpty() { return  new Prime_obj; }
hx::ObjectPtr< Prime_obj > Prime_obj::__new()
{  hx::ObjectPtr< Prime_obj > _result_ = new Prime_obj();
	_result_->__construct();
	return _result_;}

Dynamic Prime_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Prime_obj > _result_ = new Prime_obj();
	_result_->__construct();
	return _result_;}

Dynamic Prime_obj::_loadPrime( ::String lib,::String prim,::String signature,hx::Null< bool >  __o_quietFail){
bool quietFail = __o_quietFail.Default(false);
	HX_STACK_FRAME("cpp.Prime","_loadPrime",0xdd360794,"cpp.Prime._loadPrime","/usr/local/lib/haxe/std/cpp/Prime.hx",36,0xaaa199e8)
	HX_STACK_ARG(lib,"lib")
	HX_STACK_ARG(prim,"prim")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(quietFail,"quietFail")
{
		HX_STACK_LINE(38)
		::cpp::Function< ::hx::Object * (  const ::cpp::Char *  ) > tmp = ::__hxcpp_cast_get_proc_address(lib,(prim + HX_HCSTRING("__prime","\x1f","\xb0","\xe9","\x32")),quietFail);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::cpp::Function< ::hx::Object * (  const ::cpp::Char *  ) > factory = tmp;		HX_STACK_VAR(factory,"factory");
		HX_STACK_LINE(39)
		bool tmp1 = (factory != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		if ((tmp1)){
			HX_STACK_LINE(41)
			Dynamic func = factory.call(signature.__s);		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(42)
			bool tmp2 = (func == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			if ((tmp2)){
				HX_STACK_LINE(42)
				bool tmp4 = quietFail;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				tmp3 = !(tmp5);
			}
			else{
				HX_STACK_LINE(42)
				tmp3 = false;
			}
			HX_STACK_LINE(42)
			if ((tmp3)){
				HX_STACK_LINE(43)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + prim);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				::String tmp5 = (tmp4 + HX_HCSTRING(" does not have signature ","\x0c","\x77","\x54","\x95"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				::String tmp6 = signature;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(43)
				::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(44)
			Dynamic tmp4 = func;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			return tmp4;
		}
		HX_STACK_LINE(46)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Prime_obj,_loadPrime,return )


Prime_obj::Prime_obj()
{
}

bool Prime_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_loadPrime") ) { outValue = _loadPrime_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Prime_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Prime_obj::__mClass,"__mClass");
};

#endif

hx::Class Prime_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_loadPrime","\xfa","\x1e","\x65","\x3f"),
	::String(null()) };

void Prime_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.Prime","\x94","\xdd","\xf4","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Prime_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Prime_obj >;
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

} // end namespace cpp

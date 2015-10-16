#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif

Void Lambda_obj::__construct()
{
	return null();
}

//Lambda_obj::~Lambda_obj() { }

Dynamic Lambda_obj::__CreateEmpty() { return  new Lambda_obj; }
hx::ObjectPtr< Lambda_obj > Lambda_obj::__new()
{  hx::ObjectPtr< Lambda_obj > _result_ = new Lambda_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lambda_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lambda_obj > _result_ = new Lambda_obj();
	_result_->__construct();
	return _result_;}

int Lambda_obj::count( Dynamic it,Dynamic pred){
	HX_STACK_FRAME("Lambda","count",0xc15edc48,"Lambda.count","/usr/local/lib/haxe/std/Lambda.hx",191,0xf61dfe9a)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(pred,"pred")
	HX_STACK_LINE(192)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(193)
	bool tmp = (pred == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	if ((tmp)){
		HX_STACK_LINE(194)
		Dynamic tmp1 = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
			Dynamic _ = __it->next();
			(n)++;
		}
	}
	else{
		HX_STACK_LINE(197)
		Dynamic tmp1 = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
			Dynamic x = __it->next();
			{
				HX_STACK_LINE(198)
				Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(198)
				bool tmp3 = pred(tmp2).Cast< bool >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(198)
				if ((tmp3)){
					HX_STACK_LINE(199)
					(n)++;
				}
			}
;
		}
	}
	HX_STACK_LINE(200)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,count,return )


Lambda_obj::Lambda_obj()
{
}

bool Lambda_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { outValue = count_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

#endif

hx::Class Lambda_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	::String(null()) };

void Lambda_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Lambda","\x27","\xa7","\x54","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lambda_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lambda_obj >;
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


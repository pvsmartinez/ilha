#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_system__CFFIPointer_CFFIPointer_Impl_
#include <lime/system/_CFFIPointer/CFFIPointer_Impl_.h>
#endif
namespace lime{
namespace _system{
namespace _CFFIPointer{

Void CFFIPointer_Impl__obj::__construct()
{
	return null();
}

//CFFIPointer_Impl__obj::~CFFIPointer_Impl__obj() { }

Dynamic CFFIPointer_Impl__obj::__CreateEmpty() { return  new CFFIPointer_Impl__obj; }
hx::ObjectPtr< CFFIPointer_Impl__obj > CFFIPointer_Impl__obj::__new()
{  hx::ObjectPtr< CFFIPointer_Impl__obj > _result_ = new CFFIPointer_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CFFIPointer_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CFFIPointer_Impl__obj > _result_ = new CFFIPointer_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CFFIPointer_Impl__obj::_new( Dynamic handle){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","_new",0xca839748,"lime.system._CFFIPointer.CFFIPointer_Impl_._new","lime/system/CFFIPointer.hx",13,0x1e20e50d)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(13)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFIPointer_Impl__obj,_new,return )

Float CFFIPointer_Impl__obj::get( Dynamic this1){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","get",0xe8d2f88f,"lime.system._CFFIPointer.CFFIPointer_Impl_.get","lime/system/CFFIPointer.hx",18,0x1e20e50d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(20)
	bool tmp = (this1 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(23)
		return ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::cffi_lime_cffi_get_native_pointer.call(hx::DynamicPtr(this1));
	}
	HX_STACK_LINE(28)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFIPointer_Impl__obj,get,return )

bool CFFIPointer_Impl__obj::equals( Dynamic a,int b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","equals",0x4ee8f7e6,"lime.system._CFFIPointer.CFFIPointer_Impl_.equals","lime/system/CFFIPointer.hx",33,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(33)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	int tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,equals,return )

bool CFFIPointer_Impl__obj::equalsPointer( Dynamic a,Dynamic b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","equalsPointer",0x0bf95977,"lime.system._CFFIPointer.CFFIPointer_Impl_.equalsPointer","lime/system/CFFIPointer.hx",34,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(34)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,equalsPointer,return )

bool CFFIPointer_Impl__obj::greaterThan( Dynamic a,int b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThan",0xe66d5a74,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThan","lime/system/CFFIPointer.hx",35,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(35)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	int tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThan,return )

bool CFFIPointer_Impl__obj::greaterThanPointer( Dynamic a,Dynamic b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThanPointer",0x36a084a9,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThanPointer","lime/system/CFFIPointer.hx",36,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(36)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThanPointer,return )

bool CFFIPointer_Impl__obj::greaterThanOrEqual( Dynamic a,int b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThanOrEqual",0x87aca37d,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThanOrEqual","lime/system/CFFIPointer.hx",37,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(37)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	int tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThanOrEqual,return )

bool CFFIPointer_Impl__obj::greaterThanOrEqualPointer( Dynamic a,Dynamic b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThanOrEqualPointer",0x30925ec0,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThanOrEqualPointer","lime/system/CFFIPointer.hx",38,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(38)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	bool tmp4 = (tmp1 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThanOrEqualPointer,return )

bool CFFIPointer_Impl__obj::lessThan( Dynamic a,int b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","lessThan",0xb2fd60c1,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThan","lime/system/CFFIPointer.hx",39,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(39)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	int tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThan,return )

bool CFFIPointer_Impl__obj::lessThanPointer( Dynamic a,Dynamic b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","lessThanPointer",0x7ee991fc,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThanPointer","lime/system/CFFIPointer.hx",40,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(40)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	bool tmp4 = (tmp1 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThanPointer,return )

bool CFFIPointer_Impl__obj::lessThanOrEqual( Dynamic a,int b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","lessThanOrEqual",0xcff5b0d0,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThanOrEqual","lime/system/CFFIPointer.hx",41,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(41)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	int tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	bool tmp3 = (tmp1 <= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThanOrEqual,return )

bool CFFIPointer_Impl__obj::lessThanOrEqualPointer( Dynamic a,Dynamic b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","lessThanOrEqualPointer",0x8e8ff1cd,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThanOrEqualPointer","lime/system/CFFIPointer.hx",42,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(42)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	bool tmp4 = (tmp1 <= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThanOrEqualPointer,return )

bool CFFIPointer_Impl__obj::notEquals( Dynamic a,int b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","notEquals",0x4cf4046b,"lime.system._CFFIPointer.CFFIPointer_Impl_.notEquals","lime/system/CFFIPointer.hx",43,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(43)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	int tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,notEquals,return )

bool CFFIPointer_Impl__obj::notEqualsPointer( Dynamic a,Dynamic b){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","notEqualsPointer",0xc9dd1792,"lime.system._CFFIPointer.CFFIPointer_Impl_.notEqualsPointer","lime/system/CFFIPointer.hx",44,0x1e20e50d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(44)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Float tmp1 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	Dynamic tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	Float tmp3 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	bool tmp4 = (tmp1 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,notEqualsPointer,return )

Float CFFIPointer_Impl__obj::lime_cffi_get_native_pointer( Dynamic ptr){
	HX_STACK_FRAME("lime.system._CFFIPointer.CFFIPointer_Impl_","lime_cffi_get_native_pointer",0x697db154,"lime.system._CFFIPointer.CFFIPointer_Impl_.lime_cffi_get_native_pointer","lime/system/CFFIPointer.hx",55,0x1e20e50d)
	HX_STACK_ARG(ptr,"ptr")
	HX_STACK_LINE(55)
	return ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::cffi_lime_cffi_get_native_pointer.call(hx::DynamicPtr(ptr));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFIPointer_Impl__obj,lime_cffi_get_native_pointer,return )

::cpp::Function< Float ( ::hx::Object * ) > CFFIPointer_Impl__obj::cffi_lime_cffi_get_native_pointer;


CFFIPointer_Impl__obj::CFFIPointer_Impl__obj()
{
}

bool CFFIPointer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lessThan") ) { outValue = lessThan_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEquals") ) { outValue = notEquals_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greaterThan") ) { outValue = greaterThan_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"equalsPointer") ) { outValue = equalsPointer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lessThanPointer") ) { outValue = lessThanPointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lessThanOrEqual") ) { outValue = lessThanOrEqual_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"notEqualsPointer") ) { outValue = notEqualsPointer_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"greaterThanPointer") ) { outValue = greaterThanPointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"greaterThanOrEqual") ) { outValue = greaterThanOrEqual_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lessThanOrEqualPointer") ) { outValue = lessThanOrEqualPointer_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"greaterThanOrEqualPointer") ) { outValue = greaterThanOrEqualPointer_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cffi_get_native_pointer") ) { outValue = lime_cffi_get_native_pointer_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &CFFIPointer_Impl__obj::cffi_lime_cffi_get_native_pointer,HX_HCSTRING("cffi_lime_cffi_get_native_pointer","\xe6","\x38","\xa0","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CFFIPointer_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CFFIPointer_Impl__obj::cffi_lime_cffi_get_native_pointer,"cffi_lime_cffi_get_native_pointer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CFFIPointer_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CFFIPointer_Impl__obj::cffi_lime_cffi_get_native_pointer,"cffi_lime_cffi_get_native_pointer");
};

#endif

hx::Class CFFIPointer_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("equalsPointer","\x3e","\xd0","\x43","\x1a"),
	HX_HCSTRING("greaterThan","\x7b","\xc1","\x4a","\x75"),
	HX_HCSTRING("greaterThanPointer","\x82","\x1c","\xaf","\xc9"),
	HX_HCSTRING("greaterThanOrEqual","\x56","\x3b","\xbb","\x1a"),
	HX_HCSTRING("greaterThanOrEqualPointer","\x07","\x64","\x57","\x78"),
	HX_HCSTRING("lessThan","\x5a","\x5f","\x34","\xf3"),
	HX_HCSTRING("lessThanPointer","\x83","\x88","\xd4","\x8d"),
	HX_HCSTRING("lessThanOrEqual","\x57","\xa7","\xe0","\xde"),
	HX_HCSTRING("lessThanOrEqualPointer","\x26","\xea","\x29","\x34"),
	HX_HCSTRING("notEquals","\xb2","\xcb","\xdb","\x3c"),
	HX_HCSTRING("notEqualsPointer","\x2b","\xd7","\x89","\xc8"),
	HX_HCSTRING("lime_cffi_get_native_pointer","\x6d","\xf2","\xd7","\x07"),
	HX_HCSTRING("cffi_lime_cffi_get_native_pointer","\xe6","\x38","\xa0","\xf9"),
	::String(null()) };

void CFFIPointer_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system._CFFIPointer.CFFIPointer_Impl_","\xe7","\x27","\x6d","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CFFIPointer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CFFIPointer_Impl__obj >;
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

void CFFIPointer_Impl__obj::__boot()
{
	cffi_lime_cffi_get_native_pointer= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cffi_get_native_pointer","\x6d","\xf2","\xd7","\x07"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace system
} // end namespace _CFFIPointer

#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_LZMA
#include <lime/utils/LZMA.h>
#endif
namespace lime{
namespace utils{

Void LZMA_obj::__construct()
{
	return null();
}

//LZMA_obj::~LZMA_obj() { }

Dynamic LZMA_obj::__CreateEmpty() { return  new LZMA_obj; }
hx::ObjectPtr< LZMA_obj > LZMA_obj::__new()
{  hx::ObjectPtr< LZMA_obj > _result_ = new LZMA_obj();
	_result_->__construct();
	return _result_;}

Dynamic LZMA_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LZMA_obj > _result_ = new LZMA_obj();
	_result_->__construct();
	return _result_;}

::lime::utils::ByteArray LZMA_obj::decode( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.utils.LZMA","decode",0x452a0d64,"lime.utils.LZMA.decode","lime/utils/LZMA.hx",14,0x8b46fdc4)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(17)
	Dynamic data = ((Dynamic)(::lime::utils::LZMA_obj::cffi_lime_lzma_decode.call(hx::DynamicPtr(bytes))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(18)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::lime::utils::ByteArray tmp1 = ::lime::utils::ByteArray_obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,decode,return )

::lime::utils::ByteArray LZMA_obj::encode( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.utils.LZMA","encode",0xda20a24c,"lime.utils.LZMA.encode","lime/utils/LZMA.hx",26,0x8b46fdc4)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(29)
	Dynamic data = ((Dynamic)(::lime::utils::LZMA_obj::cffi_lime_lzma_encode.call(hx::DynamicPtr(bytes))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(30)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::lime::utils::ByteArray tmp1 = ::lime::utils::ByteArray_obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,encode,return )

Dynamic LZMA_obj::lime_lzma_decode( Dynamic data){
	HX_STACK_FRAME("lime.utils.LZMA","lime_lzma_decode",0x5fcea1f7,"lime.utils.LZMA.lime_lzma_decode","lime/utils/LZMA.hx",46,0x8b46fdc4)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(46)
	return ::lime::utils::LZMA_obj::cffi_lime_lzma_decode.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,lime_lzma_decode,return )

Dynamic LZMA_obj::lime_lzma_encode( Dynamic data){
	HX_STACK_FRAME("lime.utils.LZMA","lime_lzma_encode",0xf4c536df,"lime.utils.LZMA.lime_lzma_encode","lime/utils/LZMA.hx",47,0x8b46fdc4)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(47)
	return ::lime::utils::LZMA_obj::cffi_lime_lzma_encode.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,lime_lzma_encode,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > LZMA_obj::cffi_lime_lzma_decode;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > LZMA_obj::cffi_lime_lzma_encode;


LZMA_obj::LZMA_obj()
{
}

bool LZMA_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { outValue = lime_lzma_decode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { outValue = lime_lzma_encode_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_decode") ) { outValue = cffi_lime_lzma_decode; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_encode") ) { outValue = cffi_lime_lzma_encode; return true;  }
	}
	return false;
}

bool LZMA_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_decode") ) { cffi_lime_lzma_decode=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_encode") ) { cffi_lime_lzma_encode=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &LZMA_obj::cffi_lime_lzma_decode,HX_HCSTRING("cffi_lime_lzma_decode","\x3a","\x87","\xfb","\x6b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &LZMA_obj::cffi_lime_lzma_encode,HX_HCSTRING("cffi_lime_lzma_encode","\x22","\x1c","\xf2","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_decode,"cffi_lime_lzma_decode");
	HX_MARK_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_encode,"cffi_lime_lzma_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_decode,"cffi_lime_lzma_decode");
	HX_VISIT_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_encode,"cffi_lime_lzma_encode");
};

#endif

hx::Class LZMA_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43"),
	HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8"),
	HX_HCSTRING("cffi_lime_lzma_decode","\x3a","\x87","\xfb","\x6b"),
	HX_HCSTRING("cffi_lime_lzma_encode","\x22","\x1c","\xf2","\x00"),
	::String(null()) };

void LZMA_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.LZMA","\x78","\xc5","\xd6","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LZMA_obj::__GetStatic;
	__mClass->mSetStaticField = &LZMA_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LZMA_obj >;
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

void LZMA_obj::__boot()
{
	cffi_lime_lzma_decode= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_lzma_encode= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace utils

#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_net_curl__CURL_CURL_Impl_
#include <lime/net/curl/_CURL/CURL_Impl_.h>
#endif
namespace lime{
namespace net{
namespace curl{
namespace _CURL{

Void CURL_Impl__obj::__construct()
{
	return null();
}

//CURL_Impl__obj::~CURL_Impl__obj() { }

Dynamic CURL_Impl__obj::__CreateEmpty() { return  new CURL_Impl__obj; }
hx::ObjectPtr< CURL_Impl__obj > CURL_Impl__obj::__new()
{  hx::ObjectPtr< CURL_Impl__obj > _result_ = new CURL_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CURL_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CURL_Impl__obj > _result_ = new CURL_Impl__obj();
	_result_->__construct();
	return _result_;}

int CURL_Impl__obj::GLOBAL_SSL;

int CURL_Impl__obj::GLOBAL_WIN32;

int CURL_Impl__obj::GLOBAL_ALL;

int CURL_Impl__obj::GLOBAL_NOTHING;

int CURL_Impl__obj::GLOBAL_DEFAULT;

int CURL_Impl__obj::GLOBAL_ACK_EINTR;

int CURL_Impl__obj::getDate( ::String date,int now){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","getDate",0xf817421d,"lime.net.curl._CURL.CURL_Impl_.getDate","lime/net/curl/CURL.hx",23,0x82d3899b)
	HX_STACK_ARG(date,"date")
	HX_STACK_ARG(now,"now")
	HX_STACK_LINE(23)
	return ((int)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_getdate.call(date,((Float)(now)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,getDate,return )

Void CURL_Impl__obj::globalCleanup( ){
{
		HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","globalCleanup",0xf988f1fa,"lime.net.curl._CURL.CURL_Impl_.globalCleanup","lime/net/curl/CURL.hx",34,0x82d3899b)
		HX_STACK_LINE(34)
		::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_global_cleanup.call();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,globalCleanup,(void))

int CURL_Impl__obj::globalInit( int flags){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","globalInit",0x7c47f37a,"lime.net.curl._CURL.CURL_Impl_.globalInit","lime/net/curl/CURL.hx",43,0x82d3899b)
	HX_STACK_ARG(flags,"flags")
	HX_STACK_LINE(43)
	return ::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_global_init.call(flags);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,globalInit,return )

::String CURL_Impl__obj::version( ){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","version",0x60232351,"lime.net.curl._CURL.CURL_Impl_.version","lime/net/curl/CURL.hx",54,0x82d3899b)
	HX_STACK_LINE(54)
	return ((Dynamic)(::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_version.call()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,version,return )

Dynamic CURL_Impl__obj::versionInfo( int type){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","versionInfo",0x87fa045f,"lime.net.curl._CURL.CURL_Impl_.versionInfo","lime/net/curl/CURL.hx",62,0x82d3899b)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(65)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		tmp1 = hx::TCast< ::Int >::cast(type);
		HX_STACK_LINE(65)
		int type1 = tmp1;		HX_STACK_VAR(type1,"type1");
		HX_STACK_LINE(65)
		tmp = ::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_version_info.call(type1);
	}
	HX_STACK_LINE(65)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,versionInfo,return )

bool CURL_Impl__obj::intGt( Float a,Float b){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","intGt",0x725c30f5,"lime.net.curl._CURL.CURL_Impl_.intGt","lime/net/curl/CURL.hx",73,0x82d3899b)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(75)
	bool tmp = (a > b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,intGt,return )

Float CURL_Impl__obj::lime_curl_getdate( ::String date,Float now){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_getdate",0x64205a54,"lime.net.curl._CURL.CURL_Impl_.lime_curl_getdate","lime/net/curl/CURL.hx",81,0x82d3899b)
	HX_STACK_ARG(date,"date")
	HX_STACK_ARG(now,"now")
	HX_STACK_LINE(81)
	return ::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_getdate.call(date,now);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,lime_curl_getdate,return )

Void CURL_Impl__obj::lime_curl_global_cleanup( ){
{
		HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_global_cleanup",0x3adde378,"lime.net.curl._CURL.CURL_Impl_.lime_curl_global_cleanup","lime/net/curl/CURL.hx",82,0x82d3899b)
		HX_STACK_LINE(82)
		::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_global_cleanup.call();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,lime_curl_global_cleanup,(void))

int CURL_Impl__obj::lime_curl_global_init( int flags){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_global_init",0xb164473c,"lime.net.curl._CURL.CURL_Impl_.lime_curl_global_init","lime/net/curl/CURL.hx",83,0x82d3899b)
	HX_STACK_ARG(flags,"flags")
	HX_STACK_LINE(83)
	return ::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_global_init.call(flags);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,lime_curl_global_init,return )

Dynamic CURL_Impl__obj::lime_curl_version( ){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_version",0xb70567a8,"lime.net.curl._CURL.CURL_Impl_.lime_curl_version","lime/net/curl/CURL.hx",84,0x82d3899b)
	HX_STACK_LINE(84)
	return ::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_version.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,lime_curl_version,return )

Dynamic CURL_Impl__obj::lime_curl_version_info( int type){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","lime_curl_version_info",0x9dc62ba5,"lime.net.curl._CURL.CURL_Impl_.lime_curl_version_info","lime/net/curl/CURL.hx",85,0x82d3899b)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(85)
	return ::lime::net::curl::_CURL::CURL_Impl__obj::cffi_lime_curl_version_info.call(type);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,lime_curl_version_info,return )

::cpp::Function< Float ( ::String ,Float ) > CURL_Impl__obj::cffi_lime_curl_getdate;

::cpp::Function< void ( ) > CURL_Impl__obj::cffi_lime_curl_global_cleanup;

::cpp::Function< int ( int ) > CURL_Impl__obj::cffi_lime_curl_global_init;

::cpp::Function< ::hx::Object * ( ) > CURL_Impl__obj::cffi_lime_curl_version;

::cpp::Function< ::hx::Object * ( int ) > CURL_Impl__obj::cffi_lime_curl_version_info;


CURL_Impl__obj::CURL_Impl__obj()
{
}

bool CURL_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"intGt") ) { outValue = intGt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getDate") ) { outValue = getDate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalInit") ) { outValue = globalInit_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionInfo") ) { outValue = versionInfo_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"globalCleanup") ) { outValue = globalCleanup_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_curl_getdate") ) { outValue = lime_curl_getdate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_version") ) { outValue = lime_curl_version_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_global_init") ) { outValue = lime_curl_global_init_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_curl_version_info") ) { outValue = lime_curl_version_info_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_curl_global_cleanup") ) { outValue = lime_curl_global_cleanup_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_SSL,HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_WIN32,HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_ALL,HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_NOTHING,HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_DEFAULT,HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_ACK_EINTR,HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74")},
	{hx::fsObject /*::cpp::Function< Float ( ::String ,Float ) >*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_getdate,HX_HCSTRING("cffi_lime_curl_getdate","\xc2","\x61","\x24","\x4d")},
	{hx::fsObject /*::cpp::Function< void ( ) >*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_global_cleanup,HX_HCSTRING("cffi_lime_curl_global_cleanup","\xca","\xc5","\x25","\x2f")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_global_init,HX_HCSTRING("cffi_lime_curl_global_init","\xaa","\x9d","\x8b","\x90")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_version,HX_HCSTRING("cffi_lime_curl_version","\x16","\x6f","\x09","\xa0")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &CURL_Impl__obj::cffi_lime_curl_version_info,HX_HCSTRING("cffi_lime_curl_version_info","\x77","\x75","\x0a","\x01")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_getdate,"cffi_lime_curl_getdate");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_global_cleanup,"cffi_lime_curl_global_cleanup");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_global_init,"cffi_lime_curl_global_init");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_version,"cffi_lime_curl_version");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_version_info,"cffi_lime_curl_version_info");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_getdate,"cffi_lime_curl_getdate");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_global_cleanup,"cffi_lime_curl_global_cleanup");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_global_init,"cffi_lime_curl_global_init");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_version,"cffi_lime_curl_version");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::cffi_lime_curl_version_info,"cffi_lime_curl_version_info");
};

#endif

hx::Class CURL_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52"),
	HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59"),
	HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52"),
	HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2"),
	HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe"),
	HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74"),
	HX_HCSTRING("getDate","\xe4","\x05","\xe6","\x14"),
	HX_HCSTRING("globalCleanup","\x01","\x45","\x7b","\xd1"),
	HX_HCSTRING("globalInit","\x13","\x86","\x5e","\x3c"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("versionInfo","\xa6","\xb7","\xa3","\xdb"),
	HX_HCSTRING("intGt","\xfc","\xa4","\x20","\xbe"),
	HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67"),
	HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40"),
	HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4"),
	HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9"),
	HX_HCSTRING("lime_curl_version_info","\xbe","\xbf","\x7a","\x9e"),
	HX_HCSTRING("cffi_lime_curl_getdate","\xc2","\x61","\x24","\x4d"),
	HX_HCSTRING("cffi_lime_curl_global_cleanup","\xca","\xc5","\x25","\x2f"),
	HX_HCSTRING("cffi_lime_curl_global_init","\xaa","\x9d","\x8b","\x90"),
	HX_HCSTRING("cffi_lime_curl_version","\x16","\x6f","\x09","\xa0"),
	HX_HCSTRING("cffi_lime_curl_version_info","\x77","\x75","\x0a","\x01"),
	::String(null()) };

void CURL_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.curl._CURL.CURL_Impl_","\xa7","\x3b","\x72","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURL_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CURL_Impl__obj >;
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

void CURL_Impl__obj::__boot()
{
	GLOBAL_SSL= (int)1;
	GLOBAL_WIN32= (int)2;
	GLOBAL_ALL= (int)3;
	GLOBAL_NOTHING= (int)0;
	GLOBAL_DEFAULT= (int)3;
	GLOBAL_ACK_EINTR= (int)4;
	cffi_lime_curl_getdate= ::cpp::Function< Float ( ::String ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67"),HX_HCSTRING("sdd","\xb3","\x9a","\x57","\x00"),false));
	cffi_lime_curl_global_cleanup= ::cpp::Function< void ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40"),HX_HCSTRING("v","\x76","\x00","\x00","\x00"),false));
	cffi_lime_curl_global_init= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_curl_version= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_curl_version_info= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_version_info","\xbe","\xbf","\x7a","\x9e"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace net
} // end namespace curl
} // end namespace _CURL

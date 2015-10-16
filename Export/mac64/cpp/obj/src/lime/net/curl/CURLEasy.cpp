#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif
namespace lime{
namespace net{
namespace curl{

Void CURLEasy_obj::__construct()
{
	return null();
}

//CURLEasy_obj::~CURLEasy_obj() { }

Dynamic CURLEasy_obj::__CreateEmpty() { return  new CURLEasy_obj; }
hx::ObjectPtr< CURLEasy_obj > CURLEasy_obj::__new()
{  hx::ObjectPtr< CURLEasy_obj > _result_ = new CURLEasy_obj();
	_result_->__construct();
	return _result_;}

Dynamic CURLEasy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CURLEasy_obj > _result_ = new CURLEasy_obj();
	_result_->__construct();
	return _result_;}

Void CURLEasy_obj::cleanup( Float handle){
{
		HX_STACK_FRAME("lime.net.curl.CURLEasy","cleanup",0xf4922b1c,"lime.net.curl.CURLEasy.cleanup","lime/net/curl/CURLEasy.hx",18,0x6bf34539)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(18)
		::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_cleanup.call(handle);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,cleanup,(void))

Float CURLEasy_obj::duphandle( Float handle){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","duphandle",0xc88c719f,"lime.net.curl.CURLEasy.duphandle","lime/net/curl/CURLEasy.hx",27,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(27)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_duphandle.call(handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,duphandle,return )

::String CURLEasy_obj::escape( Float handle,::String url,int length){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","escape",0x85152b89,"lime.net.curl.CURLEasy.escape","lime/net/curl/CURLEasy.hx",38,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(38)
	return ((Dynamic)(::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_escape.call(handle,url,length)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,escape,return )

Dynamic CURLEasy_obj::getinfo( Float handle,int info){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","getinfo",0x76b4dafc,"lime.net.curl.CURLEasy.getinfo","lime/net/curl/CURLEasy.hx",46,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(49)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		tmp1 = hx::TCast< ::Int >::cast(info);
		HX_STACK_LINE(49)
		int info1 = tmp1;		HX_STACK_VAR(info1,"info1");
		HX_STACK_LINE(49)
		tmp = ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_getinfo.call(handle,info1);
	}
	HX_STACK_LINE(49)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,getinfo,return )

Float CURLEasy_obj::init( ){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","init",0x7bee9118,"lime.net.curl.CURLEasy.init","lime/net/curl/CURLEasy.hx",60,0x6bf34539)
	HX_STACK_LINE(60)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_init.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURLEasy_obj,init,return )

int CURLEasy_obj::pause( Float handle,int bitMask){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","pause",0xf40fc7ee,"lime.net.curl.CURLEasy.pause","lime/net/curl/CURLEasy.hx",71,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(bitMask,"bitMask")
	HX_STACK_LINE(71)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_pause.call(handle,bitMask);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,pause,return )

int CURLEasy_obj::perform( Float handle){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","perform",0xc42e0799,"lime.net.curl.CURLEasy.perform","lime/net/curl/CURLEasy.hx",82,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(82)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_perform.call(handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,perform,return )

Void CURLEasy_obj::reset( Float handle){
{
		HX_STACK_FRAME("lime.net.curl.CURLEasy","reset",0x1d803ac7,"lime.net.curl.CURLEasy.reset","lime/net/curl/CURLEasy.hx",104,0x6bf34539)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(104)
		::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_reset.call(handle);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,reset,(void))

int CURLEasy_obj::setopt( Float handle,int option,Dynamic parameter){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","setopt",0x19bf59d9,"lime.net.curl.CURLEasy.setopt","lime/net/curl/CURLEasy.hx",121,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(option,"option")
	HX_STACK_ARG(parameter,"parameter")
	HX_STACK_LINE(124)
	bool tmp = (option == (int)20011);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	if ((tmp1)){
		HX_STACK_LINE(124)
		tmp2 = (option == (int)20079);
	}
	else{
		HX_STACK_LINE(124)
		tmp2 = true;
	}
	HX_STACK_LINE(124)
	if ((tmp2)){
		HX_STACK_LINE(126)
		Dynamic tmp3 = ::lime::net::curl::CURLEasy_obj::__writeCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		Dynamic tmp4 = parameter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(126)
			Dynamic a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			int run(Dynamic a2,int a3,int a4){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/net/curl/CURLEasy.hx",126,0x6bf34539)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				HX_STACK_ARG(a4,"a4")
				{
					HX_STACK_LINE(126)
					Dynamic tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(126)
					Dynamic tmp7 = a2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(126)
					int tmp8 = a3;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(126)
					int tmp9 = a4;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(126)
					int tmp10 = f(tmp6,tmp7,tmp8,tmp9).Cast< int >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(126)
					return tmp10;
				}
				return null();
			}
			HX_END_LOCAL_FUNC3(return)

			HX_STACK_LINE(126)
			tmp5 =  Dynamic(new _Function_3_1(a1,f));
		}
		HX_STACK_LINE(126)
		parameter = tmp5;
	}
	HX_STACK_LINE(129)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		tmp4 = hx::TCast< ::Int >::cast(option);
		HX_STACK_LINE(129)
		int option1 = tmp4;		HX_STACK_VAR(option1,"option1");
		HX_STACK_LINE(129)
		tmp3 = ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_setopt.call(handle,option1,hx::DynamicPtr(parameter));
	}
	HX_STACK_LINE(129)
	int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(129)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,setopt,return )

::String CURLEasy_obj::strerror( int code){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","strerror",0x6e06fb7f,"lime.net.curl.CURLEasy.strerror","lime/net/curl/CURLEasy.hx",137,0x6bf34539)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(140)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		tmp1 = hx::TCast< ::Int >::cast(code);
		HX_STACK_LINE(140)
		int errornum = tmp1;		HX_STACK_VAR(errornum,"errornum");
		HX_STACK_LINE(140)
		tmp = ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_strerror.call(errornum);
	}
	HX_STACK_LINE(140)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,strerror,return )

::String CURLEasy_obj::unescape( Float handle,::String url,int inLength,int outLength){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","unescape",0xb9ec6ca2,"lime.net.curl.CURLEasy.unescape","lime/net/curl/CURLEasy.hx",151,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(inLength,"inLength")
	HX_STACK_ARG(outLength,"outLength")
	HX_STACK_LINE(151)
	return ((Dynamic)(::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_unescape.call(handle,url,inLength,outLength)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,unescape,return )

int CURLEasy_obj::__writeCallback( Dynamic callback,Dynamic output,int size,int nmemb){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","__writeCallback",0x87d6499c,"lime.net.curl.CURLEasy.__writeCallback","lime/net/curl/CURLEasy.hx",159,0x6bf34539)
	HX_STACK_ARG(callback,"callback")
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_LINE(162)
	::haxe::io::Bytes bytes = null();		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(164)
	bool tmp = (output != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(166)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(output->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),output->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		bytes = tmp1;
	}
	HX_STACK_LINE(170)
	Dynamic tmp1 = callback(bytes,size,nmemb);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,__writeCallback,return )

Void CURLEasy_obj::lime_curl_easy_cleanup( Float handle){
{
		HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_cleanup",0xaed44538,"lime.net.curl.CURLEasy.lime_curl_easy_cleanup","lime/net/curl/CURLEasy.hx",182,0x6bf34539)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(182)
		::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_cleanup.call(handle);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,lime_curl_easy_cleanup,(void))

Float CURLEasy_obj::lime_curl_easy_duphandle( Float handle){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_duphandle",0x2b1e4abb,"lime.net.curl.CURLEasy.lime_curl_easy_duphandle","lime/net/curl/CURLEasy.hx",183,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(183)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_duphandle.call(handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,lime_curl_easy_duphandle,return )

Dynamic CURLEasy_obj::lime_curl_easy_escape( Float curl,::String url,int length){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_escape",0x257cc8ed,"lime.net.curl.CURLEasy.lime_curl_easy_escape","lime/net/curl/CURLEasy.hx",184,0x6bf34539)
	HX_STACK_ARG(curl,"curl")
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(184)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_escape.call(curl,url,length);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,lime_curl_easy_escape,return )

Dynamic CURLEasy_obj::lime_curl_easy_getinfo( Float curl,int info){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_getinfo",0x30f6f518,"lime.net.curl.CURLEasy.lime_curl_easy_getinfo","lime/net/curl/CURLEasy.hx",185,0x6bf34539)
	HX_STACK_ARG(curl,"curl")
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(185)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_getinfo.call(curl,info);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,lime_curl_easy_getinfo,return )

Float CURLEasy_obj::lime_curl_easy_init( ){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_init",0x88634d7c,"lime.net.curl.CURLEasy.lime_curl_easy_init","lime/net/curl/CURLEasy.hx",186,0x6bf34539)
	HX_STACK_LINE(186)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_init.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURLEasy_obj,lime_curl_easy_init,return )

int CURLEasy_obj::lime_curl_easy_pause( Float handle,int bitmask){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_pause",0xcdbfe30a,"lime.net.curl.CURLEasy.lime_curl_easy_pause","lime/net/curl/CURLEasy.hx",187,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(bitmask,"bitmask")
	HX_STACK_LINE(187)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_pause.call(handle,bitmask);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,lime_curl_easy_pause,return )

int CURLEasy_obj::lime_curl_easy_perform( Float easy_handle){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_perform",0x7e7021b5,"lime.net.curl.CURLEasy.lime_curl_easy_perform","lime/net/curl/CURLEasy.hx",188,0x6bf34539)
	HX_STACK_ARG(easy_handle,"easy_handle")
	HX_STACK_LINE(188)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_perform.call(easy_handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,lime_curl_easy_perform,return )

int CURLEasy_obj::lime_curl_easy_recv( Float curl,Dynamic buffer,int buflen,int n){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_recv",0x8e4f5f92,"lime.net.curl.CURLEasy.lime_curl_easy_recv","lime/net/curl/CURLEasy.hx",189,0x6bf34539)
	HX_STACK_ARG(curl,"curl")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(buflen,"buflen")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(189)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_recv.call(curl,hx::DynamicPtr(buffer),buflen,n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,lime_curl_easy_recv,return )

Void CURLEasy_obj::lime_curl_easy_reset( Float curl){
{
		HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_reset",0xf73055e3,"lime.net.curl.CURLEasy.lime_curl_easy_reset","lime/net/curl/CURLEasy.hx",190,0x6bf34539)
		HX_STACK_ARG(curl,"curl")
		HX_STACK_LINE(190)
		::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_reset.call(curl);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,lime_curl_easy_reset,(void))

int CURLEasy_obj::lime_curl_easy_send( Float curl,Dynamic buffer,int buflen,int n){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_send",0x8ef89fb4,"lime.net.curl.CURLEasy.lime_curl_easy_send","lime/net/curl/CURLEasy.hx",191,0x6bf34539)
	HX_STACK_ARG(curl,"curl")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(buflen,"buflen")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(191)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_send.call(curl,hx::DynamicPtr(buffer),buflen,n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,lime_curl_easy_send,return )

int CURLEasy_obj::lime_curl_easy_setopt( Float handle,int option,Dynamic parameter){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_setopt",0xba26f73d,"lime.net.curl.CURLEasy.lime_curl_easy_setopt","lime/net/curl/CURLEasy.hx",192,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(option,"option")
	HX_STACK_ARG(parameter,"parameter")
	HX_STACK_LINE(192)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_setopt.call(handle,option,hx::DynamicPtr(parameter));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,lime_curl_easy_setopt,return )

Dynamic CURLEasy_obj::lime_curl_easy_strerror( int errornum){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_strerror",0xad9bb9e3,"lime.net.curl.CURLEasy.lime_curl_easy_strerror","lime/net/curl/CURLEasy.hx",193,0x6bf34539)
	HX_STACK_ARG(errornum,"errornum")
	HX_STACK_LINE(193)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_strerror.call(errornum);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,lime_curl_easy_strerror,return )

Dynamic CURLEasy_obj::lime_curl_easy_unescape( Float curl,::String url,int inlength,int outlength){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","lime_curl_easy_unescape",0xf9812b06,"lime.net.curl.CURLEasy.lime_curl_easy_unescape","lime/net/curl/CURLEasy.hx",194,0x6bf34539)
	HX_STACK_ARG(curl,"curl")
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(inlength,"inlength")
	HX_STACK_ARG(outlength,"outlength")
	HX_STACK_LINE(194)
	return ::lime::net::curl::CURLEasy_obj::cffi_lime_curl_easy_unescape.call(curl,url,inlength,outlength);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,lime_curl_easy_unescape,return )

::cpp::Function< void ( Float ) > CURLEasy_obj::cffi_lime_curl_easy_cleanup;

::cpp::Function< Float ( Float ) > CURLEasy_obj::cffi_lime_curl_easy_duphandle;

::cpp::Function< ::hx::Object * ( Float ,::String ,int ) > CURLEasy_obj::cffi_lime_curl_easy_escape;

::cpp::Function< ::hx::Object * ( Float ,int ) > CURLEasy_obj::cffi_lime_curl_easy_getinfo;

::cpp::Function< Float ( ) > CURLEasy_obj::cffi_lime_curl_easy_init;

::cpp::Function< int ( Float ,int ) > CURLEasy_obj::cffi_lime_curl_easy_pause;

::cpp::Function< int ( Float ) > CURLEasy_obj::cffi_lime_curl_easy_perform;

::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > CURLEasy_obj::cffi_lime_curl_easy_recv;

::cpp::Function< void ( Float ) > CURLEasy_obj::cffi_lime_curl_easy_reset;

::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > CURLEasy_obj::cffi_lime_curl_easy_send;

::cpp::Function< int ( Float ,int ,::hx::Object * ) > CURLEasy_obj::cffi_lime_curl_easy_setopt;

::cpp::Function< ::hx::Object * ( int ) > CURLEasy_obj::cffi_lime_curl_easy_strerror;

::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) > CURLEasy_obj::cffi_lime_curl_easy_unescape;


CURLEasy_obj::CURLEasy_obj()
{
}

bool CURLEasy_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { outValue = escape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setopt") ) { outValue = setopt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { outValue = cleanup_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getinfo") ) { outValue = getinfo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"perform") ) { outValue = perform_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strerror") ) { outValue = strerror_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unescape") ) { outValue = unescape_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"duphandle") ) { outValue = duphandle_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__writeCallback") ) { outValue = __writeCallback_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_init") ) { outValue = lime_curl_easy_init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_recv") ) { outValue = lime_curl_easy_recv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_send") ) { outValue = lime_curl_easy_send_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_pause") ) { outValue = lime_curl_easy_pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_reset") ) { outValue = lime_curl_easy_reset_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_escape") ) { outValue = lime_curl_easy_escape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_setopt") ) { outValue = lime_curl_easy_setopt_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_cleanup") ) { outValue = lime_curl_easy_cleanup_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_getinfo") ) { outValue = lime_curl_easy_getinfo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_perform") ) { outValue = lime_curl_easy_perform_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_strerror") ) { outValue = lime_curl_easy_strerror_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_unescape") ) { outValue = lime_curl_easy_unescape_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_duphandle") ) { outValue = lime_curl_easy_duphandle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_init") ) { outValue = cffi_lime_curl_easy_init; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_recv") ) { outValue = cffi_lime_curl_easy_recv; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_send") ) { outValue = cffi_lime_curl_easy_send; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_pause") ) { outValue = cffi_lime_curl_easy_pause; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_reset") ) { outValue = cffi_lime_curl_easy_reset; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_escape") ) { outValue = cffi_lime_curl_easy_escape; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_setopt") ) { outValue = cffi_lime_curl_easy_setopt; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_cleanup") ) { outValue = cffi_lime_curl_easy_cleanup; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_getinfo") ) { outValue = cffi_lime_curl_easy_getinfo; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_perform") ) { outValue = cffi_lime_curl_easy_perform; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_strerror") ) { outValue = cffi_lime_curl_easy_strerror; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_unescape") ) { outValue = cffi_lime_curl_easy_unescape; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_duphandle") ) { outValue = cffi_lime_curl_easy_duphandle; return true;  }
	}
	return false;
}

bool CURLEasy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_init") ) { cffi_lime_curl_easy_init=ioValue.Cast< ::cpp::Function< Float ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_recv") ) { cffi_lime_curl_easy_recv=ioValue.Cast< ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_send") ) { cffi_lime_curl_easy_send=ioValue.Cast< ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_pause") ) { cffi_lime_curl_easy_pause=ioValue.Cast< ::cpp::Function< int ( Float ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_reset") ) { cffi_lime_curl_easy_reset=ioValue.Cast< ::cpp::Function< void ( Float ) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_escape") ) { cffi_lime_curl_easy_escape=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,::String ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_setopt") ) { cffi_lime_curl_easy_setopt=ioValue.Cast< ::cpp::Function< int ( Float ,int ,::hx::Object * ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_cleanup") ) { cffi_lime_curl_easy_cleanup=ioValue.Cast< ::cpp::Function< void ( Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_getinfo") ) { cffi_lime_curl_easy_getinfo=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_perform") ) { cffi_lime_curl_easy_perform=ioValue.Cast< ::cpp::Function< int ( Float ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_strerror") ) { cffi_lime_curl_easy_strerror=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_unescape") ) { cffi_lime_curl_easy_unescape=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) > >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"cffi_lime_curl_easy_duphandle") ) { cffi_lime_curl_easy_duphandle=ioValue.Cast< ::cpp::Function< Float ( Float ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< void ( Float ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_cleanup,HX_HCSTRING("cffi_lime_curl_easy_cleanup","\xe9","\x82","\x3a","\xc5")},
	{hx::fsObject /*::cpp::Function< Float ( Float ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_duphandle,HX_HCSTRING("cffi_lime_curl_easy_duphandle","\xac","\x16","\xd4","\x55")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,::String ,int ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_escape,HX_HCSTRING("cffi_lime_curl_easy_escape","\x5c","\x8c","\x41","\x1b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,int ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_getinfo,HX_HCSTRING("cffi_lime_curl_easy_getinfo","\xc9","\x32","\x5d","\x47")},
	{hx::fsObject /*::cpp::Function< Float ( ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_init,HX_HCSTRING("cffi_lime_curl_easy_init","\x2b","\x07","\x83","\xab")},
	{hx::fsObject /*::cpp::Function< int ( Float ,int ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_pause,HX_HCSTRING("cffi_lime_curl_easy_pause","\x7b","\xa2","\x62","\x66")},
	{hx::fsObject /*::cpp::Function< int ( Float ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_perform,HX_HCSTRING("cffi_lime_curl_easy_perform","\x66","\x5f","\xd6","\x94")},
	{hx::fsObject /*::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_recv,HX_HCSTRING("cffi_lime_curl_easy_recv","\x41","\x19","\x6f","\xb1")},
	{hx::fsObject /*::cpp::Function< void ( Float ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_reset,HX_HCSTRING("cffi_lime_curl_easy_reset","\x54","\x15","\xd3","\x8f")},
	{hx::fsObject /*::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_send,HX_HCSTRING("cffi_lime_curl_easy_send","\x63","\x59","\x18","\xb2")},
	{hx::fsObject /*::cpp::Function< int ( Float ,int ,::hx::Object * ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_setopt,HX_HCSTRING("cffi_lime_curl_easy_setopt","\xac","\xba","\xeb","\xaf")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_strerror,HX_HCSTRING("cffi_lime_curl_easy_strerror","\x12","\x77","\xab","\x30")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) >*/ ,(void *) &CURLEasy_obj::cffi_lime_curl_easy_unescape,HX_HCSTRING("cffi_lime_curl_easy_unescape","\x35","\xe8","\x90","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURLEasy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_cleanup,"cffi_lime_curl_easy_cleanup");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_duphandle,"cffi_lime_curl_easy_duphandle");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_escape,"cffi_lime_curl_easy_escape");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_getinfo,"cffi_lime_curl_easy_getinfo");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_init,"cffi_lime_curl_easy_init");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_pause,"cffi_lime_curl_easy_pause");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_perform,"cffi_lime_curl_easy_perform");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_recv,"cffi_lime_curl_easy_recv");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_reset,"cffi_lime_curl_easy_reset");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_send,"cffi_lime_curl_easy_send");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_setopt,"cffi_lime_curl_easy_setopt");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_strerror,"cffi_lime_curl_easy_strerror");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_unescape,"cffi_lime_curl_easy_unescape");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_cleanup,"cffi_lime_curl_easy_cleanup");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_duphandle,"cffi_lime_curl_easy_duphandle");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_escape,"cffi_lime_curl_easy_escape");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_getinfo,"cffi_lime_curl_easy_getinfo");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_init,"cffi_lime_curl_easy_init");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_pause,"cffi_lime_curl_easy_pause");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_perform,"cffi_lime_curl_easy_perform");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_recv,"cffi_lime_curl_easy_recv");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_reset,"cffi_lime_curl_easy_reset");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_send,"cffi_lime_curl_easy_send");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_setopt,"cffi_lime_curl_easy_setopt");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_strerror,"cffi_lime_curl_easy_strerror");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::cffi_lime_curl_easy_unescape,"cffi_lime_curl_easy_unescape");
};

#endif

hx::Class CURLEasy_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("duphandle","\xa7","\xa4","\xbc","\x73"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("getinfo","\x04","\xbc","\x64","\x2d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("perform","\xa1","\xe8","\xdd","\x7a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("setopt","\xd1","\x71","\x84","\x6f"),
	HX_HCSTRING("strerror","\x77","\x01","\x3c","\x91"),
	HX_HCSTRING("unescape","\x9a","\x72","\x21","\xdd"),
	HX_HCSTRING("__writeCallback","\xa4","\x72","\x5a","\xca"),
	HX_HCSTRING("lime_curl_easy_cleanup","\x30","\xcd","\xaa","\x62"),
	HX_HCSTRING("lime_curl_easy_duphandle","\xb3","\xc0","\xa0","\x67"),
	HX_HCSTRING("lime_curl_easy_escape","\xf5","\x67","\xb1","\x5f"),
	HX_HCSTRING("lime_curl_easy_getinfo","\x10","\x7d","\xcd","\xe4"),
	HX_HCSTRING("lime_curl_easy_init","\x84","\x9a","\xe4","\x65"),
	HX_HCSTRING("lime_curl_easy_pause","\x02","\xfd","\x61","\xc1"),
	HX_HCSTRING("lime_curl_easy_perform","\xad","\xa9","\x46","\x32"),
	HX_HCSTRING("lime_curl_easy_recv","\x9a","\xac","\xd0","\x6b"),
	HX_HCSTRING("lime_curl_easy_reset","\xdb","\x6f","\xd2","\xea"),
	HX_HCSTRING("lime_curl_easy_send","\xbc","\xec","\x79","\x6c"),
	HX_HCSTRING("lime_curl_easy_setopt","\x45","\x96","\x5b","\xf4"),
	HX_HCSTRING("lime_curl_easy_strerror","\xeb","\x2a","\x7c","\x55"),
	HX_HCSTRING("lime_curl_easy_unescape","\x0e","\x9c","\x61","\xa1"),
	HX_HCSTRING("cffi_lime_curl_easy_cleanup","\xe9","\x82","\x3a","\xc5"),
	HX_HCSTRING("cffi_lime_curl_easy_duphandle","\xac","\x16","\xd4","\x55"),
	HX_HCSTRING("cffi_lime_curl_easy_escape","\x5c","\x8c","\x41","\x1b"),
	HX_HCSTRING("cffi_lime_curl_easy_getinfo","\xc9","\x32","\x5d","\x47"),
	HX_HCSTRING("cffi_lime_curl_easy_init","\x2b","\x07","\x83","\xab"),
	HX_HCSTRING("cffi_lime_curl_easy_pause","\x7b","\xa2","\x62","\x66"),
	HX_HCSTRING("cffi_lime_curl_easy_perform","\x66","\x5f","\xd6","\x94"),
	HX_HCSTRING("cffi_lime_curl_easy_recv","\x41","\x19","\x6f","\xb1"),
	HX_HCSTRING("cffi_lime_curl_easy_reset","\x54","\x15","\xd3","\x8f"),
	HX_HCSTRING("cffi_lime_curl_easy_send","\x63","\x59","\x18","\xb2"),
	HX_HCSTRING("cffi_lime_curl_easy_setopt","\xac","\xba","\xeb","\xaf"),
	HX_HCSTRING("cffi_lime_curl_easy_strerror","\x12","\x77","\xab","\x30"),
	HX_HCSTRING("cffi_lime_curl_easy_unescape","\x35","\xe8","\x90","\x7c"),
	::String(null()) };

void CURLEasy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.curl.CURLEasy","\x66","\xc7","\x70","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURLEasy_obj::__GetStatic;
	__mClass->mSetStaticField = &CURLEasy_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CURLEasy_obj >;
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

void CURLEasy_obj::__boot()
{
	cffi_lime_curl_easy_cleanup= ::cpp::Function< void ( Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_cleanup","\x30","\xcd","\xaa","\x62"),HX_HCSTRING("dv","\x92","\x57","\x00","\x00"),false));
	cffi_lime_curl_easy_duphandle= ::cpp::Function< Float ( Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_duphandle","\xb3","\xc0","\xa0","\x67"),HX_HCSTRING("dd","\x80","\x57","\x00","\x00"),false));
	cffi_lime_curl_easy_escape= ::cpp::Function< ::hx::Object * ( Float ,::String ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_escape","\xf5","\x67","\xb1","\x5f"),HX_HCSTRING("dsio","\x35","\xf5","\x70","\x42"),false));
	cffi_lime_curl_easy_getinfo= ::cpp::Function< ::hx::Object * ( Float ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_getinfo","\x10","\x7d","\xcd","\xe4"),HX_HCSTRING("dio","\x4a","\x3d","\x4c","\x00"),false));
	cffi_lime_curl_easy_init= ::cpp::Function< Float ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_init","\x84","\x9a","\xe4","\x65"),HX_HCSTRING("d","\x64","\x00","\x00","\x00"),false));
	cffi_lime_curl_easy_pause= ::cpp::Function< int ( Float ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_pause","\x02","\xfd","\x61","\xc1"),HX_HCSTRING("dii","\x44","\x3d","\x4c","\x00"),false));
	cffi_lime_curl_easy_perform= ::cpp::Function< int ( Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_perform","\xad","\xa9","\x46","\x32"),HX_HCSTRING("di","\x85","\x57","\x00","\x00"),false));
	cffi_lime_curl_easy_recv= ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_recv","\x9a","\xac","\xd0","\x6b"),HX_HCSTRING("doiii","\xde","\xb9","\xc0","\xdd"),false));
	cffi_lime_curl_easy_reset= ::cpp::Function< void ( Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_reset","\xdb","\x6f","\xd2","\xea"),HX_HCSTRING("dv","\x92","\x57","\x00","\x00"),false));
	cffi_lime_curl_easy_send= ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_send","\xbc","\xec","\x79","\x6c"),HX_HCSTRING("doiii","\xde","\xb9","\xc0","\xdd"),false));
	cffi_lime_curl_easy_setopt= ::cpp::Function< int ( Float ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_setopt","\x45","\x96","\x5b","\xf4"),HX_HCSTRING("dioi","\xdf","\x63","\x69","\x42"),false));
	cffi_lime_curl_easy_strerror= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_strerror","\xeb","\x2a","\x7c","\x55"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_curl_easy_unescape= ::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_unescape","\x0e","\x9c","\x61","\xa1"),HX_HCSTRING("dsiio","\x60","\x94","\x65","\xe0"),false));
}

} // end namespace lime
} // end namespace net
} // end namespace curl

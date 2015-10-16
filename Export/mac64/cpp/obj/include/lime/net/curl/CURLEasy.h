#ifndef INCLUDED_lime_net_curl_CURLEasy
#define INCLUDED_lime_net_curl_CURLEasy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,net,curl,CURLEasy)
namespace lime{
namespace net{
namespace curl{


class HXCPP_CLASS_ATTRIBUTES  CURLEasy_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CURLEasy_obj OBJ_;
		CURLEasy_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.net.curl.CURLEasy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CURLEasy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CURLEasy_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CURLEasy","\x0e","\xb1","\x71","\x80"); }

		static void __boot();
		static Void cleanup( Float handle);
		static Dynamic cleanup_dyn();

		static Float duphandle( Float handle);
		static Dynamic duphandle_dyn();

		static ::String escape( Float handle,::String url,int length);
		static Dynamic escape_dyn();

		static Dynamic getinfo( Float handle,int info);
		static Dynamic getinfo_dyn();

		static Float init( );
		static Dynamic init_dyn();

		static int pause( Float handle,int bitMask);
		static Dynamic pause_dyn();

		static int perform( Float handle);
		static Dynamic perform_dyn();

		static Void reset( Float handle);
		static Dynamic reset_dyn();

		static int setopt( Float handle,int option,Dynamic parameter);
		static Dynamic setopt_dyn();

		static ::String strerror( int code);
		static Dynamic strerror_dyn();

		static ::String unescape( Float handle,::String url,int inLength,int outLength);
		static Dynamic unescape_dyn();

		static int __writeCallback( Dynamic callback,Dynamic output,int size,int nmemb);
		static Dynamic __writeCallback_dyn();

		static Void lime_curl_easy_cleanup( Float handle);
		static Dynamic lime_curl_easy_cleanup_dyn();

		static Float lime_curl_easy_duphandle( Float handle);
		static Dynamic lime_curl_easy_duphandle_dyn();

		static Dynamic lime_curl_easy_escape( Float curl,::String url,int length);
		static Dynamic lime_curl_easy_escape_dyn();

		static Dynamic lime_curl_easy_getinfo( Float curl,int info);
		static Dynamic lime_curl_easy_getinfo_dyn();

		static Float lime_curl_easy_init( );
		static Dynamic lime_curl_easy_init_dyn();

		static int lime_curl_easy_pause( Float handle,int bitmask);
		static Dynamic lime_curl_easy_pause_dyn();

		static int lime_curl_easy_perform( Float easy_handle);
		static Dynamic lime_curl_easy_perform_dyn();

		static int lime_curl_easy_recv( Float curl,Dynamic buffer,int buflen,int n);
		static Dynamic lime_curl_easy_recv_dyn();

		static Void lime_curl_easy_reset( Float curl);
		static Dynamic lime_curl_easy_reset_dyn();

		static int lime_curl_easy_send( Float curl,Dynamic buffer,int buflen,int n);
		static Dynamic lime_curl_easy_send_dyn();

		static int lime_curl_easy_setopt( Float handle,int option,Dynamic parameter);
		static Dynamic lime_curl_easy_setopt_dyn();

		static Dynamic lime_curl_easy_strerror( int errornum);
		static Dynamic lime_curl_easy_strerror_dyn();

		static Dynamic lime_curl_easy_unescape( Float curl,::String url,int inlength,int outlength);
		static Dynamic lime_curl_easy_unescape_dyn();

		static ::cpp::Function< void ( Float ) > cffi_lime_curl_easy_cleanup;
		static ::cpp::Function< Float ( Float ) > cffi_lime_curl_easy_duphandle;
		static ::cpp::Function< ::hx::Object * ( Float ,::String ,int ) > cffi_lime_curl_easy_escape;
		static ::cpp::Function< ::hx::Object * ( Float ,int ) > cffi_lime_curl_easy_getinfo;
		static ::cpp::Function< Float ( ) > cffi_lime_curl_easy_init;
		static ::cpp::Function< int ( Float ,int ) > cffi_lime_curl_easy_pause;
		static ::cpp::Function< int ( Float ) > cffi_lime_curl_easy_perform;
		static ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > cffi_lime_curl_easy_recv;
		static ::cpp::Function< void ( Float ) > cffi_lime_curl_easy_reset;
		static ::cpp::Function< int ( Float ,::hx::Object * ,int ,int ) > cffi_lime_curl_easy_send;
		static ::cpp::Function< int ( Float ,int ,::hx::Object * ) > cffi_lime_curl_easy_setopt;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_curl_easy_strerror;
		static ::cpp::Function< ::hx::Object * ( Float ,::String ,int ,int ) > cffi_lime_curl_easy_unescape;
};

} // end namespace lime
} // end namespace net
} // end namespace curl

#endif /* INCLUDED_lime_net_curl_CURLEasy */ 

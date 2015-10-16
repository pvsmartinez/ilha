#ifndef INCLUDED_openfl_net_URLLoader
#define INCLUDED_openfl_net_URLLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,URLLoader)
HX_DECLARE_CLASS2(openfl,net,URLLoaderDataFormat)
HX_DECLARE_CLASS2(openfl,net,URLRequest)
HX_DECLARE_CLASS2(openfl,net,URLRequestHeader)
namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLLoader_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef URLLoader_obj OBJ_;
		URLLoader_obj();
		Void __construct(::openfl::net::URLRequest request);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.net.URLLoader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLLoader_obj > __new(::openfl::net::URLRequest request);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLLoader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("URLLoader","\xc2","\x68","\xb3","\x41"); }

		int bytesLoaded;
		int bytesTotal;
		Dynamic data;
		::openfl::net::URLLoaderDataFormat dataFormat;
		Float __curl;
		::lime::utils::ByteArray __data;
		virtual Void close( );
		Dynamic close_dyn();

		Dynamic getData;
		inline Dynamic &getData_dyn() {return getData; }

		virtual Void load( ::openfl::net::URLRequest request);
		Dynamic load_dyn();

		virtual ::lime::utils::ByteArray prepareData( Dynamic data);
		Dynamic prepareData_dyn();

		virtual Void requestUrl( ::String url,::String method,Dynamic data,Array< ::Dynamic > requestHeaders);
		Dynamic requestUrl_dyn();

		virtual int writeFunction( ::haxe::io::Bytes output,int size,int nmemb);
		Dynamic writeFunction_dyn();

		virtual int headerFunction( ::haxe::io::Bytes output,int size,int nmemb);
		Dynamic headerFunction_dyn();

		virtual int progressFunction( Float dltotal,Float dlnow,Float uptotal,Float upnow);
		Dynamic progressFunction_dyn();

		virtual ::haxe::io::Bytes readFunction( int max,::lime::utils::ByteArray input);
		Dynamic readFunction_dyn();

		virtual Void onData( Dynamic _);
		Dynamic onData_dyn();

		virtual Void onError( ::String msg);
		Dynamic onError_dyn();

		virtual Void onOpen( );
		Dynamic onOpen_dyn();

		virtual Void onProgress( Dynamic event);
		Dynamic onProgress_dyn();

		virtual Void onSecurityError( ::String msg);
		Dynamic onSecurityError_dyn();

		virtual Void onStatus( int status);
		Dynamic onStatus_dyn();

		virtual ::openfl::net::URLLoaderDataFormat set_dataFormat( ::openfl::net::URLLoaderDataFormat inputVal);
		Dynamic set_dataFormat_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_URLLoader */ 

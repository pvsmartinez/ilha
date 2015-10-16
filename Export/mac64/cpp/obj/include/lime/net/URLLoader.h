#ifndef INCLUDED_lime_net_URLLoader
#define INCLUDED_lime_net_URLLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Event_lime_net_URLLoader_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,Event_lime_net_URLLoader_Int_Void)
HX_DECLARE_CLASS2(lime,app,Event_lime_net_URLLoader_String_Void)
HX_DECLARE_CLASS2(lime,app,Event_lime_net_URLLoader_Void)
HX_DECLARE_CLASS2(lime,net,URLLoader)
HX_DECLARE_CLASS2(lime,net,URLLoaderDataFormat)
HX_DECLARE_CLASS2(lime,net,URLRequest)
HX_DECLARE_CLASS2(lime,net,URLRequestHeader)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLLoader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLLoader_obj OBJ_;
		URLLoader_obj();
		Void __construct(::lime::net::URLRequest request);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.net.URLLoader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLLoader_obj > __new(::lime::net::URLRequest request);
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
		::lime::net::URLLoaderDataFormat dataFormat;
		::lime::app::Event_lime_net_URLLoader_Void onComplete;
		::lime::app::Event_lime_net_URLLoader_Int_Void onHTTPStatus;
		::lime::app::Event_lime_net_URLLoader_String_Void onIOError;
		::lime::app::Event_lime_net_URLLoader_Void onOpen;
		::lime::app::Event_lime_net_URLLoader_Int_Int_Void onProgress;
		::lime::app::Event_lime_net_URLLoader_String_Void onSecurityError;
		Float __curl;
		::lime::utils::ByteArray __data;
		virtual Void close( );
		Dynamic close_dyn();

		Dynamic getData;
		inline Dynamic &getData_dyn() {return getData; }

		virtual Void load( ::lime::net::URLRequest request);
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

		virtual Void __onData( Dynamic _);
		Dynamic __onData_dyn();

		virtual Void __onProgress( Dynamic event);
		Dynamic __onProgress_dyn();

		virtual ::lime::net::URLLoaderDataFormat set_dataFormat( ::lime::net::URLLoaderDataFormat inputVal);
		Dynamic set_dataFormat_dyn();

};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net_URLLoader */ 

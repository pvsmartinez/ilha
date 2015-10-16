#ifndef INCLUDED_openfl_net_URLRequest
#define INCLUDED_openfl_net_URLRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,net,URLRequest)
HX_DECLARE_CLASS2(openfl,net,URLRequestHeader)
namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLRequest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLRequest_obj OBJ_;
		URLRequest_obj();
		Void __construct(::String inURL);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.net.URLRequest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLRequest_obj > __new(::String inURL);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLRequest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("URLRequest","\xc0","\x57","\xdd","\x76"); }

		::String contentType;
		Dynamic data;
		::String method;
		Array< ::Dynamic > requestHeaders;
		::String url;
		::String userAgent;
		virtual Array< ::Dynamic > formatRequestHeaders( );
		Dynamic formatRequestHeaders_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_URLRequest */ 

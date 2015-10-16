#ifndef INCLUDED_lime_net_URLLoaderDataFormat
#define INCLUDED_lime_net_URLLoaderDataFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,net,URLLoaderDataFormat)
namespace lime{
namespace net{


class URLLoaderDataFormat_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef URLLoaderDataFormat_obj OBJ_;

	public:
		URLLoaderDataFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.net.URLLoaderDataFormat","\x79","\xdd","\x71","\x33"); }
		::String __ToString() const { return HX_HCSTRING("URLLoaderDataFormat.","\x6b","\x4e","\x13","\xa2") + tag; }

		static ::lime::net::URLLoaderDataFormat BINARY;
		static inline ::lime::net::URLLoaderDataFormat BINARY_dyn() { return BINARY; }
		static ::lime::net::URLLoaderDataFormat TEXT;
		static inline ::lime::net::URLLoaderDataFormat TEXT_dyn() { return TEXT; }
		static ::lime::net::URLLoaderDataFormat VARIABLES;
		static inline ::lime::net::URLLoaderDataFormat VARIABLES_dyn() { return VARIABLES; }
};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net_URLLoaderDataFormat */ 

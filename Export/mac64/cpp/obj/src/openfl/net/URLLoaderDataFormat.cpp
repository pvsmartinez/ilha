#include <hxcpp.h>

#ifndef INCLUDED_openfl_net_URLLoaderDataFormat
#include <openfl/net/URLLoaderDataFormat.h>
#endif
namespace openfl{
namespace net{

::openfl::net::URLLoaderDataFormat URLLoaderDataFormat_obj::BINARY;

::openfl::net::URLLoaderDataFormat URLLoaderDataFormat_obj::TEXT;

::openfl::net::URLLoaderDataFormat URLLoaderDataFormat_obj::VARIABLES;

HX_DEFINE_CREATE_ENUM(URLLoaderDataFormat_obj)

int URLLoaderDataFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")) return 0;
	if (inName==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")) return 1;
	if (inName==HX_HCSTRING("VARIABLES","\x97","\x52","\xbb","\x7d")) return 2;
	return super::__FindIndex(inName);
}

int URLLoaderDataFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")) return 0;
	if (inName==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")) return 0;
	if (inName==HX_HCSTRING("VARIABLES","\x97","\x52","\xbb","\x7d")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic URLLoaderDataFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")) return BINARY;
	if (inName==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")) return TEXT;
	if (inName==HX_HCSTRING("VARIABLES","\x97","\x52","\xbb","\x7d")) return VARIABLES;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"),
	HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),
	HX_HCSTRING("VARIABLES","\x97","\x52","\xbb","\x7d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_obj::BINARY,"BINARY");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_obj::VARIABLES,"VARIABLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_obj::BINARY,"BINARY");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_obj::VARIABLES,"VARIABLES");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class URLLoaderDataFormat_obj::__mClass;

Dynamic __Create_URLLoaderDataFormat_obj() { return new URLLoaderDataFormat_obj; }

void URLLoaderDataFormat_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.net.URLLoaderDataFormat","\xf4","\x82","\x50","\x64"), hx::TCanCast< URLLoaderDataFormat_obj >,sStaticFields,sMemberFields,
	&__Create_URLLoaderDataFormat_obj, &__Create,
	&super::__SGetClass(), &CreateURLLoaderDataFormat_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void URLLoaderDataFormat_obj::__boot()
{
hx::Static(BINARY) = hx::CreateEnum< URLLoaderDataFormat_obj >(HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"),0);
hx::Static(TEXT) = hx::CreateEnum< URLLoaderDataFormat_obj >(HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),1);
hx::Static(VARIABLES) = hx::CreateEnum< URLLoaderDataFormat_obj >(HX_HCSTRING("VARIABLES","\x97","\x52","\xbb","\x7d"),2);
}


} // end namespace openfl
} // end namespace net

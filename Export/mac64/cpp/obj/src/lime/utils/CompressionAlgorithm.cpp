#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
namespace lime{
namespace utils{

::lime::utils::CompressionAlgorithm CompressionAlgorithm_obj::DEFLATE;

::lime::utils::CompressionAlgorithm CompressionAlgorithm_obj::GZIP;

::lime::utils::CompressionAlgorithm CompressionAlgorithm_obj::LZMA;

::lime::utils::CompressionAlgorithm CompressionAlgorithm_obj::ZLIB;

HX_DEFINE_CREATE_ENUM(CompressionAlgorithm_obj)

int CompressionAlgorithm_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22")) return 0;
	if (inName==HX_HCSTRING("GZIP","\xda","\xb0","\x32","\x2f")) return 3;
	if (inName==HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32")) return 2;
	if (inName==HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b")) return 1;
	return super::__FindIndex(inName);
}

int CompressionAlgorithm_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22")) return 0;
	if (inName==HX_HCSTRING("GZIP","\xda","\xb0","\x32","\x2f")) return 0;
	if (inName==HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32")) return 0;
	if (inName==HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CompressionAlgorithm_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22")) return DEFLATE;
	if (inName==HX_HCSTRING("GZIP","\xda","\xb0","\x32","\x2f")) return GZIP;
	if (inName==HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32")) return LZMA;
	if (inName==HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b")) return ZLIB;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22"),
	HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b"),
	HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32"),
	HX_HCSTRING("GZIP","\xda","\xb0","\x32","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::DEFLATE,"DEFLATE");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::GZIP,"GZIP");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::LZMA,"LZMA");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::ZLIB,"ZLIB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::DEFLATE,"DEFLATE");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::GZIP,"GZIP");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::LZMA,"LZMA");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::ZLIB,"ZLIB");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class CompressionAlgorithm_obj::__mClass;

Dynamic __Create_CompressionAlgorithm_obj() { return new CompressionAlgorithm_obj; }

void CompressionAlgorithm_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.utils.CompressionAlgorithm","\x5f","\x30","\x48","\xca"), hx::TCanCast< CompressionAlgorithm_obj >,sStaticFields,sMemberFields,
	&__Create_CompressionAlgorithm_obj, &__Create,
	&super::__SGetClass(), &CreateCompressionAlgorithm_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CompressionAlgorithm_obj::__boot()
{
hx::Static(DEFLATE) = hx::CreateEnum< CompressionAlgorithm_obj >(HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22"),0);
hx::Static(GZIP) = hx::CreateEnum< CompressionAlgorithm_obj >(HX_HCSTRING("GZIP","\xda","\xb0","\x32","\x2f"),3);
hx::Static(LZMA) = hx::CreateEnum< CompressionAlgorithm_obj >(HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32"),2);
hx::Static(ZLIB) = hx::CreateEnum< CompressionAlgorithm_obj >(HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b"),1);
}


} // end namespace lime
} // end namespace utils

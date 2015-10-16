#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#define INCLUDED_lime_utils_CompressionAlgorithm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,CompressionAlgorithm)
namespace lime{
namespace utils{


class CompressionAlgorithm_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CompressionAlgorithm_obj OBJ_;

	public:
		CompressionAlgorithm_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.utils.CompressionAlgorithm","\x5f","\x30","\x48","\xca"); }
		::String __ToString() const { return HX_HCSTRING("CompressionAlgorithm.","\xc5","\x9b","\x61","\x8f") + tag; }

		static ::lime::utils::CompressionAlgorithm DEFLATE;
		static inline ::lime::utils::CompressionAlgorithm DEFLATE_dyn() { return DEFLATE; }
		static ::lime::utils::CompressionAlgorithm GZIP;
		static inline ::lime::utils::CompressionAlgorithm GZIP_dyn() { return GZIP; }
		static ::lime::utils::CompressionAlgorithm LZMA;
		static inline ::lime::utils::CompressionAlgorithm LZMA_dyn() { return LZMA; }
		static ::lime::utils::CompressionAlgorithm ZLIB;
		static inline ::lime::utils::CompressionAlgorithm ZLIB_dyn() { return ZLIB; }
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_CompressionAlgorithm */ 

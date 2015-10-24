#ifndef INCLUDED_openfl_filters_BitmapFilterQuality
#define INCLUDED_openfl_filters_BitmapFilterQuality

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,filters,BitmapFilterQuality)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  BitmapFilterQuality_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFilterQuality_obj OBJ_;
		BitmapFilterQuality_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.filters.BitmapFilterQuality")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapFilterQuality_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFilterQuality_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BitmapFilterQuality","\x58","\x22","\x91","\xea"); }

		static void __boot();
		static int HIGH;
		static int MEDIUM;
		static int LOW;
};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BitmapFilterQuality */ 

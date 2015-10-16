#ifndef INCLUDED_openfl_text_TextLineMetrics
#define INCLUDED_openfl_text_TextLineMetrics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,text,TextLineMetrics)
namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextLineMetrics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextLineMetrics_obj OBJ_;
		TextLineMetrics_obj();
		Void __construct(Float x,Float width,Float height,Float ascent,Float descent,Float leading);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.text.TextLineMetrics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextLineMetrics_obj > __new(Float x,Float width,Float height,Float ascent,Float descent,Float leading);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextLineMetrics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextLineMetrics","\xe2","\xc0","\x45","\x7d"); }

		Float ascent;
		Float descent;
		Float height;
		Float leading;
		Float width;
		Float x;
};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextLineMetrics */ 

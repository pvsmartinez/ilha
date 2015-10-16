#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#define INCLUDED_openfl__internal_text_TextFormatRange

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,text,TextFormatRange)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace openfl{
namespace _internal{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextFormatRange_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextFormatRange_obj OBJ_;
		TextFormatRange_obj();
		Void __construct(::openfl::text::TextFormat format,int start,int end);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.text.TextFormatRange")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextFormatRange_obj > __new(::openfl::text::TextFormat format,int start,int end);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFormatRange_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextFormatRange","\x39","\x67","\x56","\xaf"); }

		int end;
		::openfl::text::TextFormat format;
		int start;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace text

#endif /* INCLUDED_openfl__internal_text_TextFormatRange */ 

#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#define INCLUDED_openfl__internal_text_TextLayoutGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,text,TextLayoutGroup)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace openfl{
namespace _internal{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextLayoutGroup_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextLayoutGroup_obj OBJ_;
		TextLayoutGroup_obj();
		Void __construct(::openfl::text::TextFormat format,int startIndex,int endIndex);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.text.TextLayoutGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextLayoutGroup_obj > __new(::openfl::text::TextFormat format,int startIndex,int endIndex);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextLayoutGroup_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextLayoutGroup","\x68","\x74","\xfb","\x5c"); }

		Array< Float > advances;
		Float ascent;
		Float descent;
		int endIndex;
		::openfl::text::TextFormat format;
		Float height;
		int leading;
		int lineIndex;
		Float offsetX;
		Float offsetY;
		int startIndex;
		Float width;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace text

#endif /* INCLUDED_openfl__internal_text_TextLayoutGroup */ 

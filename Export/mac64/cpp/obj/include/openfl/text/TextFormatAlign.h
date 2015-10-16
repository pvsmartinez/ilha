#ifndef INCLUDED_openfl_text_TextFormatAlign
#define INCLUDED_openfl_text_TextFormatAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,text,TextFormatAlign)
namespace openfl{
namespace text{


class TextFormatAlign_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextFormatAlign_obj OBJ_;

	public:
		TextFormatAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.text.TextFormatAlign","\x1e","\x30","\x0b","\xee"); }
		::String __ToString() const { return HX_HCSTRING("TextFormatAlign.","\xcd","\x20","\x4d","\x42") + tag; }

		static ::openfl::text::TextFormatAlign CENTER;
		static inline ::openfl::text::TextFormatAlign CENTER_dyn() { return CENTER; }
		static ::openfl::text::TextFormatAlign JUSTIFY;
		static inline ::openfl::text::TextFormatAlign JUSTIFY_dyn() { return JUSTIFY; }
		static ::openfl::text::TextFormatAlign LEFT;
		static inline ::openfl::text::TextFormatAlign LEFT_dyn() { return LEFT; }
		static ::openfl::text::TextFormatAlign RIGHT;
		static inline ::openfl::text::TextFormatAlign RIGHT_dyn() { return RIGHT; }
};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextFormatAlign */ 

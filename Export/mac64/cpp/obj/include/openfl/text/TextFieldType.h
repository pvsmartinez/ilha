#ifndef INCLUDED_openfl_text_TextFieldType
#define INCLUDED_openfl_text_TextFieldType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,text,TextFieldType)
namespace openfl{
namespace text{


class TextFieldType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextFieldType_obj OBJ_;

	public:
		TextFieldType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.text.TextFieldType","\xa4","\xf4","\x9c","\xd6"); }
		::String __ToString() const { return HX_HCSTRING("TextFieldType.","\x47","\xc8","\x53","\x7b") + tag; }

		static ::openfl::text::TextFieldType DYNAMIC;
		static inline ::openfl::text::TextFieldType DYNAMIC_dyn() { return DYNAMIC; }
		static ::openfl::text::TextFieldType INPUT;
		static inline ::openfl::text::TextFieldType INPUT_dyn() { return INPUT; }
};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextFieldType */ 

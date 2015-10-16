#ifndef INCLUDED_lime_text_TextLayout
#define INCLUDED_lime_text_TextLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,text,GlyphPosition)
HX_DECLARE_CLASS2(lime,text,TextLayout)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextLayout_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextLayout_obj OBJ_;
		TextLayout_obj();
		Void __construct(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.text.TextLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextLayout_obj > __new(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextLayout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextLayout","\x57","\x33","\x5a","\x86"); }

		static void __boot();
		static Dynamic lime_text_layout_create( int direction,::String script,::String language);
		static Dynamic lime_text_layout_create_dyn();

		static Dynamic lime_text_layout_position( Dynamic textHandle,Dynamic fontHandle,int size,::String textString,Dynamic data);
		static Dynamic lime_text_layout_position_dyn();

		static Void lime_text_layout_set_direction( Dynamic textHandle,int direction);
		static Dynamic lime_text_layout_set_direction_dyn();

		static Void lime_text_layout_set_language( Dynamic textHandle,::String language);
		static Dynamic lime_text_layout_set_language_dyn();

		static Void lime_text_layout_set_script( Dynamic textHandle,::String script);
		static Dynamic lime_text_layout_set_script_dyn();

		static ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > cffi_lime_text_layout_create;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) > cffi_lime_text_layout_position;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_text_layout_set_direction;
		static ::cpp::Function< void ( ::hx::Object * ,::String ) > cffi_lime_text_layout_set_language;
		static ::cpp::Function< void ( ::hx::Object * ,::String ) > cffi_lime_text_layout_set_script;
		::lime::text::Font font;
		Array< int > glyphs;
		Array< ::Dynamic > positions;
		int size;
		::String text;
		bool __dirty;
		::lime::utils::ByteArray __buffer;
		int __direction;
		Dynamic __handle;
		::String __language;
		::String __script;
		virtual Void __position( );
		Dynamic __position_dyn();

		virtual Array< ::Dynamic > get_positions( );
		Dynamic get_positions_dyn();

		virtual int get_direction( );
		Dynamic get_direction_dyn();

		virtual int set_direction( int value);
		Dynamic set_direction_dyn();

		virtual ::lime::text::Font set_font( ::lime::text::Font value);
		Dynamic set_font_dyn();

		virtual Array< int > get_glyphs( );
		Dynamic get_glyphs_dyn();

		virtual ::String get_language( );
		Dynamic get_language_dyn();

		virtual ::String set_language( ::String value);
		Dynamic set_language_dyn();

		virtual ::String get_script( );
		Dynamic get_script_dyn();

		virtual ::String set_script( ::String value);
		Dynamic set_script_dyn();

		virtual int set_size( int value);
		Dynamic set_size_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

};

} // end namespace lime
} // end namespace text

#endif /* INCLUDED_lime_text_TextLayout */ 

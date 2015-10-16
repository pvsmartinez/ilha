#ifndef INCLUDED_lime_text_Font
#define INCLUDED_lime_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,text,GlyphMetrics)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Font_obj OBJ_;
		Font_obj();
		Void __construct(::String name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.text.Font")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Font_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Font","\xef","\x89","\x99","\x2e"); }

		static void __boot();
		static ::lime::text::Font fromBytes( ::lime::utils::ByteArray bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::text::Font fromFile( ::String path);
		static Dynamic fromFile_dyn();

		static int lime_font_get_ascender( Dynamic handle);
		static Dynamic lime_font_get_ascender_dyn();

		static int lime_font_get_descender( Dynamic handle);
		static Dynamic lime_font_get_descender_dyn();

		static Dynamic lime_font_get_family_name( Dynamic handle);
		static Dynamic lime_font_get_family_name_dyn();

		static int lime_font_get_glyph_index( Dynamic handle,::String character);
		static Dynamic lime_font_get_glyph_index_dyn();

		static Dynamic lime_font_get_glyph_indices( Dynamic handle,::String characters);
		static Dynamic lime_font_get_glyph_indices_dyn();

		static Dynamic lime_font_get_glyph_metrics( Dynamic handle,int index);
		static Dynamic lime_font_get_glyph_metrics_dyn();

		static int lime_font_get_height( Dynamic handle);
		static Dynamic lime_font_get_height_dyn();

		static int lime_font_get_num_glyphs( Dynamic handle);
		static Dynamic lime_font_get_num_glyphs_dyn();

		static int lime_font_get_underline_position( Dynamic handle);
		static Dynamic lime_font_get_underline_position_dyn();

		static int lime_font_get_underline_thickness( Dynamic handle);
		static Dynamic lime_font_get_underline_thickness_dyn();

		static int lime_font_get_units_per_em( Dynamic handle);
		static Dynamic lime_font_get_units_per_em_dyn();

		static Dynamic lime_font_load( Dynamic data);
		static Dynamic lime_font_load_dyn();

		static Dynamic lime_font_outline_decompose( Dynamic handle,int size);
		static Dynamic lime_font_outline_decompose_dyn();

		static bool lime_font_render_glyph( Dynamic handle,int index,Dynamic data);
		static Dynamic lime_font_render_glyph_dyn();

		static bool lime_font_render_glyphs( Dynamic handle,Dynamic indices,Dynamic data);
		static Dynamic lime_font_render_glyphs_dyn();

		static Void lime_font_set_size( Dynamic handle,int size);
		static Dynamic lime_font_set_size_dyn();

		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_ascender;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_descender;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_font_get_family_name;
		static ::cpp::Function< int ( ::hx::Object * ,::String ) > cffi_lime_font_get_glyph_index;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > cffi_lime_font_get_glyph_indices;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_font_get_glyph_metrics;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_height;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_num_glyphs;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_underline_position;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_underline_thickness;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_font_get_units_per_em;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_font_load;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > cffi_lime_font_outline_decompose;
		static ::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) > cffi_lime_font_render_glyph;
		static ::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_font_render_glyphs;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_font_set_size;
		int ascender;
		int descender;
		int height;
		::String name;
		int numGlyphs;
		Dynamic src;
		int underlinePosition;
		int underlineThickness;
		int unitsPerEM;
		::String __fontPath;
		::String __fontPathWithoutDirectory;
		virtual Dynamic decompose( );
		Dynamic decompose_dyn();

		virtual int getGlyph( ::String character);
		Dynamic getGlyph_dyn();

		virtual Array< int > getGlyphs( ::String characters);
		Dynamic getGlyphs_dyn();

		virtual ::lime::text::GlyphMetrics getGlyphMetrics( int glyph);
		Dynamic getGlyphMetrics_dyn();

		virtual ::lime::graphics::Image renderGlyph( int glyph,int fontSize);
		Dynamic renderGlyph_dyn();

		virtual ::haxe::ds::IntMap renderGlyphs( Array< int > glyphs,int fontSize);
		Dynamic renderGlyphs_dyn();

		virtual Void __fromBytes( ::lime::utils::ByteArray bytes);
		Dynamic __fromBytes_dyn();

		virtual Void __fromFile( ::String path);
		Dynamic __fromFile_dyn();

		virtual int get_ascender( );
		Dynamic get_ascender_dyn();

		virtual int get_descender( );
		Dynamic get_descender_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int get_numGlyphs( );
		Dynamic get_numGlyphs_dyn();

		virtual int get_underlinePosition( );
		Dynamic get_underlinePosition_dyn();

		virtual int get_underlineThickness( );
		Dynamic get_underlineThickness_dyn();

		virtual int get_unitsPerEM( );
		Dynamic get_unitsPerEM_dyn();

};

} // end namespace lime
} // end namespace text

#endif /* INCLUDED_lime_text_Font */ 

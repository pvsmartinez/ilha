#ifndef INCLUDED_openfl__internal_text_TextEngine
#define INCLUDED_openfl__internal_text_TextEngine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,text,TextLayout)
HX_DECLARE_CLASS3(openfl,_internal,text,TextEngine)
HX_DECLARE_CLASS3(openfl,_internal,text,TextFormatRange)
HX_DECLARE_CLASS3(openfl,_internal,text,TextLayoutGroup)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,AntiAliasType)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS2(openfl,text,GridFitType)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFieldAutoSize)
HX_DECLARE_CLASS2(openfl,text,TextFieldType)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace openfl{
namespace _internal{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextEngine_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextEngine_obj OBJ_;
		TextEngine_obj();
		Void __construct(::openfl::text::TextField textField);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.text.TextEngine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextEngine_obj > __new(::openfl::text::TextField textField);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEngine_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextEngine","\x6f","\xcc","\x25","\x2a"); }

		static void __boot();
		static int UTF8_TAB;
		static int UTF8_ENDLINE;
		static int UTF8_SPACE;
		static int UTF8_HYPHEN;
		static ::haxe::ds::StringMap __defaultFonts;
		static ::openfl::text::Font findFont( ::String name);
		static Dynamic findFont_dyn();

		static ::String getFont( ::openfl::text::TextFormat format);
		static Dynamic getFont_dyn();

		static ::openfl::text::Font getFontInstance( ::openfl::text::TextFormat format);
		static Dynamic getFontInstance_dyn();

		::openfl::text::AntiAliasType antiAliasType;
		::openfl::text::TextFieldAutoSize autoSize;
		bool background;
		int backgroundColor;
		bool border;
		int borderColor;
		int bottomScrollV;
		::openfl::geom::Rectangle bounds;
		int caretIndex;
		bool displayAsPassword;
		bool embedFonts;
		::openfl::text::GridFitType gridFitType;
		Float height;
		Array< ::Dynamic > layoutGroups;
		Array< Float > lineAscents;
		Array< int > lineBreaks;
		Array< Float > lineDescents;
		Array< Float > lineLeadings;
		Array< Float > lineHeights;
		Array< Float > lineWidths;
		int maxChars;
		int maxScrollH;
		int maxScrollV;
		bool multiline;
		int numLines;
		::String restrict;
		int scrollH;
		int scrollV;
		bool selectable;
		Float sharpness;
		::String text;
		Float textHeight;
		Array< ::Dynamic > textFormatRanges;
		Float textWidth;
		::openfl::text::TextFieldType type;
		Float width;
		bool wordWrap;
		::openfl::text::TextField textField;
		int __cursorPosition;
		::haxe::Timer __cursorTimer;
		bool __hasFocus;
		bool __isKeyDown;
		int __measuredHeight;
		int __measuredWidth;
		int __selectionStart;
		bool __showCursor;
		::openfl::text::TextFormat __textFormat;
		::lime::text::TextLayout __textLayout;
		::lime::graphics::opengl::GLTexture __texture;
		::haxe::ds::ObjectMap __tileData;
		::haxe::ds::ObjectMap __tileDataLength;
		::haxe::ds::ObjectMap __tilesheets;
		Dynamic __cairoFont;
		::openfl::text::Font __font;
		virtual Void getBounds( );
		Dynamic getBounds_dyn();

		virtual ::String getLine( int index);
		Dynamic getLine_dyn();

		virtual Void getLineMeasurements( );
		Dynamic getLineMeasurements_dyn();

		virtual Void getLayoutGroups( );
		Dynamic getLayoutGroups_dyn();

		virtual Void setTextAlignment( );
		Dynamic setTextAlignment_dyn();

		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace text

#endif /* INCLUDED_openfl__internal_text_TextEngine */ 

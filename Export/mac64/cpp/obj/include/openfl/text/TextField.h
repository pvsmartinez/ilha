#ifndef INCLUDED_openfl_text_TextField
#define INCLUDED_openfl_text_TextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS3(openfl,_internal,text,TextEngine)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,AntiAliasType)
HX_DECLARE_CLASS2(openfl,text,GridFitType)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFieldAutoSize)
HX_DECLARE_CLASS2(openfl,text,TextFieldType)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,text,TextLineMetrics)
namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextField_obj : public ::openfl::display::InteractiveObject_obj{
	public:
		typedef ::openfl::display::InteractiveObject_obj super;
		typedef TextField_obj OBJ_;
		TextField_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.text.TextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextField_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextField","\xad","\x04","\x54","\x3b"); }

		static ::openfl::text::TextFormat __defaultTextFormat;
		int bottomScrollV;
		int caretIndex;
		int length;
		int maxScrollH;
		int maxScrollV;
		int numLines;
		int selectionBeginIndex;
		int selectionEndIndex;
		Float textHeight;
		Float textWidth;
		::openfl::geom::Rectangle __bounds;
		int __caretIndex;
		::haxe::Timer __cursorTimer;
		bool __dirty;
		bool __inputEnabled;
		bool __isHTML;
		bool __layoutDirty;
		int __selectionIndex;
		bool __showCursor;
		::openfl::_internal::text::TextEngine __textEngine;
		::openfl::text::TextFormat __textFormat;
		virtual Void appendText( ::String text);
		Dynamic appendText_dyn();

		virtual ::openfl::geom::Rectangle getCharBoundaries( int charIndex);
		Dynamic getCharBoundaries_dyn();

		virtual int getCharIndexAtPoint( Float x,Float y);
		Dynamic getCharIndexAtPoint_dyn();

		virtual int getFirstCharInParagraph( int charIndex);
		Dynamic getFirstCharInParagraph_dyn();

		virtual int getLineIndexAtPoint( Float x,Float y);
		Dynamic getLineIndexAtPoint_dyn();

		virtual int getLineIndexOfChar( int charIndex);
		Dynamic getLineIndexOfChar_dyn();

		virtual int getLineLength( int lineIndex);
		Dynamic getLineLength_dyn();

		virtual ::openfl::text::TextLineMetrics getLineMetrics( int lineIndex);
		Dynamic getLineMetrics_dyn();

		virtual int getLineOffset( int lineIndex);
		Dynamic getLineOffset_dyn();

		virtual ::String getLineText( int lineIndex);
		Dynamic getLineText_dyn();

		virtual int getParagraphLength( int charIndex);
		Dynamic getParagraphLength_dyn();

		virtual ::openfl::text::TextFormat getTextFormat( hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic getTextFormat_dyn();

		virtual Void replaceSelectedText( ::String value);
		Dynamic replaceSelectedText_dyn();

		virtual Void replaceText( int beginIndex,int endIndex,::String newText);
		Dynamic replaceText_dyn();

		virtual Void setSelection( int beginIndex,int endIndex);
		Dynamic setSelection_dyn();

		virtual Void setTextFormat( ::openfl::text::TextFormat format,hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic setTextFormat_dyn();

		virtual Void __getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);

		virtual ::lime::ui::MouseCursor __getCursor( );

		virtual int __getPosition( Float x,Float y);
		Dynamic __getPosition_dyn();

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly);

		virtual bool __hitTestMask( Float x,Float y);

		virtual Void __renderCairo( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __startCursorTimer( );
		Dynamic __startCursorTimer_dyn();

		virtual Void __startTextInput( );
		Dynamic __startTextInput_dyn();

		virtual Void __stopCursorTimer( );
		Dynamic __stopCursorTimer_dyn();

		virtual Void __stopTextInput( );
		Dynamic __stopTextInput_dyn();

		virtual Void __updateLayout( );
		Dynamic __updateLayout_dyn();

		virtual ::openfl::text::AntiAliasType get_antiAliasType( );
		Dynamic get_antiAliasType_dyn();

		virtual ::openfl::text::AntiAliasType set_antiAliasType( ::openfl::text::AntiAliasType value);
		Dynamic set_antiAliasType_dyn();

		virtual ::openfl::text::TextFieldAutoSize get_autoSize( );
		Dynamic get_autoSize_dyn();

		virtual ::openfl::text::TextFieldAutoSize set_autoSize( ::openfl::text::TextFieldAutoSize value);
		Dynamic set_autoSize_dyn();

		virtual bool get_background( );
		Dynamic get_background_dyn();

		virtual bool set_background( bool value);
		Dynamic set_background_dyn();

		virtual int get_backgroundColor( );
		Dynamic get_backgroundColor_dyn();

		virtual int set_backgroundColor( int value);
		Dynamic set_backgroundColor_dyn();

		virtual bool get_border( );
		Dynamic get_border_dyn();

		virtual bool set_border( bool value);
		Dynamic set_border_dyn();

		virtual int get_borderColor( );
		Dynamic get_borderColor_dyn();

		virtual int set_borderColor( int value);
		Dynamic set_borderColor_dyn();

		virtual int get_bottomScrollV( );
		Dynamic get_bottomScrollV_dyn();

		virtual int get_caretIndex( );
		Dynamic get_caretIndex_dyn();

		virtual ::openfl::text::TextFormat get_defaultTextFormat( );
		Dynamic get_defaultTextFormat_dyn();

		virtual ::openfl::text::TextFormat set_defaultTextFormat( ::openfl::text::TextFormat value);
		Dynamic set_defaultTextFormat_dyn();

		virtual bool get_displayAsPassword( );
		Dynamic get_displayAsPassword_dyn();

		virtual bool set_displayAsPassword( bool value);
		Dynamic set_displayAsPassword_dyn();

		virtual bool get_embedFonts( );
		Dynamic get_embedFonts_dyn();

		virtual bool set_embedFonts( bool value);
		Dynamic set_embedFonts_dyn();

		virtual ::openfl::text::GridFitType get_gridFitType( );
		Dynamic get_gridFitType_dyn();

		virtual ::openfl::text::GridFitType set_gridFitType( ::openfl::text::GridFitType value);
		Dynamic set_gridFitType_dyn();

		virtual Float get_height( );

		virtual Float set_height( Float value);

		virtual ::String get_htmlText( );
		Dynamic get_htmlText_dyn();

		virtual ::String set_htmlText( ::String value);
		Dynamic set_htmlText_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual int get_maxChars( );
		Dynamic get_maxChars_dyn();

		virtual int set_maxChars( int value);
		Dynamic set_maxChars_dyn();

		virtual int get_maxScrollH( );
		Dynamic get_maxScrollH_dyn();

		virtual int get_maxScrollV( );
		Dynamic get_maxScrollV_dyn();

		virtual bool get_multiline( );
		Dynamic get_multiline_dyn();

		virtual bool set_multiline( bool value);
		Dynamic set_multiline_dyn();

		virtual int get_numLines( );
		Dynamic get_numLines_dyn();

		virtual ::String get_restrict( );
		Dynamic get_restrict_dyn();

		virtual ::String set_restrict( ::String value);
		Dynamic set_restrict_dyn();

		virtual int get_scrollH( );
		Dynamic get_scrollH_dyn();

		virtual int set_scrollH( int value);
		Dynamic set_scrollH_dyn();

		virtual int get_scrollV( );
		Dynamic get_scrollV_dyn();

		virtual int set_scrollV( int value);
		Dynamic set_scrollV_dyn();

		virtual bool get_selectable( );
		Dynamic get_selectable_dyn();

		virtual bool set_selectable( bool value);
		Dynamic set_selectable_dyn();

		virtual int get_selectionBeginIndex( );
		Dynamic get_selectionBeginIndex_dyn();

		virtual int get_selectionEndIndex( );
		Dynamic get_selectionEndIndex_dyn();

		virtual Float get_sharpness( );
		Dynamic get_sharpness_dyn();

		virtual Float set_sharpness( Float value);
		Dynamic set_sharpness_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual int get_textColor( );
		Dynamic get_textColor_dyn();

		virtual int set_textColor( int value);
		Dynamic set_textColor_dyn();

		virtual Float get_textWidth( );
		Dynamic get_textWidth_dyn();

		virtual Float get_textHeight( );
		Dynamic get_textHeight_dyn();

		virtual ::openfl::text::TextFieldType get_type( );
		Dynamic get_type_dyn();

		virtual ::openfl::text::TextFieldType set_type( ::openfl::text::TextFieldType value);
		Dynamic set_type_dyn();

		virtual Float get_width( );

		virtual Float set_width( Float value);

		virtual bool get_wordWrap( );
		Dynamic get_wordWrap_dyn();

		virtual bool set_wordWrap( bool value);
		Dynamic set_wordWrap_dyn();

		virtual Void stage_onMouseMove( ::openfl::events::MouseEvent event);
		Dynamic stage_onMouseMove_dyn();

		virtual Void stage_onMouseUp( ::openfl::events::MouseEvent event);
		Dynamic stage_onMouseUp_dyn();

		virtual Void this_onAddedToStage( ::openfl::events::Event event);
		Dynamic this_onAddedToStage_dyn();

		virtual Void this_onFocusIn( ::openfl::events::FocusEvent event);
		Dynamic this_onFocusIn_dyn();

		virtual Void this_onFocusOut( ::openfl::events::FocusEvent event);
		Dynamic this_onFocusOut_dyn();

		virtual Void this_onMouseDown( ::openfl::events::MouseEvent event);
		Dynamic this_onMouseDown_dyn();

		virtual Void window_onKeyDown( int key,int modifier);
		Dynamic window_onKeyDown_dyn();

		virtual Void window_onTextInput( ::String value);
		Dynamic window_onTextInput_dyn();

};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextField */ 

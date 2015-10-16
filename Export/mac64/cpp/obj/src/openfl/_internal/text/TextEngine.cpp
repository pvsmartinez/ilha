#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_GridFitType
#include <openfl/text/GridFitType.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
namespace openfl{
namespace _internal{
namespace text{

Void TextEngine_obj::__construct(::openfl::text::TextField textField)
{
HX_STACK_FRAME("openfl._internal.text.TextEngine","new",0xcc80cb52,"openfl._internal.text.TextEngine.new","openfl/_internal/text/TextEngine.hx",121,0xdff93b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(textField,"textField")
{
	HX_STACK_LINE(123)
	this->textField = textField;
	HX_STACK_LINE(125)
	this->width = (int)100;
	HX_STACK_LINE(126)
	this->height = (int)100;
	HX_STACK_LINE(127)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(129)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	this->bounds = tmp;
	HX_STACK_LINE(131)
	this->type = ::openfl::text::TextFieldType_obj::DYNAMIC;
	HX_STACK_LINE(132)
	this->autoSize = ::openfl::text::TextFieldAutoSize_obj::NONE;
	HX_STACK_LINE(133)
	this->displayAsPassword = false;
	HX_STACK_LINE(134)
	this->embedFonts = false;
	HX_STACK_LINE(135)
	this->selectable = true;
	HX_STACK_LINE(136)
	this->borderColor = (int)0;
	HX_STACK_LINE(137)
	this->border = false;
	HX_STACK_LINE(138)
	this->backgroundColor = (int)16777215;
	HX_STACK_LINE(139)
	this->background = false;
	HX_STACK_LINE(140)
	this->gridFitType = ::openfl::text::GridFitType_obj::PIXEL;
	HX_STACK_LINE(141)
	this->maxChars = (int)0;
	HX_STACK_LINE(142)
	this->multiline = false;
	HX_STACK_LINE(143)
	this->sharpness = (int)0;
	HX_STACK_LINE(144)
	this->scrollH = (int)0;
	HX_STACK_LINE(145)
	this->scrollV = (int)1;
	HX_STACK_LINE(146)
	this->wordWrap = false;
	HX_STACK_LINE(148)
	this->lineAscents = Array_obj< Float >::__new();
	HX_STACK_LINE(149)
	this->lineBreaks = Array_obj< int >::__new();
	HX_STACK_LINE(150)
	this->lineDescents = Array_obj< Float >::__new();
	HX_STACK_LINE(151)
	this->lineLeadings = Array_obj< Float >::__new();
	HX_STACK_LINE(152)
	this->lineHeights = Array_obj< Float >::__new();
	HX_STACK_LINE(153)
	this->lineWidths = Array_obj< Float >::__new();
	HX_STACK_LINE(154)
	this->layoutGroups = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(155)
	this->textFormatRanges = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TextEngine_obj::~TextEngine_obj() { }

Dynamic TextEngine_obj::__CreateEmpty() { return  new TextEngine_obj; }
hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new(::openfl::text::TextField textField)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(textField);
	return _result_;}

Dynamic TextEngine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TextEngine_obj::getBounds( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getBounds",0x5ce2cc1d,"openfl._internal.text.TextEngine.getBounds","openfl/_internal/text/TextEngine.hx",197,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		bool tmp = this->border;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		if ((tmp)){
			HX_STACK_LINE(199)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(199)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(199)
		int padding = tmp1;		HX_STACK_VAR(padding,"padding");
		HX_STACK_LINE(201)
		Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		int tmp3 = padding;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		::openfl::geom::Rectangle tmp5 = this->bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		tmp5->width = tmp4;
		HX_STACK_LINE(202)
		Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		int tmp7 = padding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(202)
		::openfl::geom::Rectangle tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(202)
		tmp9->height = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine( int index){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getLine",0xf060239c,"openfl._internal.text.TextEngine.getLine","openfl/_internal/text/TextEngine.hx",434,0xdff93b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(436)
	bool tmp = (index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(436)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(436)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(436)
	if ((tmp1)){
		HX_STACK_LINE(436)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(436)
		int tmp4 = this->lineBreaks->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(436)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(436)
		int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(436)
		tmp2 = (tmp3 > tmp7);
	}
	else{
		HX_STACK_LINE(436)
		tmp2 = true;
	}
	HX_STACK_LINE(436)
	if ((tmp2)){
		HX_STACK_LINE(438)
		return null();
	}
	HX_STACK_LINE(442)
	int tmp3 = this->lineBreaks->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(442)
	bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(442)
	if ((tmp4)){
		HX_STACK_LINE(444)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(444)
		return tmp5;
	}
	else{
		HX_STACK_LINE(448)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(448)
		bool tmp6 = (index > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(448)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(448)
		if ((tmp6)){
			HX_STACK_LINE(448)
			int tmp8 = (index - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(448)
			tmp7 = this->lineBreaks->__get(tmp8);
		}
		else{
			HX_STACK_LINE(448)
			tmp7 = (int)0;
		}
		HX_STACK_LINE(448)
		int tmp8 = this->lineBreaks->__get(index);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(448)
		::String tmp9 = tmp5.substring(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(448)
		return tmp9;
	}
	HX_STACK_LINE(442)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

Void TextEngine_obj::getLineMeasurements( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getLineMeasurements",0x203f1eb3,"openfl._internal.text.TextEngine.getLineMeasurements","openfl/_internal/text/TextEngine.hx",455,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(457)
		int tmp = this->lineAscents->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(457)
		this->lineAscents->splice((int)0,tmp);
		HX_STACK_LINE(458)
		int tmp1 = this->lineDescents->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(458)
		this->lineDescents->splice((int)0,tmp1);
		HX_STACK_LINE(459)
		int tmp2 = this->lineLeadings->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(459)
		this->lineLeadings->splice((int)0,tmp2);
		HX_STACK_LINE(460)
		int tmp3 = this->lineHeights->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(460)
		this->lineHeights->splice((int)0,tmp3);
		HX_STACK_LINE(461)
		int tmp4 = this->lineWidths->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(461)
		this->lineWidths->splice((int)0,tmp4);
		HX_STACK_LINE(463)
		Float currentLineAscent = ((Float)0.0);		HX_STACK_VAR(currentLineAscent,"currentLineAscent");
		HX_STACK_LINE(464)
		Float currentLineDescent = ((Float)0.0);		HX_STACK_VAR(currentLineDescent,"currentLineDescent");
		HX_STACK_LINE(465)
		Dynamic currentLineLeading = null();		HX_STACK_VAR(currentLineLeading,"currentLineLeading");
		HX_STACK_LINE(466)
		Float currentLineHeight = ((Float)0.0);		HX_STACK_VAR(currentLineHeight,"currentLineHeight");
		HX_STACK_LINE(467)
		Float currentLineWidth = ((Float)0.0);		HX_STACK_VAR(currentLineWidth,"currentLineWidth");
		HX_STACK_LINE(469)
		this->textWidth = (int)0;
		HX_STACK_LINE(470)
		this->textHeight = (int)0;
		HX_STACK_LINE(471)
		this->numLines = (int)1;
		HX_STACK_LINE(472)
		this->bottomScrollV = (int)0;
		HX_STACK_LINE(473)
		this->maxScrollH = (int)0;
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(475)
			Array< ::Dynamic > _g1 = this->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(475)
			while((true)){
				HX_STACK_LINE(475)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(475)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(475)
				if ((tmp6)){
					HX_STACK_LINE(475)
					break;
				}
				HX_STACK_LINE(475)
				::openfl::_internal::text::TextLayoutGroup tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(475)
				::openfl::_internal::text::TextLayoutGroup group = tmp7;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(475)
				++(_g);
				HX_STACK_LINE(477)
				while((true)){
					HX_STACK_LINE(477)
					int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(477)
					int tmp9 = this->numLines;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(477)
					int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(477)
					bool tmp11 = (tmp8 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(477)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(477)
					if ((tmp12)){
						HX_STACK_LINE(477)
						break;
					}
					HX_STACK_LINE(479)
					Float tmp13 = currentLineAscent;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(479)
					this->lineAscents->push(tmp13);
					HX_STACK_LINE(480)
					Float tmp14 = currentLineDescent;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(480)
					this->lineDescents->push(tmp14);
					HX_STACK_LINE(481)
					bool tmp15 = (currentLineLeading != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(481)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(481)
					if ((tmp15)){
						HX_STACK_LINE(481)
						tmp16 = currentLineLeading;
					}
					else{
						HX_STACK_LINE(481)
						tmp16 = (int)0;
					}
					HX_STACK_LINE(481)
					this->lineLeadings->push(tmp16);
					HX_STACK_LINE(482)
					Float tmp17 = currentLineHeight;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(482)
					this->lineHeights->push(tmp17);
					HX_STACK_LINE(483)
					Float tmp18 = currentLineWidth;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(483)
					this->lineWidths->push(tmp18);
					HX_STACK_LINE(485)
					currentLineAscent = (int)0;
					HX_STACK_LINE(486)
					currentLineDescent = (int)0;
					HX_STACK_LINE(487)
					currentLineLeading = null();
					HX_STACK_LINE(488)
					currentLineHeight = (int)0;
					HX_STACK_LINE(489)
					currentLineWidth = (int)0;
					HX_STACK_LINE(491)
					(this->numLines)++;
					HX_STACK_LINE(493)
					Float tmp19 = this->textHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(493)
					Float tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(493)
					Float tmp21 = (tmp20 - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(493)
					bool tmp22 = (tmp19 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(493)
					if ((tmp22)){
						HX_STACK_LINE(495)
						(this->bottomScrollV)++;
					}
				}
				HX_STACK_LINE(501)
				Float tmp8 = currentLineAscent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(501)
				Float tmp9 = group->ascent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(501)
				Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(501)
				currentLineAscent = tmp10;
				HX_STACK_LINE(502)
				Float tmp11 = currentLineDescent;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(502)
				Float tmp12 = group->descent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(502)
				Float tmp13 = ::Math_obj::max(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(502)
				currentLineDescent = tmp13;
				HX_STACK_LINE(504)
				bool tmp14 = (currentLineLeading == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(504)
				if ((tmp14)){
					HX_STACK_LINE(506)
					currentLineLeading = group->leading;
				}
				else{
					HX_STACK_LINE(510)
					Dynamic tmp15 = currentLineLeading;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(510)
					int tmp16 = group->leading;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(510)
					Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(510)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(510)
					currentLineLeading = tmp18;
				}
				HX_STACK_LINE(514)
				Float tmp15 = currentLineHeight;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(514)
				Float tmp16 = group->height;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(514)
				Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(514)
				currentLineHeight = tmp17;
				HX_STACK_LINE(515)
				Float tmp18 = (group->offsetX - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(515)
				Float tmp19 = group->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(515)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(515)
				currentLineWidth = tmp20;
				HX_STACK_LINE(517)
				Float tmp21 = currentLineWidth;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(517)
				Float tmp22 = this->textWidth;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(517)
				bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(517)
				if ((tmp23)){
					HX_STACK_LINE(519)
					this->textWidth = currentLineWidth;
				}
				HX_STACK_LINE(523)
				Float tmp24 = (group->offsetY - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(523)
				Float tmp25 = group->ascent;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(523)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(523)
				Float tmp27 = group->descent;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(523)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(523)
				this->textHeight = tmp28;
			}
		}
		HX_STACK_LINE(527)
		Float tmp5 = currentLineAscent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(527)
		this->lineAscents->push(tmp5);
		HX_STACK_LINE(528)
		Float tmp6 = currentLineDescent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(528)
		this->lineDescents->push(tmp6);
		HX_STACK_LINE(529)
		bool tmp7 = (currentLineLeading != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(529)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(529)
		if ((tmp7)){
			HX_STACK_LINE(529)
			tmp8 = currentLineLeading;
		}
		else{
			HX_STACK_LINE(529)
			tmp8 = (int)0;
		}
		HX_STACK_LINE(529)
		this->lineLeadings->push(tmp8);
		HX_STACK_LINE(530)
		Float tmp9 = currentLineHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(530)
		this->lineHeights->push(tmp9);
		HX_STACK_LINE(531)
		Float tmp10 = currentLineWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(531)
		this->lineWidths->push(tmp10);
		HX_STACK_LINE(533)
		int tmp11 = this->numLines;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(533)
		bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(533)
		if ((tmp12)){
			HX_STACK_LINE(535)
			this->bottomScrollV = (int)1;
			HX_STACK_LINE(537)
			bool tmp13 = (currentLineLeading > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(537)
			if ((tmp13)){
				HX_STACK_LINE(539)
				hx::AddEq(this->textHeight,currentLineLeading);
			}
		}
		else{
			HX_STACK_LINE(543)
			Float tmp13 = this->textHeight;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(543)
			Float tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(543)
			Float tmp15 = (tmp14 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(543)
			bool tmp16 = (tmp13 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(543)
			if ((tmp16)){
				HX_STACK_LINE(545)
				(this->bottomScrollV)++;
			}
		}
		HX_STACK_LINE(549)
		Float tmp13 = this->textWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(549)
		Float tmp14 = this->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(549)
		Float tmp15 = (tmp14 - (int)4);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(549)
		bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(549)
		if ((tmp16)){
			HX_STACK_LINE(551)
			Float tmp17 = this->textWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(551)
			Float tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(551)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(551)
			Float tmp20 = (tmp19 + (int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(551)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(551)
			this->maxScrollH = tmp21;
		}
		else{
			HX_STACK_LINE(555)
			this->maxScrollH = (int)0;
		}
		HX_STACK_LINE(559)
		int tmp17 = this->numLines;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(559)
		int tmp18 = this->bottomScrollV;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(559)
		int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(559)
		int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(559)
		this->maxScrollV = tmp20;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

Void TextEngine_obj::getLayoutGroups( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getLayoutGroups",0xa3099646,"openfl._internal.text.TextEngine.getLayoutGroups","openfl/_internal/text/TextEngine.hx",564,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(564)
		::openfl::_internal::text::TextEngine _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(566)
		int tmp = this->layoutGroups->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		this->layoutGroups->splice((int)0,tmp);
		HX_STACK_LINE(568)
		int rangeIndex = (int)-1;		HX_STACK_VAR(rangeIndex,"rangeIndex");
		HX_STACK_LINE(569)
		::openfl::_internal::text::TextFormatRange formatRange = null();		HX_STACK_VAR(formatRange,"formatRange");
		HX_STACK_LINE(570)
		::lime::text::Font font = null();		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(572)
		::openfl::text::TextFormat tmp1 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		::openfl::text::TextFormat tmp2 = tmp1->clone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(572)
		::openfl::text::TextFormat currentFormat = tmp2;		HX_STACK_VAR(currentFormat,"currentFormat");
		HX_STACK_LINE(574)
		int leading = (int)0;		HX_STACK_VAR(leading,"leading");
		HX_STACK_LINE(575)
		Float ascent = ((Float)0.0);		HX_STACK_VAR(ascent,"ascent");
		HX_STACK_LINE(576)
		Float descent = ((Float)0.0);		HX_STACK_VAR(descent,"descent");
		HX_STACK_LINE(578)
		::openfl::_internal::text::TextLayoutGroup layoutGroup;		HX_STACK_VAR(layoutGroup,"layoutGroup");
		HX_STACK_LINE(578)
		Array< Float > advances;		HX_STACK_VAR(advances,"advances");
		HX_STACK_LINE(579)
		Float widthValue;		HX_STACK_VAR(widthValue,"widthValue");
		HX_STACK_LINE(579)
		Float heightValue = ((Float)0.0);		HX_STACK_VAR(heightValue,"heightValue");
		HX_STACK_LINE(581)
		Float spaceWidth = ((Float)0.0);		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(582)
		int previousSpaceIndex = (int)0;		HX_STACK_VAR(previousSpaceIndex,"previousSpaceIndex");
		HX_STACK_LINE(583)
		::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(583)
		int tmp4 = tmp3.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(583)
		int spaceIndex = tmp4;		HX_STACK_VAR(spaceIndex,"spaceIndex");
		HX_STACK_LINE(584)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(584)
		int tmp6 = tmp5.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(584)
		int breakIndex = tmp6;		HX_STACK_VAR(breakIndex,"breakIndex");
		HX_STACK_LINE(586)
		Float marginRight = ((Float)0.0);		HX_STACK_VAR(marginRight,"marginRight");
		HX_STACK_LINE(587)
		Float offsetX = ((Float)2.0);		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(588)
		Float offsetY = ((Float)2.0);		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(589)
		int textIndex = (int)0;		HX_STACK_VAR(textIndex,"textIndex");
		HX_STACK_LINE(590)
		int lineIndex = (int)0;		HX_STACK_VAR(lineIndex,"lineIndex");
		HX_STACK_LINE(591)
		::openfl::text::TextFormat lineFormat = null();		HX_STACK_VAR(lineFormat,"lineFormat");
		HX_STACK_LINE(745)
		{
			HX_STACK_LINE(745)
			int tmp7 = rangeIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(745)
			int tmp8 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(745)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(745)
			bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(745)
			if ((tmp10)){
				HX_STACK_LINE(745)
				(rangeIndex)++;
				HX_STACK_LINE(745)
				::openfl::_internal::text::TextFormatRange tmp11 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(745)
				formatRange = tmp11;
				HX_STACK_LINE(745)
				::openfl::text::TextFormat tmp12 = formatRange->format;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(745)
				currentFormat->__merge(tmp12);
				HX_STACK_LINE(745)
				::openfl::text::TextFormat tmp13 = currentFormat;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(745)
				::openfl::text::Font tmp14 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(745)
				font = tmp14;
				HX_STACK_LINE(745)
				bool tmp15 = (font != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(745)
				if ((tmp15)){
					HX_STACK_LINE(745)
					int tmp16 = font->get_ascender();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(745)
					int tmp17 = font->get_unitsPerEM();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(745)
					Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(745)
					Dynamic tmp19 = currentFormat->size;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(745)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(745)
					ascent = tmp20;
					HX_STACK_LINE(745)
					int tmp21 = font->get_descender();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(745)
					int tmp22 = font->get_unitsPerEM();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(745)
					Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(745)
					Dynamic tmp24 = currentFormat->size;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(745)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(745)
					Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(745)
					descent = tmp26;
					HX_STACK_LINE(745)
					leading = currentFormat->leading;
					HX_STACK_LINE(745)
					Float tmp27 = (ascent + descent);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(745)
					int tmp28 = leading;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(745)
					Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(745)
					heightValue = tmp29;
				}
				else{
					HX_STACK_LINE(745)
					ascent = currentFormat->size;
					HX_STACK_LINE(745)
					Float tmp16 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(745)
					descent = tmp16;
					HX_STACK_LINE(745)
					leading = currentFormat->leading;
					HX_STACK_LINE(745)
					Float tmp17 = (ascent + descent);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(745)
					int tmp18 = leading;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(745)
					Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(745)
					heightValue = tmp19;
				}
				HX_STACK_LINE(745)
				bool tmp16 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(745)
				if ((tmp16)){
					HX_STACK_LINE(745)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(745)
					{
						HX_STACK_LINE(745)
						bool tmp18 = (_g->__textLayout == null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(745)
						if ((tmp18)){
							HX_STACK_LINE(745)
							::lime::text::TextLayout tmp19 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(745)
							_g->__textLayout = tmp19;
						}
						HX_STACK_LINE(745)
						Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(745)
						_g->__textLayout->set_text(null());
						HX_STACK_LINE(745)
						::lime::text::Font tmp19 = font;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(745)
						_g->__textLayout->set_font(tmp19);
						HX_STACK_LINE(745)
						Dynamic tmp20 = formatRange->format->size;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(745)
						bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(745)
						if ((tmp21)){
							HX_STACK_LINE(745)
							Dynamic tmp22 = formatRange->format->size;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(745)
							_g->__textLayout->set_size(tmp22);
						}
						HX_STACK_LINE(745)
						_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						HX_STACK_LINE(745)
						{
							HX_STACK_LINE(745)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(745)
							Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(745)
							while((true)){
								HX_STACK_LINE(745)
								bool tmp22 = (_g1 < _g2->length);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(745)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(745)
								if ((tmp23)){
									HX_STACK_LINE(745)
									break;
								}
								HX_STACK_LINE(745)
								::lime::text::GlyphPosition tmp24 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(745)
								::lime::text::GlyphPosition position = tmp24;		HX_STACK_VAR(position,"position");
								HX_STACK_LINE(745)
								++(_g1);
								HX_STACK_LINE(745)
								Float tmp25 = position->advance->x;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(745)
								hx::AddEq(width,tmp25);
							}
						}
						HX_STACK_LINE(745)
						tmp17 = width;
					}
					HX_STACK_LINE(745)
					spaceWidth = tmp17;
				}
			}
		}
		HX_STACK_LINE(747)
		lineFormat = formatRange->format;
		HX_STACK_LINE(748)
		bool wrap;		HX_STACK_VAR(wrap,"wrap");
		HX_STACK_LINE(750)
		while((true)){
			HX_STACK_LINE(750)
			int tmp7 = textIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(750)
			::String tmp8 = this->text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(750)
			int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(750)
			bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(750)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(750)
			if ((tmp11)){
				HX_STACK_LINE(750)
				break;
			}
			HX_STACK_LINE(752)
			bool tmp12 = (breakIndex > (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(752)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(752)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(752)
			if ((tmp13)){
				HX_STACK_LINE(752)
				int tmp15 = spaceIndex;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(752)
				int tmp16 = (int)-1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(752)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(752)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(752)
				bool tmp19 = (tmp15 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(752)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(752)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(752)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(752)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(752)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(752)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(752)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(752)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(752)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(752)
				if ((tmp28)){
					HX_STACK_LINE(752)
					tmp14 = (breakIndex < spaceIndex);
				}
				else{
					HX_STACK_LINE(752)
					tmp14 = true;
				}
			}
			else{
				HX_STACK_LINE(752)
				tmp14 = false;
			}
			HX_STACK_LINE(752)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(752)
			if ((tmp14)){
				HX_STACK_LINE(752)
				tmp15 = (formatRange->end >= breakIndex);
			}
			else{
				HX_STACK_LINE(752)
				tmp15 = false;
			}
			HX_STACK_LINE(752)
			if ((tmp15)){
				HX_STACK_LINE(754)
				::openfl::_internal::text::TextLayoutGroup tmp16 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,breakIndex);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(754)
				layoutGroup = tmp16;
				HX_STACK_LINE(755)
				{
					HX_STACK_LINE(755)
					Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
					HX_STACK_LINE(755)
					bool tmp17 = (_g->__textLayout == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(755)
					if ((tmp17)){
						HX_STACK_LINE(755)
						::lime::text::TextLayout tmp18 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(755)
						_g->__textLayout = tmp18;
					}
					HX_STACK_LINE(755)
					Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(755)
					_g->__textLayout->set_text(null());
					HX_STACK_LINE(755)
					::lime::text::Font tmp18 = font;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(755)
					_g->__textLayout->set_font(tmp18);
					HX_STACK_LINE(755)
					Dynamic tmp19 = formatRange->format->size;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(755)
					bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(755)
					if ((tmp20)){
						HX_STACK_LINE(755)
						Dynamic tmp21 = formatRange->format->size;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(755)
						_g->__textLayout->set_size(tmp21);
					}
					HX_STACK_LINE(755)
					::String tmp21 = this->text;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(755)
					int tmp22 = textIndex;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(755)
					int tmp23 = breakIndex;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(755)
					::String tmp24 = tmp21.substring(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(755)
					_g->__textLayout->set_text(tmp24);
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(755)
						Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(755)
						while((true)){
							HX_STACK_LINE(755)
							bool tmp25 = (_g1 < _g2->length);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(755)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(755)
							if ((tmp26)){
								HX_STACK_LINE(755)
								break;
							}
							HX_STACK_LINE(755)
							::lime::text::GlyphPosition tmp27 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(755)
							::lime::text::GlyphPosition position = tmp27;		HX_STACK_VAR(position,"position");
							HX_STACK_LINE(755)
							++(_g1);
							HX_STACK_LINE(755)
							Float tmp28 = position->advance->x;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(755)
							advances1->push(tmp28);
						}
					}
					HX_STACK_LINE(755)
					layoutGroup->advances = advances1;
				}
				HX_STACK_LINE(756)
				layoutGroup->offsetX = offsetX;
				HX_STACK_LINE(757)
				layoutGroup->ascent = ascent;
				HX_STACK_LINE(758)
				layoutGroup->descent = descent;
				HX_STACK_LINE(759)
				layoutGroup->leading = leading;
				HX_STACK_LINE(760)
				layoutGroup->lineIndex = lineIndex;
				HX_STACK_LINE(761)
				layoutGroup->offsetY = offsetY;
				HX_STACK_LINE(762)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(762)
				{
					HX_STACK_LINE(762)
					Array< Float > advances1 = layoutGroup->advances;		HX_STACK_VAR(advances1,"advances1");
					HX_STACK_LINE(762)
					Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(762)
					{
						HX_STACK_LINE(762)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(762)
						while((true)){
							HX_STACK_LINE(762)
							bool tmp18 = (_g1 < advances1->length);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(762)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(762)
							if ((tmp19)){
								HX_STACK_LINE(762)
								break;
							}
							HX_STACK_LINE(762)
							Float tmp20 = advances1->__get(_g1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(762)
							Float advance = tmp20;		HX_STACK_VAR(advance,"advance");
							HX_STACK_LINE(762)
							++(_g1);
							HX_STACK_LINE(762)
							hx::AddEq(width,advance);
						}
					}
					HX_STACK_LINE(762)
					tmp17 = width;
				}
				HX_STACK_LINE(762)
				layoutGroup->width = tmp17;
				HX_STACK_LINE(763)
				layoutGroup->height = heightValue;
				HX_STACK_LINE(764)
				::openfl::_internal::text::TextLayoutGroup tmp18 = layoutGroup;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(764)
				this->layoutGroups->push(tmp18);
				HX_STACK_LINE(766)
				hx::AddEq(offsetY,heightValue);
				HX_STACK_LINE(767)
				offsetX = (int)2;
				HX_STACK_LINE(769)
				bool tmp19 = this->wordWrap;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(769)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(769)
				if ((tmp19)){
					HX_STACK_LINE(769)
					Float tmp21 = (layoutGroup->offsetX + layoutGroup->width);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(769)
					Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(769)
					Float tmp23 = this->width;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(769)
					Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(769)
					Float tmp25 = (tmp24 - (int)2);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(769)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(769)
					tmp20 = (tmp22 > tmp26);
				}
				else{
					HX_STACK_LINE(769)
					tmp20 = false;
				}
				HX_STACK_LINE(769)
				if ((tmp20)){
					HX_STACK_LINE(771)
					layoutGroup->offsetY = offsetY;
					HX_STACK_LINE(772)
					layoutGroup->offsetX = offsetX;
					HX_STACK_LINE(774)
					hx::AddEq(offsetY,heightValue);
					HX_STACK_LINE(775)
					(lineIndex)++;
				}
				HX_STACK_LINE(779)
				int tmp21 = (breakIndex + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(779)
				textIndex = tmp21;
				HX_STACK_LINE(780)
				::String tmp22 = this->text;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(780)
				int tmp23 = textIndex;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(780)
				int tmp24 = tmp22.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(780)
				breakIndex = tmp24;
				HX_STACK_LINE(781)
				(lineIndex)++;
				HX_STACK_LINE(783)
				bool tmp25 = (formatRange->end == breakIndex);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(783)
				if ((tmp25)){
					HX_STACK_LINE(785)
					{
						HX_STACK_LINE(785)
						int tmp26 = rangeIndex;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(785)
						int tmp27 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(785)
						int tmp28 = (tmp27 - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(785)
						bool tmp29 = (tmp26 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(785)
						if ((tmp29)){
							HX_STACK_LINE(785)
							(rangeIndex)++;
							HX_STACK_LINE(785)
							::openfl::_internal::text::TextFormatRange tmp30 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(785)
							formatRange = tmp30;
							HX_STACK_LINE(785)
							::openfl::text::TextFormat tmp31 = formatRange->format;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(785)
							currentFormat->__merge(tmp31);
							HX_STACK_LINE(785)
							::openfl::text::TextFormat tmp32 = currentFormat;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(785)
							::openfl::text::Font tmp33 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(785)
							font = tmp33;
							HX_STACK_LINE(785)
							bool tmp34 = (font != null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(785)
							if ((tmp34)){
								HX_STACK_LINE(785)
								int tmp35 = font->get_ascender();		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(785)
								int tmp36 = font->get_unitsPerEM();		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(785)
								Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(785)
								Dynamic tmp38 = currentFormat->size;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(785)
								Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(785)
								ascent = tmp39;
								HX_STACK_LINE(785)
								int tmp40 = font->get_descender();		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(785)
								int tmp41 = font->get_unitsPerEM();		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(785)
								Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(785)
								Dynamic tmp43 = currentFormat->size;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(785)
								Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(785)
								Float tmp45 = ::Math_obj::abs(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(785)
								descent = tmp45;
								HX_STACK_LINE(785)
								leading = currentFormat->leading;
								HX_STACK_LINE(785)
								Float tmp46 = (ascent + descent);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(785)
								int tmp47 = leading;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(785)
								Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(785)
								heightValue = tmp48;
							}
							else{
								HX_STACK_LINE(785)
								ascent = currentFormat->size;
								HX_STACK_LINE(785)
								Float tmp35 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(785)
								descent = tmp35;
								HX_STACK_LINE(785)
								leading = currentFormat->leading;
								HX_STACK_LINE(785)
								Float tmp36 = (ascent + descent);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(785)
								int tmp37 = leading;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(785)
								Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(785)
								heightValue = tmp38;
							}
							HX_STACK_LINE(785)
							bool tmp35 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(785)
							if ((tmp35)){
								HX_STACK_LINE(785)
								Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(785)
								{
									HX_STACK_LINE(785)
									bool tmp37 = (_g->__textLayout == null());		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(785)
									if ((tmp37)){
										HX_STACK_LINE(785)
										::lime::text::TextLayout tmp38 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(785)
										_g->__textLayout = tmp38;
									}
									HX_STACK_LINE(785)
									Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
									HX_STACK_LINE(785)
									_g->__textLayout->set_text(null());
									HX_STACK_LINE(785)
									::lime::text::Font tmp38 = font;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(785)
									_g->__textLayout->set_font(tmp38);
									HX_STACK_LINE(785)
									Dynamic tmp39 = formatRange->format->size;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(785)
									bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(785)
									if ((tmp40)){
										HX_STACK_LINE(785)
										Dynamic tmp41 = formatRange->format->size;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(785)
										_g->__textLayout->set_size(tmp41);
									}
									HX_STACK_LINE(785)
									_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
									HX_STACK_LINE(785)
									{
										HX_STACK_LINE(785)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(785)
										Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(785)
										while((true)){
											HX_STACK_LINE(785)
											bool tmp41 = (_g1 < _g2->length);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(785)
											bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(785)
											if ((tmp42)){
												HX_STACK_LINE(785)
												break;
											}
											HX_STACK_LINE(785)
											::lime::text::GlyphPosition tmp43 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(785)
											::lime::text::GlyphPosition position = tmp43;		HX_STACK_VAR(position,"position");
											HX_STACK_LINE(785)
											++(_g1);
											HX_STACK_LINE(785)
											Float tmp44 = position->advance->x;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(785)
											hx::AddEq(width,tmp44);
										}
									}
									HX_STACK_LINE(785)
									tmp36 = width;
								}
								HX_STACK_LINE(785)
								spaceWidth = tmp36;
							}
						}
					}
					HX_STACK_LINE(786)
					lineFormat = formatRange->format;
				}
			}
			else{
				HX_STACK_LINE(790)
				bool tmp16 = (formatRange->end >= spaceIndex);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(790)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(790)
				if ((tmp16)){
					HX_STACK_LINE(790)
					tmp17 = (spaceIndex > (int)-1);
				}
				else{
					HX_STACK_LINE(790)
					tmp17 = false;
				}
				HX_STACK_LINE(790)
				if ((tmp17)){
					HX_STACK_LINE(792)
					layoutGroup = null();
					HX_STACK_LINE(793)
					wrap = false;
					HX_STACK_LINE(795)
					while((true)){
						HX_STACK_LINE(797)
						bool tmp18 = (spaceIndex == (int)-1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(797)
						if ((tmp18)){
							HX_STACK_LINE(797)
							spaceIndex = formatRange->end;
						}
						HX_STACK_LINE(799)
						{
							HX_STACK_LINE(799)
							Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
							HX_STACK_LINE(799)
							bool tmp19 = (_g->__textLayout == null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(799)
							if ((tmp19)){
								HX_STACK_LINE(799)
								::lime::text::TextLayout tmp20 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(799)
								_g->__textLayout = tmp20;
							}
							HX_STACK_LINE(799)
							Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(799)
							_g->__textLayout->set_text(null());
							HX_STACK_LINE(799)
							::lime::text::Font tmp20 = font;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(799)
							_g->__textLayout->set_font(tmp20);
							HX_STACK_LINE(799)
							Dynamic tmp21 = formatRange->format->size;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(799)
							bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(799)
							if ((tmp22)){
								HX_STACK_LINE(799)
								Dynamic tmp23 = formatRange->format->size;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(799)
								_g->__textLayout->set_size(tmp23);
							}
							HX_STACK_LINE(799)
							::String tmp23 = this->text;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(799)
							int tmp24 = textIndex;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(799)
							int tmp25 = spaceIndex;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(799)
							::String tmp26 = tmp23.substring(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(799)
							_g->__textLayout->set_text(tmp26);
							HX_STACK_LINE(799)
							{
								HX_STACK_LINE(799)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(799)
								Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(799)
								while((true)){
									HX_STACK_LINE(799)
									bool tmp27 = (_g1 < _g2->length);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(799)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(799)
									if ((tmp28)){
										HX_STACK_LINE(799)
										break;
									}
									HX_STACK_LINE(799)
									::lime::text::GlyphPosition tmp29 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(799)
									::lime::text::GlyphPosition position = tmp29;		HX_STACK_VAR(position,"position");
									HX_STACK_LINE(799)
									++(_g1);
									HX_STACK_LINE(799)
									Float tmp30 = position->advance->x;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(799)
									advances1->push(tmp30);
								}
							}
							HX_STACK_LINE(799)
							advances = advances1;
						}
						HX_STACK_LINE(800)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(800)
						{
							HX_STACK_LINE(800)
							Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(800)
							{
								HX_STACK_LINE(800)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(800)
								while((true)){
									HX_STACK_LINE(800)
									bool tmp20 = (_g1 < advances->length);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(800)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(800)
									if ((tmp21)){
										HX_STACK_LINE(800)
										break;
									}
									HX_STACK_LINE(800)
									Float tmp22 = advances->__get(_g1);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(800)
									Float advance = tmp22;		HX_STACK_VAR(advance,"advance");
									HX_STACK_LINE(800)
									++(_g1);
									HX_STACK_LINE(800)
									hx::AddEq(width,advance);
								}
							}
							HX_STACK_LINE(800)
							tmp19 = width;
						}
						HX_STACK_LINE(800)
						widthValue = tmp19;
						HX_STACK_LINE(802)
						bool tmp20 = this->wordWrap;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(802)
						if ((tmp20)){
							HX_STACK_LINE(804)
							Float tmp21 = (offsetX + widthValue);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(804)
							Float tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(804)
							Float tmp23 = (tmp22 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(804)
							bool tmp24 = (tmp21 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(804)
							if ((tmp24)){
								HX_STACK_LINE(806)
								wrap = true;
							}
						}
						HX_STACK_LINE(812)
						bool tmp21 = wrap;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(812)
						if ((tmp21)){
							HX_STACK_LINE(814)
							hx::AddEq(offsetY,heightValue);
							HX_STACK_LINE(816)
							int tmp22 = this->layoutGroups->length;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(816)
							int tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(816)
							int i = tmp23;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(817)
							int offsetCount = (int)0;		HX_STACK_VAR(offsetCount,"offsetCount");
							HX_STACK_LINE(819)
							while((true)){
								HX_STACK_LINE(821)
								::openfl::_internal::text::TextLayoutGroup tmp24 = this->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(821)
								layoutGroup = tmp24;
								HX_STACK_LINE(823)
								bool tmp25 = (i > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(823)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(823)
								if ((tmp25)){
									HX_STACK_LINE(823)
									tmp26 = (layoutGroup->startIndex > previousSpaceIndex);
								}
								else{
									HX_STACK_LINE(823)
									tmp26 = false;
								}
								HX_STACK_LINE(823)
								if ((tmp26)){
									HX_STACK_LINE(825)
									(offsetCount)++;
								}
								else{
									HX_STACK_LINE(829)
									break;
								}
								HX_STACK_LINE(833)
								(i)--;
							}
							HX_STACK_LINE(837)
							(lineIndex)++;
							HX_STACK_LINE(839)
							offsetX = (int)2;
							HX_STACK_LINE(841)
							bool tmp24 = (offsetCount > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(841)
							if ((tmp24)){
								HX_STACK_LINE(843)
								int tmp25 = this->layoutGroups->length;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(843)
								int tmp26 = offsetCount;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(843)
								int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(843)
								::openfl::_internal::text::TextLayoutGroup tmp28 = this->layoutGroups->__get(tmp27).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(843)
								Float bumpX = tmp28->offsetX;		HX_STACK_VAR(bumpX,"bumpX");
								HX_STACK_LINE(845)
								{
									HX_STACK_LINE(845)
									int tmp29 = this->layoutGroups->length;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(845)
									int tmp30 = offsetCount;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(845)
									int tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(845)
									int _g1 = tmp31;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(845)
									int tmp32 = this->layoutGroups->length;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(845)
									int _g2 = tmp32;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(845)
									while((true)){
										HX_STACK_LINE(845)
										bool tmp33 = (_g1 < _g2);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(845)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(845)
										if ((tmp34)){
											HX_STACK_LINE(845)
											break;
										}
										HX_STACK_LINE(845)
										int tmp35 = (_g1)++;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(845)
										int i1 = tmp35;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(847)
										::openfl::_internal::text::TextLayoutGroup tmp36 = this->layoutGroups->__get(i1).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(847)
										layoutGroup = tmp36;
										HX_STACK_LINE(848)
										hx::SubEq(layoutGroup->offsetX,bumpX);
										HX_STACK_LINE(849)
										layoutGroup->offsetY = offsetY;
										HX_STACK_LINE(850)
										layoutGroup->lineIndex = lineIndex;
										HX_STACK_LINE(851)
										hx::AddEq(offsetX,layoutGroup->width);
									}
								}
							}
							HX_STACK_LINE(857)
							::openfl::_internal::text::TextLayoutGroup tmp25 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,spaceIndex);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(857)
							layoutGroup = tmp25;
							HX_STACK_LINE(858)
							layoutGroup->advances = advances;
							HX_STACK_LINE(859)
							layoutGroup->offsetX = offsetX;
							HX_STACK_LINE(860)
							layoutGroup->ascent = ascent;
							HX_STACK_LINE(861)
							layoutGroup->descent = descent;
							HX_STACK_LINE(862)
							layoutGroup->leading = leading;
							HX_STACK_LINE(863)
							layoutGroup->lineIndex = lineIndex;
							HX_STACK_LINE(864)
							layoutGroup->offsetY = offsetY;
							HX_STACK_LINE(865)
							layoutGroup->width = widthValue;
							HX_STACK_LINE(866)
							layoutGroup->height = heightValue;
							HX_STACK_LINE(867)
							::openfl::_internal::text::TextLayoutGroup tmp26 = layoutGroup;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(867)
							this->layoutGroups->push(tmp26);
							HX_STACK_LINE(869)
							Float tmp27 = (widthValue + spaceWidth);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(869)
							offsetX = tmp27;
							HX_STACK_LINE(870)
							marginRight = spaceWidth;
							HX_STACK_LINE(872)
							wrap = false;
						}
						else{
							HX_STACK_LINE(876)
							bool tmp22 = (layoutGroup != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(876)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(876)
							if ((tmp22)){
								HX_STACK_LINE(876)
								tmp23 = (textIndex == spaceIndex);
							}
							else{
								HX_STACK_LINE(876)
								tmp23 = false;
							}
							HX_STACK_LINE(876)
							if ((tmp23)){
								HX_STACK_LINE(878)
								::openfl::text::TextFormatAlign tmp24 = formatRange->format->align;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(878)
								bool tmp25 = (tmp24 != ::openfl::text::TextFormatAlign_obj::JUSTIFY);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(878)
								if ((tmp25)){
									HX_STACK_LINE(880)
									layoutGroup->endIndex = spaceIndex;
								}
								HX_STACK_LINE(884)
								Float tmp26 = spaceWidth;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(884)
								layoutGroup->advances->push(tmp26);
								HX_STACK_LINE(885)
								hx::AddEq(marginRight,spaceWidth);
							}
							else{
								HX_STACK_LINE(887)
								bool tmp24 = (layoutGroup == null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(887)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(887)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(887)
								if ((tmp25)){
									HX_STACK_LINE(887)
									tmp26 = (lineFormat->align == ::openfl::text::TextFormatAlign_obj::JUSTIFY);
								}
								else{
									HX_STACK_LINE(887)
									tmp26 = true;
								}
								HX_STACK_LINE(887)
								if ((tmp26)){
									HX_STACK_LINE(889)
									::openfl::_internal::text::TextLayoutGroup tmp27 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,spaceIndex);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(889)
									layoutGroup = tmp27;
									HX_STACK_LINE(890)
									layoutGroup->advances = advances;
									HX_STACK_LINE(891)
									layoutGroup->offsetX = offsetX;
									HX_STACK_LINE(892)
									layoutGroup->ascent = ascent;
									HX_STACK_LINE(893)
									layoutGroup->descent = descent;
									HX_STACK_LINE(894)
									layoutGroup->leading = leading;
									HX_STACK_LINE(895)
									layoutGroup->lineIndex = lineIndex;
									HX_STACK_LINE(896)
									layoutGroup->offsetY = offsetY;
									HX_STACK_LINE(897)
									layoutGroup->width = widthValue;
									HX_STACK_LINE(898)
									layoutGroup->height = heightValue;
									HX_STACK_LINE(899)
									::openfl::_internal::text::TextLayoutGroup tmp28 = layoutGroup;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(899)
									this->layoutGroups->push(tmp28);
									HX_STACK_LINE(901)
									Float tmp29 = spaceWidth;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(901)
									layoutGroup->advances->push(tmp29);
									HX_STACK_LINE(902)
									marginRight = spaceWidth;
								}
								else{
									HX_STACK_LINE(906)
									layoutGroup->endIndex = spaceIndex;
									HX_STACK_LINE(907)
									layoutGroup->advances = layoutGroup->advances->concat(advances);
									HX_STACK_LINE(908)
									Float tmp27 = (marginRight + widthValue);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(908)
									hx::AddEq(layoutGroup->width,tmp27);
									HX_STACK_LINE(910)
									Float tmp28 = spaceWidth;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(910)
									layoutGroup->advances->push(tmp28);
									HX_STACK_LINE(911)
									marginRight = spaceWidth;
								}
							}
							HX_STACK_LINE(915)
							Float tmp24 = (widthValue + spaceWidth);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(915)
							hx::AddEq(offsetX,tmp24);
						}
						HX_STACK_LINE(919)
						int tmp22 = (spaceIndex + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(919)
						textIndex = tmp22;
						HX_STACK_LINE(921)
						previousSpaceIndex = spaceIndex;
						HX_STACK_LINE(922)
						::String tmp23 = this->text;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(922)
						int tmp24 = (previousSpaceIndex + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(922)
						int tmp25 = tmp23.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(922)
						spaceIndex = tmp25;
						HX_STACK_LINE(924)
						bool tmp26 = (formatRange->end <= previousSpaceIndex);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(924)
						if ((tmp26)){
							HX_STACK_LINE(926)
							layoutGroup = null();
							HX_STACK_LINE(927)
							{
								HX_STACK_LINE(927)
								int tmp27 = rangeIndex;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(927)
								int tmp28 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(927)
								int tmp29 = (tmp28 - (int)1);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(927)
								bool tmp30 = (tmp27 < tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(927)
								if ((tmp30)){
									HX_STACK_LINE(927)
									(rangeIndex)++;
									HX_STACK_LINE(927)
									::openfl::_internal::text::TextFormatRange tmp31 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(927)
									formatRange = tmp31;
									HX_STACK_LINE(927)
									::openfl::text::TextFormat tmp32 = formatRange->format;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(927)
									currentFormat->__merge(tmp32);
									HX_STACK_LINE(927)
									::openfl::text::TextFormat tmp33 = currentFormat;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(927)
									::openfl::text::Font tmp34 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(927)
									font = tmp34;
									HX_STACK_LINE(927)
									bool tmp35 = (font != null());		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(927)
									if ((tmp35)){
										HX_STACK_LINE(927)
										int tmp36 = font->get_ascender();		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(927)
										int tmp37 = font->get_unitsPerEM();		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(927)
										Float tmp38 = (Float(tmp36) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(927)
										Dynamic tmp39 = currentFormat->size;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(927)
										Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(927)
										ascent = tmp40;
										HX_STACK_LINE(927)
										int tmp41 = font->get_descender();		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(927)
										int tmp42 = font->get_unitsPerEM();		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(927)
										Float tmp43 = (Float(tmp41) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(927)
										Dynamic tmp44 = currentFormat->size;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(927)
										Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(927)
										Float tmp46 = ::Math_obj::abs(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(927)
										descent = tmp46;
										HX_STACK_LINE(927)
										leading = currentFormat->leading;
										HX_STACK_LINE(927)
										Float tmp47 = (ascent + descent);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(927)
										int tmp48 = leading;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(927)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(927)
										heightValue = tmp49;
									}
									else{
										HX_STACK_LINE(927)
										ascent = currentFormat->size;
										HX_STACK_LINE(927)
										Float tmp36 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(927)
										descent = tmp36;
										HX_STACK_LINE(927)
										leading = currentFormat->leading;
										HX_STACK_LINE(927)
										Float tmp37 = (ascent + descent);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(927)
										int tmp38 = leading;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(927)
										Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(927)
										heightValue = tmp39;
									}
									HX_STACK_LINE(927)
									bool tmp36 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(927)
									if ((tmp36)){
										HX_STACK_LINE(927)
										Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(927)
										{
											HX_STACK_LINE(927)
											bool tmp38 = (_g->__textLayout == null());		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(927)
											if ((tmp38)){
												HX_STACK_LINE(927)
												::lime::text::TextLayout tmp39 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(927)
												_g->__textLayout = tmp39;
											}
											HX_STACK_LINE(927)
											Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
											HX_STACK_LINE(927)
											_g->__textLayout->set_text(null());
											HX_STACK_LINE(927)
											::lime::text::Font tmp39 = font;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(927)
											_g->__textLayout->set_font(tmp39);
											HX_STACK_LINE(927)
											Dynamic tmp40 = formatRange->format->size;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(927)
											bool tmp41 = (tmp40 != null());		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(927)
											if ((tmp41)){
												HX_STACK_LINE(927)
												Dynamic tmp42 = formatRange->format->size;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(927)
												_g->__textLayout->set_size(tmp42);
											}
											HX_STACK_LINE(927)
											_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
											HX_STACK_LINE(927)
											{
												HX_STACK_LINE(927)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(927)
												Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(927)
												while((true)){
													HX_STACK_LINE(927)
													bool tmp42 = (_g1 < _g2->length);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(927)
													bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(927)
													if ((tmp43)){
														HX_STACK_LINE(927)
														break;
													}
													HX_STACK_LINE(927)
													::lime::text::GlyphPosition tmp44 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(927)
													::lime::text::GlyphPosition position = tmp44;		HX_STACK_VAR(position,"position");
													HX_STACK_LINE(927)
													++(_g1);
													HX_STACK_LINE(927)
													Float tmp45 = position->advance->x;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(927)
													hx::AddEq(width,tmp45);
												}
											}
											HX_STACK_LINE(927)
											tmp37 = width;
										}
										HX_STACK_LINE(927)
										spaceWidth = tmp37;
									}
								}
							}
						}
						HX_STACK_LINE(931)
						bool tmp27 = (spaceIndex > breakIndex);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(931)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(931)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(931)
						if ((tmp28)){
							HX_STACK_LINE(931)
							tmp29 = (breakIndex > (int)-1);
						}
						else{
							HX_STACK_LINE(931)
							tmp29 = false;
						}
						HX_STACK_LINE(931)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(931)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(931)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(931)
						if ((tmp31)){
							HX_STACK_LINE(931)
							int tmp33 = textIndex;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(931)
							::String tmp34 = this->text;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(931)
							::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(931)
							::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(931)
							int tmp37 = tmp36.length;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(931)
							tmp32 = (tmp33 > tmp37);
						}
						else{
							HX_STACK_LINE(931)
							tmp32 = true;
						}
						HX_STACK_LINE(931)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(931)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(931)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(931)
						if ((tmp34)){
							HX_STACK_LINE(931)
							tmp35 = (spaceIndex > formatRange->end);
						}
						else{
							HX_STACK_LINE(931)
							tmp35 = true;
						}
						HX_STACK_LINE(931)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(931)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(931)
						if ((tmp36)){
							HX_STACK_LINE(931)
							int tmp38 = spaceIndex;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(931)
							int tmp39 = (int)-1;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(931)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(931)
							bool tmp41 = (tmp38 == tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(931)
							bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(931)
							bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(931)
							if ((tmp43)){
								HX_STACK_LINE(931)
								tmp37 = (breakIndex > (int)-1);
							}
							else{
								HX_STACK_LINE(931)
								tmp37 = false;
							}
						}
						else{
							HX_STACK_LINE(931)
							tmp37 = true;
						}
						HX_STACK_LINE(931)
						if ((tmp37)){
							HX_STACK_LINE(933)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(941)
					bool tmp18 = (textIndex >= formatRange->end);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(941)
					if ((tmp18)){
						HX_STACK_LINE(943)
						break;
					}
					HX_STACK_LINE(947)
					::openfl::_internal::text::TextLayoutGroup tmp19 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,formatRange->end);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(947)
					layoutGroup = tmp19;
					HX_STACK_LINE(948)
					{
						HX_STACK_LINE(948)
						Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
						HX_STACK_LINE(948)
						bool tmp20 = (_g->__textLayout == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(948)
						if ((tmp20)){
							HX_STACK_LINE(948)
							::lime::text::TextLayout tmp21 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(948)
							_g->__textLayout = tmp21;
						}
						HX_STACK_LINE(948)
						Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(948)
						_g->__textLayout->set_text(null());
						HX_STACK_LINE(948)
						::lime::text::Font tmp21 = font;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(948)
						_g->__textLayout->set_font(tmp21);
						HX_STACK_LINE(948)
						Dynamic tmp22 = formatRange->format->size;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(948)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(948)
						if ((tmp23)){
							HX_STACK_LINE(948)
							Dynamic tmp24 = formatRange->format->size;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(948)
							_g->__textLayout->set_size(tmp24);
						}
						HX_STACK_LINE(948)
						::String tmp24 = this->text;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(948)
						int tmp25 = textIndex;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(948)
						int tmp26 = formatRange->end;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(948)
						::String tmp27 = tmp24.substring(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(948)
						_g->__textLayout->set_text(tmp27);
						HX_STACK_LINE(948)
						{
							HX_STACK_LINE(948)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(948)
							Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(948)
							while((true)){
								HX_STACK_LINE(948)
								bool tmp28 = (_g1 < _g2->length);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(948)
								bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(948)
								if ((tmp29)){
									HX_STACK_LINE(948)
									break;
								}
								HX_STACK_LINE(948)
								::lime::text::GlyphPosition tmp30 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(948)
								::lime::text::GlyphPosition position = tmp30;		HX_STACK_VAR(position,"position");
								HX_STACK_LINE(948)
								++(_g1);
								HX_STACK_LINE(948)
								Float tmp31 = position->advance->x;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(948)
								advances1->push(tmp31);
							}
						}
						HX_STACK_LINE(948)
						layoutGroup->advances = advances1;
					}
					HX_STACK_LINE(949)
					layoutGroup->offsetX = offsetX;
					HX_STACK_LINE(950)
					layoutGroup->ascent = ascent;
					HX_STACK_LINE(951)
					layoutGroup->descent = descent;
					HX_STACK_LINE(952)
					layoutGroup->leading = leading;
					HX_STACK_LINE(953)
					layoutGroup->lineIndex = lineIndex;
					HX_STACK_LINE(954)
					layoutGroup->offsetY = offsetY;
					HX_STACK_LINE(955)
					Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(955)
					{
						HX_STACK_LINE(955)
						Array< Float > advances1 = layoutGroup->advances;		HX_STACK_VAR(advances1,"advances1");
						HX_STACK_LINE(955)
						Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(955)
						{
							HX_STACK_LINE(955)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(955)
							while((true)){
								HX_STACK_LINE(955)
								bool tmp21 = (_g1 < advances1->length);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(955)
								bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(955)
								if ((tmp22)){
									HX_STACK_LINE(955)
									break;
								}
								HX_STACK_LINE(955)
								Float tmp23 = advances1->__get(_g1);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(955)
								Float advance = tmp23;		HX_STACK_VAR(advance,"advance");
								HX_STACK_LINE(955)
								++(_g1);
								HX_STACK_LINE(955)
								hx::AddEq(width,advance);
							}
						}
						HX_STACK_LINE(955)
						tmp20 = width;
					}
					HX_STACK_LINE(955)
					layoutGroup->width = tmp20;
					HX_STACK_LINE(956)
					layoutGroup->height = heightValue;
					HX_STACK_LINE(957)
					::openfl::_internal::text::TextLayoutGroup tmp21 = layoutGroup;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(957)
					this->layoutGroups->push(tmp21);
					HX_STACK_LINE(959)
					hx::AddEq(offsetX,layoutGroup->width);
					HX_STACK_LINE(961)
					textIndex = formatRange->end;
					HX_STACK_LINE(963)
					{
						HX_STACK_LINE(963)
						int tmp22 = rangeIndex;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(963)
						int tmp23 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(963)
						int tmp24 = (tmp23 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(963)
						bool tmp25 = (tmp22 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(963)
						if ((tmp25)){
							HX_STACK_LINE(963)
							(rangeIndex)++;
							HX_STACK_LINE(963)
							::openfl::_internal::text::TextFormatRange tmp26 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(963)
							formatRange = tmp26;
							HX_STACK_LINE(963)
							::openfl::text::TextFormat tmp27 = formatRange->format;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(963)
							currentFormat->__merge(tmp27);
							HX_STACK_LINE(963)
							::openfl::text::TextFormat tmp28 = currentFormat;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(963)
							::openfl::text::Font tmp29 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(963)
							font = tmp29;
							HX_STACK_LINE(963)
							bool tmp30 = (font != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(963)
							if ((tmp30)){
								HX_STACK_LINE(963)
								int tmp31 = font->get_ascender();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(963)
								int tmp32 = font->get_unitsPerEM();		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(963)
								Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(963)
								Dynamic tmp34 = currentFormat->size;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(963)
								Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(963)
								ascent = tmp35;
								HX_STACK_LINE(963)
								int tmp36 = font->get_descender();		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(963)
								int tmp37 = font->get_unitsPerEM();		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(963)
								Float tmp38 = (Float(tmp36) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(963)
								Dynamic tmp39 = currentFormat->size;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(963)
								Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(963)
								Float tmp41 = ::Math_obj::abs(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(963)
								descent = tmp41;
								HX_STACK_LINE(963)
								leading = currentFormat->leading;
								HX_STACK_LINE(963)
								Float tmp42 = (ascent + descent);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(963)
								int tmp43 = leading;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(963)
								Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(963)
								heightValue = tmp44;
							}
							else{
								HX_STACK_LINE(963)
								ascent = currentFormat->size;
								HX_STACK_LINE(963)
								Float tmp31 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(963)
								descent = tmp31;
								HX_STACK_LINE(963)
								leading = currentFormat->leading;
								HX_STACK_LINE(963)
								Float tmp32 = (ascent + descent);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(963)
								int tmp33 = leading;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(963)
								Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(963)
								heightValue = tmp34;
							}
							HX_STACK_LINE(963)
							bool tmp31 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(963)
							if ((tmp31)){
								HX_STACK_LINE(963)
								Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(963)
								{
									HX_STACK_LINE(963)
									bool tmp33 = (_g->__textLayout == null());		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(963)
									if ((tmp33)){
										HX_STACK_LINE(963)
										::lime::text::TextLayout tmp34 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(963)
										_g->__textLayout = tmp34;
									}
									HX_STACK_LINE(963)
									Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
									HX_STACK_LINE(963)
									_g->__textLayout->set_text(null());
									HX_STACK_LINE(963)
									::lime::text::Font tmp34 = font;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(963)
									_g->__textLayout->set_font(tmp34);
									HX_STACK_LINE(963)
									Dynamic tmp35 = formatRange->format->size;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(963)
									bool tmp36 = (tmp35 != null());		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(963)
									if ((tmp36)){
										HX_STACK_LINE(963)
										Dynamic tmp37 = formatRange->format->size;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(963)
										_g->__textLayout->set_size(tmp37);
									}
									HX_STACK_LINE(963)
									_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
									HX_STACK_LINE(963)
									{
										HX_STACK_LINE(963)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(963)
										Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(963)
										while((true)){
											HX_STACK_LINE(963)
											bool tmp37 = (_g1 < _g2->length);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(963)
											bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(963)
											if ((tmp38)){
												HX_STACK_LINE(963)
												break;
											}
											HX_STACK_LINE(963)
											::lime::text::GlyphPosition tmp39 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(963)
											::lime::text::GlyphPosition position = tmp39;		HX_STACK_VAR(position,"position");
											HX_STACK_LINE(963)
											++(_g1);
											HX_STACK_LINE(963)
											Float tmp40 = position->advance->x;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(963)
											hx::AddEq(width,tmp40);
										}
									}
									HX_STACK_LINE(963)
									tmp32 = width;
								}
								HX_STACK_LINE(963)
								spaceWidth = tmp32;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

Void TextEngine_obj::setTextAlignment( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","setTextAlignment",0xb5caa542,"openfl._internal.text.TextEngine.setTextAlignment","openfl/_internal/text/TextEngine.hx",972,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(974)
		int lineIndex = (int)-1;		HX_STACK_VAR(lineIndex,"lineIndex");
		HX_STACK_LINE(975)
		Float offsetX = ((Float)0.0);		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(976)
		::openfl::_internal::text::TextLayoutGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(976)
		int lineLength;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(978)
		{
			HX_STACK_LINE(978)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(978)
			int tmp = this->layoutGroups->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(978)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(978)
			while((true)){
				HX_STACK_LINE(978)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(978)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(978)
				if ((tmp2)){
					HX_STACK_LINE(978)
					break;
				}
				HX_STACK_LINE(978)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(978)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(980)
				::openfl::_internal::text::TextLayoutGroup tmp4 = this->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(980)
				group = tmp4;
				HX_STACK_LINE(982)
				bool tmp5 = (group->lineIndex != lineIndex);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(982)
				if ((tmp5)){
					HX_STACK_LINE(984)
					lineIndex = group->lineIndex;
					HX_STACK_LINE(986)
					{
						HX_STACK_LINE(986)
						::openfl::text::TextFormatAlign tmp6 = group->format->align;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(986)
						::openfl::text::TextFormatAlign _g2 = tmp6;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(986)
						switch( (int)(_g2->__Index())){
							case (int)3: {
								HX_STACK_LINE(990)
								Float tmp7 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(990)
								Float tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(990)
								Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(990)
								bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(990)
								if ((tmp10)){
									HX_STACK_LINE(992)
									Float tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(992)
									Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(992)
									Float tmp13 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(992)
									Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(992)
									Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(992)
									int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(992)
									offsetX = tmp16;
								}
								else{
									HX_STACK_LINE(996)
									offsetX = (int)0;
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1002)
								Float tmp7 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1002)
								Float tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1002)
								Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1002)
								bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1002)
								if ((tmp10)){
									HX_STACK_LINE(1004)
									Float tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1004)
									Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1004)
									Float tmp13 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1004)
									Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1004)
									int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1004)
									offsetX = tmp15;
								}
								else{
									HX_STACK_LINE(1008)
									offsetX = (int)0;
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1014)
								Float tmp7 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1014)
								Float tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1014)
								Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1014)
								bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1014)
								if ((tmp10)){
									HX_STACK_LINE(1016)
									lineLength = (int)1;
									HX_STACK_LINE(1018)
									{
										HX_STACK_LINE(1018)
										int tmp11 = (i + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1018)
										int _g4 = tmp11;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(1018)
										int tmp12 = this->layoutGroups->length;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1018)
										int _g3 = tmp12;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(1018)
										while((true)){
											HX_STACK_LINE(1018)
											bool tmp13 = (_g4 < _g3);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1018)
											bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1018)
											if ((tmp14)){
												HX_STACK_LINE(1018)
												break;
											}
											HX_STACK_LINE(1018)
											int tmp15 = (_g4)++;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1018)
											int j = tmp15;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(1020)
											::openfl::_internal::text::TextLayoutGroup tmp16 = this->layoutGroups->__get(j).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1020)
											int tmp17 = tmp16->lineIndex;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1020)
											int tmp18 = lineIndex;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1020)
											bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1020)
											if ((tmp19)){
												HX_STACK_LINE(1022)
												(lineLength)++;
											}
											else{
												HX_STACK_LINE(1026)
												break;
											}
										}
									}
									HX_STACK_LINE(1032)
									bool tmp11 = (lineLength > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1032)
									if ((tmp11)){
										HX_STACK_LINE(1034)
										int tmp12 = (i + lineLength);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1034)
										int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1034)
										::openfl::_internal::text::TextLayoutGroup tmp14 = this->layoutGroups->__get(tmp13).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1034)
										group = tmp14;
										HX_STACK_LINE(1036)
										int tmp15 = group->endIndex;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1036)
										::String tmp16 = this->text;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1036)
										int tmp17 = tmp16.length;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1036)
										bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1036)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1036)
										if ((tmp18)){
											HX_STACK_LINE(1036)
											::String tmp20 = this->text;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1036)
											::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1036)
											int tmp22 = group->endIndex;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1036)
											int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1036)
											::String tmp24 = tmp21.charAt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1036)
											::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1036)
											tmp19 = (tmp25 != HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
										}
										else{
											HX_STACK_LINE(1036)
											tmp19 = false;
										}
										HX_STACK_LINE(1036)
										if ((tmp19)){
											HX_STACK_LINE(1038)
											Float tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1038)
											Float tmp21 = (tmp20 - (int)4);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1038)
											Float tmp22 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1038)
											Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1038)
											int tmp24 = (lineLength - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1038)
											Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1038)
											offsetX = tmp25;
											HX_STACK_LINE(1040)
											{
												HX_STACK_LINE(1040)
												int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(1040)
												while((true)){
													HX_STACK_LINE(1040)
													bool tmp26 = (_g3 < lineLength);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1040)
													bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1040)
													if ((tmp27)){
														HX_STACK_LINE(1040)
														break;
													}
													HX_STACK_LINE(1040)
													int tmp28 = (_g3)++;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1040)
													int j = tmp28;		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(1042)
													Float tmp29 = (offsetX * j);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1042)
													int tmp30 = (i + j);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1042)
													::openfl::_internal::text::TextLayoutGroup tmp31 = this->layoutGroups->__get(tmp30).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1042)
													hx::AddEq(tmp31->offsetX,tmp29);
												}
											}
										}
									}
								}
								HX_STACK_LINE(1052)
								offsetX = (int)0;
							}
							;break;
							default: {
								HX_STACK_LINE(1056)
								offsetX = (int)0;
							}
						}
					}
				}
				HX_STACK_LINE(1062)
				bool tmp6 = (offsetX > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1062)
				if ((tmp6)){
					HX_STACK_LINE(1064)
					hx::AddEq(group->offsetX,offsetX);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

Void TextEngine_obj::update( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","update",0x7da66e57,"openfl._internal.text.TextEngine.update","openfl/_internal/text/TextEngine.hx",1073,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1075)
		::String tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1075)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1075)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1075)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1075)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1075)
		if ((tmp3)){
			HX_STACK_LINE(1075)
			::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1075)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1075)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1075)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1075)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1075)
			::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1075)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1075)
			::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1075)
			tmp4 = (tmp12 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(1075)
			tmp4 = true;
		}
		HX_STACK_LINE(1075)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1075)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1075)
		if ((tmp5)){
			HX_STACK_LINE(1075)
			int tmp7 = this->textFormatRanges->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1075)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1075)
			tmp6 = (tmp8 == (int)0);
		}
		else{
			HX_STACK_LINE(1075)
			tmp6 = true;
		}
		HX_STACK_LINE(1075)
		if ((tmp6)){
			HX_STACK_LINE(1077)
			int tmp7 = this->lineAscents->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1077)
			this->lineAscents->splice((int)0,tmp7);
			HX_STACK_LINE(1078)
			int tmp8 = this->lineBreaks->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1078)
			this->lineBreaks->splice((int)0,tmp8);
			HX_STACK_LINE(1079)
			int tmp9 = this->lineDescents->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1079)
			this->lineDescents->splice((int)0,tmp9);
			HX_STACK_LINE(1080)
			int tmp10 = this->lineLeadings->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1080)
			this->lineLeadings->splice((int)0,tmp10);
			HX_STACK_LINE(1081)
			int tmp11 = this->lineHeights->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1081)
			this->lineHeights->splice((int)0,tmp11);
			HX_STACK_LINE(1082)
			int tmp12 = this->lineWidths->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1082)
			this->lineWidths->splice((int)0,tmp12);
			HX_STACK_LINE(1083)
			int tmp13 = this->layoutGroups->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1083)
			this->layoutGroups->splice((int)0,tmp13);
			HX_STACK_LINE(1085)
			this->textWidth = (int)0;
			HX_STACK_LINE(1086)
			this->textHeight = (int)0;
			HX_STACK_LINE(1087)
			this->numLines = (int)1;
			HX_STACK_LINE(1088)
			this->maxScrollH = (int)0;
			HX_STACK_LINE(1089)
			this->maxScrollV = (int)1;
			HX_STACK_LINE(1090)
			this->bottomScrollV = (int)1;
		}
		else{
			HX_STACK_LINE(1094)
			this->getLayoutGroups();
			HX_STACK_LINE(1095)
			this->getLineMeasurements();
			HX_STACK_LINE(1096)
			this->setTextAlignment();
		}
		HX_STACK_LINE(1100)
		this->getBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

::haxe::ds::StringMap TextEngine_obj::__defaultFonts;

::openfl::text::Font TextEngine_obj::findFont( ::String name){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","findFont",0x253a8276,"openfl._internal.text.TextEngine.findFont","openfl/_internal/text/TextEngine.hx",165,0xdff93b7f)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		Array< ::Dynamic > _g1 = ::openfl::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(169)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(169)
			if ((tmp1)){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			::openfl::text::Font tmp2 = _g1->__get(_g).StaticCast< ::openfl::text::Font >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			::openfl::text::Font registeredFont = tmp2;		HX_STACK_VAR(registeredFont,"registeredFont");
			HX_STACK_LINE(169)
			++(_g);
			HX_STACK_LINE(171)
			bool tmp3 = (registeredFont == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			if ((tmp3)){
				HX_STACK_LINE(171)
				continue;
			}
			HX_STACK_LINE(173)
			bool tmp4 = (registeredFont->name == name);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			if ((tmp5)){
				HX_STACK_LINE(173)
				bool tmp7 = (registeredFont->__fontPath != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(173)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					bool tmp10 = (registeredFont->__fontPath == name);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(173)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(173)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					if ((tmp19)){
						HX_STACK_LINE(173)
						tmp6 = (registeredFont->__fontPathWithoutDirectory == name);
					}
					else{
						HX_STACK_LINE(173)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(173)
					tmp6 = false;
				}
			}
			else{
				HX_STACK_LINE(173)
				tmp6 = true;
			}
			HX_STACK_LINE(173)
			if ((tmp6)){
				HX_STACK_LINE(175)
				::openfl::text::Font tmp7 = registeredFont;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(175)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(181)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	::openfl::text::Font tmp1 = ::openfl::text::Font_obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(183)
	bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	if ((tmp2)){
		HX_STACK_LINE(185)
		::openfl::text::Font tmp3 = font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		::openfl::text::Font_obj::__registeredFonts->push(tmp3);
		HX_STACK_LINE(186)
		::openfl::text::Font tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		return tmp4;
	}
	HX_STACK_LINE(192)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getFont",0xec6d6977,"openfl._internal.text.TextEngine.getFont","openfl/_internal/text/TextEngine.hx",207,0xdff93b7f)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(209)
	Dynamic tmp = format->italic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	if ((tmp)){
		HX_STACK_LINE(209)
		tmp1 = HX_HCSTRING("italic ","\x30","\xe3","\x44","\x91");
	}
	else{
		HX_STACK_LINE(209)
		tmp1 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(209)
	::String font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(210)
	hx::AddEq(font,HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b"));
	HX_STACK_LINE(211)
	Dynamic tmp2 = format->bold;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	if ((tmp2)){
		HX_STACK_LINE(211)
		tmp3 = HX_HCSTRING("bold ","\xfb","\xd2","\xf5","\xb6");
	}
	else{
		HX_STACK_LINE(211)
		tmp3 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(211)
	hx::AddEq(font,tmp3);
	HX_STACK_LINE(212)
	::String tmp4 = (format->size + HX_HCSTRING("px","\x08","\x62","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(212)
	hx::AddEq(font,tmp4);
	HX_STACK_LINE(213)
	int tmp5 = (format->size + format->leading);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(213)
	int tmp6 = (tmp5 + (int)6);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(213)
	::String tmp7 = (HX_HCSTRING("/","\x2f","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(213)
	::String tmp8 = (tmp7 + HX_HCSTRING("px ","\x18","\x65","\x55","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(213)
	hx::AddEq(font,tmp8);
	HX_STACK_LINE(215)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		::String _g = format->font;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(215)
		::String tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(215)
		::String _switch_1 = (tmp10);
		if (  ( _switch_1==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
			HX_STACK_LINE(217)
			tmp9 = HX_HCSTRING("sans-serif","\xc3","\x60","\xfb","\x08");
		}
		else if (  ( _switch_1==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			HX_STACK_LINE(218)
			tmp9 = HX_HCSTRING("serif","\x7d","\x1f","\x2e","\x7a");
		}
		else if (  ( _switch_1==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
			HX_STACK_LINE(219)
			tmp9 = HX_HCSTRING("monospace","\xc3","\xd1","\xe5","\x5e");
		}
		else  {
			HX_STACK_LINE(220)
			::String tmp11 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + format->font);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			tmp9 = (tmp11 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
		}
;
;
	}
	HX_STACK_LINE(215)
	::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(215)
	hx::AddEq(font,tmp10);
	HX_STACK_LINE(224)
	::String tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(224)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getFontInstance",0xe749142c,"openfl._internal.text.TextEngine.getFontInstance","openfl/_internal/text/TextEngine.hx",229,0xdff93b7f)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(233)
	::openfl::text::Font instance = null();		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(234)
	Array< ::String > fontList = null();		HX_STACK_VAR(fontList,"fontList");
	HX_STACK_LINE(236)
	bool tmp = (format != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	if ((tmp)){
		HX_STACK_LINE(236)
		tmp1 = (format->font != null());
	}
	else{
		HX_STACK_LINE(236)
		tmp1 = false;
	}
	HX_STACK_LINE(236)
	if ((tmp1)){
		HX_STACK_LINE(238)
		::haxe::ds::StringMap tmp2 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		::String tmp3 = format->font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		if ((tmp4)){
			HX_STACK_LINE(240)
			::haxe::ds::StringMap tmp5 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			::String tmp6 = format->font;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			::openfl::text::Font tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(240)
			::openfl::text::Font tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(240)
			return tmp8;
		}
		HX_STACK_LINE(244)
		::String tmp5 = format->font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		::openfl::text::Font tmp6 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(244)
		instance = tmp6;
		HX_STACK_LINE(245)
		bool tmp7 = (instance != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		if ((tmp7)){
			HX_STACK_LINE(245)
			::openfl::text::Font tmp8 = instance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			return tmp8;
		}
		HX_STACK_LINE(247)
		::String tmp8 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(247)
		::String systemFontDirectory = tmp8;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			::String _g = format->font;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(249)
			::String tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(249)
			::String _switch_2 = (tmp9);
			if (  ( _switch_2==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
				HX_STACK_LINE(280)
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/Arial Black.ttf","\x0b","\xb8","\xa6","\x98"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(280)
				::String tmp11 = (systemFontDirectory + HX_HCSTRING("/Arial.ttf","\x0c","\x14","\x61","\x7a"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(280)
				::String tmp12 = (systemFontDirectory + HX_HCSTRING("/Helvetica.ttf","\x5a","\x6c","\xff","\x0c"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(280)
				fontList = Array_obj< ::String >::__new().Add(tmp10).Add(tmp11).Add(tmp12);
			}
			else if (  ( _switch_2==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			}
			else if (  ( _switch_2==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
				HX_STACK_LINE(322)
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/Courier New.ttf","\xd6","\xe1","\x80","\xa0"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(322)
				::String tmp11 = (systemFontDirectory + HX_HCSTRING("/Courier.ttf","\xb6","\x7e","\x38","\x40"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(322)
				fontList = Array_obj< ::String >::__new().Add(tmp10).Add(tmp11);
			}
			else  {
				HX_STACK_LINE(333)
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(333)
				::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(333)
				::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(333)
				fontList = Array_obj< ::String >::__new().Add(tmp12);
			}
;
;
		}
		HX_STACK_LINE(350)
		bool tmp9 = (fontList != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(350)
		if ((tmp9)){
			HX_STACK_LINE(352)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(352)
			while((true)){
				HX_STACK_LINE(352)
				bool tmp10 = (_g < fontList->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(352)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(352)
				if ((tmp11)){
					HX_STACK_LINE(352)
					break;
				}
				HX_STACK_LINE(352)
				::String tmp12 = fontList->__get(_g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(352)
				::String font = tmp12;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(352)
				++(_g);
				HX_STACK_LINE(354)
				::String tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(354)
				::openfl::text::Font tmp14 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(354)
				instance = tmp14;
				HX_STACK_LINE(356)
				bool tmp15 = (instance != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(356)
				if ((tmp15)){
					HX_STACK_LINE(358)
					::haxe::ds::StringMap tmp16 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(358)
					::String tmp17 = format->font;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(358)
					::openfl::text::Font tmp18 = instance;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(358)
					tmp16->set(tmp17,tmp18);
					HX_STACK_LINE(359)
					::openfl::text::Font tmp19 = instance;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(359)
					return tmp19;
				}
			}
		}
		HX_STACK_LINE(367)
		::openfl::text::Font tmp10 = ::openfl::_internal::text::TextEngine_obj::findFont(HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(367)
		instance = tmp10;
		HX_STACK_LINE(368)
		bool tmp11 = (instance != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(368)
		if ((tmp11)){
			HX_STACK_LINE(368)
			::openfl::text::Font tmp12 = instance;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(368)
			return tmp12;
		}
	}
	HX_STACK_LINE(372)
	::String tmp2 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(372)
	::String systemFontDirectory = tmp2;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
	HX_STACK_LINE(401)
	::String tmp3 = (systemFontDirectory + HX_HCSTRING("/Georgia.ttf","\x67","\xae","\x93","\x4b"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(401)
	::String tmp4 = (systemFontDirectory + HX_HCSTRING("/Times.ttf","\x0f","\x38","\x17","\x67"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(401)
	::String tmp5 = (systemFontDirectory + HX_HCSTRING("/Times New Roman.ttf","\x2c","\xb8","\x6d","\x0c"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(401)
	fontList = Array_obj< ::String >::__new().Add(tmp3).Add(tmp4).Add(tmp5);
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		while((true)){
			HX_STACK_LINE(412)
			bool tmp6 = (_g < fontList->length);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(412)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(412)
			if ((tmp7)){
				HX_STACK_LINE(412)
				break;
			}
			HX_STACK_LINE(412)
			::String tmp8 = fontList->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(412)
			::String font = tmp8;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(412)
			++(_g);
			HX_STACK_LINE(414)
			::String tmp9 = font;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(414)
			::openfl::text::Font tmp10 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(414)
			instance = tmp10;
			HX_STACK_LINE(416)
			bool tmp11 = (instance != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			if ((tmp11)){
				HX_STACK_LINE(418)
				::haxe::ds::StringMap tmp12 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(418)
				::String tmp13 = format->font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(418)
				::openfl::text::Font tmp14 = instance;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(418)
				tmp12->set(tmp13,tmp14);
				HX_STACK_LINE(419)
				::openfl::text::Font tmp15 = instance;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(419)
				return tmp15;
			}
		}
	}
	HX_STACK_LINE(425)
	::haxe::ds::StringMap tmp6 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(425)
	::String tmp7 = format->font;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(425)
	tmp6->set(tmp7,null());
	HX_STACK_LINE(429)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(__textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__tileData,"__tileData");
	HX_MARK_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_MARK_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_MARK_MEMBER_NAME(__cairoFont,"__cairoFont");
	HX_MARK_MEMBER_NAME(__font,"__font");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(__textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__tileData,"__tileData");
	HX_VISIT_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_VISIT_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_VISIT_MEMBER_NAME(__cairoFont,"__cairoFont");
	HX_VISIT_MEMBER_NAME(__font,"__font");
}

Dynamic TextEngine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"__font") ) { return __font; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return scrollH; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return scrollV; }
		if (HX_FIELD_EQ(inName,"getLine") ) { return getLine_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return maxChars; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return numLines; }
		if (HX_FIELD_EQ(inName,"restrict") ) { return restrict; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return multiline; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"textField") ) { return textField; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return embedFonts; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return lineBreaks; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return lineWidths; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return selectable; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return __hasFocus; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { return __tileData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return lineAscents; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return lineHeights; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return __isKeyDown; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return __cairoFont; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return layoutGroups; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return lineDescents; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return lineLeadings; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return __textLayout; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { return __tilesheets; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return bottomScrollV; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return __measuredWidth; }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return getLayoutGroups_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return textFormatRanges; }
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { return __cursorPosition; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return __measuredHeight; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return __selectionStart; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { return __tileDataLength; }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return setTextAlignment_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return displayAsPassword; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return getLineMeasurements_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = __defaultFonts; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true;  }
	}
	return false;
}

Dynamic TextEngine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::text::TextFieldType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__font") ) { __font=inValue.Cast< ::openfl::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast< ::openfl::text::TextFieldAutoSize >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { __hasFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { __tileData=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< ::openfl::text::GridFitType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { __isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { __cairoFont=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { __textLayout=inValue.Cast< ::lime::text::TextLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { __tilesheets=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< ::openfl::text::AntiAliasType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { __measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { __cursorPosition=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { __measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { __selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { __tileDataLength=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { displayAsPassword=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { __defaultFonts=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"));
	outFields->push(HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"));
	outFields->push(HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"));
	outFields->push(HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"));
	outFields->push(HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"));
	outFields->push(HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"));
	outFields->push(HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"));
	outFields->push(HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"));
	outFields->push(HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"));
	outFields->push(HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"));
	outFields->push(HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"));
	outFields->push(HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	outFields->push(HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__tileData","\x98","\xef","\xa1","\x1f"));
	outFields->push(HX_HCSTRING("__tileDataLength","\x9e","\xba","\x99","\x1c"));
	outFields->push(HX_HCSTRING("__tilesheets","\xc2","\x45","\x5c","\x88"));
	outFields->push(HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"));
	outFields->push(HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::AntiAliasType*/ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7")},
	{hx::fsObject /*::openfl::text::TextFieldAutoSize*/ ,(int)offsetof(TextEngine_obj,autoSize),HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextEngine_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,displayAsPassword),HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e")},
	{hx::fsObject /*::openfl::text::GridFitType*/ ,(int)offsetof(TextEngine_obj,gridFitType),HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineAscents),HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineDescents),HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineHeights),HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineWidths),HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b")},
	{hx::fsString,(int)offsetof(TextEngine_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsObject /*::openfl::text::TextFieldType*/ ,(int)offsetof(TextEngine_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(TextEngine_obj,textField),HX_HCSTRING("textField","\xcd","\x24","\x81","\x99")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__cursorPosition),HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextEngine_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__hasFocus),HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__isKeyDown),HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredHeight),HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredWidth),HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__selectionStart),HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextEngine_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{hx::fsObject /*::lime::text::TextLayout*/ ,(int)offsetof(TextEngine_obj,__textLayout),HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(TextEngine_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextEngine_obj,__tileData),HX_HCSTRING("__tileData","\x98","\xef","\xa1","\x1f")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextEngine_obj,__tileDataLength),HX_HCSTRING("__tileDataLength","\x9e","\xba","\x99","\x1c")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextEngine_obj,__tilesheets),HX_HCSTRING("__tilesheets","\xc2","\x45","\x5c","\x88")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,__cairoFont),HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28")},
	{hx::fsObject /*::openfl::text::Font*/ ,(int)offsetof(TextEngine_obj,__font),HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &TextEngine_obj::__defaultFonts,HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"),
	HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"),
	HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"),
	HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"),
	HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"),
	HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"),
	HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"),
	HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"),
	HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"),
	HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"),
	HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"),
	HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"),
	HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"),
	HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"),
	HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"),
	HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"),
	HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"),
	HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"),
	HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"),
	HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"),
	HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"),
	HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"),
	HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__tileData","\x98","\xef","\xa1","\x1f"),
	HX_HCSTRING("__tileDataLength","\x9e","\xba","\x99","\x1c"),
	HX_HCSTRING("__tilesheets","\xc2","\x45","\x5c","\x88"),
	HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"),
	HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getLine","\xaa","\xc7","\x35","\x1a"),
	HX_HCSTRING("getLineMeasurements","\xc1","\x9f","\x81","\x56"),
	HX_HCSTRING("getLayoutGroups","\x54","\xf8","\x56","\x5a"),
	HX_HCSTRING("setTextAlignment","\x74","\x0f","\x33","\x62"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#endif

hx::Class TextEngine_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d"),
	HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf"),
	HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7"),
	HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf"),
	HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda"),
	HX_HCSTRING("findFont","\xa8","\x6a","\x54","\x96"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getFontInstance","\x3a","\x76","\x96","\x9e"),
	::String(null()) };

void TextEngine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.TextEngine","\x60","\x7a","\x88","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEngine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void TextEngine_obj::__boot()
{
	UTF8_TAB= (int)9;
	UTF8_ENDLINE= (int)10;
	UTF8_SPACE= (int)32;
	UTF8_HYPHEN= (int)45;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/text/TextEngine.hx",51,0xdff93b7f)
		{
			HX_STACK_LINE(51)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			return tmp1;
		}
		return null();
	}
};
	__defaultFonts= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text

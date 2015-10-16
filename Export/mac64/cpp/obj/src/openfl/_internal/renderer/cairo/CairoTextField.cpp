#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoTextField_obj::__construct()
{
	return null();
}

//CairoTextField_obj::~CairoTextField_obj() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return  new CairoTextField_obj; }
hx::ObjectPtr< CairoTextField_obj > CairoTextField_obj::__new()
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Void CairoTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","render",0xabb9797e,"openfl._internal.renderer.cairo.CairoTextField.render","openfl/_internal/renderer/cairo/CairoTextField.hx",27,0xfadfb778)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(30)
		bool tmp = textField->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		if ((tmp1)){
			HX_STACK_LINE(30)
			return null();
		}
		HX_STACK_LINE(32)
		textField->__updateLayout();
		HX_STACK_LINE(34)
		::openfl::_internal::text::TextEngine textEngine = textField->__textEngine;		HX_STACK_VAR(textEngine,"textEngine");
		HX_STACK_LINE(35)
		::openfl::geom::Rectangle bounds = textEngine->bounds;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(37)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(38)
		::lime::graphics::cairo::Cairo cairo = graphics->__cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(40)
		bool tmp2 = (cairo != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		if ((tmp2)){
			HX_STACK_LINE(42)
			Dynamic tmp3 = cairo->get_target();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			Dynamic surface = tmp3;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(44)
			Float tmp4 = bounds->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			int tmp5 = ::Math_obj::ceil(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			Dynamic tmp6 = surface;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			int tmp7 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(44)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(44)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(44)
			if ((tmp9)){
				HX_STACK_LINE(44)
				Float tmp11 = bounds->height;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(44)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(44)
				int tmp13 = ::Math_obj::ceil(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(44)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(44)
				Dynamic tmp15 = surface;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(44)
				Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(44)
				int tmp17 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(44)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(44)
				tmp10 = (tmp14 != tmp18);
			}
			else{
				HX_STACK_LINE(44)
				tmp10 = true;
			}
			HX_STACK_LINE(44)
			if ((tmp10)){
				HX_STACK_LINE(46)
				graphics->__cairo = null();
				HX_STACK_LINE(47)
				cairo = null();
			}
		}
		HX_STACK_LINE(53)
		bool tmp3 = (bounds->width <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		if ((tmp4)){
			HX_STACK_LINE(53)
			tmp5 = (bounds->height <= (int)0);
		}
		else{
			HX_STACK_LINE(53)
			tmp5 = true;
		}
		HX_STACK_LINE(53)
		if ((tmp5)){
			HX_STACK_LINE(53)
			return null();
		}
		HX_STACK_LINE(55)
		bool tmp6 = (cairo == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		if ((tmp6)){
			HX_STACK_LINE(57)
			Float tmp7 = bounds->width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			int tmp8 = ::Math_obj::ceil(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(57)
			Float tmp9 = bounds->height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(57)
			int tmp10 = ::Math_obj::ceil(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(57)
			::openfl::display::BitmapData tmp11 = ::openfl::display::BitmapData_obj::__new(tmp8,tmp10,true,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(57)
			::openfl::display::BitmapData bitmap = tmp11;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(58)
			Dynamic tmp12 = bitmap->getSurface();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(58)
			Dynamic surface = tmp12;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(59)
			::lime::graphics::cairo::Cairo tmp13 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(59)
			graphics->__cairo = tmp13;
			HX_STACK_LINE(61)
			graphics->__bitmap = bitmap;
			HX_STACK_LINE(62)
			::openfl::geom::Rectangle tmp14 = ::openfl::geom::Rectangle_obj::__new(bounds->x,bounds->y,bounds->width,bounds->height);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(62)
			graphics->__bounds = tmp14;
			HX_STACK_LINE(64)
			cairo = graphics->__cairo;
			HX_STACK_LINE(66)
			Dynamic tmp15 = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(66)
			Dynamic options = tmp15;		HX_STACK_VAR(options,"options");
			HX_STACK_LINE(68)
			bool tmp16 = (textEngine->antiAliasType == ::openfl::text::AntiAliasType_obj::ADVANCED);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(68)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(68)
			if ((tmp16)){
				HX_STACK_LINE(68)
				tmp17 = (textEngine->gridFitType == ::openfl::text::GridFitType_obj::PIXEL);
			}
			else{
				HX_STACK_LINE(68)
				tmp17 = false;
			}
			HX_STACK_LINE(68)
			if ((tmp17)){
				HX_STACK_LINE(70)
				Dynamic tmp18 = options;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(70)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(tmp18,(int)1);
				HX_STACK_LINE(71)
				Dynamic tmp19 = options;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(71)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(tmp19,(int)1);
				HX_STACK_LINE(72)
				Dynamic tmp20 = options;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(72)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(tmp20,(int)1);
			}
			else{
				HX_STACK_LINE(76)
				Dynamic tmp18 = options;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(76)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(tmp18,(int)0);
				HX_STACK_LINE(77)
				Dynamic tmp19 = options;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(77)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(tmp19,(int)1);
				HX_STACK_LINE(78)
				Dynamic tmp20 = options;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(78)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(tmp20,(int)5);
			}
			HX_STACK_LINE(82)
			Dynamic tmp18 = options;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(82)
			cairo->set_fontOptions(tmp18);
		}
		HX_STACK_LINE(86)
		bool tmp7 = textEngine->border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(86)
		if ((tmp7)){
			HX_STACK_LINE(88)
			Float tmp8 = (bounds->width - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(88)
			Float tmp10 = (bounds->height - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(88)
			cairo->rectangle(((Float)0.5),((Float)0.5),tmp9,tmp11);
		}
		else{
			HX_STACK_LINE(92)
			Float tmp8 = bounds->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(92)
			Float tmp9 = bounds->height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(92)
			cairo->rectangle((int)0,(int)0,tmp8,tmp9);
		}
		HX_STACK_LINE(96)
		bool tmp8 = textEngine->background;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		if ((tmp9)){
			HX_STACK_LINE(98)
			cairo->set_operator((int)0);
			HX_STACK_LINE(99)
			cairo->paint();
			HX_STACK_LINE(100)
			cairo->set_operator((int)2);
		}
		else{
			HX_STACK_LINE(104)
			int color = textEngine->backgroundColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(105)
			int tmp10 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			int tmp11 = hx::UShr(tmp10,(int)16);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(105)
			Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(105)
			Float r = tmp12;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(106)
			int tmp13 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(106)
			int tmp14 = hx::UShr(tmp13,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(106)
			Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(106)
			Float g = tmp15;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(107)
			int tmp16 = (int(color) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(107)
			Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(107)
			Float b = tmp17;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(109)
			Float tmp18 = r;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(109)
			Float tmp19 = g;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(109)
			Float tmp20 = b;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(109)
			cairo->setSourceRGB(tmp18,tmp19,tmp20);
			HX_STACK_LINE(110)
			cairo->fillPreserve();
		}
		HX_STACK_LINE(114)
		bool tmp10 = textEngine->border;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(114)
		if ((tmp10)){
			HX_STACK_LINE(116)
			int color = textEngine->borderColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(117)
			int tmp11 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			int tmp12 = hx::UShr(tmp11,(int)16);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(117)
			Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(117)
			Float r = tmp13;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(118)
			int tmp14 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(118)
			int tmp15 = hx::UShr(tmp14,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(118)
			Float tmp16 = (Float(tmp15) / Float((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(118)
			Float g = tmp16;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(119)
			int tmp17 = (int(color) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(119)
			Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(119)
			Float b = tmp18;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(121)
			Float tmp19 = r;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(121)
			Float tmp20 = g;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(121)
			Float tmp21 = b;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(121)
			cairo->setSourceRGB(tmp19,tmp20,tmp21);
			HX_STACK_LINE(122)
			cairo->set_lineWidth((int)1);
			HX_STACK_LINE(123)
			cairo->stroke();
		}
		HX_STACK_LINE(127)
		bool tmp11 = (textEngine->text != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(127)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(127)
		if ((tmp11)){
			HX_STACK_LINE(127)
			tmp12 = (textEngine->text != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(127)
			tmp12 = false;
		}
		HX_STACK_LINE(127)
		if ((tmp12)){
			HX_STACK_LINE(129)
			Float tmp13 = bounds->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			bool tmp14 = textField->get_border();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(129)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(129)
			if ((tmp14)){
				HX_STACK_LINE(129)
				tmp15 = (int)1;
			}
			else{
				HX_STACK_LINE(129)
				tmp15 = (int)0;
			}
			HX_STACK_LINE(129)
			Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(129)
			Float tmp17 = bounds->height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(129)
			bool tmp18 = textField->get_border();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(129)
			int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(129)
			if ((tmp18)){
				HX_STACK_LINE(129)
				tmp19 = (int)1;
			}
			else{
				HX_STACK_LINE(129)
				tmp19 = (int)0;
			}
			HX_STACK_LINE(129)
			Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(129)
			cairo->rectangle((int)0,(int)0,tmp16,tmp20);
			HX_STACK_LINE(130)
			cairo->clip();
			HX_STACK_LINE(132)
			::String text = textEngine->text;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(149)
			int tmp21 = textField->get_scrollH();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(149)
			int tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(149)
			int scrollX = tmp22;		HX_STACK_VAR(scrollX,"scrollX");
			HX_STACK_LINE(150)
			Float scrollY = ((Float)0.0);		HX_STACK_VAR(scrollY,"scrollY");
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(152)
				int tmp23 = textField->get_scrollV();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(152)
				int tmp24 = (tmp23 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(152)
				int _g = tmp24;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(152)
				while((true)){
					HX_STACK_LINE(152)
					bool tmp25 = (_g1 < _g);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(152)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(152)
					if ((tmp26)){
						HX_STACK_LINE(152)
						break;
					}
					HX_STACK_LINE(152)
					int tmp27 = (_g1)++;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(152)
					int i = tmp27;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(154)
					Float tmp28 = textEngine->lineHeights->__get(i);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(154)
					hx::SubEq(scrollY,tmp28);
				}
			}
			HX_STACK_LINE(158)
			Dynamic color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(158)
			Float r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(158)
			Float g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(158)
			Float b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(158)
			::openfl::text::Font font;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(158)
			int size;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(158)
			Float advance;		HX_STACK_VAR(advance,"advance");
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(160)
				Array< ::Dynamic > _g1 = textEngine->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(160)
				while((true)){
					HX_STACK_LINE(160)
					bool tmp23 = (_g < _g1->length);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(160)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(160)
					if ((tmp24)){
						HX_STACK_LINE(160)
						break;
					}
					HX_STACK_LINE(160)
					::openfl::_internal::text::TextLayoutGroup tmp25 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(160)
					::openfl::_internal::text::TextLayoutGroup group = tmp25;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(160)
					++(_g);
					HX_STACK_LINE(162)
					int tmp26 = group->lineIndex;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(162)
					int tmp27 = textField->get_scrollV();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(162)
					int tmp28 = (tmp27 - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(162)
					bool tmp29 = (tmp26 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(162)
					if ((tmp29)){
						HX_STACK_LINE(162)
						continue;
					}
					HX_STACK_LINE(163)
					int tmp30 = group->lineIndex;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(163)
					int tmp31 = textField->get_scrollV();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(163)
					int tmp32 = textEngine->bottomScrollV;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(163)
					int tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(163)
					int tmp34 = (tmp33 - (int)2);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(163)
					bool tmp35 = (tmp30 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(163)
					if ((tmp35)){
						HX_STACK_LINE(163)
						break;
					}
					HX_STACK_LINE(165)
					Dynamic tmp36 = group->format->color;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(165)
					color = tmp36;
					HX_STACK_LINE(166)
					int tmp37 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(166)
					int tmp38 = hx::UShr(tmp37,(int)16);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(166)
					Float tmp39 = (Float(tmp38) / Float((int)255));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(166)
					r = tmp39;
					HX_STACK_LINE(167)
					int tmp40 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(167)
					int tmp41 = hx::UShr(tmp40,(int)8);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(167)
					Float tmp42 = (Float(tmp41) / Float((int)255));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(167)
					g = tmp42;
					HX_STACK_LINE(168)
					int tmp43 = (int(color) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(168)
					Float tmp44 = (Float(tmp43) / Float((int)255));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(168)
					b = tmp44;
					HX_STACK_LINE(170)
					Float tmp45 = r;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(170)
					Float tmp46 = g;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(170)
					Float tmp47 = b;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(170)
					cairo->setSourceRGB(tmp45,tmp46,tmp47);
					HX_STACK_LINE(172)
					::openfl::text::TextFormat tmp48 = group->format;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(172)
					::openfl::text::Font tmp49 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(172)
					font = tmp49;
					HX_STACK_LINE(174)
					bool tmp50 = (font != null());		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(174)
					bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(174)
					if ((tmp50)){
						HX_STACK_LINE(174)
						Dynamic tmp52 = group->format->size;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(174)
						Dynamic tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(174)
						tmp51 = (tmp53 != null());
					}
					else{
						HX_STACK_LINE(174)
						tmp51 = false;
					}
					HX_STACK_LINE(174)
					if ((tmp51)){
						HX_STACK_LINE(176)
						bool tmp52 = (textEngine->__cairoFont != null());		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(176)
						if ((tmp52)){
							HX_STACK_LINE(178)
							bool tmp53 = (textEngine->__font != font);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(178)
							if ((tmp53)){
								HX_STACK_LINE(180)
								textEngine->__cairoFont = null();
							}
						}
						HX_STACK_LINE(186)
						bool tmp53 = (textEngine->__cairoFont == null());		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(186)
						if ((tmp53)){
							HX_STACK_LINE(188)
							textEngine->__font = font;
							HX_STACK_LINE(189)
							::openfl::text::Font tmp54 = font;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(189)
							Dynamic tmp55 = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(tmp54,(int)0);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(189)
							textEngine->__cairoFont = tmp55;
						}
						HX_STACK_LINE(193)
						Dynamic tmp54 = textEngine->__cairoFont;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(193)
						cairo->set_fontFace(tmp54);
						HX_STACK_LINE(195)
						Dynamic tmp55 = group->format->size;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(195)
						int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(195)
						size = tmp56;
						HX_STACK_LINE(196)
						int tmp57 = size;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(196)
						cairo->setFontSize(tmp57);
						HX_STACK_LINE(198)
						Float tmp58 = (group->offsetX + scrollX);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(198)
						Float tmp59 = (group->offsetY + group->ascent);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(198)
						Float tmp60 = scrollY;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(198)
						Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(198)
						cairo->moveTo(tmp58,tmp61);
						HX_STACK_LINE(199)
						int tmp62 = group->startIndex;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(199)
						int tmp63 = group->endIndex;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(199)
						::String tmp64 = text.substring(tmp62,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(199)
						cairo->showText(tmp64);
						HX_STACK_LINE(201)
						int tmp65 = textField->__caretIndex;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(201)
						int tmp66 = (int)-1;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(201)
						bool tmp67 = (tmp65 > tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(201)
						bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(201)
						if ((tmp67)){
							HX_STACK_LINE(201)
							tmp68 = textEngine->selectable;
						}
						else{
							HX_STACK_LINE(201)
							tmp68 = false;
						}
						HX_STACK_LINE(201)
						if ((tmp68)){
							HX_STACK_LINE(203)
							bool tmp69 = (textField->__selectionIndex == textField->__caretIndex);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(203)
							if ((tmp69)){
								HX_STACK_LINE(205)
								bool tmp70 = textField->__showCursor;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(205)
								bool tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(205)
								bool tmp72;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(205)
								if ((tmp71)){
									HX_STACK_LINE(205)
									tmp72 = (group->startIndex <= textField->__caretIndex);
								}
								else{
									HX_STACK_LINE(205)
									tmp72 = false;
								}
								HX_STACK_LINE(205)
								bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(205)
								if ((tmp72)){
									HX_STACK_LINE(205)
									tmp73 = (group->endIndex >= textField->__caretIndex);
								}
								else{
									HX_STACK_LINE(205)
									tmp73 = false;
								}
								HX_STACK_LINE(205)
								if ((tmp73)){
									HX_STACK_LINE(207)
									advance = ((Float)0.0);
									HX_STACK_LINE(209)
									{
										HX_STACK_LINE(209)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(209)
										int tmp74 = (textField->__caretIndex - group->startIndex);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(209)
										int _g2 = tmp74;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(209)
										while((true)){
											HX_STACK_LINE(209)
											bool tmp75 = (_g3 < _g2);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(209)
											bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(209)
											if ((tmp76)){
												HX_STACK_LINE(209)
												break;
											}
											HX_STACK_LINE(209)
											int tmp77 = (_g3)++;		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(209)
											int i = tmp77;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(211)
											int tmp78 = group->advances->length;		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(211)
											int tmp79 = i;		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(211)
											bool tmp80 = (tmp78 <= tmp79);		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(211)
											if ((tmp80)){
												HX_STACK_LINE(211)
												break;
											}
											HX_STACK_LINE(212)
											Float tmp81 = group->advances->__get(i);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(212)
											hx::AddEq(advance,tmp81);
										}
									}
									HX_STACK_LINE(216)
									Float tmp74 = (group->offsetX + advance);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(216)
									int tmp75 = ::Math_obj::floor(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(216)
									Float tmp76 = (tmp75 + ((Float)0.5));		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(216)
									Float tmp77 = (group->offsetY + ((Float)0.5));		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(216)
									cairo->moveTo(tmp76,tmp77);
									HX_STACK_LINE(217)
									cairo->set_lineWidth((int)1);
									HX_STACK_LINE(218)
									Float tmp78 = (group->offsetX + advance);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(218)
									int tmp79 = ::Math_obj::floor(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(218)
									Float tmp80 = (tmp79 + ((Float)0.5));		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(218)
									Float tmp81 = (group->offsetY + group->height);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(218)
									Float tmp82 = (tmp81 - (int)1);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(218)
									cairo->lineTo(tmp80,tmp82);
									HX_STACK_LINE(219)
									cairo->stroke();
								}
							}
							else{
								HX_STACK_LINE(223)
								bool tmp70 = (group->startIndex <= textField->__caretIndex);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(223)
								bool tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(223)
								bool tmp72;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(223)
								if ((tmp71)){
									HX_STACK_LINE(223)
									tmp72 = (group->endIndex >= textField->__caretIndex);
								}
								else{
									HX_STACK_LINE(223)
									tmp72 = false;
								}
								HX_STACK_LINE(223)
								bool tmp73 = !(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(223)
								bool tmp74;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(223)
								if ((tmp73)){
									HX_STACK_LINE(223)
									bool tmp75 = (group->startIndex <= textField->__selectionIndex);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(223)
									bool tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(223)
									bool tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(223)
									if ((tmp77)){
										HX_STACK_LINE(223)
										tmp74 = (group->endIndex >= textField->__selectionIndex);
									}
									else{
										HX_STACK_LINE(223)
										tmp74 = false;
									}
								}
								else{
									HX_STACK_LINE(223)
									tmp74 = true;
								}
								HX_STACK_LINE(223)
								if ((tmp74)){
									HX_STACK_LINE(225)
									int tmp75 = textField->__selectionIndex;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(225)
									int tmp76 = textField->__caretIndex;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(225)
									Float tmp77 = ::Math_obj::min(tmp75,tmp76);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(225)
									int tmp78 = ::Std_obj::_int(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(225)
									int selectionStart = tmp78;		HX_STACK_VAR(selectionStart,"selectionStart");
									HX_STACK_LINE(226)
									int tmp79 = textField->__selectionIndex;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(226)
									int tmp80 = textField->__caretIndex;		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(226)
									Float tmp81 = ::Math_obj::max(tmp79,tmp80);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(226)
									int tmp82 = ::Std_obj::_int(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(226)
									int selectionEnd = tmp82;		HX_STACK_VAR(selectionEnd,"selectionEnd");
									HX_STACK_LINE(228)
									bool tmp83 = (group->startIndex > selectionStart);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(228)
									if ((tmp83)){
										HX_STACK_LINE(230)
										selectionStart = group->startIndex;
									}
									HX_STACK_LINE(234)
									bool tmp84 = (group->endIndex < selectionEnd);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(234)
									if ((tmp84)){
										HX_STACK_LINE(236)
										selectionEnd = group->endIndex;
									}
									HX_STACK_LINE(240)
									::openfl::geom::Rectangle start;		HX_STACK_VAR(start,"start");
									HX_STACK_LINE(240)
									::openfl::geom::Rectangle end;		HX_STACK_VAR(end,"end");
									HX_STACK_LINE(242)
									int tmp85 = selectionStart;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(242)
									::openfl::geom::Rectangle tmp86 = textField->getCharBoundaries(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(242)
									start = tmp86;
									HX_STACK_LINE(244)
									int tmp87 = selectionEnd;		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(244)
									int tmp88 = textEngine->text.length;		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(244)
									bool tmp89 = (tmp87 >= tmp88);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(244)
									if ((tmp89)){
										HX_STACK_LINE(246)
										int tmp90 = textEngine->text.length;		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(246)
										int tmp91 = (tmp90 - (int)1);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(246)
										::openfl::geom::Rectangle tmp92 = textField->getCharBoundaries(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(246)
										end = tmp92;
										HX_STACK_LINE(247)
										Float tmp93 = (end->width + (int)2);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(247)
										hx::AddEq(end->x,tmp93);
									}
									else{
										HX_STACK_LINE(251)
										int tmp90 = selectionEnd;		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(251)
										::openfl::geom::Rectangle tmp91 = textField->getCharBoundaries(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(251)
										end = tmp91;
									}
									HX_STACK_LINE(255)
									bool tmp90 = (start != null());		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(255)
									bool tmp91;		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(255)
									if ((tmp90)){
										HX_STACK_LINE(255)
										tmp91 = (end != null());
									}
									else{
										HX_STACK_LINE(255)
										tmp91 = false;
									}
									HX_STACK_LINE(255)
									if ((tmp91)){
										HX_STACK_LINE(257)
										cairo->setSourceRGB((int)0,(int)0,(int)0);
										HX_STACK_LINE(258)
										Float tmp92 = start->x;		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(258)
										Float tmp93 = start->y;		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(258)
										Float tmp94 = (end->x - start->x);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(258)
										Float tmp95 = group->height;		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(258)
										cairo->rectangle(tmp92,tmp93,tmp94,tmp95);
										HX_STACK_LINE(259)
										cairo->fill();
										HX_STACK_LINE(260)
										cairo->setSourceRGB((int)1,(int)1,(int)1);
										HX_STACK_LINE(264)
										Float tmp96 = (scrollX + start->x);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(264)
										Float tmp97 = (group->offsetY + group->ascent);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(264)
										Float tmp98 = scrollY;		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(264)
										Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(264)
										cairo->moveTo(tmp96,tmp99);
										HX_STACK_LINE(265)
										int tmp100 = selectionStart;		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(265)
										int tmp101 = selectionEnd;		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(265)
										::String tmp102 = text.substring(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(265)
										cairo->showText(tmp102);
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(279)
		::lime::graphics::Image tmp13 = graphics->__bitmap->image;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(279)
		tmp13->dirty = true;
		HX_STACK_LINE(280)
		textField->__dirty = false;
		HX_STACK_LINE(281)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,render,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoTextField","\x46","\x1d","\x84","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoTextField_obj >;
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

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

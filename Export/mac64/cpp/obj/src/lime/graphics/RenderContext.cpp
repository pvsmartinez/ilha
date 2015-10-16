#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#include <lime/graphics/ConsoleRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_FlashRenderContext
#include <lime/graphics/FlashRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
namespace lime{
namespace graphics{

::lime::graphics::RenderContext  RenderContext_obj::CAIRO(::lime::graphics::cairo::Cairo cairo)
	{ return hx::CreateEnum< RenderContext_obj >(HX_HCSTRING("CAIRO","\x68","\x68","\x07","\xbf"),4,hx::DynamicArray(0,1).Add(cairo)); }

::lime::graphics::RenderContext  RenderContext_obj::CANVAS(::lime::graphics::CanvasRenderContext context)
	{ return hx::CreateEnum< RenderContext_obj >(HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a"),1,hx::DynamicArray(0,1).Add(context)); }

::lime::graphics::RenderContext  RenderContext_obj::CONSOLE(::lime::graphics::ConsoleRenderContext context)
	{ return hx::CreateEnum< RenderContext_obj >(HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98"),5,hx::DynamicArray(0,1).Add(context)); }

::lime::graphics::RenderContext  RenderContext_obj::CUSTOM(Dynamic data)
	{ return hx::CreateEnum< RenderContext_obj >(HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),6,hx::DynamicArray(0,1).Add(data)); }

::lime::graphics::RenderContext  RenderContext_obj::DOM(::lime::graphics::DOMRenderContext element)
	{ return hx::CreateEnum< RenderContext_obj >(HX_HCSTRING("DOM","\x62","\xde","\x33","\x00"),2,hx::DynamicArray(0,1).Add(element)); }

::lime::graphics::RenderContext  RenderContext_obj::FLASH(::lime::graphics::FlashRenderContext stage)
	{ return hx::CreateEnum< RenderContext_obj >(HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80"),3,hx::DynamicArray(0,1).Add(stage)); }

::lime::graphics::RenderContext RenderContext_obj::NONE;

::lime::graphics::RenderContext  RenderContext_obj::OPENGL(::lime::graphics::GLRenderContext gl)
	{ return hx::CreateEnum< RenderContext_obj >(HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4"),0,hx::DynamicArray(0,1).Add(gl)); }

HX_DEFINE_CREATE_ENUM(RenderContext_obj)

int RenderContext_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CAIRO","\x68","\x68","\x07","\xbf")) return 4;
	if (inName==HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")) return 1;
	if (inName==HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98")) return 5;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 6;
	if (inName==HX_HCSTRING("DOM","\x62","\xde","\x33","\x00")) return 2;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return 3;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 7;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,CAIRO,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,CANVAS,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,CONSOLE,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,CUSTOM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,DOM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,FLASH,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,OPENGL,return)

int RenderContext_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CAIRO","\x68","\x68","\x07","\xbf")) return 1;
	if (inName==HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")) return 1;
	if (inName==HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98")) return 1;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 1;
	if (inName==HX_HCSTRING("DOM","\x62","\xde","\x33","\x00")) return 1;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return 1;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic RenderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CAIRO","\x68","\x68","\x07","\xbf")) return CAIRO_dyn();
	if (inName==HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")) return CANVAS_dyn();
	if (inName==HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98")) return CONSOLE_dyn();
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return CUSTOM_dyn();
	if (inName==HX_HCSTRING("DOM","\x62","\xde","\x33","\x00")) return DOM_dyn();
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return FLASH_dyn();
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return OPENGL_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4"),
	HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a"),
	HX_HCSTRING("DOM","\x62","\xde","\x33","\x00"),
	HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80"),
	HX_HCSTRING("CAIRO","\x68","\x68","\x07","\xbf"),
	HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98"),
	HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderContext_obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderContext_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderContext_obj::NONE,"NONE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class RenderContext_obj::__mClass;

Dynamic __Create_RenderContext_obj() { return new RenderContext_obj; }

void RenderContext_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.graphics.RenderContext","\x6f","\x38","\x5a","\x08"), hx::TCanCast< RenderContext_obj >,sStaticFields,sMemberFields,
	&__Create_RenderContext_obj, &__Create,
	&super::__SGetClass(), &CreateRenderContext_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void RenderContext_obj::__boot()
{
hx::Static(NONE) = hx::CreateEnum< RenderContext_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),7);
}


} // end namespace lime
} // end namespace graphics

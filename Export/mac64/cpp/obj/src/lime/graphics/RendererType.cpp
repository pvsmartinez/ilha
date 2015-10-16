#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
namespace lime{
namespace graphics{

::lime::graphics::RendererType RendererType_obj::CAIRO;

::lime::graphics::RendererType RendererType_obj::CANVAS;

::lime::graphics::RendererType RendererType_obj::CONSOLE;

::lime::graphics::RendererType RendererType_obj::CUSTOM;

::lime::graphics::RendererType RendererType_obj::DOM;

::lime::graphics::RendererType RendererType_obj::FLASH;

::lime::graphics::RendererType RendererType_obj::OPENGL;

HX_DEFINE_CREATE_ENUM(RendererType_obj)

int RendererType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CAIRO","\x68","\x68","\x07","\xbf")) return 4;
	if (inName==HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")) return 1;
	if (inName==HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98")) return 5;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 6;
	if (inName==HX_HCSTRING("DOM","\x62","\xde","\x33","\x00")) return 2;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return 3;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return 0;
	return super::__FindIndex(inName);
}

int RendererType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CAIRO","\x68","\x68","\x07","\xbf")) return 0;
	if (inName==HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")) return 0;
	if (inName==HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98")) return 0;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 0;
	if (inName==HX_HCSTRING("DOM","\x62","\xde","\x33","\x00")) return 0;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return 0;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic RendererType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CAIRO","\x68","\x68","\x07","\xbf")) return CAIRO;
	if (inName==HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")) return CANVAS;
	if (inName==HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98")) return CONSOLE;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return CUSTOM;
	if (inName==HX_HCSTRING("DOM","\x62","\xde","\x33","\x00")) return DOM;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return FLASH;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return OPENGL;
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
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RendererType_obj::CAIRO,"CAIRO");
	HX_MARK_MEMBER_NAME(RendererType_obj::CANVAS,"CANVAS");
	HX_MARK_MEMBER_NAME(RendererType_obj::CONSOLE,"CONSOLE");
	HX_MARK_MEMBER_NAME(RendererType_obj::CUSTOM,"CUSTOM");
	HX_MARK_MEMBER_NAME(RendererType_obj::DOM,"DOM");
	HX_MARK_MEMBER_NAME(RendererType_obj::FLASH,"FLASH");
	HX_MARK_MEMBER_NAME(RendererType_obj::OPENGL,"OPENGL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RendererType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RendererType_obj::CAIRO,"CAIRO");
	HX_VISIT_MEMBER_NAME(RendererType_obj::CANVAS,"CANVAS");
	HX_VISIT_MEMBER_NAME(RendererType_obj::CONSOLE,"CONSOLE");
	HX_VISIT_MEMBER_NAME(RendererType_obj::CUSTOM,"CUSTOM");
	HX_VISIT_MEMBER_NAME(RendererType_obj::DOM,"DOM");
	HX_VISIT_MEMBER_NAME(RendererType_obj::FLASH,"FLASH");
	HX_VISIT_MEMBER_NAME(RendererType_obj::OPENGL,"OPENGL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class RendererType_obj::__mClass;

Dynamic __Create_RendererType_obj() { return new RendererType_obj; }

void RendererType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.graphics.RendererType","\x27","\x6b","\xac","\x8a"), hx::TCanCast< RendererType_obj >,sStaticFields,sMemberFields,
	&__Create_RendererType_obj, &__Create,
	&super::__SGetClass(), &CreateRendererType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void RendererType_obj::__boot()
{
hx::Static(CAIRO) = hx::CreateEnum< RendererType_obj >(HX_HCSTRING("CAIRO","\x68","\x68","\x07","\xbf"),4);
hx::Static(CANVAS) = hx::CreateEnum< RendererType_obj >(HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a"),1);
hx::Static(CONSOLE) = hx::CreateEnum< RendererType_obj >(HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98"),5);
hx::Static(CUSTOM) = hx::CreateEnum< RendererType_obj >(HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),6);
hx::Static(DOM) = hx::CreateEnum< RendererType_obj >(HX_HCSTRING("DOM","\x62","\xde","\x33","\x00"),2);
hx::Static(FLASH) = hx::CreateEnum< RendererType_obj >(HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80"),3);
hx::Static(OPENGL) = hx::CreateEnum< RendererType_obj >(HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4"),0);
}


} // end namespace lime
} // end namespace graphics

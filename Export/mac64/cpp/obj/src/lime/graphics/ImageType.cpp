#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
namespace lime{
namespace graphics{

::lime::graphics::ImageType ImageType_obj::CANVAS;

::lime::graphics::ImageType ImageType_obj::CUSTOM;

::lime::graphics::ImageType ImageType_obj::DATA;

::lime::graphics::ImageType ImageType_obj::FLASH;

HX_DEFINE_CREATE_ENUM(ImageType_obj)

int ImageType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")) return 0;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 3;
	if (inName==HX_HCSTRING("DATA","\x2a","\x1e","\x24","\x2d")) return 1;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return 2;
	return super::__FindIndex(inName);
}

int ImageType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")) return 0;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return 0;
	if (inName==HX_HCSTRING("DATA","\x2a","\x1e","\x24","\x2d")) return 0;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ImageType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a")) return CANVAS;
	if (inName==HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")) return CUSTOM;
	if (inName==HX_HCSTRING("DATA","\x2a","\x1e","\x24","\x2d")) return DATA;
	if (inName==HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80")) return FLASH;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a"),
	HX_HCSTRING("DATA","\x2a","\x1e","\x24","\x2d"),
	HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80"),
	HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageType_obj::CANVAS,"CANVAS");
	HX_MARK_MEMBER_NAME(ImageType_obj::CUSTOM,"CUSTOM");
	HX_MARK_MEMBER_NAME(ImageType_obj::DATA,"DATA");
	HX_MARK_MEMBER_NAME(ImageType_obj::FLASH,"FLASH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageType_obj::CANVAS,"CANVAS");
	HX_VISIT_MEMBER_NAME(ImageType_obj::CUSTOM,"CUSTOM");
	HX_VISIT_MEMBER_NAME(ImageType_obj::DATA,"DATA");
	HX_VISIT_MEMBER_NAME(ImageType_obj::FLASH,"FLASH");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ImageType_obj::__mClass;

Dynamic __Create_ImageType_obj() { return new ImageType_obj; }

void ImageType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.graphics.ImageType","\xeb","\x63","\x71","\x4d"), hx::TCanCast< ImageType_obj >,sStaticFields,sMemberFields,
	&__Create_ImageType_obj, &__Create,
	&super::__SGetClass(), &CreateImageType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ImageType_obj::__boot()
{
hx::Static(CANVAS) = hx::CreateEnum< ImageType_obj >(HX_HCSTRING("CANVAS","\xd8","\x00","\xc5","\x6a"),0);
hx::Static(CUSTOM) = hx::CreateEnum< ImageType_obj >(HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),3);
hx::Static(DATA) = hx::CreateEnum< ImageType_obj >(HX_HCSTRING("DATA","\x2a","\x1e","\x24","\x2d"),1);
hx::Static(FLASH) = hx::CreateEnum< ImageType_obj >(HX_HCSTRING("FLASH","\x90","\x6d","\x7a","\x80"),2);
}


} // end namespace lime
} // end namespace graphics

#include <hxcpp.h>

#ifndef INCLUDED_Shapes
#include <Shapes.h>
#endif

::Shapes Shapes_obj::circle;

::Shapes Shapes_obj::square;

HX_DEFINE_CREATE_ENUM(Shapes_obj)

int Shapes_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("circle","\x10","\x72","\x0d","\x56")) return 0;
	if (inName==HX_HCSTRING("square","\x9d","\x00","\xf2","\x58")) return 1;
	return super::__FindIndex(inName);
}

int Shapes_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("circle","\x10","\x72","\x0d","\x56")) return 0;
	if (inName==HX_HCSTRING("square","\x9d","\x00","\xf2","\x58")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Shapes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("circle","\x10","\x72","\x0d","\x56")) return circle;
	if (inName==HX_HCSTRING("square","\x9d","\x00","\xf2","\x58")) return square;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),
	HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shapes_obj::circle,"circle");
	HX_MARK_MEMBER_NAME(Shapes_obj::square,"square");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shapes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shapes_obj::circle,"circle");
	HX_VISIT_MEMBER_NAME(Shapes_obj::square,"square");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Shapes_obj::__mClass;

Dynamic __Create_Shapes_obj() { return new Shapes_obj; }

void Shapes_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("Shapes","\x52","\x4e","\xbe","\x51"), hx::TCanCast< Shapes_obj >,sStaticFields,sMemberFields,
	&__Create_Shapes_obj, &__Create,
	&super::__SGetClass(), &CreateShapes_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Shapes_obj::__boot()
{
hx::Static(circle) = hx::CreateEnum< Shapes_obj >(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),0);
hx::Static(square) = hx::CreateEnum< Shapes_obj >(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),1);
}



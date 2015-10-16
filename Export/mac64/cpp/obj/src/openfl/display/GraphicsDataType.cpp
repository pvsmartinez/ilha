#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
namespace openfl{
namespace display{

::openfl::display::GraphicsDataType GraphicsDataType_obj::BITMAP;

::openfl::display::GraphicsDataType GraphicsDataType_obj::END;

::openfl::display::GraphicsDataType GraphicsDataType_obj::GRADIENT;

::openfl::display::GraphicsDataType GraphicsDataType_obj::PATH;

::openfl::display::GraphicsDataType GraphicsDataType_obj::SOLID;

::openfl::display::GraphicsDataType GraphicsDataType_obj::STROKE;

HX_DEFINE_CREATE_ENUM(GraphicsDataType_obj)

int GraphicsDataType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BITMAP","\xef","\xbb","\x8e","\xa3")) return 4;
	if (inName==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")) return 5;
	if (inName==HX_HCSTRING("GRADIENT","\xf0","\xc9","\xc4","\x83")) return 2;
	if (inName==HX_HCSTRING("PATH","\xa5","\xad","\x12","\x35")) return 3;
	if (inName==HX_HCSTRING("SOLID","\x0b","\xec","\xb3","\xfe")) return 1;
	if (inName==HX_HCSTRING("STROKE","\xb8","\x5f","\xb7","\xc3")) return 0;
	return super::__FindIndex(inName);
}

int GraphicsDataType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BITMAP","\xef","\xbb","\x8e","\xa3")) return 0;
	if (inName==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")) return 0;
	if (inName==HX_HCSTRING("GRADIENT","\xf0","\xc9","\xc4","\x83")) return 0;
	if (inName==HX_HCSTRING("PATH","\xa5","\xad","\x12","\x35")) return 0;
	if (inName==HX_HCSTRING("SOLID","\x0b","\xec","\xb3","\xfe")) return 0;
	if (inName==HX_HCSTRING("STROKE","\xb8","\x5f","\xb7","\xc3")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GraphicsDataType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BITMAP","\xef","\xbb","\x8e","\xa3")) return BITMAP;
	if (inName==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")) return END;
	if (inName==HX_HCSTRING("GRADIENT","\xf0","\xc9","\xc4","\x83")) return GRADIENT;
	if (inName==HX_HCSTRING("PATH","\xa5","\xad","\x12","\x35")) return PATH;
	if (inName==HX_HCSTRING("SOLID","\x0b","\xec","\xb3","\xfe")) return SOLID;
	if (inName==HX_HCSTRING("STROKE","\xb8","\x5f","\xb7","\xc3")) return STROKE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("STROKE","\xb8","\x5f","\xb7","\xc3"),
	HX_HCSTRING("SOLID","\x0b","\xec","\xb3","\xfe"),
	HX_HCSTRING("GRADIENT","\xf0","\xc9","\xc4","\x83"),
	HX_HCSTRING("PATH","\xa5","\xad","\x12","\x35"),
	HX_HCSTRING("BITMAP","\xef","\xbb","\x8e","\xa3"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::BITMAP,"BITMAP");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::END,"END");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::GRADIENT,"GRADIENT");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::PATH,"PATH");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::SOLID,"SOLID");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::STROKE,"STROKE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::BITMAP,"BITMAP");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::END,"END");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::GRADIENT,"GRADIENT");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::PATH,"PATH");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::SOLID,"SOLID");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::STROKE,"STROKE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GraphicsDataType_obj::__mClass;

Dynamic __Create_GraphicsDataType_obj() { return new GraphicsDataType_obj; }

void GraphicsDataType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display.GraphicsDataType","\x59","\xb2","\x88","\xda"), hx::TCanCast< GraphicsDataType_obj >,sStaticFields,sMemberFields,
	&__Create_GraphicsDataType_obj, &__Create,
	&super::__SGetClass(), &CreateGraphicsDataType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GraphicsDataType_obj::__boot()
{
hx::Static(BITMAP) = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("BITMAP","\xef","\xbb","\x8e","\xa3"),4);
hx::Static(END) = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),5);
hx::Static(GRADIENT) = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("GRADIENT","\xf0","\xc9","\xc4","\x83"),2);
hx::Static(PATH) = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("PATH","\xa5","\xad","\x12","\x35"),3);
hx::Static(SOLID) = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("SOLID","\x0b","\xec","\xb3","\xfe"),1);
hx::Static(STROKE) = hx::CreateEnum< GraphicsDataType_obj >(HX_HCSTRING("STROKE","\xb8","\x5f","\xb7","\xc3"),0);
}


} // end namespace openfl
} // end namespace display

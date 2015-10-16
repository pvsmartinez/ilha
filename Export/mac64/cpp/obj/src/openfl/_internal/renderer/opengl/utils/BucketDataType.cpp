#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

::openfl::_internal::renderer::opengl::utils::BucketDataType BucketDataType_obj::Fill;

::openfl::_internal::renderer::opengl::utils::BucketDataType BucketDataType_obj::Line;

HX_DEFINE_CREATE_ENUM(BucketDataType_obj)

int BucketDataType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e")) return 1;
	if (inName==HX_HCSTRING("Line","\x14","\x44","\x8c","\x32")) return 0;
	return super::__FindIndex(inName);
}

int BucketDataType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e")) return 0;
	if (inName==HX_HCSTRING("Line","\x14","\x44","\x8c","\x32")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BucketDataType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e")) return Fill;
	if (inName==HX_HCSTRING("Line","\x14","\x44","\x8c","\x32")) return Line;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),
	HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BucketDataType_obj::Fill,"Fill");
	HX_MARK_MEMBER_NAME(BucketDataType_obj::Line,"Line");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BucketDataType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BucketDataType_obj::Fill,"Fill");
	HX_VISIT_MEMBER_NAME(BucketDataType_obj::Line,"Line");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class BucketDataType_obj::__mClass;

Dynamic __Create_BucketDataType_obj() { return new BucketDataType_obj; }

void BucketDataType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.renderer.opengl.utils.BucketDataType","\x2f","\x69","\x7d","\x7e"), hx::TCanCast< BucketDataType_obj >,sStaticFields,sMemberFields,
	&__Create_BucketDataType_obj, &__Create,
	&super::__SGetClass(), &CreateBucketDataType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BucketDataType_obj::__boot()
{
hx::Static(Fill) = hx::CreateEnum< BucketDataType_obj >(HX_HCSTRING("Fill","\xa3","\xfa","\x94","\x2e"),1);
hx::Static(Line) = hx::CreateEnum< BucketDataType_obj >(HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

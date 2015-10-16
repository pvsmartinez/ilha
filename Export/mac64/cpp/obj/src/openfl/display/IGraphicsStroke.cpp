#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
namespace openfl{
namespace display{


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGraphicsStroke_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGraphicsStroke_obj::__mClass,"__mClass");
};

#endif

hx::Class IGraphicsStroke_obj::__mClass;

void IGraphicsStroke_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.IGraphicsStroke","\x02","\xf8","\xbe","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< IGraphicsStroke_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display

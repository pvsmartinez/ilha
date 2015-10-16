#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsPathCommand
#include <openfl/display/GraphicsPathCommand.h>
#endif
namespace openfl{
namespace display{

Void GraphicsPathCommand_obj::__construct()
{
	return null();
}

//GraphicsPathCommand_obj::~GraphicsPathCommand_obj() { }

Dynamic GraphicsPathCommand_obj::__CreateEmpty() { return  new GraphicsPathCommand_obj; }
hx::ObjectPtr< GraphicsPathCommand_obj > GraphicsPathCommand_obj::__new()
{  hx::ObjectPtr< GraphicsPathCommand_obj > _result_ = new GraphicsPathCommand_obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsPathCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsPathCommand_obj > _result_ = new GraphicsPathCommand_obj();
	_result_->__construct();
	return _result_;}

int GraphicsPathCommand_obj::LINE_TO;

int GraphicsPathCommand_obj::MOVE_TO;

int GraphicsPathCommand_obj::CURVE_TO;

int GraphicsPathCommand_obj::WIDE_LINE_TO;

int GraphicsPathCommand_obj::WIDE_MOVE_TO;

int GraphicsPathCommand_obj::NO_OP;

int GraphicsPathCommand_obj::CUBIC_CURVE_TO;


GraphicsPathCommand_obj::GraphicsPathCommand_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GraphicsPathCommand_obj::LINE_TO,HX_HCSTRING("LINE_TO","\x26","\xf0","\x91","\x9f")},
	{hx::fsInt,(void *) &GraphicsPathCommand_obj::MOVE_TO,HX_HCSTRING("MOVE_TO","\x29","\x35","\x80","\xca")},
	{hx::fsInt,(void *) &GraphicsPathCommand_obj::CURVE_TO,HX_HCSTRING("CURVE_TO","\x6b","\xde","\x71","\x42")},
	{hx::fsInt,(void *) &GraphicsPathCommand_obj::WIDE_LINE_TO,HX_HCSTRING("WIDE_LINE_TO","\xba","\x44","\x9e","\xdf")},
	{hx::fsInt,(void *) &GraphicsPathCommand_obj::WIDE_MOVE_TO,HX_HCSTRING("WIDE_MOVE_TO","\xbd","\x89","\x8c","\x0a")},
	{hx::fsInt,(void *) &GraphicsPathCommand_obj::NO_OP,HX_HCSTRING("NO_OP","\x9f","\x75","\xc1","\x1d")},
	{hx::fsInt,(void *) &GraphicsPathCommand_obj::CUBIC_CURVE_TO,HX_HCSTRING("CUBIC_CURVE_TO","\x60","\x8b","\x92","\xac")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::LINE_TO,"LINE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::MOVE_TO,"MOVE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::CURVE_TO,"CURVE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::WIDE_LINE_TO,"WIDE_LINE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::WIDE_MOVE_TO,"WIDE_MOVE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::NO_OP,"NO_OP");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::CUBIC_CURVE_TO,"CUBIC_CURVE_TO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::LINE_TO,"LINE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::MOVE_TO,"MOVE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::CURVE_TO,"CURVE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::WIDE_LINE_TO,"WIDE_LINE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::WIDE_MOVE_TO,"WIDE_MOVE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::NO_OP,"NO_OP");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::CUBIC_CURVE_TO,"CUBIC_CURVE_TO");
};

#endif

hx::Class GraphicsPathCommand_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LINE_TO","\x26","\xf0","\x91","\x9f"),
	HX_HCSTRING("MOVE_TO","\x29","\x35","\x80","\xca"),
	HX_HCSTRING("CURVE_TO","\x6b","\xde","\x71","\x42"),
	HX_HCSTRING("WIDE_LINE_TO","\xba","\x44","\x9e","\xdf"),
	HX_HCSTRING("WIDE_MOVE_TO","\xbd","\x89","\x8c","\x0a"),
	HX_HCSTRING("NO_OP","\x9f","\x75","\xc1","\x1d"),
	HX_HCSTRING("CUBIC_CURVE_TO","\x60","\x8b","\x92","\xac"),
	::String(null()) };

void GraphicsPathCommand_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsPathCommand","\xf1","\x24","\xf6","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicsPathCommand_obj >;
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

void GraphicsPathCommand_obj::__boot()
{
	LINE_TO= (int)2;
	MOVE_TO= (int)1;
	CURVE_TO= (int)3;
	WIDE_LINE_TO= (int)5;
	WIDE_MOVE_TO= (int)4;
	NO_OP= (int)0;
	CUBIC_CURVE_TO= (int)6;
}

} // end namespace openfl
} // end namespace display

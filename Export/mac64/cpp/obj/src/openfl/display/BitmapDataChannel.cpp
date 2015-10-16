#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapDataChannel
#include <openfl/display/BitmapDataChannel.h>
#endif
namespace openfl{
namespace display{

Void BitmapDataChannel_obj::__construct()
{
	return null();
}

//BitmapDataChannel_obj::~BitmapDataChannel_obj() { }

Dynamic BitmapDataChannel_obj::__CreateEmpty() { return  new BitmapDataChannel_obj; }
hx::ObjectPtr< BitmapDataChannel_obj > BitmapDataChannel_obj::__new()
{  hx::ObjectPtr< BitmapDataChannel_obj > _result_ = new BitmapDataChannel_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapDataChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapDataChannel_obj > _result_ = new BitmapDataChannel_obj();
	_result_->__construct();
	return _result_;}

int BitmapDataChannel_obj::ALPHA;

int BitmapDataChannel_obj::BLUE;

int BitmapDataChannel_obj::GREEN;

int BitmapDataChannel_obj::RED;


BitmapDataChannel_obj::BitmapDataChannel_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BitmapDataChannel_obj::ALPHA,HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")},
	{hx::fsInt,(void *) &BitmapDataChannel_obj::BLUE,HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b")},
	{hx::fsInt,(void *) &BitmapDataChannel_obj::GREEN,HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17")},
	{hx::fsInt,(void *) &BitmapDataChannel_obj::RED,HX_HCSTRING("RED","\x31","\x75","\x3e","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::RED,"RED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::RED,"RED");
};

#endif

hx::Class BitmapDataChannel_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),
	HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b"),
	HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17"),
	HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"),
	::String(null()) };

void BitmapDataChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.BitmapDataChannel","\x60","\x00","\x27","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BitmapDataChannel_obj >;
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

void BitmapDataChannel_obj::__boot()
{
	ALPHA= (int)8;
	BLUE= (int)4;
	GREEN= (int)2;
	RED= (int)1;
}

} // end namespace openfl
} // end namespace display

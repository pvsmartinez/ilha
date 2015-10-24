#include <hxcpp.h>

#ifndef INCLUDED_openfl_filters_BitmapFilterQuality
#include <openfl/filters/BitmapFilterQuality.h>
#endif
namespace openfl{
namespace filters{

Void BitmapFilterQuality_obj::__construct()
{
	return null();
}

//BitmapFilterQuality_obj::~BitmapFilterQuality_obj() { }

Dynamic BitmapFilterQuality_obj::__CreateEmpty() { return  new BitmapFilterQuality_obj; }
hx::ObjectPtr< BitmapFilterQuality_obj > BitmapFilterQuality_obj::__new()
{  hx::ObjectPtr< BitmapFilterQuality_obj > _result_ = new BitmapFilterQuality_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapFilterQuality_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFilterQuality_obj > _result_ = new BitmapFilterQuality_obj();
	_result_->__construct();
	return _result_;}

int BitmapFilterQuality_obj::HIGH;

int BitmapFilterQuality_obj::MEDIUM;

int BitmapFilterQuality_obj::LOW;


BitmapFilterQuality_obj::BitmapFilterQuality_obj()
{
}

bool BitmapFilterQuality_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LOW") ) { outValue = LOW; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"HIGH") ) { outValue = HIGH; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MEDIUM") ) { outValue = MEDIUM; return true;  }
	}
	return false;
}

bool BitmapFilterQuality_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LOW") ) { LOW=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"HIGH") ) { HIGH=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MEDIUM") ) { MEDIUM=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BitmapFilterQuality_obj::HIGH,HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f")},
	{hx::fsInt,(void *) &BitmapFilterQuality_obj::MEDIUM,HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1")},
	{hx::fsInt,(void *) &BitmapFilterQuality_obj::LOW,HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFilterQuality_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapFilterQuality_obj::HIGH,"HIGH");
	HX_MARK_MEMBER_NAME(BitmapFilterQuality_obj::MEDIUM,"MEDIUM");
	HX_MARK_MEMBER_NAME(BitmapFilterQuality_obj::LOW,"LOW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFilterQuality_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapFilterQuality_obj::HIGH,"HIGH");
	HX_VISIT_MEMBER_NAME(BitmapFilterQuality_obj::MEDIUM,"MEDIUM");
	HX_VISIT_MEMBER_NAME(BitmapFilterQuality_obj::LOW,"LOW");
};

#endif

hx::Class BitmapFilterQuality_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f"),
	HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1"),
	HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00"),
	::String(null()) };

void BitmapFilterQuality_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.BitmapFilterQuality","\x47","\xca","\x7e","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapFilterQuality_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapFilterQuality_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BitmapFilterQuality_obj >;
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

void BitmapFilterQuality_obj::__boot()
{
	HIGH= (int)3;
	MEDIUM= (int)2;
	LOW= (int)1;
}

} // end namespace openfl
} // end namespace filters

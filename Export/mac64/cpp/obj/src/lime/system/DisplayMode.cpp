#include <hxcpp.h>

#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
namespace lime{
namespace _system{

Void DisplayMode_obj::__construct(int width,int height,int refreshRate,int pixelFormat)
{
HX_STACK_FRAME("lime.system.DisplayMode","new",0x2251a8d1,"lime.system.DisplayMode.new","lime/system/DisplayMode.hx",31,0xb4b505df)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(refreshRate,"refreshRate")
HX_STACK_ARG(pixelFormat,"pixelFormat")
{
	HX_STACK_LINE(33)
	this->width = width;
	HX_STACK_LINE(34)
	this->height = height;
	HX_STACK_LINE(35)
	this->refreshRate = refreshRate;
	HX_STACK_LINE(36)
	this->pixelFormat = pixelFormat;
}
;
	return null();
}

//DisplayMode_obj::~DisplayMode_obj() { }

Dynamic DisplayMode_obj::__CreateEmpty() { return  new DisplayMode_obj; }
hx::ObjectPtr< DisplayMode_obj > DisplayMode_obj::__new(int width,int height,int refreshRate,int pixelFormat)
{  hx::ObjectPtr< DisplayMode_obj > _result_ = new DisplayMode_obj();
	_result_->__construct(width,height,refreshRate,pixelFormat);
	return _result_;}

Dynamic DisplayMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayMode_obj > _result_ = new DisplayMode_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}


DisplayMode_obj::DisplayMode_obj()
{
}

Dynamic DisplayMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelFormat") ) { return pixelFormat; }
		if (HX_FIELD_EQ(inName,"refreshRate") ) { return refreshRate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelFormat") ) { pixelFormat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"refreshRate") ) { refreshRate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"));
	outFields->push(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DisplayMode_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(DisplayMode_obj,pixelFormat),HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f")},
	{hx::fsInt,(int)offsetof(DisplayMode_obj,refreshRate),HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")},
	{hx::fsInt,(int)offsetof(DisplayMode_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"),
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayMode_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayMode_obj::__mClass;

void DisplayMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.DisplayMode","\x5f","\xec","\x9e","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayMode_obj >;
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

} // end namespace lime
} // end namespace system

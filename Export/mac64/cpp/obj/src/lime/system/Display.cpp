#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
namespace lime{
namespace _system{

Void Display_obj::__construct()
{
HX_STACK_FRAME("lime.system.Display","new",0x04208dce,"lime.system.Display.new","lime/system/Display.hx",33,0x4536ff82)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Display_obj::~Display_obj() { }

Dynamic Display_obj::__CreateEmpty() { return  new Display_obj; }
hx::ObjectPtr< Display_obj > Display_obj::__new()
{  hx::ObjectPtr< Display_obj > _result_ = new Display_obj();
	_result_->__construct();
	return _result_;}

Dynamic Display_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Display_obj > _result_ = new Display_obj();
	_result_->__construct();
	return _result_;}


Display_obj::Display_obj()
{
}

void Display_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Display);
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(currentMode,"currentMode");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(supportedModes,"supportedModes");
	HX_MARK_END_CLASS();
}

void Display_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(currentMode,"currentMode");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(supportedModes,"supportedModes");
}

Dynamic Display_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentMode") ) { return currentMode; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportedModes") ) { return supportedModes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Display_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::lime::math::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentMode") ) { currentMode=inValue.Cast< ::lime::_system::DisplayMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportedModes") ) { supportedModes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Display_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::math::Rectangle*/ ,(int)offsetof(Display_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::lime::_system::DisplayMode*/ ,(int)offsetof(Display_obj,currentMode),HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80")},
	{hx::fsInt,(int)offsetof(Display_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(Display_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Display_obj,supportedModes),HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Display_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Display_obj::__mClass,"__mClass");
};

#endif

hx::Class Display_obj::__mClass;

void Display_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.Display","\xdc","\x4e","\xfe","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Display_obj >;
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

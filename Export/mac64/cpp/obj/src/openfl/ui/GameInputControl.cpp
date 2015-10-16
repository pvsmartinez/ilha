#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif
namespace openfl{
namespace ui{

Void GameInputControl_obj::__construct(::openfl::ui::GameInputDevice device,::String id,Float minValue,Float maxValue,hx::Null< Float >  __o_value)
{
HX_STACK_FRAME("openfl.ui.GameInputControl","new",0xeccd6093,"openfl.ui.GameInputControl.new","openfl/ui/GameInputControl.hx",36,0xb3fe7f9d)
HX_STACK_THIS(this)
HX_STACK_ARG(device,"device")
HX_STACK_ARG(id,"id")
HX_STACK_ARG(minValue,"minValue")
HX_STACK_ARG(maxValue,"maxValue")
HX_STACK_ARG(__o_value,"value")
Float value = __o_value.Default(0);
{
	HX_STACK_LINE(38)
	super::__construct(null());
	HX_STACK_LINE(40)
	this->device = device;
	HX_STACK_LINE(41)
	this->id = id;
	HX_STACK_LINE(42)
	this->minValue = minValue;
	HX_STACK_LINE(43)
	this->maxValue = maxValue;
	HX_STACK_LINE(44)
	this->value = value;
}
;
	return null();
}

//GameInputControl_obj::~GameInputControl_obj() { }

Dynamic GameInputControl_obj::__CreateEmpty() { return  new GameInputControl_obj; }
hx::ObjectPtr< GameInputControl_obj > GameInputControl_obj::__new(::openfl::ui::GameInputDevice device,::String id,Float minValue,Float maxValue,hx::Null< Float >  __o_value)
{  hx::ObjectPtr< GameInputControl_obj > _result_ = new GameInputControl_obj();
	_result_->__construct(device,id,minValue,maxValue,__o_value);
	return _result_;}

Dynamic GameInputControl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInputControl_obj > _result_ = new GameInputControl_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}


GameInputControl_obj::GameInputControl_obj()
{
}

void GameInputControl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputControl);
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(value,"value");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameInputControl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(value,"value");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameInputControl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxValue") ) { return maxValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { return minValue; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameInputControl_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< ::openfl::ui::GameInputDevice >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInputControl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb"));
	outFields->push(HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::ui::GameInputDevice*/ ,(int)offsetof(GameInputControl_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{hx::fsString,(int)offsetof(GameInputControl_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(GameInputControl_obj,maxValue),HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb")},
	{hx::fsFloat,(int)offsetof(GameInputControl_obj,minValue),HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28")},
	{hx::fsFloat,(int)offsetof(GameInputControl_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb"),
	HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputControl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputControl_obj::__mClass,"__mClass");
};

#endif

hx::Class GameInputControl_obj::__mClass;

void GameInputControl_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui.GameInputControl","\x21","\x1b","\xaf","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameInputControl_obj >;
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

} // end namespace openfl
} // end namespace ui

#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Event_lime_ui_Touch_Void
#include <lime/app/Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
namespace lime{
namespace ui{

Void Touch_obj::__construct(Float x,Float y,int id,Float dx,Float dy,Float pressure,int device)
{
HX_STACK_FRAME("lime.ui.Touch","new",0xc7f37270,"lime.ui.Touch.new","lime/ui/Touch.hx",23,0xf69781a0)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(id,"id")
HX_STACK_ARG(dx,"dx")
HX_STACK_ARG(dy,"dy")
HX_STACK_ARG(pressure,"pressure")
HX_STACK_ARG(device,"device")
{
	HX_STACK_LINE(25)
	this->x = x;
	HX_STACK_LINE(26)
	this->y = y;
	HX_STACK_LINE(27)
	this->id = id;
	HX_STACK_LINE(28)
	this->dx = dx;
	HX_STACK_LINE(29)
	this->dy = dy;
	HX_STACK_LINE(30)
	this->pressure = pressure;
	HX_STACK_LINE(31)
	this->device = device;
}
;
	return null();
}

//Touch_obj::~Touch_obj() { }

Dynamic Touch_obj::__CreateEmpty() { return  new Touch_obj; }
hx::ObjectPtr< Touch_obj > Touch_obj::__new(Float x,Float y,int id,Float dx,Float dy,Float pressure,int device)
{  hx::ObjectPtr< Touch_obj > _result_ = new Touch_obj();
	_result_->__construct(x,y,id,dx,dy,pressure,device);
	return _result_;}

Dynamic Touch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Touch_obj > _result_ = new Touch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::lime::app::Event_lime_ui_Touch_Void Touch_obj::onEnd;

::lime::app::Event_lime_ui_Touch_Void Touch_obj::onMove;

::lime::app::Event_lime_ui_Touch_Void Touch_obj::onStart;


Touch_obj::Touch_obj()
{
}

Dynamic Touch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return dx; }
		if (HX_FIELD_EQ(inName,"dy") ) { return dy; }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return pressure; }
	}
	return super::__Field(inName,inCallProp);
}

bool Touch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onEnd") ) { outValue = onEnd; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onMove") ) { outValue = onMove; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { outValue = onStart; return true;  }
	}
	return false;
}

Dynamic Touch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Touch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onEnd") ) { onEnd=ioValue.Cast< ::lime::app::Event_lime_ui_Touch_Void >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onMove") ) { onMove=ioValue.Cast< ::lime::app::Event_lime_ui_Touch_Void >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=ioValue.Cast< ::lime::app::Event_lime_ui_Touch_Void >(); return true; }
	}
	return false;
}

void Touch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	outFields->push(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Touch_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{hx::fsFloat,(int)offsetof(Touch_obj,dx),HX_HCSTRING("dx","\x94","\x57","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Touch_obj,dy),HX_HCSTRING("dy","\x95","\x57","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Touch_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Touch_obj,pressure),HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")},
	{hx::fsFloat,(int)offsetof(Touch_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Touch_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::app::Event_lime_ui_Touch_Void*/ ,(void *) &Touch_obj::onEnd,HX_HCSTRING("onEnd","\xfc","\x97","\x64","\x32")},
	{hx::fsObject /*::lime::app::Event_lime_ui_Touch_Void*/ ,(void *) &Touch_obj::onMove,HX_HCSTRING("onMove","\xd0","\xeb","\xea","\xea")},
	{hx::fsObject /*::lime::app::Event_lime_ui_Touch_Void*/ ,(void *) &Touch_obj::onStart,HX_HCSTRING("onStart","\xc3","\x12","\x49","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("dx","\x94","\x57","\x00","\x00"),
	HX_HCSTRING("dy","\x95","\x57","\x00","\x00"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Touch_obj::onEnd,"onEnd");
	HX_MARK_MEMBER_NAME(Touch_obj::onMove,"onMove");
	HX_MARK_MEMBER_NAME(Touch_obj::onStart,"onStart");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Touch_obj::onEnd,"onEnd");
	HX_VISIT_MEMBER_NAME(Touch_obj::onMove,"onMove");
	HX_VISIT_MEMBER_NAME(Touch_obj::onStart,"onStart");
};

#endif

hx::Class Touch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("onEnd","\xfc","\x97","\x64","\x32"),
	HX_HCSTRING("onMove","\xd0","\xeb","\xea","\xea"),
	HX_HCSTRING("onStart","\xc3","\x12","\x49","\x1a"),
	::String(null()) };

void Touch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Touch","\x7e","\xba","\x55","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Touch_obj::__GetStatic;
	__mClass->mSetStaticField = &Touch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Touch_obj >;
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

void Touch_obj::__boot()
{
	onEnd= ::lime::app::Event_lime_ui_Touch_Void_obj::__new();
	onMove= ::lime::app::Event_lime_ui_Touch_Void_obj::__new();
	onStart= ::lime::app::Event_lime_ui_Touch_Void_obj::__new();
}

} // end namespace lime
} // end namespace ui

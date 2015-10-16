#include <hxcpp.h>

#ifndef INCLUDED_Collectable
#include <Collectable.h>
#endif
#ifndef INCLUDED_Component
#include <Component.h>
#endif
#ifndef INCLUDED_Kinds
#include <Kinds.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Collectable_obj::__construct(::Kinds kind)
{
HX_STACK_FRAME("Collectable","new",0x66fd4b16,"Collectable.new","Collectable.hx",8,0x0acb291a)
HX_STACK_THIS(this)
HX_STACK_ARG(kind,"kind")
{
	HX_STACK_LINE(11)
	this->carried = false;
	HX_STACK_LINE(15)
	int radius;		HX_STACK_VAR(radius,"radius");
	HX_STACK_LINE(16)
	::String png;		HX_STACK_VAR(png,"png");
	HX_STACK_LINE(17)
	switch( (int)(kind->__Index())){
		case (int)0: {
			HX_STACK_LINE(19)
			radius = (int)100;
			HX_STACK_LINE(20)
			png = HX_HCSTRING("bush","\x28","\x15","\x20","\x41");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(22)
			radius = (int)50;
			HX_STACK_LINE(23)
			png = HX_HCSTRING("cherry","\x99","\x7e","\x1a","\xba");
		}
		;break;
	}
	HX_STACK_LINE(25)
	int tmp = radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	super::__construct(tmp);
	HX_STACK_LINE(26)
	::String tmp1 = png;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->super::addPng(tmp1);
}
;
	return null();
}

//Collectable_obj::~Collectable_obj() { }

Dynamic Collectable_obj::__CreateEmpty() { return  new Collectable_obj; }
hx::ObjectPtr< Collectable_obj > Collectable_obj::__new(::Kinds kind)
{  hx::ObjectPtr< Collectable_obj > _result_ = new Collectable_obj();
	_result_->__construct(kind);
	return _result_;}

Dynamic Collectable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Collectable_obj > _result_ = new Collectable_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Collectable_obj::action( bool trigger){
{
		HX_STACK_FRAME("Collectable","action",0x9b91d6c0,"Collectable.action","Collectable.hx",30,0x0acb291a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(trigger,"trigger")
		HX_STACK_LINE(30)
		this->carried = trigger;
	}
return null();
}



Collectable_obj::Collectable_obj()
{
}

Dynamic Collectable_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"action") ) { return action_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"carried") ) { return carried; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Collectable_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"carried") ) { carried=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Collectable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("carried","\xea","\x65","\xc3","\xcc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Collectable_obj,carried),HX_HCSTRING("carried","\xea","\x65","\xc3","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("carried","\xea","\x65","\xc3","\xcc"),
	HX_HCSTRING("action","\xb6","\x3b","\x46","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Collectable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Collectable_obj::__mClass,"__mClass");
};

#endif

hx::Class Collectable_obj::__mClass;

void Collectable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Collectable","\x24","\xc8","\xd0","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Collectable_obj >;
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


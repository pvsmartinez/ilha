#include <hxcpp.h>

#ifndef INCLUDED_Component
#include <Component.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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

Void Component_obj::__construct(int radius)
{
HX_STACK_FRAME("Component","new",0x1973840f,"Component.new","Component.hx",11,0xeee4f241)
HX_STACK_THIS(this)
HX_STACK_ARG(radius,"radius")
{
	HX_STACK_LINE(12)
	super::__construct();
	HX_STACK_LINE(13)
	int tmp = radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	this->addHitArea(tmp);
}
;
	return null();
}

//Component_obj::~Component_obj() { }

Dynamic Component_obj::__CreateEmpty() { return  new Component_obj; }
hx::ObjectPtr< Component_obj > Component_obj::__new(int radius)
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct(radius);
	return _result_;}

Dynamic Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Component_obj::action( bool trigger){
{
		HX_STACK_FRAME("Component","action",0xff64bf67,"Component.action","Component.hx",16,0xeee4f241)
		HX_STACK_THIS(this)
		HX_STACK_ARG(trigger,"trigger")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,action,(void))

Void Component_obj::addHitArea( int radius){
{
		HX_STACK_FRAME("Component","addHitArea",0x758cff90,"Component.addHitArea","Component.hx",20,0xeee4f241)
		HX_STACK_THIS(this)
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(21)
		::openfl::display::Graphics tmp = this->get_graphics();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		tmp->beginFill((int)16777215,((Float)0.5));
		HX_STACK_LINE(22)
		::openfl::display::Graphics tmp1 = this->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		int tmp2 = radius;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		tmp1->drawCircle((int)0,(int)0,tmp2);
		HX_STACK_LINE(23)
		::openfl::display::Graphics tmp3 = this->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		tmp3->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,addHitArea,(void))

Void Component_obj::addPng( ::String img){
{
		HX_STACK_FRAME("Component","addPng",0x8824f0b9,"Component.addPng","Component.hx",26,0xeee4f241)
		HX_STACK_THIS(this)
		HX_STACK_ARG(img,"img")
		HX_STACK_LINE(27)
		::String tmp = (HX_HCSTRING("assets/","\x4c","\x2a","\xdc","\x36") + img);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		::String tmp1 = (tmp + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::openfl::display::BitmapData tmp2 = ::openfl::Assets_obj::getBitmapData(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		::openfl::display::BitmapData bitmapData = tmp2;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(28)
		::openfl::display::Bitmap tmp3 = ::openfl::display::Bitmap_obj::__new(bitmapData,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		::openfl::display::Bitmap bitmap = tmp3;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(29)
		::openfl::display::Bitmap tmp4 = bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		this->addChild(tmp4);
		HX_STACK_LINE(30)
		Float tmp5 = bitmap->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		bitmap->set_x(tmp7);
		HX_STACK_LINE(31)
		Float tmp8 = bitmap->get_height();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(31)
		bitmap->set_y(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,addPng,(void))


Component_obj::Component_obj()
{
}

Dynamic Component_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"action") ) { return action_dyn(); }
		if (HX_FIELD_EQ(inName,"addPng") ) { return addPng_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addHitArea") ) { return addHitArea_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("action","\xb6","\x3b","\x46","\x16"),
	HX_HCSTRING("addHitArea","\x5f","\x4f","\x84","\x3d"),
	HX_HCSTRING("addPng","\x08","\x6d","\x06","\x9f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#endif

hx::Class Component_obj::__mClass;

void Component_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Component","\x9d","\xd0","\x26","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Component_obj >;
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


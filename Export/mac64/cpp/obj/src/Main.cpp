#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Body
#include <Body.h>
#endif
#ifndef INCLUDED_Collectable
#include <Collectable.h>
#endif
#ifndef INCLUDED_Component
#include <Component.h>
#endif
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Kinds
#include <Kinds.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",8,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->stuff = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(16)
	this->startGame();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::startGame( ){
{
		HX_STACK_FRAME("Main","startGame",0xdddba51f,"Main.startGame","Main.hx",19,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		::Controller tmp = ::Controller_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		this->cnt = tmp;
		HX_STACK_LINE(21)
		this->insertStuff();
		HX_STACK_LINE(22)
		this->insertPlayer();
		HX_STACK_LINE(23)
		::String tmp1 = ::openfl::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		Dynamic tmp2 = this->everyFrame_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		this->addEventListener(tmp1,tmp2,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,startGame,(void))

Void Main_obj::insertPlayer( ){
{
		HX_STACK_FRAME("Main","insertPlayer",0xd520f8af,"Main.insertPlayer","Main.hx",26,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::Body tmp = ::Body_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		this->player = tmp;
		HX_STACK_LINE(28)
		::Body tmp1 = this->player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		this->addChild(tmp1);
		HX_STACK_LINE(29)
		::Body tmp2 = this->player;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		tmp2->set_x((int)100);
		HX_STACK_LINE(30)
		::Body tmp3 = this->player;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		tmp3->set_y((int)100);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,insertPlayer,(void))

Void Main_obj::insertStuff( ){
{
		HX_STACK_FRAME("Main","insertStuff",0xcad62d66,"Main.insertStuff","Main.hx",33,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::Collectable collect;		HX_STACK_VAR(collect,"collect");
		HX_STACK_LINE(35)
		Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		Float tmp1 = (tmp * (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		int tmp2 = ::Math_obj::ceil(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		int random = tmp2;		HX_STACK_VAR(random,"random");
		HX_STACK_LINE(36)
		int rdm;		HX_STACK_VAR(rdm,"rdm");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				bool tmp3 = (_g < random);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				if ((tmp4)){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(38)
				Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				Float tmp7 = (tmp6 * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(38)
				rdm = tmp8;
				HX_STACK_LINE(39)
				int tmp9 = rdm;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(39)
				switch( (int)(tmp9)){
					case (int)0: {
						HX_STACK_LINE(41)
						::Collectable tmp10 = ::Collectable_obj::__new(::Kinds_obj::cherry);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(41)
						collect = tmp10;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(43)
						::Collectable tmp10 = ::Collectable_obj::__new(::Kinds_obj::bush);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(43)
						collect = tmp10;
					}
					;break;
					default: {
						HX_STACK_LINE(45)
						::Collectable tmp10 = ::Collectable_obj::__new(::Kinds_obj::cherry);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(45)
						collect = tmp10;
					}
				}
				HX_STACK_LINE(47)
				::Collectable tmp10 = collect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				this->stuff->push(tmp10);
				HX_STACK_LINE(48)
				::Collectable tmp11 = collect;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(48)
				this->addChild(tmp11);
				HX_STACK_LINE(49)
				Float tmp12 = ::Math_obj::random();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				::openfl::display::MovieClip tmp13 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				int tmp14 = tmp13->stage->stageWidth;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(49)
				Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(49)
				collect->set_x(tmp15);
				HX_STACK_LINE(50)
				Float tmp16 = ::Math_obj::random();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(50)
				::openfl::display::MovieClip tmp17 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(50)
				int tmp18 = tmp17->stage->stageHeight;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(50)
				Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(50)
				collect->set_y(tmp19);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,insertStuff,(void))

Void Main_obj::everyFrame( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("Main","everyFrame",0xc084a887,"Main.everyFrame","Main.hx",54,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(55)
		::Controller tmp = this->cnt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::Body tmp1 = this->player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		tmp->move(tmp1);
		HX_STACK_LINE(56)
		::Controller tmp2 = this->cnt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		::Body tmp3 = this->player;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		tmp2->interact(tmp3,this->stuff);
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			Array< ::Dynamic > _g1 = this->stuff;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				if ((tmp5)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				::Component tmp6 = _g1->__get(_g).StaticCast< ::Component >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(57)
				::Component st = tmp6;		HX_STACK_VAR(st,"st");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(58)
				::Collectable tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(58)
				tmp7 = hx::TCast< ::Collectable >::cast(st);
				HX_STACK_LINE(58)
				bool tmp8 = tmp7->carried;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(58)
				if ((tmp8)){
					HX_STACK_LINE(59)
					::Body tmp9 = this->player;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					Float tmp10 = tmp9->get_x();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(59)
					st->set_x(tmp10);
					HX_STACK_LINE(60)
					::Body tmp11 = this->player;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(60)
					Float tmp12 = tmp11->get_y();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(60)
					st->set_y(tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,everyFrame,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(cnt,"cnt");
	HX_MARK_MEMBER_NAME(stuff,"stuff");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(cnt,"cnt");
	HX_VISIT_MEMBER_NAME(stuff,"stuff");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { return cnt; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stuff") ) { return stuff; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"everyFrame") ) { return everyFrame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"insertStuff") ) { return insertStuff_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"insertPlayer") ) { return insertPlayer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { cnt=inValue.Cast< ::Controller >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stuff") ) { stuff=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00"));
	outFields->push(HX_HCSTRING("stuff","\xf4","\x96","\x1a","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Body*/ ,(int)offsetof(Main_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::Controller*/ ,(int)offsetof(Main_obj,cnt),HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,stuff),HX_HCSTRING("stuff","\xf4","\x96","\x1a","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00"),
	HX_HCSTRING("stuff","\xf4","\x96","\x1a","\x84"),
	HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"),
	HX_HCSTRING("insertPlayer","\x7a","\x53","\x46","\xae"),
	HX_HCSTRING("insertStuff","\xfb","\x74","\xcf","\xcb"),
	HX_HCSTRING("everyFrame","\x92","\x2a","\xfd","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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


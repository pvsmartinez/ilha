#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Body
#include <Body.h>
#endif
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Person
#include <Person.h>
#endif
#ifndef INCLUDED_Source
#include <Source.h>
#endif
#ifndef INCLUDED_Sources
#include <Sources.h>
#endif
#ifndef INCLUDED_Stuff
#include <Stuff.h>
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

Void Game_obj::__construct()
{
HX_STACK_FRAME("Game","new",0x79ba3204,"Game.new","Game.hx",8,0x56a4f9ec)
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

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new()
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct();
	return _result_;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct();
	return _result_;}

Void Game_obj::startGame( ){
{
		HX_STACK_FRAME("Game","startGame",0xccf7a218,"Game.startGame","Game.hx",19,0x56a4f9ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		::Controller tmp = ::Controller_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		this->ctrl = tmp;
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


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,startGame,(void))

Void Game_obj::insertPlayer( ){
{
		HX_STACK_FRAME("Game","insertPlayer",0x3f409d56,"Game.insertPlayer","Game.hx",26,0x56a4f9ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::Person tmp = ::Person_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		this->player = tmp;
		HX_STACK_LINE(28)
		::Person tmp1 = this->player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		this->addChild(tmp1);
		HX_STACK_LINE(29)
		::Person tmp2 = this->player;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		int tmp4 = tmp3->stage->stageWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		tmp2->set_x(tmp5);
		HX_STACK_LINE(30)
		::Person tmp6 = this->player;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		::openfl::display::MovieClip tmp7 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		int tmp8 = tmp7->stage->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(30)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(30)
		tmp6->set_y(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,insertPlayer,(void))

Void Game_obj::insertStuff( ){
{
		HX_STACK_FRAME("Game","insertStuff",0xb6a61a9f,"Game.insertStuff","Game.hx",33,0x56a4f9ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		Float tmp1 = (tmp * (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		int tmp2 = ::Math_obj::ceil(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		int random = tmp3;		HX_STACK_VAR(random,"random");
		HX_STACK_LINE(35)
		int rdm;		HX_STACK_VAR(rdm,"rdm");
		HX_STACK_LINE(36)
		::Source source;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				bool tmp4 = (_g < random);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				if ((tmp5)){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(38)
				Float tmp7 = ::Math_obj::random();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				Float tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(38)
				int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(38)
				rdm = tmp9;
				HX_STACK_LINE(39)
				int tmp10 = rdm;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(39)
				switch( (int)(tmp10)){
					case (int)0: {
						HX_STACK_LINE(41)
						::Source tmp11 = ::Source_obj::__new(::Sources_obj::bush);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(41)
						source = tmp11;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(43)
						::Source tmp11 = ::Source_obj::__new(::Sources_obj::tree);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(43)
						source = tmp11;
					}
					;break;
					default: {
						HX_STACK_LINE(45)
						::Source tmp11 = ::Source_obj::__new(::Sources_obj::tree);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(45)
						source = tmp11;
					}
				}
				HX_STACK_LINE(47)
				::Source tmp11 = source;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(47)
				this->stuff->push(tmp11);
				HX_STACK_LINE(48)
				::Source tmp12 = source;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(48)
				this->addChild(tmp12);
				HX_STACK_LINE(49)
				Float tmp13 = ::Math_obj::random();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				::openfl::display::MovieClip tmp14 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(49)
				int tmp15 = tmp14->stage->stageWidth;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(49)
				Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(49)
				source->set_x(tmp16);
				HX_STACK_LINE(50)
				Float tmp17 = ::Math_obj::random();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(50)
				::openfl::display::MovieClip tmp18 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(50)
				int tmp19 = tmp18->stage->stageHeight;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(50)
				Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(50)
				source->set_y(tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,insertStuff,(void))

Void Game_obj::everyFrame( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("Game","everyFrame",0x09e6056e,"Game.everyFrame","Game.hx",54,0x56a4f9ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(55)
		::Controller tmp = this->ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::Person tmp1 = this->player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		tmp->move(tmp1);
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			Array< ::Dynamic > _g1 = this->stuff;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				if ((tmp3)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				::Stuff tmp4 = _g1->__get(_g).StaticCast< ::Stuff >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				::Stuff st = tmp4;		HX_STACK_VAR(st,"st");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(58)
				::Person tmp5 = this->player;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				st->focus(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,everyFrame,(void))


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(ctrl,"ctrl");
	HX_MARK_MEMBER_NAME(stuff,"stuff");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(ctrl,"ctrl");
	HX_VISIT_MEMBER_NAME(stuff,"stuff");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Game_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ctrl") ) { return ctrl; }
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

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ctrl") ) { ctrl=inValue.Cast< ::Controller >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stuff") ) { stuff=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Person >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41"));
	outFields->push(HX_HCSTRING("stuff","\xf4","\x96","\x1a","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Person*/ ,(int)offsetof(Game_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::Controller*/ ,(int)offsetof(Game_obj,ctrl),HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Game_obj,stuff),HX_HCSTRING("stuff","\xf4","\x96","\x1a","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41"),
	HX_HCSTRING("stuff","\xf4","\x96","\x1a","\x84"),
	HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"),
	HX_HCSTRING("insertPlayer","\x7a","\x53","\x46","\xae"),
	HX_HCSTRING("insertStuff","\xfb","\x74","\xcf","\xcb"),
	HX_HCSTRING("everyFrame","\x92","\x2a","\xfd","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#endif

hx::Class Game_obj::__mClass;

void Game_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Game","\x12","\x20","\x38","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Game_obj >;
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


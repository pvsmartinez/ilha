#include <hxcpp.h>

#ifndef INCLUDED_NMEPreloader
#include <NMEPreloader.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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

Void NMEPreloader_obj::__construct()
{
HX_STACK_FRAME("NMEPreloader","new",0x89455562,"NMEPreloader.new","NMEPreloader.hx",15,0x86edec4e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(19)
	int tmp = this->getBackgroundColor();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	int backgroundColor = tmp;		HX_STACK_VAR(backgroundColor,"backgroundColor");
	HX_STACK_LINE(20)
	int tmp1 = (int(backgroundColor) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	int r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(21)
	int tmp3 = (int(backgroundColor) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	int g = tmp4;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(22)
	int tmp5 = (int(backgroundColor) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	int b = tmp5;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(23)
	Float tmp6 = (((Float)0.299) * r);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	Float tmp7 = (((Float)0.587) * g);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(23)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(23)
	Float tmp9 = (((Float)0.114) * b);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(23)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(23)
	Float perceivedLuminosity = tmp10;		HX_STACK_VAR(perceivedLuminosity,"perceivedLuminosity");
	HX_STACK_LINE(24)
	int color = (int)0;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(26)
	bool tmp11 = (perceivedLuminosity < (int)70);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(26)
	if ((tmp11)){
		HX_STACK_LINE(28)
		color = (int)16777215;
	}
	HX_STACK_LINE(32)
	int x = (int)30;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(33)
	int height = (int)7;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(34)
	Float tmp12 = this->getHeight();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(34)
	Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(34)
	Float tmp14 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(34)
	Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(34)
	Float y = tmp15;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(35)
	Float tmp16 = this->getWidth();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(35)
	int tmp17 = (x * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(35)
	Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(35)
	Float width = tmp18;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(37)
	int padding = (int)2;		HX_STACK_VAR(padding,"padding");
	HX_STACK_LINE(39)
	::openfl::display::Sprite tmp19 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(39)
	this->outline = tmp19;
	HX_STACK_LINE(40)
	::openfl::display::Sprite tmp20 = this->outline;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(40)
	::openfl::display::Graphics tmp21 = tmp20->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(40)
	int tmp22 = color;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(40)
	tmp21->beginFill(tmp22,((Float)0.07));
	HX_STACK_LINE(41)
	::openfl::display::Sprite tmp23 = this->outline;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(41)
	::openfl::display::Graphics tmp24 = tmp23->get_graphics();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(41)
	Float tmp25 = width;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(41)
	int tmp26 = height;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(41)
	tmp24->drawRect((int)0,(int)0,tmp25,tmp26);
	HX_STACK_LINE(42)
	::openfl::display::Sprite tmp27 = this->outline;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(42)
	int tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(42)
	tmp27->set_x(tmp28);
	HX_STACK_LINE(43)
	::openfl::display::Sprite tmp29 = this->outline;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(43)
	Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(43)
	tmp29->set_y(tmp30);
	HX_STACK_LINE(44)
	::openfl::display::Sprite tmp31 = this->outline;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(44)
	this->addChild(tmp31);
	HX_STACK_LINE(46)
	::openfl::display::Sprite tmp32 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(46)
	this->progress = tmp32;
	HX_STACK_LINE(47)
	::openfl::display::Sprite tmp33 = this->progress;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(47)
	::openfl::display::Graphics tmp34 = tmp33->get_graphics();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(47)
	int tmp35 = color;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(47)
	tmp34->beginFill(tmp35,((Float)0.35));
	HX_STACK_LINE(48)
	::openfl::display::Sprite tmp36 = this->progress;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(48)
	::openfl::display::Graphics tmp37 = tmp36->get_graphics();		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(48)
	Float tmp38 = width;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(48)
	int tmp39 = (padding * (int)2);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(48)
	Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(48)
	int tmp41 = height;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(48)
	int tmp42 = (padding * (int)2);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(48)
	int tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(48)
	tmp37->drawRect((int)0,(int)0,tmp40,tmp43);
	HX_STACK_LINE(49)
	::openfl::display::Sprite tmp44 = this->progress;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(49)
	int tmp45 = (x + padding);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(49)
	tmp44->set_x(tmp45);
	HX_STACK_LINE(50)
	::openfl::display::Sprite tmp46 = this->progress;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(50)
	Float tmp47 = (y + padding);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(50)
	tmp46->set_y(tmp47);
	HX_STACK_LINE(51)
	::openfl::display::Sprite tmp48 = this->progress;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(51)
	tmp48->set_scaleX((int)0);
	HX_STACK_LINE(52)
	::openfl::display::Sprite tmp49 = this->progress;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(52)
	this->addChild(tmp49);
}
;
	return null();
}

//NMEPreloader_obj::~NMEPreloader_obj() { }

Dynamic NMEPreloader_obj::__CreateEmpty() { return  new NMEPreloader_obj; }
hx::ObjectPtr< NMEPreloader_obj > NMEPreloader_obj::__new()
{  hx::ObjectPtr< NMEPreloader_obj > _result_ = new NMEPreloader_obj();
	_result_->__construct();
	return _result_;}

Dynamic NMEPreloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NMEPreloader_obj > _result_ = new NMEPreloader_obj();
	_result_->__construct();
	return _result_;}

int NMEPreloader_obj::getBackgroundColor( ){
	HX_STACK_FRAME("NMEPreloader","getBackgroundColor",0x81f95bdd,"NMEPreloader.getBackgroundColor","NMEPreloader.hx",59,0x86edec4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	return (int)3355443;
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,getBackgroundColor,return )

Float NMEPreloader_obj::getHeight( ){
	HX_STACK_FRAME("NMEPreloader","getHeight",0xcc30c39f,"NMEPreloader.getHeight","NMEPreloader.hx",64,0x86edec4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	int height = (int)500;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(68)
	bool tmp = (height > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	if ((tmp)){
		HX_STACK_LINE(70)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		return tmp1;
	}
	else{
		HX_STACK_LINE(74)
		::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		int tmp2 = tmp1->stage->stageHeight;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		return tmp2;
	}
	HX_STACK_LINE(68)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,getHeight,return )

Float NMEPreloader_obj::getWidth( ){
	HX_STACK_FRAME("NMEPreloader","getWidth",0xdb5cd94e,"NMEPreloader.getWidth","NMEPreloader.hx",81,0x86edec4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	int width = (int)800;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(85)
	bool tmp = (width > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(87)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		return tmp1;
	}
	else{
		HX_STACK_LINE(91)
		::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		int tmp2 = tmp1->stage->stageWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		return tmp2;
	}
	HX_STACK_LINE(85)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,getWidth,return )

Void NMEPreloader_obj::onInit( ){
{
		HX_STACK_FRAME("NMEPreloader","onInit",0xb6a74c0d,"NMEPreloader.onInit","NMEPreloader.hx",98,0x86edec4e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,onInit,(void))

Void NMEPreloader_obj::onLoaded( ){
{
		HX_STACK_FRAME("NMEPreloader","onLoaded",0xe93f5242,"NMEPreloader.onLoaded","NMEPreloader.hx",105,0x86edec4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		::String tmp = ::openfl::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,onLoaded,(void))

Void NMEPreloader_obj::onUpdate( int bytesLoaded,int bytesTotal){
{
		HX_STACK_FRAME("NMEPreloader","onUpdate",0x17d59046,"NMEPreloader.onUpdate","NMEPreloader.hx",112,0x86edec4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytesLoaded,"bytesLoaded")
		HX_STACK_ARG(bytesTotal,"bytesTotal")
		HX_STACK_LINE(114)
		Float tmp = (Float(bytesLoaded) / Float(bytesTotal));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		Float percentLoaded = tmp;		HX_STACK_VAR(percentLoaded,"percentLoaded");
		HX_STACK_LINE(116)
		bool tmp1 = (percentLoaded > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		if ((tmp1)){
			HX_STACK_LINE(118)
			percentLoaded = (int)1;
		}
		HX_STACK_LINE(122)
		::openfl::display::Sprite tmp2 = this->progress;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		Float tmp3 = percentLoaded;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		tmp2->set_scaleX(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NMEPreloader_obj,onUpdate,(void))


NMEPreloader_obj::NMEPreloader_obj()
{
}

void NMEPreloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NMEPreloader);
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(progress,"progress");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NMEPreloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NMEPreloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onInit") ) { return onInit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return outline; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return progress; }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { return onLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBackgroundColor") ) { return getBackgroundColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NMEPreloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NMEPreloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(NMEPreloader_obj,outline),HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(NMEPreloader_obj,progress),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("getBackgroundColor","\x9f","\xee","\x0c","\xc0"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("onInit","\xcf","\x43","\x45","\xe8"),
	HX_HCSTRING("onLoaded","\x84","\x3e","\x1c","\x38"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NMEPreloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NMEPreloader_obj::__mClass,"__mClass");
};

#endif

hx::Class NMEPreloader_obj::__mClass;

void NMEPreloader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("NMEPreloader","\x70","\xbc","\x9a","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NMEPreloader_obj >;
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


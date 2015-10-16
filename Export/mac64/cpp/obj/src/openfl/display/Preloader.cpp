#include <hxcpp.h>

#ifndef INCLUDED_NMEPreloader
#include <NMEPreloader.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
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
#ifndef INCLUDED_openfl_display_Preloader
#include <openfl/display/Preloader.h>
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
namespace openfl{
namespace display{

Void Preloader_obj::__construct(::openfl::display::Sprite display)
{
HX_STACK_FRAME("openfl.display.Preloader","new",0x5c0f09be,"openfl.display.Preloader.new","openfl/display/Preloader.hx",21,0xc399db74)
HX_STACK_THIS(this)
HX_STACK_ARG(display,"display")
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	bool tmp = (display != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	if ((tmp)){
		HX_STACK_LINE(27)
		this->display = display;
		HX_STACK_LINE(28)
		::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		::openfl::display::Sprite tmp2 = display;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		tmp1->addChild(tmp2);
		HX_STACK_LINE(30)
		::openfl::display::Sprite tmp3 = display;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::NMEPreloader >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		if ((tmp4)){
			HX_STACK_LINE(32)
			::NMEPreloader tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(32)
			tmp5 = hx::TCast< ::NMEPreloader >::cast(display);
			HX_STACK_LINE(32)
			tmp5->onInit();
		}
	}
}
;
	return null();
}

//Preloader_obj::~Preloader_obj() { }

Dynamic Preloader_obj::__CreateEmpty() { return  new Preloader_obj; }
hx::ObjectPtr< Preloader_obj > Preloader_obj::__new(::openfl::display::Sprite display)
{  hx::ObjectPtr< Preloader_obj > _result_ = new Preloader_obj();
	_result_->__construct(display);
	return _result_;}

Dynamic Preloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Preloader_obj > _result_ = new Preloader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Preloader_obj::load( Array< ::String > urls,Array< ::String > types){
{
		HX_STACK_FRAME("openfl.display.Preloader","load",0x2fce9308,"openfl.display.Preloader.load","openfl/display/Preloader.hx",83,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(urls,"urls")
		HX_STACK_ARG(types,"types")
		HX_STACK_LINE(83)
		this->super::load(urls,types);
	}
return null();
}


Void Preloader_obj::start( ){
{
		HX_STACK_FRAME("openfl.display.Preloader","start",0xb00e4140,"openfl.display.Preloader.start","openfl/display/Preloader.hx",88,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::openfl::display::Sprite tmp = this->display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp1)){
			HX_STACK_LINE(90)
			::openfl::display::Sprite tmp3 = this->display;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			::openfl::display::Sprite tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			::openfl::display::Sprite tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			tmp2 = ::Std_obj::is(tmp5,hx::ClassOf< ::NMEPreloader >());
		}
		else{
			HX_STACK_LINE(90)
			tmp2 = false;
		}
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(92)
			::openfl::display::Sprite tmp3 = this->display;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			::String tmp4 = ::openfl::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			Dynamic tmp5 = this->display_onComplete_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			tmp3->addEventListener(tmp4,tmp5,null(),null(),null());
			HX_STACK_LINE(93)
			::openfl::display::Sprite tmp6 = this->display;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			::NMEPreloader tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			tmp7 = hx::TCast< ::NMEPreloader >::cast(tmp6);
			HX_STACK_LINE(93)
			tmp7->onLoaded();
		}
		else{
			HX_STACK_LINE(97)
			this->super::start();
		}
	}
return null();
}


Void Preloader_obj::update( int loaded,int total){
{
		HX_STACK_FRAME("openfl.display.Preloader","update",0xdd75fb6b,"openfl.display.Preloader.update","openfl/display/Preloader.hx",104,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
		HX_STACK_LINE(106)
		::openfl::display::Sprite tmp = this->display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(106)
			::openfl::display::Sprite tmp3 = this->display;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			::openfl::display::Sprite tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			::openfl::display::Sprite tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			tmp2 = ::Std_obj::is(tmp5,hx::ClassOf< ::NMEPreloader >());
		}
		else{
			HX_STACK_LINE(106)
			tmp2 = false;
		}
		HX_STACK_LINE(106)
		if ((tmp2)){
			HX_STACK_LINE(108)
			::openfl::display::Sprite tmp3 = this->display;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			::NMEPreloader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			tmp4 = hx::TCast< ::NMEPreloader >::cast(tmp3);
			HX_STACK_LINE(108)
			int tmp5 = loaded;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			int tmp6 = total;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			tmp4->onUpdate(tmp5,tmp6);
		}
	}
return null();
}


Void Preloader_obj::display_onComplete( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.display.Preloader","display_onComplete",0x4bd0fb77,"openfl.display.Preloader.display_onComplete","openfl/display/Preloader.hx",122,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(124)
		::openfl::display::Sprite tmp = this->display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		::String tmp1 = ::openfl::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		Dynamic tmp2 = this->display_onComplete_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		tmp->removeEventListener(tmp1,tmp2,null());
		HX_STACK_LINE(125)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		::openfl::display::Sprite tmp4 = this->display;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		tmp3->removeChild(tmp4);
		HX_STACK_LINE(126)
		::openfl::display::MovieClip tmp5 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		tmp5->stage->set_focus(null());
		HX_STACK_LINE(127)
		this->display = null();
		HX_STACK_LINE(129)
		this->super::start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,display_onComplete,(void))


Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(displayComplete,"displayComplete");
	::lime::app::Preloader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(displayComplete,"displayComplete");
	::lime::app::Preloader_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Preloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return display; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"displayComplete") ) { return displayComplete; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"display_onComplete") ) { return display_onComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Preloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"displayComplete") ) { displayComplete=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"));
	outFields->push(HX_HCSTRING("displayComplete","\x1b","\xf9","\x3a","\x6c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Preloader_obj,display),HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb")},
	{hx::fsBool,(int)offsetof(Preloader_obj,displayComplete),HX_HCSTRING("displayComplete","\x1b","\xf9","\x3a","\x6c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("displayComplete","\x1b","\xf9","\x3a","\x6c"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("display_onComplete","\x15","\xfb","\x54","\x60"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#endif

hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Preloader","\xcc","\x12","\x24","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Preloader_obj >;
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
} // end namespace display

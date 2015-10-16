#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_NMEPreloader
#include <NMEPreloader.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
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
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

//ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > _result_ = new ApplicationMain_obj();
	_result_->__construct();
	return _result_;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > _result_ = new ApplicationMain_obj();
	_result_->__construct();
	return _result_;}

Dynamic ApplicationMain_obj::config;

::openfl::display::Preloader ApplicationMain_obj::preloader;

Void ApplicationMain_obj::create( ){
{
		HX_STACK_FRAME("ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",16,0x0780ded5)
		HX_STACK_LINE(18)
		::openfl::display::Application tmp = ::openfl::display::Application_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		::openfl::display::Application app = tmp;		HX_STACK_VAR(app,"app");
		HX_STACK_LINE(19)
		Dynamic tmp1 = ::ApplicationMain_obj::config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		app->create(tmp1);
		HX_STACK_LINE(21)
		::NMEPreloader tmp2 = ::NMEPreloader_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		::NMEPreloader display = tmp2;		HX_STACK_VAR(display,"display");
		HX_STACK_LINE(23)
		::openfl::display::Preloader tmp3 = ::openfl::display::Preloader_obj::__new(display);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		::ApplicationMain_obj::preloader = tmp3;
		HX_STACK_LINE(24)
		::openfl::display::Preloader tmp4 = ::ApplicationMain_obj::preloader;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		app->setPreloader(tmp4);
		HX_STACK_LINE(25)
		::openfl::display::Preloader tmp5 = ::ApplicationMain_obj::preloader;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		Dynamic tmp6 = ::ApplicationMain_obj::init_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(25)
		tmp5->onComplete->add(tmp6,null(),null());
		HX_STACK_LINE(26)
		::openfl::display::Preloader tmp7 = ::ApplicationMain_obj::preloader;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(26)
		Dynamic tmp8 = ::ApplicationMain_obj::config;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(26)
		tmp7->create(tmp8);
		HX_STACK_LINE(51)
		int tmp9 = app->exec();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		int result = tmp9;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(54)
		int tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(54)
		::Sys_obj::exit(tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,create,(void))

Void ApplicationMain_obj::init( ){
{
		HX_STACK_FRAME("ApplicationMain","init",0x9137fa15,"ApplicationMain.init","ApplicationMain.hx",60,0x0780ded5)
		HX_STACK_LINE(62)
		Array< int > loaded = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(loaded,"loaded");
		HX_STACK_LINE(63)
		int total = (int)0;		HX_STACK_VAR(total,"total");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< int >,loaded,int,total)
		int __ArgCount() const { return 1; }
		Void run(Dynamic __){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ApplicationMain.hx",64,0x0780ded5)
			HX_STACK_ARG(__,"__")
			{
				HX_STACK_LINE(66)
				(loaded[(int)0])++;
				HX_STACK_LINE(68)
				bool tmp = (loaded->__get((int)0) == total);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(68)
				if ((tmp)){
					HX_STACK_LINE(70)
					::ApplicationMain_obj::start();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(64)
		Dynamic library_onLoad =  Dynamic(new _Function_1_1(loaded,total));		HX_STACK_VAR(library_onLoad,"library_onLoad");
		HX_STACK_LINE(76)
		::ApplicationMain_obj::preloader = null();
		HX_STACK_LINE(80)
		bool tmp = (total == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		if ((tmp)){
			HX_STACK_LINE(82)
			::ApplicationMain_obj::start();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,init,(void))

Void ApplicationMain_obj::main( ){
{
		HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",89,0x0780ded5)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ApplicationMain.hx",103,0x0780ded5)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48") , (int)0,false);
					__result->Add(HX_HCSTRING("background","\xee","\x93","\x1d","\x26") , (int)3355443,false);
					__result->Add(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17") , false,false);
					__result->Add(HX_HCSTRING("depthBuffer","\x63","\x46","\x9e","\x52") , false,false);
					__result->Add(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb") , (int)0,false);
					__result->Add(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9") , false,false);
					__result->Add(HX_HCSTRING("hardware","\xa8","\xe2","\xd3","\x75") , true,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , (int)500,false);
					__result->Add(HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51") , HX_HCSTRING("{}","\xa2","\x6b","\x00","\x00"),false);
					__result->Add(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9") , true,false);
					__result->Add(HX_HCSTRING("stencilBuffer","\x1c","\x94","\x39","\x31") , true,false);
					__result->Add(HX_HCSTRING("title","\x98","\x15","\x3b","\x10") , HX_HCSTRING("Ilha","\xbc","\xe1","\x92","\x30"),false);
					__result->Add(HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d") , false,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , (int)800,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , null(),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(103)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ApplicationMain.hx",91,0x0780ded5)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("build","\x2e","\xdb","\xea","\xba") , HX_HCSTRING("94","\xdb","\x31","\x00","\x00"),false);
					__result->Add(HX_HCSTRING("company","\x3d","\x15","\x69","\x83") , HX_HCSTRING("Company Name","\x4e","\x48","\x0d","\xcb"),false);
					__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , HX_HCSTRING("Ilha","\xbc","\xe1","\x92","\x30"),false);
					__result->Add(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00") , (int)30,false);
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("Ilha","\xbc","\xe1","\x92","\x30"),false);
					__result->Add(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
					__result->Add(HX_HCSTRING("packageName","\xf1","\x04","\xad","\x04") , HX_HCSTRING("com.sample.ilha","\xb3","\x3c","\x10","\xd0"),false);
					__result->Add(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c") , HX_HCSTRING("1.0.0","\xb5","\xd1","\x2e","\x55"),false);
					__result->Add(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8") , cpp::ArrayBase_obj::__new().Add(tmp),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(91)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		::ApplicationMain_obj::config = tmp1;
		HX_STACK_LINE(138)
		::ApplicationMain_obj::create();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::start( ){
{
		HX_STACK_FRAME("ApplicationMain","start",0x45b5d9bd,"ApplicationMain.start","ApplicationMain.hx",144,0x0780ded5)
		HX_STACK_LINE(146)
		bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
		HX_STACK_LINE(147)
		::hx::Class tmp = ::Type_obj::resolveClass(HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		::hx::Class entryPoint = tmp;		HX_STACK_VAR(entryPoint,"entryPoint");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			::hx::Class tmp1 = entryPoint;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			Array< ::String > _g1 = ::Type_obj::getClassFields(tmp1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(149)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(149)
				if ((tmp3)){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(149)
				::String methodName = tmp4;		HX_STACK_VAR(methodName,"methodName");
				HX_STACK_LINE(149)
				++(_g);
				HX_STACK_LINE(151)
				bool tmp5 = (methodName == HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				if ((tmp5)){
					HX_STACK_LINE(153)
					hasMain = true;
					HX_STACK_LINE(154)
					break;
				}
			}
		}
		HX_STACK_LINE(160)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(162)
		bool tmp1 = hasMain;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		if ((tmp1)){
			HX_STACK_LINE(164)
			::hx::Class tmp2 = entryPoint;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			::hx::Class tmp3 = entryPoint;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			Dynamic tmp4 = ::Reflect_obj::field(tmp3,HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			::Reflect_obj::callMethod(tmp2,tmp4,cpp::ArrayBase_obj::__new());
		}
		else{
			HX_STACK_LINE(168)
			::DocumentClass tmp2 = ::Type_obj::createInstance(hx::ClassOf< ::DocumentClass >(),cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(168)
			::DocumentClass instance = tmp2;		HX_STACK_VAR(instance,"instance");
		}
		HX_STACK_LINE(179)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		::lime::ui::Window tmp3 = tmp2->stage->window;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		bool tmp4 = tmp3->__fullscreen;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		if ((tmp4)){
			HX_STACK_LINE(181)
			::openfl::display::MovieClip tmp5 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			::String tmp6 = ::openfl::events::FullScreenEvent_obj::FULL_SCREEN;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			::openfl::events::FullScreenEvent tmp7 = ::openfl::events::FullScreenEvent_obj::__new(tmp6,false,false,true,true);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(181)
			tmp5->stage->dispatchEvent(tmp7);
		}
		HX_STACK_LINE(185)
		::openfl::display::MovieClip tmp5 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		::String tmp6 = ::openfl::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,false,false);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		tmp5->stage->dispatchEvent(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,start,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

bool ApplicationMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { outValue = config; return true;  }
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { outValue = preloader; return true;  }
	}
	return false;
}

bool ApplicationMain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=ioValue.Cast< ::openfl::display::Preloader >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ApplicationMain_obj::config,HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*::openfl::display::Preloader*/ ,(void *) &ApplicationMain_obj::preloader,HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::config,"config");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::preloader,"preloader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::config,"config");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::preloader,"preloader");
};

#endif

hx::Class ApplicationMain_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	::String(null()) };

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationMain_obj::__GetStatic;
	__mClass->mSetStaticField = &ApplicationMain_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ApplicationMain_obj >;
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


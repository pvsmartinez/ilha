#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_
#include <lime/ui/_GamepadAxis/GamepadAxis_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _GamepadAxis{

Void GamepadAxis_Impl__obj::__construct()
{
	return null();
}

//GamepadAxis_Impl__obj::~GamepadAxis_Impl__obj() { }

Dynamic GamepadAxis_Impl__obj::__CreateEmpty() { return  new GamepadAxis_Impl__obj; }
hx::ObjectPtr< GamepadAxis_Impl__obj > GamepadAxis_Impl__obj::__new()
{  hx::ObjectPtr< GamepadAxis_Impl__obj > _result_ = new GamepadAxis_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GamepadAxis_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadAxis_Impl__obj > _result_ = new GamepadAxis_Impl__obj();
	_result_->__construct();
	return _result_;}

int GamepadAxis_Impl__obj::LEFT_X;

int GamepadAxis_Impl__obj::LEFT_Y;

int GamepadAxis_Impl__obj::RIGHT_X;

int GamepadAxis_Impl__obj::RIGHT_Y;

int GamepadAxis_Impl__obj::TRIGGER_LEFT;

int GamepadAxis_Impl__obj::TRIGGER_RIGHT;

::String GamepadAxis_Impl__obj::toString( int this1){
	HX_STACK_FRAME("lime.ui._GamepadAxis.GamepadAxis_Impl_","toString",0x829ca022,"lime.ui._GamepadAxis.GamepadAxis_Impl_.toString","lime/ui/GamepadAxis.hx",15,0x01182a1d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(17)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(19)
			tmp1 = HX_HCSTRING("LEFT_X","\xe0","\x72","\x4a","\x4c");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(20)
			tmp1 = HX_HCSTRING("LEFT_Y","\xe1","\x72","\x4a","\x4c");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(21)
			tmp1 = HX_HCSTRING("RIGHT_X","\xd5","\xfd","\x37","\x93");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(22)
			tmp1 = HX_HCSTRING("RIGHT_Y","\xd6","\xfd","\x37","\x93");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(23)
			tmp1 = HX_HCSTRING("TRIGGER_LEFT","\xce","\xcb","\x4a","\xf1");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(24)
			tmp1 = HX_HCSTRING("TRIGGER_RIGHT","\x15","\x96","\x34","\xa7");
		}
		;break;
		default: {
			HX_STACK_LINE(25)
			::String tmp2 = (HX_HCSTRING("UNKNOWN (","\xf2","\x41","\x8b","\x8c") + this1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			tmp1 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
		}
	}
	HX_STACK_LINE(17)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GamepadAxis_Impl__obj,toString,return )


GamepadAxis_Impl__obj::GamepadAxis_Impl__obj()
{
}

bool GamepadAxis_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GamepadAxis_Impl__obj::LEFT_X,HX_HCSTRING("LEFT_X","\xe0","\x72","\x4a","\x4c")},
	{hx::fsInt,(void *) &GamepadAxis_Impl__obj::LEFT_Y,HX_HCSTRING("LEFT_Y","\xe1","\x72","\x4a","\x4c")},
	{hx::fsInt,(void *) &GamepadAxis_Impl__obj::RIGHT_X,HX_HCSTRING("RIGHT_X","\xd5","\xfd","\x37","\x93")},
	{hx::fsInt,(void *) &GamepadAxis_Impl__obj::RIGHT_Y,HX_HCSTRING("RIGHT_Y","\xd6","\xfd","\x37","\x93")},
	{hx::fsInt,(void *) &GamepadAxis_Impl__obj::TRIGGER_LEFT,HX_HCSTRING("TRIGGER_LEFT","\xce","\xcb","\x4a","\xf1")},
	{hx::fsInt,(void *) &GamepadAxis_Impl__obj::TRIGGER_RIGHT,HX_HCSTRING("TRIGGER_RIGHT","\x15","\x96","\x34","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_X,"LEFT_X");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_Y,"LEFT_Y");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_X,"RIGHT_X");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_Y,"RIGHT_Y");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_LEFT,"TRIGGER_LEFT");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_RIGHT,"TRIGGER_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_X,"LEFT_X");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_Y,"LEFT_Y");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_X,"RIGHT_X");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_Y,"RIGHT_Y");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_LEFT,"TRIGGER_LEFT");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_RIGHT,"TRIGGER_RIGHT");
};

#endif

hx::Class GamepadAxis_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT_X","\xe0","\x72","\x4a","\x4c"),
	HX_HCSTRING("LEFT_Y","\xe1","\x72","\x4a","\x4c"),
	HX_HCSTRING("RIGHT_X","\xd5","\xfd","\x37","\x93"),
	HX_HCSTRING("RIGHT_Y","\xd6","\xfd","\x37","\x93"),
	HX_HCSTRING("TRIGGER_LEFT","\xce","\xcb","\x4a","\xf1"),
	HX_HCSTRING("TRIGGER_RIGHT","\x15","\x96","\x34","\xa7"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GamepadAxis_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui._GamepadAxis.GamepadAxis_Impl_","\xb8","\x57","\xb6","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GamepadAxis_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GamepadAxis_Impl__obj >;
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

void GamepadAxis_Impl__obj::__boot()
{
	LEFT_X= (int)0;
	LEFT_Y= (int)1;
	RIGHT_X= (int)2;
	RIGHT_Y= (int)3;
	TRIGGER_LEFT= (int)4;
	TRIGGER_RIGHT= (int)5;
}

} // end namespace lime
} // end namespace ui
} // end namespace _GamepadAxis

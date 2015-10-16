#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace display{

Void Stage3D_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Stage3D","new",0x52647737,"openfl.display.Stage3D.new","openfl/display/Stage3D.hx",23,0x37141b9b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	super::__construct(null());
}
;
	return null();
}

//Stage3D_obj::~Stage3D_obj() { }

Dynamic Stage3D_obj::__CreateEmpty() { return  new Stage3D_obj; }
hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__new()
{  hx::ObjectPtr< Stage3D_obj > _result_ = new Stage3D_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stage3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage3D_obj > _result_ = new Stage3D_obj();
	_result_->__construct();
	return _result_;}

Void Stage3D_obj::requestContext3D( ::String __o_context3DRenderMode){
::String context3DRenderMode = __o_context3DRenderMode.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("openfl.display.Stage3D","requestContext3D",0x80c219da,"openfl.display.Stage3D.requestContext3D","openfl/display/Stage3D.hx",27,0x37141b9b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(context3DRenderMode,"context3DRenderMode")
{
		HX_STACK_LINE(27)
		::openfl::display::Stage3D _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		bool tmp = ::openfl::display::OpenGLView_obj::get_isSupported();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		if ((tmp)){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::openfl::display::Stage3D,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage3D.hx",31,0x37141b9b)
				{
					HX_STACK_LINE(33)
					::openfl::display3D::Context3D tmp1 = ::openfl::display3D::Context3D_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(33)
					_g->context3D = tmp1;
					HX_STACK_LINE(34)
					::String tmp2 = ::openfl::events::Event_obj::CONTEXT3D_CREATE;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(34)
					::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(34)
					_g->dispatchEvent(tmp3);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(31)
			::haxe::Timer_obj::delay( Dynamic(new _Function_2_1(_g)),(int)1);
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::openfl::display::Stage3D,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage3D.hx",40,0x37141b9b)
				{
					HX_STACK_LINE(42)
					::String tmp1 = ::openfl::events::ErrorEvent_obj::ERROR;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(42)
					::openfl::events::ErrorEvent tmp2 = ::openfl::events::ErrorEvent_obj::__new(tmp1,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(42)
					_g->dispatchEvent(tmp2);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(40)
			::haxe::Timer_obj::delay( Dynamic(new _Function_2_1(_g)),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,requestContext3D,(void))


Stage3D_obj::Stage3D_obj()
{
}

void Stage3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3D);
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return context3D; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requestContext3D") ) { return requestContext3D_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Stage3D_obj,context3D),HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("requestContext3D","\x11","\x7b","\x31","\xf9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Stage3D_obj::__mClass;

void Stage3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Stage3D","\xc5","\x0f","\x85","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage3D_obj >;
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

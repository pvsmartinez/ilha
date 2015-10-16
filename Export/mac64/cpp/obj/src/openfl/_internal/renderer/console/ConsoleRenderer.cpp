#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#include <lime/graphics/ConsoleRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_console_ConsoleRenderer
#include <openfl/_internal/renderer/console/ConsoleRenderer.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace console{

Void ConsoleRenderer_obj::__construct(int width,int height,::lime::graphics::ConsoleRenderContext ctx)
{
HX_STACK_FRAME("openfl._internal.renderer.console.ConsoleRenderer","new",0x3dea677a,"openfl._internal.renderer.console.ConsoleRenderer.new","openfl/_internal/renderer/console/ConsoleRenderer.hx",1262,0xaf6bb8b6)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(ctx,"ctx")
{
	HX_STACK_LINE(1264)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1264)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1264)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(1266)
	HX_STACK_DO_THROW(HX_HCSTRING("ConsoleRenderer not supported","\xdb","\xb9","\xd4","\x90"));
}
;
	return null();
}

//ConsoleRenderer_obj::~ConsoleRenderer_obj() { }

Dynamic ConsoleRenderer_obj::__CreateEmpty() { return  new ConsoleRenderer_obj; }
hx::ObjectPtr< ConsoleRenderer_obj > ConsoleRenderer_obj::__new(int width,int height,::lime::graphics::ConsoleRenderContext ctx)
{  hx::ObjectPtr< ConsoleRenderer_obj > _result_ = new ConsoleRenderer_obj();
	_result_->__construct(width,height,ctx);
	return _result_;}

Dynamic ConsoleRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleRenderer_obj > _result_ = new ConsoleRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ConsoleRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.console.ConsoleRenderer","render",0xc9bac07c,"openfl._internal.renderer.console.ConsoleRenderer.render","openfl/_internal/renderer/console/ConsoleRenderer.hx",1271,0xaf6bb8b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
	}
return null();
}



ConsoleRenderer_obj::ConsoleRenderer_obj()
{
}

Dynamic ConsoleRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleRenderer_obj::__mClass;

void ConsoleRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.console.ConsoleRenderer","\x88","\xe2","\x96","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleRenderer_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace console

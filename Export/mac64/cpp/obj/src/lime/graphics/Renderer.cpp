#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_graphics_RenderContext_Void
#include <lime/app/Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace graphics{

Void Renderer_obj::__construct(::lime::ui::Window window)
{
HX_STACK_FRAME("lime.graphics.Renderer","new",0x7185ed3f,"lime.graphics.Renderer.new","lime/graphics/Renderer.hx",8,0x16f09331)
HX_STACK_THIS(this)
HX_STACK_ARG(window,"window")
{
	HX_STACK_LINE(14)
	this->onRender = ::lime::app::Event_Void_Void_obj::__new();
	HX_STACK_LINE(13)
	this->onContextRestored = ::lime::app::Event_lime_graphics_RenderContext_Void_obj::__new();
	HX_STACK_LINE(12)
	this->onContextLost = ::lime::app::Event_Void_Void_obj::__new();
	HX_STACK_LINE(23)
	this->window = window;
	HX_STACK_LINE(25)
	::lime::_backend::native::NativeRenderer tmp = ::lime::_backend::native::NativeRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	this->backend = tmp;
	HX_STACK_LINE(27)
	::lime::ui::Window tmp1 = this->window;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	tmp1->renderer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Renderer_obj::~Renderer_obj() { }

Dynamic Renderer_obj::__CreateEmpty() { return  new Renderer_obj; }
hx::ObjectPtr< Renderer_obj > Renderer_obj::__new(::lime::ui::Window window)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(window);
	return _result_;}

Dynamic Renderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Renderer_obj::create( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","create",0x6b7d5f7d,"lime.graphics.Renderer.create","lime/graphics/Renderer.hx",32,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::lime::_backend::native::NativeRenderer tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		tmp->create();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create,(void))

Void Renderer_obj::flip( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","flip",0xde6538ee,"lime.graphics.Renderer.flip","lime/graphics/Renderer.hx",39,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::lime::_backend::native::NativeRenderer tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		tmp->flip();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,flip,(void))

Void Renderer_obj::render( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","render",0xf49763d7,"lime.graphics.Renderer.render","lime/graphics/Renderer.hx",46,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::lime::_backend::native::NativeRenderer tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		tmp->render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,render,(void))


Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(onContextLost,"onContextLost");
	HX_MARK_MEMBER_NAME(onContextRestored,"onContextRestored");
	HX_MARK_MEMBER_NAME(onRender,"onRender");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(onContextLost,"onContextLost");
	HX_VISIT_MEMBER_NAME(onContextRestored,"onContextRestored");
	HX_VISIT_MEMBER_NAME(onRender,"onRender");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(backend,"backend");
}

Dynamic Renderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRender") ) { return onRender; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onContextLost") ) { return onContextLost; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContextRestored") ) { return onContextRestored; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Renderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::graphics::RendererType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::RenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeRenderer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRender") ) { onRender=inValue.Cast< ::lime::app::Event_Void_Void >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onContextLost") ) { onContextLost=inValue.Cast< ::lime::app::Event_Void_Void >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContextRestored") ) { onContextRestored=inValue.Cast< ::lime::app::Event_lime_graphics_RenderContext_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("onContextLost","\x94","\xac","\xa5","\x87"));
	outFields->push(HX_HCSTRING("onContextRestored","\x06","\x18","\x47","\xe2"));
	outFields->push(HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(Renderer_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(int)offsetof(Renderer_obj,onContextLost),HX_HCSTRING("onContextLost","\x94","\xac","\xa5","\x87")},
	{hx::fsObject /*::lime::app::Event_lime_graphics_RenderContext_Void*/ ,(int)offsetof(Renderer_obj,onContextRestored),HX_HCSTRING("onContextRestored","\x06","\x18","\x47","\xe2")},
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(int)offsetof(Renderer_obj,onRender),HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4")},
	{hx::fsObject /*::lime::graphics::RendererType*/ ,(int)offsetof(Renderer_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Renderer_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::lime::_backend::native::NativeRenderer*/ ,(int)offsetof(Renderer_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("onContextLost","\x94","\xac","\xa5","\x87"),
	HX_HCSTRING("onContextRestored","\x06","\x18","\x47","\xe2"),
	HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("flip","\xad","\x12","\xbe","\x43"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

hx::Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.Renderer","\xcd","\xe1","\x20","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Renderer_obj >;
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

} // end namespace lime
} // end namespace graphics

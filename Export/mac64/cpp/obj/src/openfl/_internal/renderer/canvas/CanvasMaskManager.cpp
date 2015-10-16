#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasMaskManager
#include <openfl/_internal/renderer/canvas/CanvasMaskManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

Void CanvasMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","new",0x7f907a00,"openfl._internal.renderer.canvas.CanvasMaskManager.new","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",15,0x595783d2)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(17)
	::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
}
;
	return null();
}

//CanvasMaskManager_obj::~CanvasMaskManager_obj() { }

Dynamic CanvasMaskManager_obj::__CreateEmpty() { return  new CanvasMaskManager_obj; }
hx::ObjectPtr< CanvasMaskManager_obj > CanvasMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< CanvasMaskManager_obj > _result_ = new CanvasMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic CanvasMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasMaskManager_obj > _result_ = new CanvasMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CanvasMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","pushMask",0x279fe646,"openfl._internal.renderer.canvas.CanvasMaskManager.pushMask","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",22,0x595783d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(24)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::lime::graphics::CanvasRenderContext context = tmp->context;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(26)
		context->save();
		HX_STACK_LINE(29)
		::openfl::geom::Matrix tmp1 = mask->__getWorldTransform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::openfl::geom::Matrix transform = tmp1;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(31)
		Float tmp2 = transform->a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		Float tmp3 = transform->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		Float tmp4 = transform->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		Float tmp5 = transform->d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		Float tmp6 = transform->tx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		Float tmp7 = transform->ty;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		context->setTransform(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(33)
		context->beginPath();
		HX_STACK_LINE(34)
		::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		mask->__renderCanvasMask(tmp8);
		HX_STACK_LINE(36)
		context->clip();
	}
return null();
}


Void CanvasMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","pushRect",0x2af0f27e,"openfl._internal.renderer.canvas.CanvasMaskManager.pushRect","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",43,0x595783d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(45)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::lime::graphics::CanvasRenderContext context = tmp->context;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(46)
		context->save();
		HX_STACK_LINE(48)
		Float tmp1 = transform->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		Float tmp2 = transform->b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Float tmp3 = transform->c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		Float tmp4 = transform->d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		Float tmp5 = transform->tx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		Float tmp6 = transform->ty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		context->setTransform(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(50)
		context->beginPath();
		HX_STACK_LINE(51)
		Float tmp7 = rect->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		Float tmp8 = rect->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		Float tmp9 = rect->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		Float tmp10 = rect->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		context->rect(tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(52)
		context->clip();
	}
return null();
}


Void CanvasMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","popMask",0xe87360bd,"openfl._internal.renderer.canvas.CanvasMaskManager.popMask","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",57,0x595783d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		tmp->context->restore();
	}
return null();
}


Void CanvasMaskManager_obj::popRect( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","popRect",0xebc46cf5,"openfl._internal.renderer.canvas.CanvasMaskManager.popRect","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",64,0x595783d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		tmp->context->restore();
	}
return null();
}



CanvasMaskManager_obj::CanvasMaskManager_obj()
{
}

Dynamic CanvasMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return popRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasMaskManager_obj::__mClass;

void CanvasMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasMaskManager","\x0e","\xba","\xd3","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasMaskManager_obj >;
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
} // end namespace canvas

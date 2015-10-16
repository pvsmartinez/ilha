#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasMaskManager
#include <openfl/_internal/renderer/canvas/CanvasMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
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
namespace canvas{

Void CanvasRenderer_obj::__construct(int width,int height,::lime::graphics::CanvasRenderContext context)
{
HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","new",0x66327fe8,"openfl._internal.renderer.canvas.CanvasRenderer.new","openfl/_internal/renderer/canvas/CanvasRenderer.hx",18,0x1be544e6)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(context,"context")
{
	HX_STACK_LINE(20)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(22)
	this->context = context;
	HX_STACK_LINE(24)
	::openfl::_internal::renderer::RenderSession tmp2 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	this->renderSession = tmp2;
	HX_STACK_LINE(25)
	::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	tmp3->context = context;
	HX_STACK_LINE(26)
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	tmp4->roundPixels = true;
	HX_STACK_LINE(27)
	::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	tmp5->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::RenderSession tmp6 = this->renderSession;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::canvas::CanvasMaskManager tmp7 = ::openfl::_internal::renderer::canvas::CanvasMaskManager_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	tmp8->maskManager = tmp7;
}
;
	return null();
}

//CanvasRenderer_obj::~CanvasRenderer_obj() { }

Dynamic CanvasRenderer_obj::__CreateEmpty() { return  new CanvasRenderer_obj; }
hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__new(int width,int height,::lime::graphics::CanvasRenderContext context)
{  hx::ObjectPtr< CanvasRenderer_obj > _result_ = new CanvasRenderer_obj();
	_result_->__construct(width,height,context);
	return _result_;}

Dynamic CanvasRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasRenderer_obj > _result_ = new CanvasRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void CanvasRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","render",0x244720ce,"openfl._internal.renderer.canvas.CanvasRenderer.render","openfl/_internal/renderer/canvas/CanvasRenderer.hx",35,0x1be544e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(37)
		::lime::graphics::CanvasRenderContext tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		tmp->setTransform((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);
		HX_STACK_LINE(38)
		::lime::graphics::CanvasRenderContext tmp1 = this->context;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		tmp1->globalAlpha = (int)1;
		HX_STACK_LINE(40)
		bool tmp2 = stage->__transparent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		if ((tmp4)){
			HX_STACK_LINE(40)
			tmp5 = stage->__clearBeforeRender;
		}
		else{
			HX_STACK_LINE(40)
			tmp5 = false;
		}
		HX_STACK_LINE(40)
		if ((tmp5)){
			HX_STACK_LINE(42)
			::lime::graphics::CanvasRenderContext tmp6 = this->context;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			tmp6->fillStyle = stage->__colorString;
			HX_STACK_LINE(43)
			::lime::graphics::CanvasRenderContext tmp7 = this->context;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			int tmp8 = stage->stageWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			int tmp9 = stage->stageHeight;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			tmp7->fillRect((int)0,(int)0,tmp8,tmp9);
		}
		else{
			HX_STACK_LINE(45)
			bool tmp6 = stage->__transparent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			if ((tmp6)){
				HX_STACK_LINE(45)
				tmp7 = stage->__clearBeforeRender;
			}
			else{
				HX_STACK_LINE(45)
				tmp7 = false;
			}
			HX_STACK_LINE(45)
			if ((tmp7)){
				HX_STACK_LINE(47)
				::lime::graphics::CanvasRenderContext tmp8 = this->context;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				int tmp9 = stage->stageWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				int tmp10 = stage->stageHeight;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				tmp8->clearRect((int)0,(int)0,tmp9,tmp10);
			}
		}
		HX_STACK_LINE(51)
		::openfl::_internal::renderer::RenderSession tmp6 = this->renderSession;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		stage->__renderCanvas(tmp6);
	}
return null();
}



CanvasRenderer_obj::CanvasRenderer_obj()
{
}

void CanvasRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderer);
	HX_MARK_MEMBER_NAME(context,"context");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CanvasRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::CanvasRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::CanvasRenderContext*/ ,(int)offsetof(CanvasRenderer_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasRenderer_obj::__mClass;

void CanvasRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasRenderer","\xf6","\xab","\xb2","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasRenderer_obj >;
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

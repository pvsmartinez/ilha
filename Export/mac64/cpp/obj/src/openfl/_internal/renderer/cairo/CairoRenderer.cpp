#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
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
namespace cairo{

Void CairoRenderer_obj::__construct(int width,int height,::lime::graphics::cairo::Cairo cairo)
{
HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoRenderer","new",0x7d599cdc,"openfl._internal.renderer.cairo.CairoRenderer.new","openfl/_internal/renderer/cairo/CairoRenderer.hx",21,0x849037d4)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(cairo,"cairo")
{
	HX_STACK_LINE(23)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(25)
	this->cairo = cairo;
	HX_STACK_LINE(27)
	::openfl::_internal::renderer::RenderSession tmp2 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	this->renderSession = tmp2;
	HX_STACK_LINE(28)
	::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	tmp3->cairo = cairo;
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	tmp4->roundPixels = true;
	HX_STACK_LINE(30)
	::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	tmp5->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(31)
	::openfl::_internal::renderer::RenderSession tmp6 = this->renderSession;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	::openfl::_internal::renderer::cairo::CairoMaskManager tmp7 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	tmp8->maskManager = tmp7;
}
;
	return null();
}

//CairoRenderer_obj::~CairoRenderer_obj() { }

Dynamic CairoRenderer_obj::__CreateEmpty() { return  new CairoRenderer_obj; }
hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__new(int width,int height,::lime::graphics::cairo::Cairo cairo)
{  hx::ObjectPtr< CairoRenderer_obj > _result_ = new CairoRenderer_obj();
	_result_->__construct(width,height,cairo);
	return _result_;}

Dynamic CairoRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoRenderer_obj > _result_ = new CairoRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void CairoRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoRenderer","render",0xe2c1945a,"openfl._internal.renderer.cairo.CairoRenderer.render","openfl/_internal/renderer/cairo/CairoRenderer.hx",36,0x849037d4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(38)
		::lime::graphics::cairo::Cairo tmp = this->cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		tmp->identityMatrix();
		HX_STACK_LINE(40)
		bool tmp1 = stage->__clearBeforeRender;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		if ((tmp1)){
			HX_STACK_LINE(42)
			::lime::graphics::cairo::Cairo tmp2 = this->cairo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			Float tmp3 = stage->__colorSplit->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			Float tmp4 = stage->__colorSplit->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			Float tmp5 = stage->__colorSplit->__get((int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			tmp2->setSourceRGB(tmp3,tmp4,tmp5);
			HX_STACK_LINE(43)
			::lime::graphics::cairo::Cairo tmp6 = this->cairo;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			tmp6->paint();
		}
		HX_STACK_LINE(47)
		::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		stage->__renderCairo(tmp2);
	}
return null();
}


Void CairoRenderer_obj::renderDisplayObject( ::openfl::display::DisplayObject object){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoRenderer","renderDisplayObject",0x7c53c5e7,"openfl._internal.renderer.cairo.CairoRenderer.renderDisplayObject","openfl/_internal/renderer/cairo/CairoRenderer.hx",52,0x849037d4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(54)
		::lime::graphics::cairo::Cairo tmp = this->cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		tmp->identityMatrix();
		HX_STACK_LINE(55)
		::openfl::_internal::renderer::RenderSession tmp1 = this->renderSession;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		object->__renderCairo(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CairoRenderer_obj,renderDisplayObject,(void))


CairoRenderer_obj::CairoRenderer_obj()
{
}

void CairoRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoRenderer);
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CairoRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CairoRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDisplayObject") ) { return renderDisplayObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(CairoRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderDisplayObject","\x6b","\x41","\xdc","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoRenderer_obj::__mClass;

void CairoRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoRenderer","\xea","\x3e","\x63","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoRenderer_obj >;
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
} // end namespace cairo

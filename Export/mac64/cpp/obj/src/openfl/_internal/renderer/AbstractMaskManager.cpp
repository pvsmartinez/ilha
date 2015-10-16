#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
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

Void AbstractMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","new",0x58c36376,"openfl._internal.renderer.AbstractMaskManager.new","openfl/_internal/renderer/AbstractMaskManager.hx",19,0x8fcbf079)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(19)
	this->renderSession = renderSession;
}
;
	return null();
}

//AbstractMaskManager_obj::~AbstractMaskManager_obj() { }

Dynamic AbstractMaskManager_obj::__CreateEmpty() { return  new AbstractMaskManager_obj; }
hx::ObjectPtr< AbstractMaskManager_obj > AbstractMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< AbstractMaskManager_obj > _result_ = new AbstractMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic AbstractMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractMaskManager_obj > _result_ = new AbstractMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void AbstractMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","pushMask",0x0e5cf110,"openfl._internal.renderer.AbstractMaskManager.pushMask","openfl/_internal/renderer/AbstractMaskManager.hx",24,0x8fcbf079)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractMaskManager_obj,pushMask,(void))

Void AbstractMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","pushRect",0x11adfd48,"openfl._internal.renderer.AbstractMaskManager.pushRect","openfl/_internal/renderer/AbstractMaskManager.hx",31,0x8fcbf079)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractMaskManager_obj,pushRect,(void))

Void AbstractMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","popMask",0x91173d33,"openfl._internal.renderer.AbstractMaskManager.popMask","openfl/_internal/renderer/AbstractMaskManager.hx",38,0x8fcbf079)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMaskManager_obj,popMask,(void))

Void AbstractMaskManager_obj::popRect( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","popRect",0x9468496b,"openfl._internal.renderer.AbstractMaskManager.popRect","openfl/_internal/renderer/AbstractMaskManager.hx",45,0x8fcbf079)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMaskManager_obj,popRect,(void))

Void AbstractMaskManager_obj::saveState( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","saveState",0x4e70852a,"openfl._internal.renderer.AbstractMaskManager.saveState","openfl/_internal/renderer/AbstractMaskManager.hx",52,0x8fcbf079)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMaskManager_obj,saveState,(void))

Void AbstractMaskManager_obj::restoreState( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractMaskManager","restoreState",0xcb759e0d,"openfl._internal.renderer.AbstractMaskManager.restoreState","openfl/_internal/renderer/AbstractMaskManager.hx",59,0x8fcbf079)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractMaskManager_obj,restoreState,(void))


AbstractMaskManager_obj::AbstractMaskManager_obj()
{
}

void AbstractMaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractMaskManager);
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_END_CLASS();
}

void AbstractMaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
}

Dynamic AbstractMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return popRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveState") ) { return saveState_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"restoreState") ) { return restoreState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractMaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractMaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(AbstractMaskManager_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	HX_HCSTRING("saveState","\x94","\x7d","\xb8","\x12"),
	HX_HCSTRING("restoreState","\xe3","\x43","\x89","\xe0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractMaskManager_obj::__mClass;

void AbstractMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.AbstractMaskManager","\x84","\x30","\xcb","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbstractMaskManager_obj >;
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

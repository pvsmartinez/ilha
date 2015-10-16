#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void AbstractRenderer_obj::__construct(int width,int height)
{
HX_STACK_FRAME("openfl._internal.renderer.AbstractRenderer","new",0x86c2b0b2,"openfl._internal.renderer.AbstractRenderer.new","openfl/_internal/renderer/AbstractRenderer.hx",20,0x115f79df)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(22)
	this->width = width;
	HX_STACK_LINE(23)
	this->height = height;
}
;
	return null();
}

//AbstractRenderer_obj::~AbstractRenderer_obj() { }

Dynamic AbstractRenderer_obj::__CreateEmpty() { return  new AbstractRenderer_obj; }
hx::ObjectPtr< AbstractRenderer_obj > AbstractRenderer_obj::__new(int width,int height)
{  hx::ObjectPtr< AbstractRenderer_obj > _result_ = new AbstractRenderer_obj();
	_result_->__construct(width,height);
	return _result_;}

Dynamic AbstractRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractRenderer_obj > _result_ = new AbstractRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void AbstractRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractRenderer","render",0xfd7a0a44,"openfl._internal.renderer.AbstractRenderer.render","openfl/_internal/renderer/AbstractRenderer.hx",28,0x115f79df)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractRenderer_obj,render,(void))

Void AbstractRenderer_obj::renderShape( ::openfl::display::Shape shape){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractRenderer","renderShape",0xb970923d,"openfl._internal.renderer.AbstractRenderer.renderShape","openfl/_internal/renderer/AbstractRenderer.hx",35,0x115f79df)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractRenderer_obj,renderShape,(void))

Void AbstractRenderer_obj::setViewport( int x,int y,int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractRenderer","setViewport",0x3ea8987a,"openfl._internal.renderer.AbstractRenderer.setViewport","openfl/_internal/renderer/AbstractRenderer.hx",42,0x115f79df)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AbstractRenderer_obj,setViewport,(void))

Void AbstractRenderer_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractRenderer","resize",0x00cbf8e2,"openfl._internal.renderer.AbstractRenderer.resize","openfl/_internal/renderer/AbstractRenderer.hx",49,0x115f79df)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractRenderer_obj,resize,(void))


AbstractRenderer_obj::AbstractRenderer_obj()
{
}

void AbstractRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractRenderer);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(viewport,"viewport");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_END_CLASS();
}

void AbstractRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(viewport,"viewport");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
}

Dynamic AbstractRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"renderShape") ) { return renderShape_dyn(); }
		if (HX_FIELD_EQ(inName,"setViewport") ) { return setViewport_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { viewport=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"));
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AbstractRenderer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(AbstractRenderer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsBool,(int)offsetof(AbstractRenderer_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(AbstractRenderer_obj,viewport),HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(AbstractRenderer_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderShape","\xeb","\x0f","\xce","\x47"),
	HX_HCSTRING("setViewport","\x28","\x16","\x06","\xcd"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractRenderer_obj::__mClass;

void AbstractRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.AbstractRenderer","\xc0","\x2f","\xd4","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbstractRenderer_obj >;
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

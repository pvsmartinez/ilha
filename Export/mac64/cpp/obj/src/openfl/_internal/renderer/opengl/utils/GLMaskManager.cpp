#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLMaskManager
#include <openfl/_internal/renderer/opengl/utils/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
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
namespace opengl{
namespace utils{

Void GLMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","new",0xe472edcd,"openfl._internal.renderer.opengl.utils.GLMaskManager.new","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",22,0xb5eaf726)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(24)
	::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	super::__construct(tmp);
	HX_STACK_LINE(26)
	::lime::graphics::GLRenderContext tmp1 = renderSession->gl;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->setContext(tmp1);
	HX_STACK_LINE(28)
	this->clips = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//GLMaskManager_obj::~GLMaskManager_obj() { }

Dynamic GLMaskManager_obj::__CreateEmpty() { return  new GLMaskManager_obj; }
hx::ObjectPtr< GLMaskManager_obj > GLMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< GLMaskManager_obj > _result_ = new GLMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic GLMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLMaskManager_obj > _result_ = new GLMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLMaskManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","destroy",0x65a504e7,"openfl._internal.renderer.opengl.utils.GLMaskManager.destroy","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",35,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLMaskManager_obj,destroy,(void))

Void GLMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","pushRect",0xd4769791,"openfl._internal.renderer.opengl.utils.GLMaskManager.pushRect","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",40,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(42)
		bool tmp = (rect == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(42)
			return null();
		}
		HX_STACK_LINE(44)
		::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(transform->a,transform->b,transform->c,transform->d,transform->tx,transform->ty);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		::openfl::geom::Matrix m = tmp1;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(46)
			Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(46)
			m->tx = (int)0;
			HX_STACK_LINE(46)
			m->ty = (int)0;
			HX_STACK_LINE(46)
			m->scale((int)1,(int)-1);
			HX_STACK_LINE(46)
			::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			::openfl::geom::Rectangle tmp3 = tmp2->renderer->viewport;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			Float tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			m->translate((int)0,tmp4);
			HX_STACK_LINE(46)
			hx::AddEq(m->tx,tx);
			HX_STACK_LINE(46)
			hx::SubEq(m->ty,ty);
		}
		HX_STACK_LINE(47)
		::openfl::geom::Rectangle tmp2 = rect->clone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		::openfl::geom::Rectangle clip = tmp2;		HX_STACK_VAR(clip,"clip");
		HX_STACK_LINE(48)
		::openfl::geom::Rectangle tmp3 = clip;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		::openfl::geom::Matrix tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		clip->__transform(tmp3,tmp4);
		HX_STACK_LINE(50)
		::openfl::geom::Rectangle tmp5 = this->currentClip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		if ((tmp6)){
			HX_STACK_LINE(52)
			::openfl::geom::Rectangle tmp7 = this->currentClip;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			::openfl::geom::Rectangle tmp8 = clip;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			::openfl::geom::Rectangle tmp9 = tmp7->intersection(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			clip = tmp9;
		}
		HX_STACK_LINE(56)
		::openfl::geom::Rectangle tmp7 = this->currentClip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(56)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(56)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(56)
		if ((tmp10)){
			HX_STACK_LINE(56)
			tmp11 = clip->isEmpty();
		}
		else{
			HX_STACK_LINE(56)
			tmp11 = true;
		}
		HX_STACK_LINE(56)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(56)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(56)
		if ((tmp12)){
			HX_STACK_LINE(56)
			::openfl::geom::Rectangle tmp14 = this->currentClip;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(56)
			::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(56)
			::openfl::geom::Rectangle tmp16 = clip;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(56)
			::openfl::geom::Rectangle tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(56)
			tmp13 = tmp15->containsRect(tmp17);
		}
		else{
			HX_STACK_LINE(56)
			tmp13 = true;
		}
		HX_STACK_LINE(56)
		bool restartBatch = tmp13;		HX_STACK_VAR(restartBatch,"restartBatch");
		HX_STACK_LINE(58)
		::openfl::geom::Rectangle tmp14 = clip;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(58)
		this->clips->push(tmp14);
		HX_STACK_LINE(59)
		this->currentClip = clip;
		HX_STACK_LINE(61)
		bool tmp15 = restartBatch;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(61)
		if ((tmp15)){
			HX_STACK_LINE(63)
			::openfl::_internal::renderer::RenderSession tmp16 = this->renderSession;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(63)
			tmp16->spriteBatch->stop();
			HX_STACK_LINE(64)
			::openfl::_internal::renderer::RenderSession tmp17 = this->renderSession;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(64)
			::openfl::geom::Rectangle tmp18 = this->currentClip;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(64)
			tmp17->spriteBatch->start(tmp18);
		}
	}
return null();
}


Void GLMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","pushMask",0xd1258b59,"openfl._internal.renderer.opengl.utils.GLMaskManager.pushMask","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",71,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(73)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		tmp->spriteBatch->stop();
		HX_STACK_LINE(74)
		::openfl::_internal::renderer::RenderSession tmp1 = this->renderSession;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		::openfl::display::DisplayObject tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		tmp1->stencilManager->pushMask(tmp2,tmp3);
		HX_STACK_LINE(75)
		::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		::openfl::geom::Rectangle tmp5 = this->currentClip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		tmp4->spriteBatch->start(tmp5);
	}
return null();
}


Void GLMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","popMask",0x84303f0a,"openfl._internal.renderer.opengl.utils.GLMaskManager.popMask","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",80,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		tmp->spriteBatch->stop();
		HX_STACK_LINE(83)
		::openfl::_internal::renderer::RenderSession tmp1 = this->renderSession;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		tmp1->stencilManager->popMask(null(),tmp2);
		HX_STACK_LINE(84)
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::openfl::geom::Rectangle tmp4 = this->currentClip;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		tmp3->spriteBatch->start(tmp4);
	}
return null();
}


Void GLMaskManager_obj::popRect( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","popRect",0x87814b42,"openfl._internal.renderer.opengl.utils.GLMaskManager.popRect","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",88,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		tmp->spriteBatch->stop();
		HX_STACK_LINE(92)
		this->clips->pop().StaticCast< ::openfl::geom::Rectangle >();
		HX_STACK_LINE(93)
		int tmp1 = this->clips->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		::openfl::geom::Rectangle tmp3 = this->clips->__get(tmp2).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		this->currentClip = tmp3;
		HX_STACK_LINE(95)
		::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		::openfl::geom::Rectangle tmp5 = this->currentClip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		tmp4->spriteBatch->start(tmp5);
	}
return null();
}


Void GLMaskManager_obj::saveState( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","saveState",0xfb2eeac1,"openfl._internal.renderer.opengl.utils.GLMaskManager.saveState","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",99,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::openfl::geom::Rectangle tmp = this->currentClip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		this->savedClip = tmp;
		HX_STACK_LINE(102)
		this->currentClip = null();
	}
return null();
}


Void GLMaskManager_obj::restoreState( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","restoreState",0x4fd390d6,"openfl._internal.renderer.opengl.utils.GLMaskManager.restoreState","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",106,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		::openfl::geom::Rectangle tmp = this->savedClip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		this->currentClip = tmp;
		HX_STACK_LINE(109)
		this->savedClip = null();
	}
return null();
}


Void GLMaskManager_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","setContext",0xeb7fd4a0,"openfl._internal.renderer.opengl.utils.GLMaskManager.setContext","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",114,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(116)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		if ((tmp1)){
			HX_STACK_LINE(118)
			::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			tmp2->gl = gl;
		}
		HX_STACK_LINE(122)
		this->gl = gl;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLMaskManager_obj,setContext,(void))


GLMaskManager_obj::GLMaskManager_obj()
{
}

void GLMaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLMaskManager);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(clips,"clips");
	HX_MARK_MEMBER_NAME(currentClip,"currentClip");
	HX_MARK_MEMBER_NAME(savedClip,"savedClip");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLMaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(clips,"clips");
	HX_VISIT_MEMBER_NAME(currentClip,"currentClip");
	HX_VISIT_MEMBER_NAME(savedClip,"savedClip");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clips") ) { return clips; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return popRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"savedClip") ) { return savedClip; }
		if (HX_FIELD_EQ(inName,"saveState") ) { return saveState_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentClip") ) { return currentClip; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"restoreState") ) { return restoreState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLMaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clips") ) { clips=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"savedClip") ) { savedClip=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentClip") ) { currentClip=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLMaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("clips","\xa3","\x87","\x5e","\x48"));
	outFields->push(HX_HCSTRING("currentClip","\xa9","\x47","\x54","\x7a"));
	outFields->push(HX_HCSTRING("savedClip","\xf7","\x34","\x2d","\xbc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLMaskManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLMaskManager_obj,clips),HX_HCSTRING("clips","\xa3","\x87","\x5e","\x48")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(GLMaskManager_obj,currentClip),HX_HCSTRING("currentClip","\xa9","\x47","\x54","\x7a")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(GLMaskManager_obj,savedClip),HX_HCSTRING("savedClip","\xf7","\x34","\x2d","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("clips","\xa3","\x87","\x5e","\x48"),
	HX_HCSTRING("currentClip","\xa9","\x47","\x54","\x7a"),
	HX_HCSTRING("savedClip","\xf7","\x34","\x2d","\xbc"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	HX_HCSTRING("saveState","\x94","\x7d","\xb8","\x12"),
	HX_HCSTRING("restoreState","\xe3","\x43","\x89","\xe0"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLMaskManager_obj::__mClass;

void GLMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GLMaskManager","\x5b","\x03","\x03","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLMaskManager_obj >;
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
} // end namespace opengl
} // end namespace utils

#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
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
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
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
namespace display{

Void OpenGLView_obj::__construct()
{
HX_STACK_FRAME("openfl.display.OpenGLView","new",0xbc210f50,"openfl.display.OpenGLView.new","openfl/display/OpenGLView.hx",35,0x7a9fe7de)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(35)
	super::__construct(HX_HCSTRING("OpenGLView","\x94","\x0e","\xac","\x6e"));
}
;
	return null();
}

//OpenGLView_obj::~OpenGLView_obj() { }

Dynamic OpenGLView_obj::__CreateEmpty() { return  new OpenGLView_obj; }
hx::ObjectPtr< OpenGLView_obj > OpenGLView_obj::__new()
{  hx::ObjectPtr< OpenGLView_obj > _result_ = new OpenGLView_obj();
	_result_->__construct();
	return _result_;}

Dynamic OpenGLView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenGLView_obj > _result_ = new OpenGLView_obj();
	_result_->__construct();
	return _result_;}

Void OpenGLView_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.OpenGLView","__renderCanvas",0x35af22fe,"openfl.display.OpenGLView.__renderCanvas","openfl/display/OpenGLView.hx",77,0x7a9fe7de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


Void OpenGLView_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.OpenGLView","__renderDOM",0x0611a49c,"openfl.display.OpenGLView.__renderDOM","openfl/display/OpenGLView.hx",93,0x7a9fe7de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


Void OpenGLView_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.OpenGLView","__renderGL",0x34d59d2b,"openfl.display.OpenGLView.__renderGL","openfl/display/OpenGLView.hx",169,0x7a9fe7de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(171)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		if ((tmp1)){
			HX_STACK_LINE(171)
			tmp2 = this->__renderable;
		}
		else{
			HX_STACK_LINE(171)
			tmp2 = false;
		}
		HX_STACK_LINE(171)
		if ((tmp2)){
			HX_STACK_LINE(173)
			::openfl::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(175)
			::openfl::geom::Rectangle tmp3 = this->get_scrollRect();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			if ((tmp4)){
				HX_STACK_LINE(177)
				::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(177)
				int tmp6 = tmp5->stageWidth;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(177)
				::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(177)
				int tmp8 = tmp7->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(177)
				::openfl::geom::Rectangle tmp9 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(177)
				rect = tmp9;
			}
			else{
				HX_STACK_LINE(181)
				Float tmp5 = this->get_x();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(181)
				::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(181)
				Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(181)
				Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(181)
				Float tmp9 = this->get_y();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(181)
				::openfl::geom::Rectangle tmp10 = this->get_scrollRect();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(181)
				::openfl::geom::Rectangle tmp13 = this->get_scrollRect();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(181)
				Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(181)
				::openfl::geom::Rectangle tmp15 = this->get_scrollRect();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(181)
				Float tmp16 = tmp15->height;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(181)
				::openfl::geom::Rectangle tmp17 = ::openfl::geom::Rectangle_obj::__new(tmp8,tmp12,tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(181)
				rect = tmp17;
			}
			HX_STACK_LINE(185)
			Dynamic tmp5 = this->__render;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(185)
			if ((tmp6)){
				HX_STACK_LINE(185)
				this->__render(rect);
			}
			HX_STACK_LINE(187)
			renderSession->shaderManager->setShader(null(),null());
			HX_STACK_LINE(188)
			renderSession->blendModeManager->setBlendMode(null(),null());
		}
	}
return null();
}


::String OpenGLView_obj::CONTEXT_LOST;

::String OpenGLView_obj::CONTEXT_RESTORED;

bool OpenGLView_obj::isSupported;

bool OpenGLView_obj::get_isSupported( ){
	HX_STACK_FRAME("openfl.display.OpenGLView","get_isSupported",0x72941b6b,"openfl.display.OpenGLView.get_isSupported","openfl/display/OpenGLView.hx",241,0x7a9fe7de)
	HX_STACK_LINE(241)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OpenGLView_obj,get_isSupported,return )


OpenGLView_obj::OpenGLView_obj()
{
}

Dynamic OpenGLView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__added") ) { return __added; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initialized") ) { return __initialized; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool OpenGLView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = inCallProp == hx::paccAlways ? get_isSupported() : isSupported; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { outValue = get_isSupported_dyn(); return true;  }
	}
	return false;
}

Dynamic OpenGLView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__added") ) { __added=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initialized") ) { __initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OpenGLView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void OpenGLView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__added","\xa0","\x2d","\xa2","\x86"));
	outFields->push(HX_HCSTRING("__initialized","\xf4","\x35","\x88","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(OpenGLView_obj,__added),HX_HCSTRING("__added","\xa0","\x2d","\xa2","\x86")},
	{hx::fsBool,(int)offsetof(OpenGLView_obj,__initialized),HX_HCSTRING("__initialized","\xf4","\x35","\x88","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &OpenGLView_obj::CONTEXT_LOST,HX_HCSTRING("CONTEXT_LOST","\x94","\x35","\x21","\xf9")},
	{hx::fsString,(void *) &OpenGLView_obj::CONTEXT_RESTORED,HX_HCSTRING("CONTEXT_RESTORED","\x06","\xe9","\x7b","\xfd")},
	{hx::fsBool,(void *) &OpenGLView_obj::isSupported,HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__added","\xa0","\x2d","\xa2","\x86"),
	HX_HCSTRING("__initialized","\xf4","\x35","\x88","\x7f"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::isSupported,"isSupported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::isSupported,"isSupported");
};

#endif

hx::Class OpenGLView_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CONTEXT_LOST","\x94","\x35","\x21","\xf9"),
	HX_HCSTRING("CONTEXT_RESTORED","\x06","\xe9","\x7b","\xfd"),
	HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	::String(null()) };

void OpenGLView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.OpenGLView","\x5e","\x67","\x7b","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OpenGLView_obj::__GetStatic;
	__mClass->mSetStaticField = &OpenGLView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OpenGLView_obj >;
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

void OpenGLView_obj::__boot()
{
	CONTEXT_LOST= HX_HCSTRING("glcontextlost","\x4e","\x21","\x17","\x07");
	CONTEXT_RESTORED= HX_HCSTRING("glcontextrestored","\xc0","\x71","\x0a","\x02");
}

} // end namespace openfl
} // end namespace display

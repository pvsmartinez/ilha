#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLBitmap_obj::__construct()
{
	return null();
}

//GLBitmap_obj::~GLBitmap_obj() { }

Dynamic GLBitmap_obj::__CreateEmpty() { return  new GLBitmap_obj; }
hx::ObjectPtr< GLBitmap_obj > GLBitmap_obj::__new()
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

Void GLBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBitmap","render",0x8d0c282c,"openfl._internal.renderer.opengl.GLBitmap.render","openfl/_internal/renderer/opengl/GLBitmap.hx",15,0x02850ac4)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(17)
		bool tmp = bitmap->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		if ((tmp4)){
			HX_STACK_LINE(17)
			tmp5 = (bitmap->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(17)
			tmp5 = true;
		}
		HX_STACK_LINE(17)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(17)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(17)
		if ((tmp7)){
			HX_STACK_LINE(17)
			tmp8 = (bitmap->bitmapData == null());
		}
		else{
			HX_STACK_LINE(17)
			tmp8 = true;
		}
		HX_STACK_LINE(17)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(17)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(17)
		if ((tmp9)){
			HX_STACK_LINE(17)
			bool tmp11 = bitmap->bitmapData->__isValid;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(17)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(17)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(17)
			tmp10 = !(tmp13);
		}
		else{
			HX_STACK_LINE(17)
			tmp10 = true;
		}
		HX_STACK_LINE(17)
		if ((tmp10)){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(19)
		::openfl::display::BitmapData tmp11 = bitmap->bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(19)
		bool tmp12 = bitmap->smoothing;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(19)
		::openfl::geom::Matrix tmp13 = bitmap->__renderTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(19)
		::openfl::geom::ColorTransform tmp14 = bitmap->__worldColorTransform;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(19)
		Float tmp15 = bitmap->__worldAlpha;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(19)
		::openfl::display::BlendMode tmp16 = bitmap->__blendMode;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(19)
		::openfl::display::PixelSnapping tmp17 = bitmap->pixelSnapping;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(19)
		renderSession->spriteBatch->renderBitmapData(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,render,(void))

Void GLBitmap_obj::flipMatrix( ::openfl::geom::Matrix m,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBitmap","flipMatrix",0xe0a65ca4,"openfl._internal.renderer.opengl.GLBitmap.flipMatrix","openfl/_internal/renderer/opengl/GLBitmap.hx",22,0x02850ac4)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(24)
		Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(25)
		Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(26)
		m->tx = (int)0;
		HX_STACK_LINE(27)
		m->ty = (int)0;
		HX_STACK_LINE(28)
		m->scale((int)1,(int)-1);
		HX_STACK_LINE(29)
		Float tmp = height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		m->translate((int)0,tmp);
		HX_STACK_LINE(30)
		hx::AddEq(m->tx,tx);
		HX_STACK_LINE(31)
		hx::SubEq(m->ty,ty);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,flipMatrix,(void))


GLBitmap_obj::GLBitmap_obj()
{
}

bool GLBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flipMatrix") ) { outValue = flipMatrix_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("flipMatrix","\xce","\x7c","\xf5","\x32"),
	::String(null()) };

void GLBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBitmap","\xd8","\x64","\xbd","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLBitmap_obj >;
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

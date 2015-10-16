#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void BlendModeManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","new",0x5ae5c54c,"openfl._internal.renderer.opengl.utils.BlendModeManager.new","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",15,0x974feaa1)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(17)
	this->gl = gl;
	HX_STACK_LINE(18)
	this->currentBlendMode = null();
}
;
	return null();
}

//BlendModeManager_obj::~BlendModeManager_obj() { }

Dynamic BlendModeManager_obj::__CreateEmpty() { return  new BlendModeManager_obj; }
hx::ObjectPtr< BlendModeManager_obj > BlendModeManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< BlendModeManager_obj > _result_ = new BlendModeManager_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic BlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlendModeManager_obj > _result_ = new BlendModeManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void BlendModeManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","destroy",0x43b307e6,"openfl._internal.renderer.opengl.utils.BlendModeManager.destroy","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",25,0x974feaa1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BlendModeManager_obj,destroy,(void))

bool BlendModeManager_obj::setBlendMode( ::openfl::display::BlendMode blendMode,Dynamic __o_force){
Dynamic force = __o_force.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","setBlendMode",0xbabdb1e6,"openfl._internal.renderer.opengl.utils.BlendModeManager.setBlendMode","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",30,0x974feaa1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(32)
		bool tmp = (blendMode == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		if ((tmp)){
			HX_STACK_LINE(34)
			blendMode = ::openfl::display::BlendMode_obj::NORMAL;
			HX_STACK_LINE(35)
			force = true;
		}
		HX_STACK_LINE(39)
		Dynamic tmp1 = force;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		if ((tmp3)){
			HX_STACK_LINE(39)
			::openfl::display::BlendMode tmp5 = this->currentBlendMode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			::openfl::display::BlendMode tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			::openfl::display::BlendMode tmp7 = blendMode;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			tmp4 = (tmp6 == tmp7);
		}
		else{
			HX_STACK_LINE(39)
			tmp4 = false;
		}
		HX_STACK_LINE(39)
		if ((tmp4)){
			HX_STACK_LINE(41)
			return false;
		}
		HX_STACK_LINE(45)
		this->currentBlendMode = blendMode;
		HX_STACK_LINE(47)
		switch( (int)(blendMode->__Index())){
			case (int)0: {
				HX_STACK_LINE(51)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call((int)32774);
				HX_STACK_LINE(52)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call((int)1,(int)1);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(56)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call((int)32774);
				HX_STACK_LINE(57)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call((int)774,(int)771);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(61)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call((int)32774);
				HX_STACK_LINE(62)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call((int)1,(int)769);
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(66)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call((int)32779);
				HX_STACK_LINE(67)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call((int)1,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(72)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call((int)32775);
				HX_STACK_LINE(73)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call((int)1,(int)1);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(77)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call((int)32776);
				HX_STACK_LINE(78)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call((int)1,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(83)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call((int)32774);
				HX_STACK_LINE(84)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call((int)1,(int)771);
			}
		}
		HX_STACK_LINE(88)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BlendModeManager_obj,setBlendMode,return )


BlendModeManager_obj::BlendModeManager_obj()
{
}

void BlendModeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlendModeManager);
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void BlendModeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic BlendModeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return currentBlendMode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlendModeManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlendModeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BlendModeManager_obj,currentBlendMode),HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(BlendModeManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setBlendMode","\x52","\xa4","\x87","\x30"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendModeManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendModeManager_obj::__mClass,"__mClass");
};

#endif

hx::Class BlendModeManager_obj::__mClass;

void BlendModeManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.BlendModeManager","\x5a","\x6f","\xb6","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlendModeManager_obj >;
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

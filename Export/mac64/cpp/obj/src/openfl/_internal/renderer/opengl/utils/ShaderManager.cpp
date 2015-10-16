#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DrawTrianglesShader
#include <openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_FillShader
#include <openfl/_internal/renderer/opengl/shaders2/FillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PatternFillShader
#include <openfl/_internal/renderer/opengl/shaders2/PatternFillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PrimitiveShader
#include <openfl/_internal/renderer/opengl/shaders2/PrimitiveShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void ShaderManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.ShaderManager","new",0xb88adcb9,"openfl._internal.renderer.opengl.utils.ShaderManager.new","openfl/_internal/renderer/opengl/utils/ShaderManager.hx",17,0x4c1b49ba)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(18)
	::lime::graphics::GLRenderContext tmp = gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	this->setContext(tmp);
}
;
	return null();
}

//ShaderManager_obj::~ShaderManager_obj() { }

Dynamic ShaderManager_obj::__CreateEmpty() { return  new ShaderManager_obj; }
hx::ObjectPtr< ShaderManager_obj > ShaderManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< ShaderManager_obj > _result_ = new ShaderManager_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic ShaderManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderManager_obj > _result_ = new ShaderManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ShaderManager_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.ShaderManager","setContext",0x78e2db34,"openfl._internal.renderer.opengl.utils.ShaderManager.setContext","openfl/_internal/renderer/opengl/utils/ShaderManager.hx",21,0x4c1b49ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(22)
		this->gl = gl;
		HX_STACK_LINE(24)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp = ::openfl::_internal::renderer::opengl::shaders2::DefaultShader_obj::__new(gl);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		this->defaultShader = tmp;
		HX_STACK_LINE(25)
		::openfl::_internal::renderer::opengl::shaders2::FillShader tmp1 = ::openfl::_internal::renderer::opengl::shaders2::FillShader_obj::__new(gl);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		this->fillShader = tmp1;
		HX_STACK_LINE(26)
		::openfl::_internal::renderer::opengl::shaders2::PatternFillShader tmp2 = ::openfl::_internal::renderer::opengl::shaders2::PatternFillShader_obj::__new(gl);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		this->patternFillShader = tmp2;
		HX_STACK_LINE(27)
		::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader tmp3 = ::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader_obj::__new(gl);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		this->drawTrianglesShader = tmp3;
		HX_STACK_LINE(28)
		::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader tmp4 = ::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader_obj::__new(gl);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		this->primitiveShader = tmp4;
		HX_STACK_LINE(30)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp5 = this->defaultShader;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		this->setShader(tmp5,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderManager_obj,setContext,(void))

Void ShaderManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.ShaderManager","destroy",0xd1dcd9d3,"openfl._internal.renderer.opengl.utils.ShaderManager.destroy","openfl/_internal/renderer/opengl/utils/ShaderManager.hx",34,0x4c1b49ba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp = this->defaultShader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		tmp->destroy();
		HX_STACK_LINE(37)
		::openfl::_internal::renderer::opengl::shaders2::FillShader tmp1 = this->fillShader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		tmp1->destroy();
		HX_STACK_LINE(38)
		::openfl::_internal::renderer::opengl::shaders2::PatternFillShader tmp2 = this->patternFillShader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		tmp2->destroy();
		HX_STACK_LINE(39)
		::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader tmp3 = this->drawTrianglesShader;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		tmp3->destroy();
		HX_STACK_LINE(40)
		::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader tmp4 = this->primitiveShader;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		tmp4->destroy();
		HX_STACK_LINE(42)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderManager_obj,destroy,(void))

bool ShaderManager_obj::setShader( ::openfl::_internal::renderer::opengl::shaders2::Shader shader,Dynamic __o_force){
Dynamic force = __o_force.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.ShaderManager","setShader",0x2ec68980,"openfl._internal.renderer.opengl.utils.ShaderManager.setShader","openfl/_internal/renderer/opengl/utils/ShaderManager.hx",46,0x4c1b49ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(47)
		bool tmp = (shader == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		if ((tmp)){
			HX_STACK_LINE(49)
			this->currentShader = null();
			HX_STACK_LINE(50)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_use_program.call((int)0);
			HX_STACK_LINE(51)
			return true;
		}
		HX_STACK_LINE(54)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp1 = this->currentShader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		if ((tmp3)){
			HX_STACK_LINE(54)
			Dynamic tmp5 = force;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			tmp4 = !(tmp7);
		}
		else{
			HX_STACK_LINE(54)
			tmp4 = false;
		}
		HX_STACK_LINE(54)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		if ((tmp4)){
			HX_STACK_LINE(54)
			::openfl::_internal::renderer::opengl::shaders2::Shader tmp6 = this->currentShader;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			::openfl::_internal::renderer::opengl::shaders2::Shader tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			int tmp8 = tmp7->ID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			int tmp9 = shader->ID;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			tmp5 = (tmp8 == tmp9);
		}
		else{
			HX_STACK_LINE(54)
			tmp5 = false;
		}
		HX_STACK_LINE(54)
		if ((tmp5)){
			HX_STACK_LINE(55)
			return false;
		}
		HX_STACK_LINE(57)
		this->currentShader = shader;
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::lime::graphics::opengl::GLProgram program = shader->program;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(59)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_use_program.call((  (((program == null()))) ? int((int)0) : int(program->id) ));
		}
		HX_STACK_LINE(60)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderManager_obj,setShader,return )


ShaderManager_obj::ShaderManager_obj()
{
}

void ShaderManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderManager);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(currentShader,"currentShader");
	HX_MARK_MEMBER_NAME(defaultShader,"defaultShader");
	HX_MARK_MEMBER_NAME(fillShader,"fillShader");
	HX_MARK_MEMBER_NAME(patternFillShader,"patternFillShader");
	HX_MARK_MEMBER_NAME(drawTrianglesShader,"drawTrianglesShader");
	HX_MARK_MEMBER_NAME(primitiveShader,"primitiveShader");
	HX_MARK_END_CLASS();
}

void ShaderManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(currentShader,"currentShader");
	HX_VISIT_MEMBER_NAME(defaultShader,"defaultShader");
	HX_VISIT_MEMBER_NAME(fillShader,"fillShader");
	HX_VISIT_MEMBER_NAME(patternFillShader,"patternFillShader");
	HX_VISIT_MEMBER_NAME(drawTrianglesShader,"drawTrianglesShader");
	HX_VISIT_MEMBER_NAME(primitiveShader,"primitiveShader");
}

Dynamic ShaderManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setShader") ) { return setShader_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fillShader") ) { return fillShader; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentShader") ) { return currentShader; }
		if (HX_FIELD_EQ(inName,"defaultShader") ) { return defaultShader; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"primitiveShader") ) { return primitiveShader; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"patternFillShader") ) { return patternFillShader; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawTrianglesShader") ) { return drawTrianglesShader; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fillShader") ) { fillShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::FillShader >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentShader") ) { currentShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultShader") ) { defaultShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::DefaultShader >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"primitiveShader") ) { primitiveShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"patternFillShader") ) { patternFillShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::PatternFillShader >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawTrianglesShader") ) { drawTrianglesShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("currentShader","\x3e","\x40","\x7d","\x00"));
	outFields->push(HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17"));
	outFields->push(HX_HCSTRING("fillShader","\x08","\x46","\xbb","\x20"));
	outFields->push(HX_HCSTRING("patternFillShader","\x78","\x54","\xa8","\xbf"));
	outFields->push(HX_HCSTRING("drawTrianglesShader","\x8c","\xb6","\xbe","\xc4"));
	outFields->push(HX_HCSTRING("primitiveShader","\x2c","\x33","\xa4","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(ShaderManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(ShaderManager_obj,currentShader),HX_HCSTRING("currentShader","\x3e","\x40","\x7d","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::DefaultShader*/ ,(int)offsetof(ShaderManager_obj,defaultShader),HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::FillShader*/ ,(int)offsetof(ShaderManager_obj,fillShader),HX_HCSTRING("fillShader","\x08","\x46","\xbb","\x20")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::PatternFillShader*/ ,(int)offsetof(ShaderManager_obj,patternFillShader),HX_HCSTRING("patternFillShader","\x78","\x54","\xa8","\xbf")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader*/ ,(int)offsetof(ShaderManager_obj,drawTrianglesShader),HX_HCSTRING("drawTrianglesShader","\x8c","\xb6","\xbe","\xc4")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader*/ ,(int)offsetof(ShaderManager_obj,primitiveShader),HX_HCSTRING("primitiveShader","\x2c","\x33","\xa4","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("currentShader","\x3e","\x40","\x7d","\x00"),
	HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17"),
	HX_HCSTRING("fillShader","\x08","\x46","\xbb","\x20"),
	HX_HCSTRING("patternFillShader","\x78","\x54","\xa8","\xbf"),
	HX_HCSTRING("drawTrianglesShader","\x8c","\xb6","\xbe","\xc4"),
	HX_HCSTRING("primitiveShader","\x2c","\x33","\xa4","\x12"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setShader","\x67","\x34","\xc8","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderManager_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderManager_obj::__mClass;

void ShaderManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.ShaderManager","\x47","\x0c","\x66","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderManager_obj >;
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

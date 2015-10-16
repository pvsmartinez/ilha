#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif
namespace lime{
namespace utils{

Void GLUtils_obj::__construct()
{
	return null();
}

//GLUtils_obj::~GLUtils_obj() { }

Dynamic GLUtils_obj::__CreateEmpty() { return  new GLUtils_obj; }
hx::ObjectPtr< GLUtils_obj > GLUtils_obj::__new()
{  hx::ObjectPtr< GLUtils_obj > _result_ = new GLUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLUtils_obj > _result_ = new GLUtils_obj();
	_result_->__construct();
	return _result_;}

::lime::graphics::opengl::GLShader GLUtils_obj::compileShader( ::String source,int type){
	HX_STACK_FRAME("lime.utils.GLUtils","compileShader",0x55bd7600,"lime.utils.GLUtils.compileShader","lime/utils/GLUtils.hx",12,0xaa32e64a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(14)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	::lime::graphics::opengl::GLShader tmp1 = ::lime::graphics::opengl::GLShader_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_shader.call(type));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	::lime::graphics::opengl::GLShader shader = tmp1;		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int shader1 = shader->id;		HX_STACK_VAR(shader1,"shader1");
		HX_STACK_LINE(15)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_shader_source.call(shader1,source);
	}
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		int shader1 = shader->id;		HX_STACK_VAR(shader1,"shader1");
		HX_STACK_LINE(16)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_compile_shader.call(shader1);
	}
	HX_STACK_LINE(18)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		int shader1 = shader->id;		HX_STACK_VAR(shader1,"shader1");
		HX_STACK_LINE(18)
		tmp2 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_parameter.call(shader1,(int)35713);
	}
	HX_STACK_LINE(18)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	if ((tmp3)){
		HX_STACK_LINE(20)
		int tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		switch( (int)(tmp4)){
			case (int)35633: {
				HX_STACK_LINE(22)
				HX_STACK_DO_THROW(HX_HCSTRING("Error compiling vertex shader","\x39","\xc9","\xc1","\xb2"));
			}
			;break;
			case (int)35632: {
				HX_STACK_LINE(23)
				HX_STACK_DO_THROW(HX_HCSTRING("Error compiling fragment shader","\x4d","\xd0","\xbe","\xe3"));
			}
			;break;
			default: {
				HX_STACK_LINE(24)
				HX_STACK_DO_THROW(HX_HCSTRING("Error compiling unknown shader type","\xd7","\x06","\xf2","\x00"));
			}
		}
	}
	HX_STACK_LINE(30)
	::lime::graphics::opengl::GLShader tmp4 = shader;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,compileShader,return )

::lime::graphics::opengl::GLProgram GLUtils_obj::createProgram( ::String vertexSource,::String fragmentSource){
	HX_STACK_FRAME("lime.utils.GLUtils","createProgram",0x574727f0,"lime.utils.GLUtils.createProgram","lime/utils/GLUtils.hx",35,0xaa32e64a)
	HX_STACK_ARG(vertexSource,"vertexSource")
	HX_STACK_ARG(fragmentSource,"fragmentSource")
	HX_STACK_LINE(37)
	::String tmp = vertexSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::lime::graphics::opengl::GLShader tmp1 = ::lime::utils::GLUtils_obj::compileShader(tmp,(int)35633);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	::lime::graphics::opengl::GLShader vertexShader = tmp1;		HX_STACK_VAR(vertexShader,"vertexShader");
	HX_STACK_LINE(38)
	::String tmp2 = fragmentSource;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	::lime::graphics::opengl::GLShader tmp3 = ::lime::utils::GLUtils_obj::compileShader(tmp2,(int)35632);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	::lime::graphics::opengl::GLShader fragmentShader = tmp3;		HX_STACK_VAR(fragmentShader,"fragmentShader");
	HX_STACK_LINE(40)
	int tmp4 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	::lime::graphics::opengl::GLProgram tmp5 = ::lime::graphics::opengl::GLProgram_obj::__new(tmp4,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_program.call());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	::lime::graphics::opengl::GLProgram program = tmp5;		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::lime::graphics::opengl::GLShader tmp6 = vertexShader;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		program->attach(tmp6);
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			int program1 = program->id;		HX_STACK_VAR(program1,"program1");
			HX_STACK_LINE(41)
			int shader = vertexShader->id;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(41)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_attach_shader.call(program1,shader);
		}
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::lime::graphics::opengl::GLShader tmp6 = fragmentShader;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		program->attach(tmp6);
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			int program1 = program->id;		HX_STACK_VAR(program1,"program1");
			HX_STACK_LINE(42)
			int shader = fragmentShader->id;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(42)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_attach_shader.call(program1,shader);
		}
	}
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int program1 = program->id;		HX_STACK_VAR(program1,"program1");
		HX_STACK_LINE(43)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_link_program.call(program1);
	}
	HX_STACK_LINE(45)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		int program1 = program->id;		HX_STACK_VAR(program1,"program1");
		HX_STACK_LINE(45)
		tmp6 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_program_parameter.call(program1,(int)35714);
	}
	HX_STACK_LINE(45)
	bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	if ((tmp7)){
		HX_STACK_LINE(47)
		HX_STACK_DO_THROW(HX_HCSTRING("Unable to initialize the shader program.","\x3e","\x8b","\x8a","\x20"));
	}
	HX_STACK_LINE(51)
	::lime::graphics::opengl::GLProgram tmp8 = program;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,createProgram,return )


GLUtils_obj::GLUtils_obj()
{
}

bool GLUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createProgram") ) { outValue = createProgram_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#endif

hx::Class GLUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	::String(null()) };

void GLUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.GLUtils","\x76","\x27","\x94","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLUtils_obj >;
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

} // end namespace lime
} // end namespace utils

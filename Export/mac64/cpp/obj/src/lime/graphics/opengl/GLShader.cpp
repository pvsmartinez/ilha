#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

Void GLShader_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("lime.graphics.opengl.GLShader","new",0xa0326c51,"lime.graphics.opengl.GLShader.new","lime/graphics/opengl/GLShader.hx",4,0x4f56a5be)
HX_STACK_THIS(this)
HX_STACK_ARG(version,"version")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(4)
	int tmp = version;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4)
	Dynamic tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//GLShader_obj::~GLShader_obj() { }

Dynamic GLShader_obj::__CreateEmpty() { return  new GLShader_obj; }
hx::ObjectPtr< GLShader_obj > GLShader_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLShader_obj > _result_ = new GLShader_obj();
	_result_->__construct(version,id);
	return _result_;}

Dynamic GLShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShader_obj > _result_ = new GLShader_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String GLShader_obj::getType( ){
	HX_STACK_FRAME("lime.graphics.opengl.GLShader","getType",0xe5e58ae1,"lime.graphics.opengl.GLShader.getType","lime/graphics/opengl/GLShader.hx",9,0x4f56a5be)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9)
	return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51");
}


bool GLShader_obj::isValid( ){
	HX_STACK_FRAME("lime.graphics.opengl.GLShader","isValid",0x94980123,"lime.graphics.opengl.GLShader.isValid","lime/graphics/opengl/GLShader.hx",14,0x4f56a5be)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	Dynamic tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	if ((tmp2)){
		HX_STACK_LINE(16)
		Dynamic tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16)
		tmp3 = (tmp6 != null());
	}
	else{
		HX_STACK_LINE(16)
		tmp3 = false;
	}
	HX_STACK_LINE(16)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	if ((tmp3)){
		HX_STACK_LINE(16)
		int tmp5 = this->version;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16)
		int tmp7 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16)
		tmp4 = (tmp6 == tmp8);
	}
	else{
		HX_STACK_LINE(16)
		tmp4 = false;
	}
	HX_STACK_LINE(16)
	return tmp4;
}



GLShader_obj::GLShader_obj()
{
}

Dynamic GLShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("isValid","\xb2","\x18","\x3e","\xce"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShader_obj::__mClass;

void GLShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.GLShader","\xdf","\xef","\xf7","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLShader_obj >;
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
} // end namespace graphics
} // end namespace opengl

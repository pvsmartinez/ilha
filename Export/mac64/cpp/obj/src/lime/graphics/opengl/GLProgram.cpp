#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

Void GLProgram_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("lime.graphics.opengl.GLProgram","new",0x2d826a7c,"lime.graphics.opengl.GLProgram.new","lime/graphics/opengl/GLProgram.hx",10,0x48d7ea15)
HX_STACK_THIS(this)
HX_STACK_ARG(version,"version")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(12)
	int tmp = version;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(13)
	this->shaders = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//GLProgram_obj::~GLProgram_obj() { }

Dynamic GLProgram_obj::__CreateEmpty() { return  new GLProgram_obj; }
hx::ObjectPtr< GLProgram_obj > GLProgram_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLProgram_obj > _result_ = new GLProgram_obj();
	_result_->__construct(version,id);
	return _result_;}

Dynamic GLProgram_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLProgram_obj > _result_ = new GLProgram_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void GLProgram_obj::attach( ::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.opengl.GLProgram","attach",0x80ff9b29,"lime.graphics.opengl.GLProgram.attach","lime/graphics/opengl/GLProgram.hx",18,0x48d7ea15)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(20)
		::lime::graphics::opengl::GLShader tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		this->shaders->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLProgram_obj,attach,(void))

Array< ::Dynamic > GLProgram_obj::getShaders( ){
	HX_STACK_FRAME("lime.graphics.opengl.GLProgram","getShaders",0x3da5291c,"lime.graphics.opengl.GLProgram.getShaders","lime/graphics/opengl/GLProgram.hx",27,0x48d7ea15)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return this->shaders->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(GLProgram_obj,getShaders,return )

::String GLProgram_obj::getType( ){
	HX_STACK_FRAME("lime.graphics.opengl.GLProgram","getType",0x50477a8c,"lime.graphics.opengl.GLProgram.getType","lime/graphics/opengl/GLProgram.hx",34,0x48d7ea15)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return HX_HCSTRING("Program","\x64","\x72","\x4a","\xc1");
}



GLProgram_obj::GLProgram_obj()
{
}

void GLProgram_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLProgram);
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	::lime::graphics::opengl::GLObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLProgram_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	::lime::graphics::opengl::GLObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLProgram_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getShaders") ) { return getShaders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLProgram_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLProgram_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLProgram_obj,shaders),HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"),
	HX_HCSTRING("attach","\xc5","\xfb","\x0f","\xe0"),
	HX_HCSTRING("getShaders","\xb8","\x07","\xe8","\xae"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#endif

hx::Class GLProgram_obj::__mClass;

void GLProgram_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.GLProgram","\x8a","\xbc","\x6c","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLProgram_obj >;
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

#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

Void GLFramebuffer_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("lime.graphics.opengl.GLFramebuffer","new",0x1e731865,"lime.graphics.opengl.GLFramebuffer.new","lime/graphics/opengl/GLFramebuffer.hx",4,0x2d1110cc)
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

//GLFramebuffer_obj::~GLFramebuffer_obj() { }

Dynamic GLFramebuffer_obj::__CreateEmpty() { return  new GLFramebuffer_obj; }
hx::ObjectPtr< GLFramebuffer_obj > GLFramebuffer_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLFramebuffer_obj > _result_ = new GLFramebuffer_obj();
	_result_->__construct(version,id);
	return _result_;}

Dynamic GLFramebuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLFramebuffer_obj > _result_ = new GLFramebuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String GLFramebuffer_obj::getType( ){
	HX_STACK_FRAME("lime.graphics.opengl.GLFramebuffer","getType",0xf3efd0f5,"lime.graphics.opengl.GLFramebuffer.getType","lime/graphics/opengl/GLFramebuffer.hx",9,0x2d1110cc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9)
	return HX_HCSTRING("Framebuffer","\xcd","\xac","\x7a","\x5e");
}



GLFramebuffer_obj::GLFramebuffer_obj()
{
}

Dynamic GLFramebuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFramebuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFramebuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLFramebuffer_obj::__mClass;

void GLFramebuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.GLFramebuffer","\xf3","\x01","\xc4","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLFramebuffer_obj >;
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

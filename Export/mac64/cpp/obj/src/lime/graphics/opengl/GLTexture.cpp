#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

Void GLTexture_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("lime.graphics.opengl.GLTexture","new",0x6cdd6053,"lime.graphics.opengl.GLTexture.new","lime/graphics/opengl/GLTexture.hx",4,0xaab4bc1e)
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

//GLTexture_obj::~GLTexture_obj() { }

Dynamic GLTexture_obj::__CreateEmpty() { return  new GLTexture_obj; }
hx::ObjectPtr< GLTexture_obj > GLTexture_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLTexture_obj > _result_ = new GLTexture_obj();
	_result_->__construct(version,id);
	return _result_;}

Dynamic GLTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLTexture_obj > _result_ = new GLTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String GLTexture_obj::getType( ){
	HX_STACK_FRAME("lime.graphics.opengl.GLTexture","getType",0x3be7a7e3,"lime.graphics.opengl.GLTexture.getType","lime/graphics/opengl/GLTexture.hx",9,0xaab4bc1e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(9)
	return HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c");
}



GLTexture_obj::GLTexture_obj()
{
}

Dynamic GLTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class GLTexture_obj::__mClass;

void GLTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.GLTexture","\xe1","\x3a","\x54","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLTexture_obj >;
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

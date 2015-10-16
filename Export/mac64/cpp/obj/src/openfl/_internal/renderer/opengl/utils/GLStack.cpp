#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLStack_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLStack","new",0xd9c5ae34,"openfl._internal.renderer.opengl.utils.GLStack.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1183,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1185)
	this->lastIndex = (int)0;
	HX_STACK_LINE(1190)
	this->gl = gl;
	HX_STACK_LINE(1191)
	this->buckets = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(1192)
	this->lastIndex = (int)0;
}
;
	return null();
}

//GLStack_obj::~GLStack_obj() { }

Dynamic GLStack_obj::__CreateEmpty() { return  new GLStack_obj; }
hx::ObjectPtr< GLStack_obj > GLStack_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLStack_obj > _result_ = new GLStack_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLStack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLStack_obj > _result_ = new GLStack_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLStack_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLStack","reset",0x66cc44a3,"openfl._internal.renderer.opengl.utils.GLStack.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1195,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1196)
		this->buckets = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(1197)
		this->lastIndex = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLStack_obj,reset,(void))

Void GLStack_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLStack","upload",0x0fd148ad,"openfl._internal.renderer.opengl.utils.GLStack.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1201,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1201)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1201)
		Array< ::Dynamic > _g1 = this->buckets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1201)
		while((true)){
			HX_STACK_LINE(1201)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1201)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1201)
			if ((tmp1)){
				HX_STACK_LINE(1201)
				break;
			}
			HX_STACK_LINE(1201)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1201)
			::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp2;		HX_STACK_VAR(bucket,"bucket");
			HX_STACK_LINE(1201)
			++(_g);
			HX_STACK_LINE(1203)
			bool tmp3 = bucket->dirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1203)
			if ((tmp3)){
				HX_STACK_LINE(1204)
				bucket->upload();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLStack_obj,upload,(void))


GLStack_obj::GLStack_obj()
{
}

void GLStack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLStack);
	HX_MARK_MEMBER_NAME(lastIndex,"lastIndex");
	HX_MARK_MEMBER_NAME(buckets,"buckets");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void GLStack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastIndex,"lastIndex");
	HX_VISIT_MEMBER_NAME(buckets,"buckets");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic GLStack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buckets") ) { return buckets; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { return lastIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLStack_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buckets") ) { buckets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { lastIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLStack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"));
	outFields->push(HX_HCSTRING("buckets","\xc9","\xf8","\xaa","\xfa"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLStack_obj,lastIndex),HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLStack_obj,buckets),HX_HCSTRING("buckets","\xc9","\xf8","\xaa","\xfa")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLStack_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"),
	HX_HCSTRING("buckets","\xc9","\xf8","\xaa","\xfa"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLStack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLStack_obj::__mClass,"__mClass");
};

#endif

hx::Class GLStack_obj::__mClass;

void GLStack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GLStack","\x42","\xc4","\x65","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLStack_obj >;
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

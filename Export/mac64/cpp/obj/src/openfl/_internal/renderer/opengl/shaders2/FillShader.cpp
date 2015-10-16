#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_FillShader
#include <openfl/_internal/renderer/opengl/shaders2/FillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

Void FillShader_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.FillShader","new",0x70a7c120,"openfl._internal.renderer.opengl.shaders2.FillShader.new","openfl/_internal/renderer/opengl/shaders2/FillShader.hx",9,0xd620b091)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(10)
	::lime::graphics::GLRenderContext tmp = gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
	HX_STACK_LINE(13)
	::String tmp1 = (HX_HCSTRING("attribute vec2 ","\xfe","\x43","\xff","\xbe") + HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::String tmp2 = (tmp1 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	::String tmp3 = (HX_HCSTRING("uniform mat3 ","\x41","\xcb","\x75","\x0c") + HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	::String tmp4 = (tmp3 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(15)
	::String tmp5 = (HX_HCSTRING("uniform mat3 ","\x41","\xcb","\x75","\x0c") + HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(15)
	::String tmp6 = (tmp5 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(17)
	::String tmp7 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(17)
	::String tmp8 = (tmp7 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(18)
	::String tmp9 = (HX_HCSTRING("uniform float ","\x70","\x08","\x5a","\x60") + HX_HCSTRING("uAlpha","\xa9","\x4e","\x85","\x7c"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(18)
	::String tmp10 = (tmp9 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(19)
	::String tmp11 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(19)
	::String tmp12 = (tmp11 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(20)
	::String tmp13 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(20)
	::String tmp14 = (tmp13 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(34)
	::String tmp15 = (HX_HCSTRING("   gl_Position = vec4((","\x60","\xee","\x15","\xd9") + HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(34)
	::String tmp16 = (tmp15 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(34)
	::String tmp17 = (tmp16 + HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(34)
	::String tmp18 = (tmp17 + HX_HCSTRING(" * vec3(","\x53","\x97","\x95","\xf8"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(34)
	::String tmp19 = (tmp18 + HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(34)
	::String tmp20 = (tmp19 + HX_HCSTRING(", 1.0)).xy, 0.0, 1.0);","\x63","\x9b","\x3b","\x23"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(35)
	::String tmp21 = (HX_HCSTRING("   vColor = colorTransform(","\xe9","\x4a","\x56","\xf6") + HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(35)
	::String tmp22 = (tmp21 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(35)
	::String tmp23 = (tmp22 + HX_HCSTRING("uAlpha","\xa9","\x4e","\x85","\x7c"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(35)
	::String tmp24 = (tmp23 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(35)
	::String tmp25 = (tmp24 + HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(35)
	::String tmp26 = (tmp25 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(35)
	::String tmp27 = (tmp26 + HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(35)
	::String tmp28 = (tmp27 + HX_HCSTRING(");","\xf2","\x23","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(12)
	this->vertexSrc = Array_obj< ::String >::__new().Add(tmp2).Add(tmp4).Add(tmp6).Add(tmp8).Add(tmp10).Add(tmp12).Add(tmp14).Add(HX_HCSTRING("varying vec4 vColor;","\x7e","\xaf","\xe3","\x9c")).Add(HX_HCSTRING("vec4 colorTransform(const vec4 color, const float alpha, const vec4 multiplier, const vec4 offset) {","\x28","\x3f","\x37","\xfc")).Add(HX_HCSTRING("   vec4 result = color * multiplier;","\xe1","\x00","\x43","\xc5")).Add(HX_HCSTRING("   result.a *= alpha;","\x5a","\x0d","\xd7","\x2b")).Add(HX_HCSTRING("   result = result + offset;","\xd6","\x2b","\x93","\xf8")).Add(HX_HCSTRING("   result = clamp(result, 0., 1.);","\x65","\x22","\xa3","\xfc")).Add(HX_HCSTRING("   result = vec4(result.rgb * result.a, result.a);","\x1e","\x90","\x43","\x04")).Add(HX_HCSTRING("   return result;","\x6e","\xcd","\x02","\xa1")).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00")).Add(HX_HCSTRING("void main(void) {","\x4d","\x18","\xfb","\x21")).Add(tmp20).Add(tmp28).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(40)
	this->fragmentSrc = Array_obj< ::String >::__new().Add(HX_HCSTRING("#ifdef GL_ES","\x2d","\x5e","\x36","\xde")).Add(HX_HCSTRING("precision lowp float;","\x81","\x5f","\xad","\x9a")).Add(HX_HCSTRING("#endif","\x75","\xed","\xf7","\x6e")).Add(HX_HCSTRING("varying vec4 vColor;","\x7e","\xaf","\xe3","\x9c")).Add(HX_HCSTRING("void main(void) {","\x4d","\x18","\xfb","\x21")).Add(HX_HCSTRING("   gl_FragColor = vColor;","\x42","\x33","\x42","\xc5")).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(52)
	this->init();
}
;
	return null();
}

//FillShader_obj::~FillShader_obj() { }

Dynamic FillShader_obj::__CreateEmpty() { return  new FillShader_obj; }
hx::ObjectPtr< FillShader_obj > FillShader_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< FillShader_obj > _result_ = new FillShader_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic FillShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FillShader_obj > _result_ = new FillShader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FillShader_obj::init( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.FillShader","init",0x1ed9f250,"openfl._internal.renderer.opengl.shaders2.FillShader.init","openfl/_internal/renderer/opengl/shaders2/FillShader.hx",55,0xd620b091)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->super::init();
		HX_STACK_LINE(58)
		this->getAttribLocation(HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));
		HX_STACK_LINE(59)
		this->getUniformLocation(HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));
		HX_STACK_LINE(60)
		this->getUniformLocation(HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));
		HX_STACK_LINE(61)
		this->getUniformLocation(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));
		HX_STACK_LINE(62)
		this->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));
		HX_STACK_LINE(63)
		this->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));
	}
return null();
}



FillShader_obj::FillShader_obj()
{
}

Dynamic FillShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FillShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FillShader_obj::__mClass,"__mClass");
};

#endif

hx::Class FillShader_obj::__mClass;

void FillShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.FillShader","\x2e","\xf1","\xb0","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FillShader_obj >;
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
} // end namespace shaders2

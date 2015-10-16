#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PatternFillShader
#include <openfl/_internal/renderer/opengl/shaders2/PatternFillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

Void PatternFillShader_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.PatternFillShader","new",0xd3020c04,"openfl._internal.renderer.opengl.shaders2.PatternFillShader.new","openfl/_internal/renderer/opengl/shaders2/PatternFillShader.hx",9,0x30c52bcb)
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
	HX_STACK_LINE(16)
	::String tmp7 = (HX_HCSTRING("uniform mat3 ","\x41","\xcb","\x75","\x0c") + HX_HCSTRING("uPatternMatrix","\xfc","\xb6","\xb8","\xb5"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(16)
	::String tmp8 = (tmp7 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(21)
	::String tmp9 = (HX_HCSTRING("   gl_Position = vec4((","\x60","\xee","\x15","\xd9") + HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(21)
	::String tmp10 = (tmp9 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(21)
	::String tmp11 = (tmp10 + HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(21)
	::String tmp12 = (tmp11 + HX_HCSTRING(" * vec3(","\x53","\x97","\x95","\xf8"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(21)
	::String tmp13 = (tmp12 + HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(21)
	::String tmp14 = (tmp13 + HX_HCSTRING(", 1.0)).xy, 0.0, 1.0);","\x63","\x9b","\x3b","\x23"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(22)
	::String tmp15 = (HX_HCSTRING("   vPosition = (","\x04","\x90","\xc7","\x1a") + HX_HCSTRING("uPatternMatrix","\xfc","\xb6","\xb8","\xb5"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(22)
	::String tmp16 = (tmp15 + HX_HCSTRING(" * vec3(","\x53","\x97","\x95","\xf8"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(22)
	::String tmp17 = (tmp16 + HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(22)
	::String tmp18 = (tmp17 + HX_HCSTRING(", 1)).xy;","\x89","\xe7","\x3a","\x7c"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(12)
	this->vertexSrc = Array_obj< ::String >::__new().Add(tmp2).Add(tmp4).Add(tmp6).Add(tmp8).Add(HX_HCSTRING("varying vec2 vPosition;","\xee","\xb5","\xdb","\x87")).Add(HX_HCSTRING("void main(void) {","\x4d","\x18","\xfb","\x21")).Add(tmp14).Add(tmp18).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(32)
	::String tmp19 = (HX_HCSTRING("uniform float ","\x70","\x08","\x5a","\x60") + HX_HCSTRING("uAlpha","\xa9","\x4e","\x85","\x7c"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(32)
	::String tmp20 = (tmp19 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(33)
	::String tmp21 = (HX_HCSTRING("uniform vec2 ","\x16","\xf7","\xa8","\x3d") + HX_HCSTRING("uPatternTL","\x93","\x2c","\xdd","\x25"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(33)
	::String tmp22 = (tmp21 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(34)
	::String tmp23 = (HX_HCSTRING("uniform vec2 ","\x16","\xf7","\xa8","\x3d") + HX_HCSTRING("uPatternBR","\xeb","\x1c","\xdd","\x25"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(34)
	::String tmp24 = (tmp23 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(35)
	::String tmp25 = (HX_HCSTRING("uniform sampler2D ","\x72","\x47","\xf0","\xca") + HX_HCSTRING("uSampler0","\xbd","\x5b","\xc9","\x0e"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(35)
	::String tmp26 = (tmp25 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(37)
	::String tmp27 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(37)
	::String tmp28 = (tmp27 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(38)
	::String tmp29 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(38)
	::String tmp30 = (tmp29 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(53)
	::String tmp31 = (HX_HCSTRING("   vec2 pos = mix(","\x3d","\x20","\x89","\x8c") + HX_HCSTRING("uPatternTL","\x93","\x2c","\xdd","\x25"));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(53)
	::String tmp32 = (tmp31 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(53)
	::String tmp33 = (tmp32 + HX_HCSTRING("uPatternBR","\xeb","\x1c","\xdd","\x25"));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(53)
	::String tmp34 = (tmp33 + HX_HCSTRING(", vPosition);","\xfd","\xba","\x9c","\x09"));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(54)
	::String tmp35 = (HX_HCSTRING("   vec4 tcol = texture2D(","\xd2","\xac","\x26","\xf7") + HX_HCSTRING("uSampler0","\xbd","\x5b","\xc9","\x0e"));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(54)
	::String tmp36 = (tmp35 + HX_HCSTRING(", pos);","\x92","\x03","\xb3","\xb7"));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(55)
	::String tmp37 = (HX_HCSTRING("   gl_FragColor = colorTransform(tcol, ","\x33","\x4b","\xb4","\xf6") + HX_HCSTRING("uAlpha","\xa9","\x4e","\x85","\x7c"));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(55)
	::String tmp38 = (tmp37 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(55)
	::String tmp39 = (tmp38 + HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(55)
	::String tmp40 = (tmp39 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(55)
	::String tmp41 = (tmp40 + HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(55)
	::String tmp42 = (tmp41 + HX_HCSTRING(");","\xf2","\x23","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(27)
	this->fragmentSrc = Array_obj< ::String >::__new().Add(HX_HCSTRING("#ifdef GL_ES","\x2d","\x5e","\x36","\xde")).Add(HX_HCSTRING("precision lowp float;","\x81","\x5f","\xad","\x9a")).Add(HX_HCSTRING("#endif","\x75","\xed","\xf7","\x6e")).Add(tmp20).Add(tmp22).Add(tmp24).Add(tmp26).Add(tmp28).Add(tmp30).Add(HX_HCSTRING("varying vec2 vPosition;","\xee","\xb5","\xdb","\x87")).Add(HX_HCSTRING("vec4 colorTransform(const vec4 color, const float alpha, const vec4 multiplier, const vec4 offset) {","\x28","\x3f","\x37","\xfc")).Add(HX_HCSTRING("   vec4 unmultiply = vec4(color.rgb / color.a, color.a);","\x0f","\xf7","\x2c","\xdd")).Add(HX_HCSTRING("   vec4 result = unmultiply * multiplier;","\xc7","\x00","\xc8","\x17")).Add(HX_HCSTRING("   result.a *= alpha;","\x5a","\x0d","\xd7","\x2b")).Add(HX_HCSTRING("   result = result + offset;","\xd6","\x2b","\x93","\xf8")).Add(HX_HCSTRING("   result = clamp(result, 0., 1.);","\x65","\x22","\xa3","\xfc")).Add(HX_HCSTRING("   result = vec4(result.rgb * result.a, result.a);","\x1e","\x90","\x43","\x04")).Add(HX_HCSTRING("   return result;","\x6e","\xcd","\x02","\xa1")).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00")).Add(HX_HCSTRING("void main(void) {","\x4d","\x18","\xfb","\x21")).Add(tmp34).Add(tmp36).Add(tmp42).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(59)
	this->init();
}
;
	return null();
}

//PatternFillShader_obj::~PatternFillShader_obj() { }

Dynamic PatternFillShader_obj::__CreateEmpty() { return  new PatternFillShader_obj; }
hx::ObjectPtr< PatternFillShader_obj > PatternFillShader_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< PatternFillShader_obj > _result_ = new PatternFillShader_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic PatternFillShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PatternFillShader_obj > _result_ = new PatternFillShader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PatternFillShader_obj::init( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.PatternFillShader","init",0xcb812eec,"openfl._internal.renderer.opengl.shaders2.PatternFillShader.init","openfl/_internal/renderer/opengl/shaders2/PatternFillShader.hx",63,0x30c52bcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->super::init();
		HX_STACK_LINE(66)
		this->getAttribLocation(HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));
		HX_STACK_LINE(68)
		this->getUniformLocation(HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));
		HX_STACK_LINE(69)
		this->getUniformLocation(HX_HCSTRING("uPatternMatrix","\xfc","\xb6","\xb8","\xb5"));
		HX_STACK_LINE(70)
		this->getUniformLocation(HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));
		HX_STACK_LINE(71)
		this->getUniformLocation(HX_HCSTRING("uSampler0","\xbd","\x5b","\xc9","\x0e"));
		HX_STACK_LINE(72)
		this->getUniformLocation(HX_HCSTRING("uPatternTL","\x93","\x2c","\xdd","\x25"));
		HX_STACK_LINE(73)
		this->getUniformLocation(HX_HCSTRING("uPatternBR","\xeb","\x1c","\xdd","\x25"));
		HX_STACK_LINE(74)
		this->getUniformLocation(HX_HCSTRING("uAlpha","\xa9","\x4e","\x85","\x7c"));
		HX_STACK_LINE(75)
		this->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));
		HX_STACK_LINE(76)
		this->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));
	}
return null();
}



PatternFillShader_obj::PatternFillShader_obj()
{
}

Dynamic PatternFillShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(PatternFillShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PatternFillShader_obj::__mClass,"__mClass");
};

#endif

hx::Class PatternFillShader_obj::__mClass;

void PatternFillShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.PatternFillShader","\x12","\xfa","\x0a","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PatternFillShader_obj >;
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

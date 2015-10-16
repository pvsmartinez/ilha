#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

Void DefaultShader_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.DefaultShader","new",0x163fb452,"openfl._internal.renderer.opengl.shaders2.DefaultShader.new","openfl/_internal/renderer/opengl/shaders2/DefaultShader.hx",8,0xc5ee6bbd)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(9)
	::lime::graphics::GLRenderContext tmp = gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp);
	HX_STACK_LINE(12)
	::String tmp1 = (HX_HCSTRING("attribute vec2 ","\xfe","\x43","\xff","\xbe") + HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String tmp2 = (tmp1 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	::String tmp3 = (HX_HCSTRING("attribute vec2 ","\xfe","\x43","\xff","\xbe") + HX_HCSTRING("aTexCoord0","\x81","\xa8","\x7d","\x1f"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13)
	::String tmp4 = (tmp3 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(14)
	::String tmp5 = (HX_HCSTRING("attribute vec4 ","\xbc","\x45","\xff","\xbe") + HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(14)
	::String tmp6 = (tmp5 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(16)
	::String tmp7 = (HX_HCSTRING("uniform mat3 ","\x41","\xcb","\x75","\x0c") + HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(16)
	::String tmp8 = (tmp7 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(22)
	::String tmp9 = (HX_HCSTRING("   gl_Position = vec4((","\x60","\xee","\x15","\xd9") + HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(22)
	::String tmp10 = (tmp9 + HX_HCSTRING(" * vec3(","\x53","\x97","\x95","\xf8"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(22)
	::String tmp11 = (tmp10 + HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(22)
	::String tmp12 = (tmp11 + HX_HCSTRING(", 1.0)).xy, 0.0, 1.0);","\x63","\x9b","\x3b","\x23"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(23)
	::String tmp13 = (HX_HCSTRING("   vTexCoord = ","\x1f","\xae","\x6f","\x4a") + HX_HCSTRING("aTexCoord0","\x81","\xa8","\x7d","\x1f"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(23)
	::String tmp14 = (tmp13 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(24)
	::String tmp15 = (HX_HCSTRING("   vColor = ","\x56","\x06","\xcb","\xfb") + HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(24)
	::String tmp16 = (tmp15 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(11)
	this->vertexSrc = Array_obj< ::String >::__new().Add(tmp2).Add(tmp4).Add(tmp6).Add(tmp8).Add(HX_HCSTRING("varying vec2 vTexCoord;","\xa9","\x1f","\xfd","\x58")).Add(HX_HCSTRING("varying vec4 vColor;","\x7e","\xaf","\xe3","\x9c")).Add(HX_HCSTRING("void main(void) {","\x4d","\x18","\xfb","\x21")).Add(tmp12).Add(tmp14).Add(tmp16).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(33)
	::String tmp17 = (HX_HCSTRING("uniform sampler2D ","\x72","\x47","\xf0","\xca") + HX_HCSTRING("uSampler0","\xbd","\x5b","\xc9","\x0e"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(33)
	::String tmp18 = (tmp17 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(34)
	::String tmp19 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(34)
	::String tmp20 = (tmp19 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(35)
	::String tmp21 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(35)
	::String tmp22 = (tmp21 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(55)
	::String tmp23 = (HX_HCSTRING("   vec4 tc = texture2D(","\xcf","\x35","\x87","\x8c") + HX_HCSTRING("uSampler0","\xbd","\x5b","\xc9","\x0e"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(55)
	::String tmp24 = (tmp23 + HX_HCSTRING(", vTexCoord);","\xe2","\xd4","\xb7","\x35"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(56)
	::String tmp25 = (HX_HCSTRING("   gl_FragColor = colorTransform(tc, vColor, ","\x17","\xeb","\xb9","\x27") + HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(56)
	::String tmp26 = (tmp25 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(56)
	::String tmp27 = (tmp26 + HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(56)
	::String tmp28 = (tmp27 + HX_HCSTRING(");","\xf2","\x23","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(28)
	this->fragmentSrc = Array_obj< ::String >::__new().Add(HX_HCSTRING("#ifdef GL_ES","\x2d","\x5e","\x36","\xde")).Add(HX_HCSTRING("precision lowp float;","\x81","\x5f","\xad","\x9a")).Add(HX_HCSTRING("#endif","\x75","\xed","\xf7","\x6e")).Add(tmp18).Add(tmp20).Add(tmp22).Add(HX_HCSTRING("varying vec2 vTexCoord;","\xa9","\x1f","\xfd","\x58")).Add(HX_HCSTRING("varying vec4 vColor;","\x7e","\xaf","\xe3","\x9c")).Add(HX_HCSTRING("vec4 colorTransform(const vec4 color, const vec4 tint, const vec4 multiplier, const vec4 offset) {","\xa7","\x0a","\xa9","\xf9")).Add(HX_HCSTRING("\tvec4 unmultiply;","\x67","\x51","\x79","\x04")).Add(HX_HCSTRING("\tif (color.a == 0.0) {","\xda","\x6c","\x38","\xfb")).Add(HX_HCSTRING("\t\tunmultiply = vec4(0.0, 0.0, 0.0, 0.0);","\xe0","\x9d","\xd0","\x58")).Add(HX_HCSTRING("\t} else {","\xa0","\xa3","\x6f","\x68")).Add(HX_HCSTRING("   \tunmultiply = vec4(color.rgb / color.a, color.a);","\x58","\xe0","\x4f","\xfe")).Add(HX_HCSTRING("\t}","\x54","\x08","\x00","\x00")).Add(HX_HCSTRING("   vec4 result = unmultiply * tint * multiplier;","\x32","\x67","\x2e","\x56")).Add(HX_HCSTRING("   result = result + offset;","\xd6","\x2b","\x93","\xf8")).Add(HX_HCSTRING("   result = clamp(result, 0., 1.);","\x65","\x22","\xa3","\xfc")).Add(HX_HCSTRING("   result = vec4(result.rgb * result.a, result.a);","\x1e","\x90","\x43","\x04")).Add(HX_HCSTRING("   return result;","\x6e","\xcd","\x02","\xa1")).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00")).Add(HX_HCSTRING("void main(void) {","\x4d","\x18","\xfb","\x21")).Add(tmp24).Add(tmp28).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(61)
	this->init();
}
;
	return null();
}

//DefaultShader_obj::~DefaultShader_obj() { }

Dynamic DefaultShader_obj::__CreateEmpty() { return  new DefaultShader_obj; }
hx::ObjectPtr< DefaultShader_obj > DefaultShader_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< DefaultShader_obj > _result_ = new DefaultShader_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic DefaultShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultShader_obj > _result_ = new DefaultShader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DefaultShader_obj::init( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.DefaultShader","init",0x5e36cade,"openfl._internal.renderer.opengl.shaders2.DefaultShader.init","openfl/_internal/renderer/opengl/shaders2/DefaultShader.hx",65,0xc5ee6bbd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->super::init();
		HX_STACK_LINE(68)
		this->getAttribLocation(HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));
		HX_STACK_LINE(69)
		this->getAttribLocation(HX_HCSTRING("aTexCoord0","\x81","\xa8","\x7d","\x1f"));
		HX_STACK_LINE(70)
		this->getAttribLocation(HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"));
		HX_STACK_LINE(71)
		this->getUniformLocation(HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));
		HX_STACK_LINE(72)
		this->getUniformLocation(HX_HCSTRING("uSampler0","\xbd","\x5b","\xc9","\x0e"));
		HX_STACK_LINE(73)
		this->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));
		HX_STACK_LINE(74)
		this->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));
	}
return null();
}



DefaultShader_obj::DefaultShader_obj()
{
}

Dynamic DefaultShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(DefaultShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultShader_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultShader_obj::__mClass;

void DefaultShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.DefaultShader","\x60","\xe3","\x5e","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultShader_obj >;
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

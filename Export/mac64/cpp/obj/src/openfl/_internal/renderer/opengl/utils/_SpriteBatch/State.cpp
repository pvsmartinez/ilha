#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State
#include <openfl/_internal/renderer/opengl/utils/_SpriteBatch/State.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _SpriteBatch{

Void State_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils._SpriteBatch.State","new",0xda8a05cc,"openfl._internal.renderer.opengl.utils._SpriteBatch.State.new","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",638,0x8289eb2d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(643)
	this->skipColorTransformAlpha = false;
	HX_STACK_LINE(640)
	this->textureSmooth = true;
}
;
	return null();
}

//State_obj::~State_obj() { }

Dynamic State_obj::__CreateEmpty() { return  new State_obj; }
hx::ObjectPtr< State_obj > State_obj::__new()
{  hx::ObjectPtr< State_obj > _result_ = new State_obj();
	_result_->__construct();
	return _result_;}

Dynamic State_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< State_obj > _result_ = new State_obj();
	_result_->__construct();
	return _result_;}

bool State_obj::equals( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State other){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils._SpriteBatch.State","equals",0xfb2ee453,"openfl._internal.renderer.opengl.utils._SpriteBatch.State.equals","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",648,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(649)
	::openfl::_internal::renderer::opengl::shaders2::Shader tmp = this->shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(649)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(649)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(649)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(649)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(649)
	if ((tmp3)){
		HX_STACK_LINE(649)
		tmp4 = (other->shader == null());
	}
	else{
		HX_STACK_LINE(649)
		tmp4 = true;
	}
	HX_STACK_LINE(649)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(649)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(649)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(649)
	if ((tmp6)){
		HX_STACK_LINE(649)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp8 = this->shader;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(649)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(649)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(649)
		int tmp11 = tmp10->ID;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(649)
		int tmp12 = other->shader->ID;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(649)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(649)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(649)
		tmp7 = (tmp11 == tmp14);
	}
	else{
		HX_STACK_LINE(649)
		tmp7 = true;
	}
	HX_STACK_LINE(649)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(649)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(649)
	if ((tmp8)){
		HX_STACK_LINE(650)
		::lime::graphics::opengl::GLTexture tmp10 = this->texture;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(650)
		::lime::graphics::opengl::GLTexture tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(650)
		::lime::graphics::opengl::GLTexture tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(650)
		::lime::graphics::opengl::GLTexture tmp13 = other->texture;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(650)
		tmp9 = (tmp12 == tmp13);
	}
	else{
		HX_STACK_LINE(649)
		tmp9 = false;
	}
	HX_STACK_LINE(649)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(649)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(649)
	if ((tmp10)){
		HX_STACK_LINE(651)
		bool tmp12 = this->textureSmooth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(651)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(651)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(651)
		bool tmp15 = other->textureSmooth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(651)
		tmp11 = (tmp14 == tmp15);
	}
	else{
		HX_STACK_LINE(649)
		tmp11 = false;
	}
	HX_STACK_LINE(649)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(649)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(649)
	if ((tmp12)){
		HX_STACK_LINE(652)
		::openfl::display::BlendMode tmp14 = this->blendMode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(652)
		::openfl::display::BlendMode tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(652)
		::openfl::display::BlendMode tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(652)
		::openfl::display::BlendMode tmp17 = other->blendMode;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(652)
		tmp13 = (tmp16 == tmp17);
	}
	else{
		HX_STACK_LINE(649)
		tmp13 = false;
	}
	HX_STACK_LINE(649)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(649)
	if ((tmp13)){
		HX_STACK_LINE(654)
		::openfl::geom::ColorTransform tmp15 = this->colorTransform;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(654)
		::openfl::geom::ColorTransform tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(654)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(654)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(654)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(654)
		if ((tmp19)){
			HX_STACK_LINE(654)
			::openfl::geom::ColorTransform tmp20 = this->colorTransform;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(654)
			::openfl::geom::ColorTransform tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(654)
			::openfl::geom::ColorTransform tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(654)
			::openfl::geom::ColorTransform tmp23 = other->colorTransform;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(654)
			bool tmp24 = this->skipColorTransformAlpha;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(654)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(654)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(654)
			::openfl::geom::ColorTransform tmp27 = tmp23;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(654)
			bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(654)
			::openfl::geom::ColorTransform tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(654)
			bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(654)
			tmp14 = tmp22->__equals(tmp29,tmp30);
		}
		else{
			HX_STACK_LINE(654)
			tmp14 = false;
		}
	}
	else{
		HX_STACK_LINE(649)
		tmp14 = false;
	}
	HX_STACK_LINE(649)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,equals,return )

Void State_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils._SpriteBatch.State","destroy",0xbdc18866,"openfl._internal.renderer.opengl.utils._SpriteBatch.State.destroy","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",658,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(659)
		this->texture = null();
		HX_STACK_LINE(660)
		this->colorTransform = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,destroy,(void))


State_obj::State_obj()
{
}

void State_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(State);
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(textureSmooth,"textureSmooth");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(skipColorTransformAlpha,"skipColorTransformAlpha");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void State_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(textureSmooth,"textureSmooth");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(skipColorTransformAlpha,"skipColorTransformAlpha");
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

Dynamic State_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureSmooth") ) { return textureSmooth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"skipColorTransformAlpha") ) { return skipColorTransformAlpha; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic State_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureSmooth") ) { textureSmooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"skipColorTransformAlpha") ) { skipColorTransformAlpha=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void State_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("textureSmooth","\x69","\xdb","\x82","\x9a"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("skipColorTransformAlpha","\xd6","\x1b","\xd9","\xd1"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(State_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsBool,(int)offsetof(State_obj,textureSmooth),HX_HCSTRING("textureSmooth","\x69","\xdb","\x82","\x9a")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(State_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(State_obj,colorTransform),HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad")},
	{hx::fsBool,(int)offsetof(State_obj,skipColorTransformAlpha),HX_HCSTRING("skipColorTransformAlpha","\xd6","\x1b","\xd9","\xd1")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(State_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("textureSmooth","\x69","\xdb","\x82","\x9a"),
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("skipColorTransformAlpha","\xd6","\x1b","\xd9","\xd1"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#endif

hx::Class State_obj::__mClass;

void State_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils._SpriteBatch.State","\xda","\x6f","\x10","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< State_obj >;
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
} // end namespace _SpriteBatch

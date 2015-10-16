#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void RenderSession_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.RenderSession","new",0x2c15cbb7,"openfl._internal.renderer.RenderSession.new","openfl/_internal/renderer/RenderSession.hx",46,0x8a77a218)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//RenderSession_obj::~RenderSession_obj() { }

Dynamic RenderSession_obj::__CreateEmpty() { return  new RenderSession_obj; }
hx::ObjectPtr< RenderSession_obj > RenderSession_obj::__new()
{  hx::ObjectPtr< RenderSession_obj > _result_ = new RenderSession_obj();
	_result_->__construct();
	return _result_;}

Dynamic RenderSession_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderSession_obj > _result_ = new RenderSession_obj();
	_result_->__construct();
	return _result_;}


RenderSession_obj::RenderSession_obj()
{
}

void RenderSession_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderSession);
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(element,"element");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(roundPixels,"roundPixels");
	HX_MARK_MEMBER_NAME(transformProperty,"transformProperty");
	HX_MARK_MEMBER_NAME(transformOriginProperty,"transformOriginProperty");
	HX_MARK_MEMBER_NAME(vendorPrefix,"vendorPrefix");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(drawCount,"drawCount");
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(shaderManager,"shaderManager");
	HX_MARK_MEMBER_NAME(maskManager,"maskManager");
	HX_MARK_MEMBER_NAME(filterManager,"filterManager");
	HX_MARK_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_MARK_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_MARK_MEMBER_NAME(stencilManager,"stencilManager");
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_END_CLASS();
}

void RenderSession_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(element,"element");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(roundPixels,"roundPixels");
	HX_VISIT_MEMBER_NAME(transformProperty,"transformProperty");
	HX_VISIT_MEMBER_NAME(transformOriginProperty,"transformOriginProperty");
	HX_VISIT_MEMBER_NAME(vendorPrefix,"vendorPrefix");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(drawCount,"drawCount");
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(shaderManager,"shaderManager");
	HX_VISIT_MEMBER_NAME(maskManager,"maskManager");
	HX_VISIT_MEMBER_NAME(filterManager,"filterManager");
	HX_VISIT_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_VISIT_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_VISIT_MEMBER_NAME(stencilManager,"stencilManager");
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
}

Dynamic RenderSession_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"element") ) { return element; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCount") ) { return drawCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"roundPixels") ) { return roundPixels; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { return maskManager; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { return spriteBatch; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vendorPrefix") ) { return vendorPrefix; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shaderManager") ) { return shaderManager; }
		if (HX_FIELD_EQ(inName,"filterManager") ) { return filterManager; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { return stencilManager; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return currentBlendMode; }
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { return blendModeManager; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transformProperty") ) { return transformProperty; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return defaultFramebuffer; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformOriginProperty") ) { return transformOriginProperty; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderSession_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::CanvasRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast< ::lime::graphics::DOMRenderContext >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::openfl::_internal::renderer::AbstractRenderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCount") ) { drawCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"roundPixels") ) { roundPixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { maskManager=inValue.Cast< ::openfl::_internal::renderer::AbstractMaskManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { spriteBatch=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::SpriteBatch >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vendorPrefix") ) { vendorPrefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shaderManager") ) { shaderManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::ShaderManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterManager") ) { filterManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { stencilManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::StencilManager >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { blendModeManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BlendModeManager >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transformProperty") ) { transformProperty=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformOriginProperty") ) { transformOriginProperty=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderSession_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("element","\xbc","\xae","\x54","\x06"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("roundPixels","\x1b","\x8a","\xf8","\xbe"));
	outFields->push(HX_HCSTRING("transformProperty","\xe1","\x7d","\xca","\x83"));
	outFields->push(HX_HCSTRING("transformOriginProperty","\xe7","\x5a","\x75","\xd2"));
	outFields->push(HX_HCSTRING("vendorPrefix","\x3a","\x09","\x03","\x61"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("drawCount","\x2b","\x7a","\x6e","\x12"));
	outFields->push(HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"));
	outFields->push(HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f"));
	outFields->push(HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46"));
	outFields->push(HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4"));
	outFields->push(HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b"));
	outFields->push(HX_HCSTRING("spriteBatch","\x75","\xc9","\x5d","\xe4"));
	outFields->push(HX_HCSTRING("stencilManager","\xd1","\xf3","\x58","\x43"));
	outFields->push(HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(RenderSession_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*::lime::graphics::CanvasRenderContext*/ ,(int)offsetof(RenderSession_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::lime::graphics::DOMRenderContext*/ ,(int)offsetof(RenderSession_obj,element),HX_HCSTRING("element","\xbc","\xae","\x54","\x06")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(RenderSession_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractRenderer*/ ,(int)offsetof(RenderSession_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsBool,(int)offsetof(RenderSession_obj,roundPixels),HX_HCSTRING("roundPixels","\x1b","\x8a","\xf8","\xbe")},
	{hx::fsString,(int)offsetof(RenderSession_obj,transformProperty),HX_HCSTRING("transformProperty","\xe1","\x7d","\xca","\x83")},
	{hx::fsString,(int)offsetof(RenderSession_obj,transformOriginProperty),HX_HCSTRING("transformOriginProperty","\xe7","\x5a","\x75","\xd2")},
	{hx::fsString,(int)offsetof(RenderSession_obj,vendorPrefix),HX_HCSTRING("vendorPrefix","\x3a","\x09","\x03","\x61")},
	{hx::fsInt,(int)offsetof(RenderSession_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(RenderSession_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsInt,(int)offsetof(RenderSession_obj,drawCount),HX_HCSTRING("drawCount","\x2b","\x7a","\x6e","\x12")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(RenderSession_obj,currentBlendMode),HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::ShaderManager*/ ,(int)offsetof(RenderSession_obj,shaderManager),HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractMaskManager*/ ,(int)offsetof(RenderSession_obj,maskManager),HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterManager*/ ,(int)offsetof(RenderSession_obj,filterManager),HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BlendModeManager*/ ,(int)offsetof(RenderSession_obj,blendModeManager),HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::SpriteBatch*/ ,(int)offsetof(RenderSession_obj,spriteBatch),HX_HCSTRING("spriteBatch","\x75","\xc9","\x5d","\xe4")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::StencilManager*/ ,(int)offsetof(RenderSession_obj,stencilManager),HX_HCSTRING("stencilManager","\xd1","\xf3","\x58","\x43")},
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(RenderSession_obj,defaultFramebuffer),HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("element","\xbc","\xae","\x54","\x06"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("roundPixels","\x1b","\x8a","\xf8","\xbe"),
	HX_HCSTRING("transformProperty","\xe1","\x7d","\xca","\x83"),
	HX_HCSTRING("transformOriginProperty","\xe7","\x5a","\x75","\xd2"),
	HX_HCSTRING("vendorPrefix","\x3a","\x09","\x03","\x61"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("drawCount","\x2b","\x7a","\x6e","\x12"),
	HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"),
	HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f"),
	HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46"),
	HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4"),
	HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b"),
	HX_HCSTRING("spriteBatch","\x75","\xc9","\x5d","\xe4"),
	HX_HCSTRING("stencilManager","\xd1","\xf3","\x58","\x43"),
	HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderSession_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderSession_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderSession_obj::__mClass;

void RenderSession_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.RenderSession","\x45","\x24","\xd2","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderSession_obj >;
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

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#define INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,DefaultShader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,DrawTrianglesShader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,FillShader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,PatternFillShader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,PrimitiveShader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,Shader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,ShaderManager)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ShaderManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderManager_obj OBJ_;
		ShaderManager_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.ShaderManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderManager_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderManager","\xa8","\xa9","\x52","\xd7"); }

		::lime::graphics::GLRenderContext gl;
		::openfl::_internal::renderer::opengl::shaders2::Shader currentShader;
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader defaultShader;
		::openfl::_internal::renderer::opengl::shaders2::FillShader fillShader;
		::openfl::_internal::renderer::opengl::shaders2::PatternFillShader patternFillShader;
		::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader drawTrianglesShader;
		::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader primitiveShader;
		virtual Void setContext( ::lime::graphics::GLRenderContext gl);
		Dynamic setContext_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool setShader( ::openfl::_internal::renderer::opengl::shaders2::Shader shader,Dynamic force);
		Dynamic setShader_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager */ 

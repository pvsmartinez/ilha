#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#define INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,DefaultShader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,Shader)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{


class HXCPP_CLASS_ATTRIBUTES  DefaultShader_obj : public ::openfl::_internal::renderer::opengl::shaders2::Shader_obj{
	public:
		typedef ::openfl::_internal::renderer::opengl::shaders2::Shader_obj super;
		typedef DefaultShader_obj OBJ_;
		DefaultShader_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.shaders2.DefaultShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DefaultShader_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultShader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DefaultShader","\xa6","\xe2","\x89","\x5f"); }

		virtual Void init( );

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2

#endif /* INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader */ 

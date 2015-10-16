#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#define INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLProgram)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLShader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,Shader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexArray)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexAttribute)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.shaders2.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		static void __boot();
		static int UID;
		static ::lime::graphics::opengl::GLProgram compileProgram( ::lime::graphics::GLRenderContext gl,Array< ::String > vertexSrc,Array< ::String > fragmentSrc);
		static Dynamic compileProgram_dyn();

		static ::lime::graphics::opengl::GLShader compileShader( ::lime::graphics::GLRenderContext gl,Array< ::String > shaderSrc,int type);
		static Dynamic compileShader_dyn();

		::lime::graphics::GLRenderContext gl;
		Array< ::String > vertexSrc;
		Array< ::String > fragmentSrc;
		::haxe::ds::StringMap attributes;
		::haxe::ds::StringMap uniforms;
		int ID;
		::lime::graphics::opengl::GLProgram program;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual int getAttribLocation( ::String attribute);
		Dynamic getAttribLocation_dyn();

		virtual int getUniformLocation( ::String uniform);
		Dynamic getUniformLocation_dyn();

		virtual Void enableVertexAttribute( ::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute,int stride,int offset);
		Dynamic enableVertexAttribute_dyn();

		virtual Void disableVertexAttribute( ::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute,hx::Null< bool >  setDefault);
		Dynamic disableVertexAttribute_dyn();

		virtual Void bindVertexArray( ::openfl::_internal::renderer::opengl::utils::VertexArray va);
		Dynamic bindVertexArray_dyn();

		virtual Void unbindVertexArray( ::openfl::_internal::renderer::opengl::utils::VertexArray va);
		Dynamic unbindVertexArray_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2

#endif /* INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader */ 

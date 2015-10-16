#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#define INCLUDED_lime_graphics_ConsoleRenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,ConsoleRenderContext)
HX_DECLARE_CLASS3(lime,graphics,console,IndexBuffer)
HX_DECLARE_CLASS3(lime,graphics,console,Shader)
HX_DECLARE_CLASS3(lime,graphics,console,VertexBuffer)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  ConsoleRenderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConsoleRenderContext_obj OBJ_;
		ConsoleRenderContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.ConsoleRenderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConsoleRenderContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleRenderContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ConsoleRenderContext","\x82","\x4f","\x3b","\x1b"); }

		virtual ::lime::graphics::console::IndexBuffer createIndexBuffer( Dynamic indices,int count);
		Dynamic createIndexBuffer_dyn();

		virtual ::lime::graphics::console::VertexBuffer createVertexBuffer( Dynamic decl,int count);
		Dynamic createVertexBuffer_dyn();

		virtual ::lime::graphics::console::Shader lookupShader( ::String name);
		Dynamic lookupShader_dyn();

		virtual Void clear( int r,int g,int b,int a,hx::Null< Float >  depth,hx::Null< int >  stencil);
		Dynamic clear_dyn();

		virtual Void bindShader( ::lime::graphics::console::Shader shader);
		Dynamic bindShader_dyn();

		virtual Void setViewport( Dynamic x,Dynamic y,Dynamic width,Dynamic height,hx::Null< Float >  nearPlane,hx::Null< Float >  farPlane);
		Dynamic setViewport_dyn();

		virtual Void setVertexShaderConstantF( Dynamic startRegister,Dynamic vec4,Dynamic vec4count);
		Dynamic setVertexShaderConstantF_dyn();

		virtual Void setVertexSource( ::lime::graphics::console::VertexBuffer vb);
		Dynamic setVertexSource_dyn();

		virtual Void setIndexSource( ::lime::graphics::console::IndexBuffer ib);
		Dynamic setIndexSource_dyn();

		virtual Void draw( Dynamic primitive,Dynamic startVertex,Dynamic primitiveCount);
		Dynamic draw_dyn();

		virtual Void drawIndexed( Dynamic primitive,Dynamic vertexCount,Dynamic startIndex,Dynamic primitiveCount);
		Dynamic drawIndexed_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_ConsoleRenderContext */ 

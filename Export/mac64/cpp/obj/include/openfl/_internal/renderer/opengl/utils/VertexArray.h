#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#define INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexArray)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexAttribute)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  VertexArray_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexArray_obj OBJ_;
		VertexArray_obj();
		Void __construct(Array< ::Dynamic > attributes,Dynamic __o_size,hx::Null< bool >  __o_isStatic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.VertexArray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VertexArray_obj > __new(Array< ::Dynamic > attributes,Dynamic __o_size,hx::Null< bool >  __o_isStatic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexArray_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VertexArray","\x75","\xcf","\xfd","\x1d"); }

		::lime::graphics::GLRenderContext gl;
		::lime::graphics::opengl::GLBuffer glBuffer;
		Array< ::Dynamic > attributes;
		::haxe::io::Bytes buffer;
		int size;
		bool isStatic;
		virtual Void bind( );
		Dynamic bind_dyn();

		virtual Void unbind( );
		Dynamic unbind_dyn();

		virtual Void upload( ::lime::utils::ArrayBufferView view);
		Dynamic upload_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void setContext( ::lime::graphics::GLRenderContext gl,::lime::utils::ArrayBufferView view);
		Dynamic setContext_dyn();

		virtual int get_stride( );
		Dynamic get_stride_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray */ 

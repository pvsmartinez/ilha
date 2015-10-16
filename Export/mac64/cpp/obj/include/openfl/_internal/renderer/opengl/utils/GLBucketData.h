#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#define INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BucketDataType)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLBucket)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLBucketData)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexArray)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  GLBucketData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLBucketData_obj OBJ_;
		GLBucketData_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.GLBucketData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLBucketData_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBucketData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLBucketData","\x39","\x26","\x65","\x53"); }

		::openfl::_internal::renderer::opengl::utils::BucketDataType type;
		::lime::graphics::GLRenderContext gl;
		int drawMode;
		int glLength;
		int glStart;
		::openfl::_internal::renderer::opengl::utils::VertexArray vertexArray;
		::lime::utils::ArrayBufferView glVerts;
		int lastVertsSize;
		Array< Float > verts;
		bool rawVerts;
		int stride;
		::lime::graphics::opengl::GLBuffer indexBuffer;
		::lime::utils::ArrayBufferView glIndices;
		Array< int > indices;
		bool rawIndices;
		bool available;
		::openfl::_internal::renderer::opengl::utils::GLBucket parent;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void upload( );
		Dynamic upload_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData */ 

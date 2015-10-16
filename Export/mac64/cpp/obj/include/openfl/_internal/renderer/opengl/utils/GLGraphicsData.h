#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData
#define INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLGraphicsData)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  GLGraphicsData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLGraphicsData_obj OBJ_;
		GLGraphicsData_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.GLGraphicsData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLGraphicsData_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLGraphicsData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLGraphicsData","\x5a","\xea","\xa1","\xbc"); }

		::lime::graphics::GLRenderContext gl;
		Array< Float > tint;
		Float alpha;
		bool dirty;
		int mode;
		int lastIndex;
		Array< Float > data;
		::lime::utils::ArrayBufferView glData;
		::lime::graphics::opengl::GLBuffer dataBuffer;
		Array< int > indices;
		::lime::utils::ArrayBufferView glIndices;
		::lime::graphics::opengl::GLBuffer indexBuffer;
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

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData */ 

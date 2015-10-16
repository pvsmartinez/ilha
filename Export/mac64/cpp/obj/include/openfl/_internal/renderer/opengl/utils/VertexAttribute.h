#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#define INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexAttribute)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  VertexAttribute_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexAttribute_obj OBJ_;
		VertexAttribute_obj();
		Void __construct(int components,int type,hx::Null< bool >  __o_normalized,::String name,::lime::utils::ArrayBufferView defaultValue);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.VertexAttribute")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VertexAttribute_obj > __new(int components,int type,hx::Null< bool >  __o_normalized,::String name,::lime::utils::ArrayBufferView defaultValue);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexAttribute_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VertexAttribute","\xf8","\xef","\xca","\x4c"); }

		int components;
		bool normalized;
		int type;
		::String name;
		bool enabled;
		::lime::utils::ArrayBufferView defaultValue;
		virtual ::openfl::_internal::renderer::opengl::utils::VertexAttribute copy( );
		Dynamic copy_dyn();

		virtual int getElementsBytes( );
		Dynamic getElementsBytes_dyn();

		virtual int get_elements( );
		Dynamic get_elements_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute */ 

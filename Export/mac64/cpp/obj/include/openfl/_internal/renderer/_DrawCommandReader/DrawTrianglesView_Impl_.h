#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTrianglesView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTrianglesView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,DrawTrianglesView_Impl_)
HX_DECLARE_CLASS2(openfl,display,TriangleCulling)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES  DrawTrianglesView_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawTrianglesView_Impl__obj OBJ_;
		DrawTrianglesView_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DrawTrianglesView_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawTrianglesView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DrawTrianglesView_Impl_","\x8c","\xe7","\x93","\xd4"); }

		static ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static Dynamic _new_dyn();

		static Array< Float > get_vertices( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_vertices_dyn();

		static Array< int > get_indices( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_indices_dyn();

		static Array< Float > get_uvtData( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_uvtData_dyn();

		static ::openfl::display::TriangleCulling get_culling( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_culling_dyn();

		static Array< int > get_colors( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_colors_dyn();

		static int get_blendMode( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_blendMode_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTrianglesView_Impl_ */ 

#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTilesView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTilesView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,DrawTilesView_Impl_)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES  DrawTilesView_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawTilesView_Impl__obj OBJ_;
		DrawTilesView_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DrawTilesView_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawTilesView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DrawTilesView_Impl_","\xe6","\x3a","\xff","\x0a"); }

		static ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static Dynamic _new_dyn();

		static ::openfl::display::Tilesheet get_sheet( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_sheet_dyn();

		static Array< Float > get_tileData( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_tileData_dyn();

		static bool get_smooth( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_smooth_dyn();

		static int get_flags( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_flags_dyn();

		static int get_count( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_count_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTilesView_Impl_ */ 

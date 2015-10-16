#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawPathView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawPathView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,DrawPathView_Impl_)
HX_DECLARE_CLASS2(openfl,display,GraphicsPathWinding)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES  DrawPathView_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawPathView_Impl__obj OBJ_;
		DrawPathView_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DrawPathView_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawPathView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DrawPathView_Impl_","\x0e","\x76","\x7b","\xa6"); }

		static ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static Dynamic _new_dyn();

		static Array< int > get_commands( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_commands_dyn();

		static Array< Float > get_data( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_data_dyn();

		static ::openfl::display::GraphicsPathWinding get_winding( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_winding_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawPathView_Impl_ */ 

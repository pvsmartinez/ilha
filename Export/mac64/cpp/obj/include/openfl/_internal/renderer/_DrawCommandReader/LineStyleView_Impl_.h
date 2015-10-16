#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineStyleView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_LineStyleView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,LineStyleView_Impl_)
HX_DECLARE_CLASS2(openfl,display,CapsStyle)
HX_DECLARE_CLASS2(openfl,display,JointStyle)
HX_DECLARE_CLASS2(openfl,display,LineScaleMode)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES  LineStyleView_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LineStyleView_Impl__obj OBJ_;
		LineStyleView_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LineStyleView_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineStyleView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LineStyleView_Impl_","\xa2","\xb3","\x32","\x46"); }

		static ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static Dynamic _new_dyn();

		static Dynamic get_thickness( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_thickness_dyn();

		static Dynamic get_color( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_color_dyn();

		static Dynamic get_alpha( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_alpha_dyn();

		static Dynamic get_pixelHinting( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_pixelHinting_dyn();

		static ::openfl::display::LineScaleMode get_scaleMode( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_scaleMode_dyn();

		static ::openfl::display::CapsStyle get_caps( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_caps_dyn();

		static ::openfl::display::JointStyle get_joints( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_joints_dyn();

		static Dynamic get_miterLimit( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_miterLimit_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_LineStyleView_Impl_ */ 

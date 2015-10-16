#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_CubicCurveToView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_CubicCurveToView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,CubicCurveToView_Impl_)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES  CubicCurveToView_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CubicCurveToView_Impl__obj OBJ_;
		CubicCurveToView_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CubicCurveToView_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CubicCurveToView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CubicCurveToView_Impl_","\xe5","\x20","\x46","\xa0"); }

		static ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static Dynamic _new_dyn();

		static Float get_controlX1( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_controlX1_dyn();

		static Float get_controlY1( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_controlY1_dyn();

		static Float get_controlX2( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_controlX2_dyn();

		static Float get_controlY2( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_controlY2_dyn();

		static Float get_anchorX( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_anchorX_dyn();

		static Float get_anchorY( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_anchorY_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_CubicCurveToView_Impl_ */ 

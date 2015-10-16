#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_EndFillView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_EndFillView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,EndFillView_Impl_)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES  EndFillView_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EndFillView_Impl__obj OBJ_;
		EndFillView_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.EndFillView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EndFillView_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EndFillView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EndFillView_Impl_","\x43","\x3e","\x96","\x56"); }

		static ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static Dynamic _new_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_EndFillView_Impl_ */ 

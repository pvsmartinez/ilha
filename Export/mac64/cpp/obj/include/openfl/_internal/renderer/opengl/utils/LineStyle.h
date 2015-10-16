#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#define INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,LineStyle)
HX_DECLARE_CLASS2(openfl,display,CapsStyle)
HX_DECLARE_CLASS2(openfl,display,JointStyle)
HX_DECLARE_CLASS2(openfl,display,LineScaleMode)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  LineStyle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LineStyle_obj OBJ_;
		LineStyle_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.LineStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LineStyle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineStyle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c"); }

		Float width;
		int color;
		Dynamic alpha;
		::openfl::display::LineScaleMode scaleMode;
		::openfl::display::CapsStyle caps;
		::openfl::display::JointStyle joints;
		Float miterLimit;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle */ 

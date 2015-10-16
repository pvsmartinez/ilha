#ifndef INCLUDED_openfl_display_GraphicsStroke
#define INCLUDED_openfl_display_GraphicsStroke

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,display,CapsStyle)
HX_DECLARE_CLASS2(openfl,display,GraphicsDataType)
HX_DECLARE_CLASS2(openfl,display,GraphicsStroke)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)
HX_DECLARE_CLASS2(openfl,display,IGraphicsStroke)
HX_DECLARE_CLASS2(openfl,display,JointStyle)
HX_DECLARE_CLASS2(openfl,display,LineScaleMode)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  GraphicsStroke_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsStroke_obj OBJ_;
		GraphicsStroke_obj();
		Void __construct(hx::Null< Float >  __o_thickness,hx::Null< bool >  __o_pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,hx::Null< Float >  __o_miterLimit,::openfl::display::IGraphicsFill fill);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsStroke")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsStroke_obj > __new(hx::Null< Float >  __o_thickness,hx::Null< bool >  __o_pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,hx::Null< Float >  __o_miterLimit,::openfl::display::IGraphicsFill fill);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsStroke_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::display::IGraphicsStroke_obj *();
		operator ::openfl::display::IGraphicsData_obj *();
		::String __ToString() const { return HX_HCSTRING("GraphicsStroke","\x03","\xdf","\x55","\x0e"); }

		::openfl::display::CapsStyle caps;
		::openfl::display::IGraphicsFill fill;
		::openfl::display::JointStyle joints;
		Float miterLimit;
		bool pixelHinting;
		::openfl::display::LineScaleMode scaleMode;
		Float thickness;
		::openfl::display::GraphicsDataType __graphicsDataType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsStroke */ 

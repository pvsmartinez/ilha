#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#define INCLUDED_openfl_display_GraphicsBitmapFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,GraphicsBitmapFill)
HX_DECLARE_CLASS2(openfl,display,GraphicsDataType)
HX_DECLARE_CLASS2(openfl,display,GraphicsFillType)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  GraphicsBitmapFill_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsBitmapFill_obj OBJ_;
		GraphicsBitmapFill_obj();
		Void __construct(::openfl::display::BitmapData bitmapData,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsBitmapFill")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsBitmapFill_obj > __new(::openfl::display::BitmapData bitmapData,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsBitmapFill_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::display::IGraphicsFill_obj *();
		operator ::openfl::display::IGraphicsData_obj *();
		::String __ToString() const { return HX_HCSTRING("GraphicsBitmapFill","\xdd","\x5a","\xb9","\x40"); }

		::openfl::display::BitmapData bitmapData;
		::openfl::geom::Matrix matrix;
		bool repeat;
		bool smooth;
		::openfl::display::GraphicsDataType __graphicsDataType;
		::openfl::display::GraphicsFillType __graphicsFillType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsBitmapFill */ 

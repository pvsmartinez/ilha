#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#define INCLUDED_openfl_display_GraphicsSolidFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,display,GraphicsDataType)
HX_DECLARE_CLASS2(openfl,display,GraphicsFillType)
HX_DECLARE_CLASS2(openfl,display,GraphicsSolidFill)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  GraphicsSolidFill_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsSolidFill_obj OBJ_;
		GraphicsSolidFill_obj();
		Void __construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsSolidFill")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsSolidFill_obj > __new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsSolidFill_obj();

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
		::String __ToString() const { return HX_HCSTRING("GraphicsSolidFill","\xe3","\x55","\xbe","\xa3"); }

		Float alpha;
		int color;
		::openfl::display::GraphicsDataType __graphicsDataType;
		::openfl::display::GraphicsFillType __graphicsFillType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsSolidFill */ 

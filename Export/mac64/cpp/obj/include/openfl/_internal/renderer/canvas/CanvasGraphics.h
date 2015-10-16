#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#define INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,canvas,CanvasGraphics)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,GradientType)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InterpolationMethod)
HX_DECLARE_CLASS2(openfl,display,SpreadMethod)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{


class HXCPP_CLASS_ATTRIBUTES  CanvasGraphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CanvasGraphics_obj OBJ_;
		CanvasGraphics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.canvas.CanvasGraphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CanvasGraphics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasGraphics_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CanvasGraphics","\xe3","\x35","\xd6","\x92"); }

		static void __boot();
		static Float SIN45;
		static Float TAN22;
		static ::openfl::display::BitmapData bitmapFill;
		static ::openfl::display::BitmapData bitmapStroke;
		static bool bitmapRepeat;
		static ::openfl::geom::Rectangle bounds;
		static ::openfl::_internal::renderer::DrawCommandBuffer fillCommands;
		static ::openfl::display::Graphics graphics;
		static bool hasFill;
		static bool hasStroke;
		static bool hitTesting;
		static ::openfl::geom::Matrix inversePendingMatrix;
		static ::openfl::geom::Matrix pendingMatrix;
		static ::openfl::_internal::renderer::DrawCommandBuffer strokeCommands;
		static Void closePath( );
		static Dynamic closePath_dyn();

		static Dynamic createBitmapFill( ::openfl::display::BitmapData bitmap,bool bitmapRepeat);
		static Dynamic createBitmapFill_dyn();

		static Void createGradientPattern( ::openfl::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio);
		static Dynamic createGradientPattern_dyn();

		static Void createTempPatternCanvas( ::openfl::display::BitmapData bitmap,bool repeat,int width,int height);
		static Dynamic createTempPatternCanvas_dyn();

		static Void drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry);
		static Dynamic drawRoundRect_dyn();

		static Void endFill( );
		static Dynamic endFill_dyn();

		static Void endStroke( );
		static Dynamic endStroke_dyn();

		static bool hitTest( ::openfl::display::Graphics graphics,Float x,Float y);
		static Dynamic hitTest_dyn();

		static bool isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		static Dynamic isCCW_dyn();

		static Dynamic normalizeUVT( Array< Float > uvt,hx::Null< bool >  skipT);
		static Dynamic normalizeUVT_dyn();

		static Void playCommands( ::openfl::_internal::renderer::DrawCommandBuffer commands,hx::Null< bool >  stroke);
		static Dynamic playCommands_dyn();

		static Void render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

		static Void renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic renderMask_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas

#endif /* INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics */ 

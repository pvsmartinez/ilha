#ifndef INCLUDED_openfl_display_Graphics
#define INCLUDED_openfl_display_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,DrawPath)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FilterTexture)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLStack)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,CapsStyle)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,GradientType)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,GraphicsPathWinding)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,InterpolationMethod)
HX_DECLARE_CLASS2(openfl,display,JointStyle)
HX_DECLARE_CLASS2(openfl,display,LineScaleMode)
HX_DECLARE_CLASS2(openfl,display,SpreadMethod)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,display,TriangleCulling)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Graphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Graphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Graphics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Graphics","\xeb","\xb4","\x19","\xec"); }

		static void __boot();
		static int TILE_SCALE;
		static int TILE_ROTATION;
		static int TILE_RGB;
		static int TILE_ALPHA;
		static int TILE_TRANS_2x2;
		static int TILE_RECT;
		static int TILE_ORIGIN;
		static int TILE_BLEND_NORMAL;
		static int TILE_BLEND_ADD;
		static int TILE_BLEND_MULTIPLY;
		static int TILE_BLEND_SCREEN;
		static int TILE_BLEND_SUBTRACT;
		static int TILE_BLEND_DARKEN;
		static int TILE_BLEND_LIGHTEN;
		static int TILE_BLEND_OVERLAY;
		static int TILE_BLEND_HARDLIGHT;
		static int TILE_BLEND_DIFFERENCE;
		static int TILE_BLEND_INVERT;
		bool __hardware;
		::openfl::geom::Rectangle __bounds;
		::openfl::_internal::renderer::DrawCommandBuffer __commands;
		bool __dirty;
		Array< ::Dynamic > __glStack;
		Array< ::Dynamic > __drawPaths;
		::lime::graphics::Image __image;
		Float __positionX;
		Float __positionY;
		Float __strokePadding;
		bool __transformDirty;
		bool __visible;
		::openfl::_internal::renderer::opengl::utils::FilterTexture __cachedTexture;
		::openfl::display::DisplayObject __owner;
		::lime::graphics::cairo::Cairo __cairo;
		::openfl::display::BitmapData __bitmap;
		virtual Void beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  repeat,hx::Null< bool >  smooth);
		Dynamic beginBitmapFill_dyn();

		virtual Void beginFill( hx::Null< int >  color,hx::Null< Float >  alpha);
		Dynamic beginFill_dyn();

		virtual Void beginGradientFill( ::openfl::display::GradientType type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio);
		Dynamic beginGradientFill_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void copyFrom( ::openfl::display::Graphics sourceGraphics);
		Dynamic copyFrom_dyn();

		virtual Void cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		Dynamic cubicCurveTo_dyn();

		virtual Void curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY);
		Dynamic curveTo_dyn();

		virtual Void drawCircle( Float x,Float y,Float radius);
		Dynamic drawCircle_dyn();

		virtual Void drawEllipse( Float x,Float y,Float width,Float height);
		Dynamic drawEllipse_dyn();

		virtual Void drawGraphicsData( Array< ::openfl::display::IGraphicsData > graphicsData);
		Dynamic drawGraphicsData_dyn();

		virtual Void drawPath( Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding);
		Dynamic drawPath_dyn();

		virtual Void drawRect( Float x,Float y,Float width,Float height);
		Dynamic drawRect_dyn();

		virtual Void drawRoundRect( Float x,Float y,Float width,Float height,Float rx,hx::Null< Float >  ry);
		Dynamic drawRoundRect_dyn();

		virtual Void drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius);
		Dynamic drawRoundRectComplex_dyn();

		virtual Void drawTiles( ::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  smooth,hx::Null< int >  flags,hx::Null< int >  count);
		Dynamic drawTiles_dyn();

		virtual Void drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,hx::Null< int >  blendMode);
		Dynamic drawTriangles_dyn();

		virtual Void endFill( );
		Dynamic endFill_dyn();

		virtual Void lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  repeat,hx::Null< bool >  smooth);
		Dynamic lineBitmapStyle_dyn();

		virtual Void lineGradientStyle( ::openfl::display::GradientType type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio);
		Dynamic lineGradientStyle_dyn();

		virtual Void lineStyle( Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,Dynamic miterLimit);
		Dynamic lineStyle_dyn();

		virtual Void lineTo( Float x,Float y);
		Dynamic lineTo_dyn();

		virtual Void moveTo( Float x,Float y);
		Dynamic moveTo_dyn();

		virtual Float __calculateBezierCubicPoint( Float t,Float p1,Float p2,Float p3,Float p4);
		Dynamic __calculateBezierCubicPoint_dyn();

		virtual Float __calculateBezierQuadPoint( Float t,Float p1,Float p2,Float p3);
		Dynamic __calculateBezierQuadPoint_dyn();

		virtual Void __getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);
		Dynamic __getBounds_dyn();

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,::openfl::geom::Matrix matrix);
		Dynamic __hitTest_dyn();

		virtual Void __inflateBounds( Float x,Float y);
		Dynamic __inflateBounds_dyn();

		virtual bool set___dirty( bool value);
		Dynamic set___dirty_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Graphics */ 

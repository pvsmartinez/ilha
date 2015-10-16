#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#define INCLUDED_openfl__internal_renderer_DrawCommandBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandType)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,CapsStyle)
HX_DECLARE_CLASS2(openfl,display,GradientType)
HX_DECLARE_CLASS2(openfl,display,GraphicsPathWinding)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InterpolationMethod)
HX_DECLARE_CLASS2(openfl,display,JointStyle)
HX_DECLARE_CLASS2(openfl,display,LineScaleMode)
HX_DECLARE_CLASS2(openfl,display,SpreadMethod)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,display,TriangleCulling)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES  DrawCommandBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawCommandBuffer_obj OBJ_;
		DrawCommandBuffer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.DrawCommandBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DrawCommandBuffer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawCommandBuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DrawCommandBuffer","\xe7","\xdd","\x9a","\xb4"); }

		Array< ::Dynamic > types;
		Array< bool > b;
		Array< Float > f;
		Array< ::Dynamic > ff;
		Array< int > i;
		Array< ::Dynamic > ii;
		cpp::ArrayBase o;
		Array< ::Dynamic > ts;
		virtual ::openfl::_internal::renderer::DrawCommandBuffer append( ::openfl::_internal::renderer::DrawCommandBuffer other);
		Dynamic append_dyn();

		virtual Void beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		Dynamic beginBitmapFill_dyn();

		virtual Void beginFill( int color,Float alpha);
		Dynamic beginFill_dyn();

		virtual Void beginGradientFill( ::openfl::display::GradientType type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio);
		Dynamic beginGradientFill_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandBuffer copy( );
		Dynamic copy_dyn();

		virtual Void cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		Dynamic cubicCurveTo_dyn();

		virtual Void curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY);
		Dynamic curveTo_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void drawCircle( Float x,Float y,Float radius);
		Dynamic drawCircle_dyn();

		virtual Void drawEllipse( Float x,Float y,Float width,Float height);
		Dynamic drawEllipse_dyn();

		virtual Void drawPath( Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding);
		Dynamic drawPath_dyn();

		virtual Void drawRect( Float x,Float y,Float width,Float height);
		Dynamic drawRect_dyn();

		virtual Void drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry);
		Dynamic drawRoundRect_dyn();

		virtual Void drawTiles( ::openfl::display::Tilesheet sheet,Array< Float > tileData,bool smooth,int flags,int count);
		Dynamic drawTiles_dyn();

		virtual Void drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,int blendMode);
		Dynamic drawTriangles_dyn();

		virtual Void endFill( );
		Dynamic endFill_dyn();

		virtual Void lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		Dynamic lineBitmapStyle_dyn();

		virtual Void lineGradientStyle( ::openfl::display::GradientType type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio);
		Dynamic lineGradientStyle_dyn();

		virtual Void lineStyle( Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,Dynamic miterLimit);
		Dynamic lineStyle_dyn();

		virtual Void lineTo( Float x,Float y);
		Dynamic lineTo_dyn();

		virtual Void moveTo( Float x,Float y);
		Dynamic moveTo_dyn();

		virtual Void overrideMatrix( ::openfl::geom::Matrix matrix);
		Dynamic overrideMatrix_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_DrawCommandBuffer */ 

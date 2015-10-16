#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#define INCLUDED_lime_graphics_CanvasRenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,CanvasRenderContext)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  CanvasRenderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CanvasRenderContext_obj OBJ_;
		CanvasRenderContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.CanvasRenderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CanvasRenderContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasRenderContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CanvasRenderContext","\x21","\x55","\xca","\xa3"); }

		Float backingStorePixelRatio;
		Dynamic canvas;
		Dynamic fillStyle;
		::String font;
		Float globalAlpha;
		::String globalCompositeOperation;
		bool imageSmoothingEnabled;
		::String lineCap;
		cpp::ArrayBase lineDash;
		Float lineDashOffset;
		::String lineJoin;
		Float lineWidth;
		Float miterLimit;
		Float shadowBlur;
		::String shadowColor;
		Float shadowOffsetX;
		Float shadowOffsetY;
		Dynamic strokeStyle;
		::String textAlign;
		::String textBaseline;
		virtual Void arc( Float x,Float y,Float radius,Float startAngle,Float endAngle,bool anticlockwise);
		Dynamic arc_dyn();

		virtual Void arcTo( Float x1,Float y1,Float x2,Float y2,Float radius);
		Dynamic arcTo_dyn();

		virtual Void beginPath( );
		Dynamic beginPath_dyn();

		virtual Void bezierCurveTo( Float cp1x,Float cp1y,Float cp2x,Float cp2y,Float x,Float y);
		Dynamic bezierCurveTo_dyn();

		virtual Void clearRect( Float x,Float y,Float width,Float height);
		Dynamic clearRect_dyn();

		virtual Void clearShadow( );
		Dynamic clearShadow_dyn();

		virtual Void clip( );
		Dynamic clip_dyn();

		virtual Void closePath( );
		Dynamic closePath_dyn();

		virtual Dynamic createDynamicImageData( Float sw,Float sh);
		Dynamic createDynamicImageData_dyn();

		virtual Dynamic createLinearGradient( Float x0,Float y0,Float x1,Float y1);
		Dynamic createLinearGradient_dyn();

		virtual Dynamic createPattern( Dynamic image,::String repetitionType);
		Dynamic createPattern_dyn();

		virtual Dynamic createRadialGradient( Float x0,Float y0,Float r0,Float x1,Float y1,Float r1);
		Dynamic createRadialGradient_dyn();

		virtual Void drawImage( Dynamic element,Float sx,Float sy,Dynamic sw,Dynamic sh,Dynamic dx,Dynamic dy,Dynamic dw,Dynamic dh);
		Dynamic drawImage_dyn();

		virtual Void drawImageFromRect( Dynamic image,Dynamic sx,Dynamic sy,Dynamic sw,Dynamic sh,Dynamic dx,Dynamic dy,Dynamic dw,Dynamic dh,::String compositeOperation);
		Dynamic drawImageFromRect_dyn();

		virtual Void fill( );
		Dynamic fill_dyn();

		virtual Void fillRect( Float x,Float y,Float width,Float height);
		Dynamic fillRect_dyn();

		virtual Void fillText( ::String text,Float x,Float y,Dynamic maxWidth);
		Dynamic fillText_dyn();

		virtual Dynamic getDynamicImageData( Float sx,Float sy,Float sw,Float sh);
		Dynamic getDynamicImageData_dyn();

		virtual Dynamic getDynamicImageDataHD( Float sx,Float sy,Float sw,Float sh);
		Dynamic getDynamicImageDataHD_dyn();

		virtual Array< Float > getLineDash( );
		Dynamic getLineDash_dyn();

		virtual bool isPointInPath( Float x,Float y);
		Dynamic isPointInPath_dyn();

		virtual Void lineTo( Float x,Float y);
		Dynamic lineTo_dyn();

		virtual Dynamic measureText( ::String text);
		Dynamic measureText_dyn();

		virtual Void moveTo( Float x,Float y);
		Dynamic moveTo_dyn();

		virtual Void putDynamicImageData( Dynamic dynamicImageData,Float dx,Float dy,Float dirtyX,Float dirtyY,Float dirtyWidth,Float dirtyHeight);
		Dynamic putDynamicImageData_dyn();

		virtual Void putDynamicImageDataHD( Dynamic dynamicImageData,Float dx,Float dy,Float dirtyX,Float dirtyY,Float dirtyWidth,Float dirtyHeight);
		Dynamic putDynamicImageDataHD_dyn();

		virtual Void quadraticCurveTo( Float cpx,Float cpy,Float x,Float y);
		Dynamic quadraticCurveTo_dyn();

		virtual Void rect( Float x,Float y,Float width,Float height);
		Dynamic rect_dyn();

		virtual Void restore( );
		Dynamic restore_dyn();

		virtual Void rotate( Float angle);
		Dynamic rotate_dyn();

		virtual Void save( );
		Dynamic save_dyn();

		virtual Void scale( Float sx,Float sy);
		Dynamic scale_dyn();

		virtual Void setAlpha( Float alpha);
		Dynamic setAlpha_dyn();

		virtual Void setCompositeOperation( ::String compositeOperation);
		Dynamic setCompositeOperation_dyn();

		virtual Void setFillColor( Float c,Float m,Float y,Float k,Float a);
		Dynamic setFillColor_dyn();

		virtual Void setLineCap( ::String cap);
		Dynamic setLineCap_dyn();

		virtual Void setLineDash( Array< Float > dash);
		Dynamic setLineDash_dyn();

		virtual Void setLineJoin( ::String join);
		Dynamic setLineJoin_dyn();

		virtual Void setLineWidth( Float width);
		Dynamic setLineWidth_dyn();

		virtual Void setMiterLimit( Float limit);
		Dynamic setMiterLimit_dyn();

		virtual Void setShadow( Float width,Float height,Float blur,Float c,Float m,Float y,Float k,Float a);
		Dynamic setShadow_dyn();

		virtual Void setStrokeColor( Float c,Float m,Float y,Float k,Float a);
		Dynamic setStrokeColor_dyn();

		virtual Void setTransform( Float m11,Float m12,Float m21,Float m22,Float dx,Float dy);
		Dynamic setTransform_dyn();

		virtual Void stroke( );
		Dynamic stroke_dyn();

		virtual Void strokeRect( Float x,Float y,Float width,Float height,Dynamic lineWidth);
		Dynamic strokeRect_dyn();

		virtual Void strokeText( ::String text,Float x,Float y,Dynamic maxWidth);
		Dynamic strokeText_dyn();

		virtual Void transform( Float m11,Float m12,Float m21,Float m22,Float dx,Float dy);
		Dynamic transform_dyn();

		virtual Void translate( Float tx,Float ty);
		Dynamic translate_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_CanvasRenderContext */ 

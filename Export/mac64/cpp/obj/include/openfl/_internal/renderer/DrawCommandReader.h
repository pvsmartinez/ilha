#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#define INCLUDED_openfl__internal_renderer_DrawCommandReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandType)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES  DrawCommandReader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawCommandReader_obj OBJ_;
		DrawCommandReader_obj();
		Void __construct(::openfl::_internal::renderer::DrawCommandBuffer buffer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.DrawCommandReader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DrawCommandReader_obj > __new(::openfl::_internal::renderer::DrawCommandBuffer buffer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawCommandReader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DrawCommandReader","\x2a","\xc6","\x97","\xe0"); }

		::openfl::_internal::renderer::DrawCommandBuffer buffer;
		int bPos;
		int iiPos;
		int iPos;
		int ffPos;
		int fPos;
		int oPos;
		::openfl::_internal::renderer::DrawCommandType prev;
		int tsPos;
		virtual Void advance( );
		Dynamic advance_dyn();

		virtual bool _bool( int index);
		Dynamic _bool_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Array< Float > fArr( int index);
		Dynamic fArr_dyn();

		virtual Float _float( int index);
		Dynamic _float_dyn();

		virtual Array< int > iArr( int index);
		Dynamic iArr_dyn();

		virtual int _int( int index);
		Dynamic _int_dyn();

		virtual Dynamic obj( int index);
		Dynamic obj_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readBeginBitmapFill( );
		Dynamic readBeginBitmapFill_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readBeginFill( );
		Dynamic readBeginFill_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readBeginGradientFill( );
		Dynamic readBeginGradientFill_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readCubicCurveTo( );
		Dynamic readCubicCurveTo_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readCurveTo( );
		Dynamic readCurveTo_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readDrawCircle( );
		Dynamic readDrawCircle_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readDrawEllipse( );
		Dynamic readDrawEllipse_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readDrawPath( );
		Dynamic readDrawPath_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readDrawRect( );
		Dynamic readDrawRect_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readDrawRoundRect( );
		Dynamic readDrawRoundRect_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readDrawTiles( );
		Dynamic readDrawTiles_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readDrawTriangles( );
		Dynamic readDrawTriangles_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readEndFill( );
		Dynamic readEndFill_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readLineBitmapStyle( );
		Dynamic readLineBitmapStyle_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readLineGradientStyle( );
		Dynamic readLineGradientStyle_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readLineStyle( );
		Dynamic readLineStyle_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readLineTo( );
		Dynamic readLineTo_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readMoveTo( );
		Dynamic readMoveTo_dyn();

		virtual ::openfl::_internal::renderer::DrawCommandReader readOverrideMatrix( );
		Dynamic readOverrideMatrix_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void skip( ::openfl::_internal::renderer::DrawCommandType type);
		Dynamic skip_dyn();

		virtual ::openfl::display::Tilesheet tileSheet( int index);
		Dynamic tileSheet_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_DrawCommandReader */ 

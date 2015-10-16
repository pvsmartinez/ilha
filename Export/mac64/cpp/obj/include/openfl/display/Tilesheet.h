#ifndef INCLUDED_openfl_display_Tilesheet
#define INCLUDED_openfl_display_Tilesheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Tilesheet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tilesheet_obj OBJ_;
		Tilesheet_obj();
		Void __construct(::openfl::display::BitmapData image);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Tilesheet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tilesheet_obj > __new(::openfl::display::BitmapData image);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tilesheet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tilesheet","\x91","\xb0","\x20","\x16"); }

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
		static ::openfl::geom::Point __defaultPoint;
		::openfl::display::BitmapData __bitmap;
		Array< ::Dynamic > __centerPoints;
		Array< ::Dynamic > __tileRects;
		Array< ::Dynamic > __tileUVs;
		::openfl::geom::Rectangle __rectTile;
		::openfl::geom::Rectangle __rectUV;
		::openfl::geom::Point __point;
		virtual int addTileRect( ::openfl::geom::Rectangle rectangle,::openfl::geom::Point centerPoint);
		Dynamic addTileRect_dyn();

		virtual Void drawTiles( ::openfl::display::Graphics graphics,Array< Float > tileData,hx::Null< bool >  smooth,hx::Null< int >  flags,hx::Null< int >  count);
		Dynamic drawTiles_dyn();

		virtual ::openfl::geom::Point getTileCenter( int index);
		Dynamic getTileCenter_dyn();

		virtual ::openfl::geom::Rectangle getTileRect( int index);
		Dynamic getTileRect_dyn();

		virtual ::openfl::geom::Rectangle getTileUVs( int index);
		Dynamic getTileUVs_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Tilesheet */ 

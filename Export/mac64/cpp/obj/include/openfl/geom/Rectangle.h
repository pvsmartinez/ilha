#ifndef INCLUDED_openfl_geom_Rectangle
#define INCLUDED_openfl_geom_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Rectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.geom.Rectangle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Rectangle_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb"); }

		static void __boot();
		static ::openfl::geom::Rectangle __temp;
		Float height;
		Float width;
		Float x;
		Float y;
		virtual ::openfl::geom::Rectangle clone( );
		Dynamic clone_dyn();

		virtual bool contains( Float x,Float y);
		Dynamic contains_dyn();

		virtual bool containsPoint( ::openfl::geom::Point point);
		Dynamic containsPoint_dyn();

		virtual bool containsRect( ::openfl::geom::Rectangle rect);
		Dynamic containsRect_dyn();

		virtual Void copyFrom( ::openfl::geom::Rectangle sourceRect);
		Dynamic copyFrom_dyn();

		virtual bool equals( ::openfl::geom::Rectangle toCompare);
		Dynamic equals_dyn();

		virtual Void inflate( Float dx,Float dy);
		Dynamic inflate_dyn();

		virtual Void inflatePoint( ::openfl::geom::Point point);
		Dynamic inflatePoint_dyn();

		virtual ::openfl::geom::Rectangle intersection( ::openfl::geom::Rectangle toIntersect);
		Dynamic intersection_dyn();

		virtual bool intersects( ::openfl::geom::Rectangle toIntersect);
		Dynamic intersects_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual Void offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual Void offsetPoint( ::openfl::geom::Point point);
		Dynamic offsetPoint_dyn();

		virtual Void setEmpty( );
		Dynamic setEmpty_dyn();

		virtual Void setTo( Float xa,Float ya,Float widtha,Float heighta);
		Dynamic setTo_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::openfl::geom::Rectangle _union( ::openfl::geom::Rectangle toUnion);
		Dynamic _union_dyn();

		virtual Void __contract( Float x,Float y,Float width,Float height);
		Dynamic __contract_dyn();

		virtual Void __expand( Float x,Float y,Float width,Float height);
		Dynamic __expand_dyn();

		virtual ::lime::math::Rectangle __toLimeRectangle( );
		Dynamic __toLimeRectangle_dyn();

		virtual Void __transform( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix m);
		Dynamic __transform_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual Float set_bottom( Float b);
		Dynamic set_bottom_dyn();

		virtual ::openfl::geom::Point get_bottomRight( );
		Dynamic get_bottomRight_dyn();

		virtual ::openfl::geom::Point set_bottomRight( ::openfl::geom::Point p);
		Dynamic set_bottomRight_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual Float set_left( Float l);
		Dynamic set_left_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_right( Float r);
		Dynamic set_right_dyn();

		virtual ::openfl::geom::Point get_size( );
		Dynamic get_size_dyn();

		virtual ::openfl::geom::Point set_size( ::openfl::geom::Point p);
		Dynamic set_size_dyn();

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual Float set_top( Float t);
		Dynamic set_top_dyn();

		virtual ::openfl::geom::Point get_topLeft( );
		Dynamic get_topLeft_dyn();

		virtual ::openfl::geom::Point set_topLeft( ::openfl::geom::Point p);
		Dynamic set_topLeft_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Rectangle */ 

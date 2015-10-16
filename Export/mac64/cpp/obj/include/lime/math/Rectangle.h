#ifndef INCLUDED_lime_math_Rectangle
#define INCLUDED_lime_math_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Rectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.math.Rectangle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Rectangle_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb"); }

		Float height;
		Float width;
		Float x;
		Float y;
		virtual ::lime::math::Rectangle clone( );
		Dynamic clone_dyn();

		virtual bool contains( Float x,Float y);
		Dynamic contains_dyn();

		virtual bool containsPoint( ::lime::math::Vector2 point);
		Dynamic containsPoint_dyn();

		virtual bool containsRect( ::lime::math::Rectangle rect);
		Dynamic containsRect_dyn();

		virtual Void copyFrom( ::lime::math::Rectangle sourceRect);
		Dynamic copyFrom_dyn();

		virtual bool equals( ::lime::math::Rectangle toCompare);
		Dynamic equals_dyn();

		virtual Void inflate( Float dx,Float dy);
		Dynamic inflate_dyn();

		virtual Void inflatePoint( ::lime::math::Vector2 point);
		Dynamic inflatePoint_dyn();

		virtual ::lime::math::Rectangle intersection( ::lime::math::Rectangle toIntersect);
		Dynamic intersection_dyn();

		virtual bool intersects( ::lime::math::Rectangle toIntersect);
		Dynamic intersects_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual Void offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual Void offsetPoint( ::lime::math::Vector2 point);
		Dynamic offsetPoint_dyn();

		virtual Void setEmpty( );
		Dynamic setEmpty_dyn();

		virtual Void setTo( Float xa,Float ya,Float widtha,Float heighta);
		Dynamic setTo_dyn();

		virtual ::lime::math::Rectangle transform( ::lime::math::Matrix3 m);
		Dynamic transform_dyn();

		virtual ::lime::math::Rectangle _union( ::lime::math::Rectangle toUnion);
		Dynamic _union_dyn();

		virtual Void __contract( Float x,Float y,Float width,Float height);
		Dynamic __contract_dyn();

		virtual Void __expand( Float x,Float y,Float width,Float height);
		Dynamic __expand_dyn();

		virtual Dynamic __toFlashRectangle( );
		Dynamic __toFlashRectangle_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual Float set_bottom( Float b);
		Dynamic set_bottom_dyn();

		virtual ::lime::math::Vector2 get_bottomRight( );
		Dynamic get_bottomRight_dyn();

		virtual ::lime::math::Vector2 set_bottomRight( ::lime::math::Vector2 p);
		Dynamic set_bottomRight_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual Float set_left( Float l);
		Dynamic set_left_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_right( Float r);
		Dynamic set_right_dyn();

		virtual ::lime::math::Vector2 get_size( );
		Dynamic get_size_dyn();

		virtual ::lime::math::Vector2 set_size( ::lime::math::Vector2 p);
		Dynamic set_size_dyn();

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual Float set_top( Float t);
		Dynamic set_top_dyn();

		virtual ::lime::math::Vector2 get_topLeft( );
		Dynamic get_topLeft_dyn();

		virtual ::lime::math::Vector2 set_topLeft( ::lime::math::Vector2 p);
		Dynamic set_topLeft_dyn();

};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_Rectangle */ 

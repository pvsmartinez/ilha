#ifndef INCLUDED_lime_math_Vector4
#define INCLUDED_lime_math_Vector4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector4)
namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Vector4_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector4_obj OBJ_;
		Vector4_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.math.Vector4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector4_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector4_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector4","\xf1","\x21","\xee","\xa7"); }

		static ::lime::math::Vector4 X_AXIS;
		static ::lime::math::Vector4 Y_AXIS;
		static ::lime::math::Vector4 Z_AXIS;
		static Float angleBetween( ::lime::math::Vector4 a,::lime::math::Vector4 b);
		static Dynamic angleBetween_dyn();

		static Float distance( ::lime::math::Vector4 pt1,::lime::math::Vector4 pt2);
		static Dynamic distance_dyn();

		static ::lime::math::Vector4 get_X_AXIS( );
		static Dynamic get_X_AXIS_dyn();

		static ::lime::math::Vector4 get_Y_AXIS( );
		static Dynamic get_Y_AXIS_dyn();

		static ::lime::math::Vector4 get_Z_AXIS( );
		static Dynamic get_Z_AXIS_dyn();

		Float length;
		Float lengthSquared;
		Float w;
		Float x;
		Float y;
		Float z;
		virtual ::lime::math::Vector4 add( ::lime::math::Vector4 a);
		Dynamic add_dyn();

		virtual ::lime::math::Vector4 clone( );
		Dynamic clone_dyn();

		virtual Void copyFrom( ::lime::math::Vector4 sourceVector4);
		Dynamic copyFrom_dyn();

		virtual ::lime::math::Vector4 crossProduct( ::lime::math::Vector4 a);
		Dynamic crossProduct_dyn();

		virtual Void decrementBy( ::lime::math::Vector4 a);
		Dynamic decrementBy_dyn();

		virtual Float dotProduct( ::lime::math::Vector4 a);
		Dynamic dotProduct_dyn();

		virtual bool equals( ::lime::math::Vector4 toCompare,Dynamic allFour);
		Dynamic equals_dyn();

		virtual Void incrementBy( ::lime::math::Vector4 a);
		Dynamic incrementBy_dyn();

		virtual bool nearEquals( ::lime::math::Vector4 toCompare,Float tolerance,Dynamic allFour);
		Dynamic nearEquals_dyn();

		virtual Void negate( );
		Dynamic negate_dyn();

		virtual Float normalize( );
		Dynamic normalize_dyn();

		virtual Void project( );
		Dynamic project_dyn();

		virtual Void scaleBy( Float s);
		Dynamic scaleBy_dyn();

		virtual Void setTo( Float xa,Float ya,Float za);
		Dynamic setTo_dyn();

		virtual ::lime::math::Vector4 subtract( ::lime::math::Vector4 a);
		Dynamic subtract_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float get_length( );
		Dynamic get_length_dyn();

		virtual Float get_lengthSquared( );
		Dynamic get_lengthSquared_dyn();

};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_Vector4 */ 

#ifndef INCLUDED_lime_math_Matrix3
#define INCLUDED_lime_math_Matrix3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,math,Vector4)
namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Matrix3_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix3_obj OBJ_;
		Matrix3_obj();
		Void __construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.math.Matrix3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Matrix3_obj > __new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix3_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Matrix3","\xb2","\x6a","\xb8","\x60"); }

		static void __boot();
		static ::lime::math::Matrix3 __identity;
		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
		virtual ::lime::math::Matrix3 clone( );
		Dynamic clone_dyn();

		virtual Void concat( ::lime::math::Matrix3 m);
		Dynamic concat_dyn();

		virtual Void copyColumnFrom( int column,::lime::math::Vector4 vector4);
		Dynamic copyColumnFrom_dyn();

		virtual Void copyColumnTo( int column,::lime::math::Vector4 vector4);
		Dynamic copyColumnTo_dyn();

		virtual Void copyFrom( ::lime::math::Matrix3 sourceMatrix3);
		Dynamic copyFrom_dyn();

		virtual Void copyRowFrom( int row,::lime::math::Vector4 vector4);
		Dynamic copyRowFrom_dyn();

		virtual Void copyRowTo( int row,::lime::math::Vector4 vector4);
		Dynamic copyRowTo_dyn();

		virtual Void createBox( Float scaleX,Float scaleY,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		Dynamic createBox_dyn();

		virtual Void createGradientBox( Float width,Float height,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		Dynamic createGradientBox_dyn();

		virtual bool equals( Dynamic Matrix3);
		Dynamic equals_dyn();

		virtual ::lime::math::Vector2 deltaTransformVector2( ::lime::math::Vector2 Vector2);
		Dynamic deltaTransformVector2_dyn();

		virtual Void identity( );
		Dynamic identity_dyn();

		virtual ::lime::math::Matrix3 invert( );
		Dynamic invert_dyn();

		virtual ::lime::math::Matrix3 mult( ::lime::math::Matrix3 m);
		Dynamic mult_dyn();

		virtual Void rotate( Float theta);
		Dynamic rotate_dyn();

		virtual Void scale( Float sx,Float sy);
		Dynamic scale_dyn();

		virtual Void setRotation( Float theta,hx::Null< Float >  scale);
		Dynamic setRotation_dyn();

		virtual Void setTo( Float a,Float b,Float c,Float d,Float tx,Float ty);
		Dynamic setTo_dyn();

		virtual ::String to3DString( hx::Null< bool >  roundPixels);
		Dynamic to3DString_dyn();

		virtual ::String toMozString( );
		Dynamic toMozString_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::lime::math::Vector2 transformVector2( ::lime::math::Vector2 pos);
		Dynamic transformVector2_dyn();

		virtual Void translate( Float dx,Float dy);
		Dynamic translate_dyn();

		virtual Void __cleanValues( );
		Dynamic __cleanValues_dyn();

		virtual Float __transformX( ::lime::math::Vector2 pos);
		Dynamic __transformX_dyn();

		virtual Float __transformY( ::lime::math::Vector2 pos);
		Dynamic __transformY_dyn();

		virtual Void __translateTransformed( ::lime::math::Vector2 pos);
		Dynamic __translateTransformed_dyn();

};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_Matrix3 */ 

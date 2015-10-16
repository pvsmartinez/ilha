#ifndef INCLUDED_openfl_geom_Matrix
#define INCLUDED_openfl_geom_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)
namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Matrix_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();
		Void __construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.geom.Matrix")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Matrix_obj > __new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Matrix","\x61","\xaa","\x5c","\xf0"); }

		static void __boot();
		static ::openfl::geom::Matrix __temp;
		static ::openfl::geom::Matrix __identity;
		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
		::lime::utils::ArrayBufferView __array;
		virtual ::openfl::geom::Matrix clone( );
		Dynamic clone_dyn();

		virtual Void concat( ::openfl::geom::Matrix m);
		Dynamic concat_dyn();

		virtual Void copyColumnFrom( int column,::openfl::geom::Vector3D vector3D);
		Dynamic copyColumnFrom_dyn();

		virtual Void copyColumnTo( int column,::openfl::geom::Vector3D vector3D);
		Dynamic copyColumnTo_dyn();

		virtual Void copyFrom( ::openfl::geom::Matrix sourceMatrix);
		Dynamic copyFrom_dyn();

		virtual Void copyRowFrom( int row,::openfl::geom::Vector3D vector3D);
		Dynamic copyRowFrom_dyn();

		virtual Void copyRowTo( int row,::openfl::geom::Vector3D vector3D);
		Dynamic copyRowTo_dyn();

		virtual Void createBox( Float scaleX,Float scaleY,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		Dynamic createBox_dyn();

		virtual Void createGradientBox( Float width,Float height,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		Dynamic createGradientBox_dyn();

		virtual ::openfl::geom::Point deltaTransformPoint( ::openfl::geom::Point point);
		Dynamic deltaTransformPoint_dyn();

		virtual bool equals( Dynamic matrix);
		Dynamic equals_dyn();

		virtual Void identity( );
		Dynamic identity_dyn();

		virtual ::openfl::geom::Matrix invert( );
		Dynamic invert_dyn();

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

		virtual ::openfl::geom::Point transformPoint( ::openfl::geom::Point pos);
		Dynamic transformPoint_dyn();

		virtual Void translate( Float dx,Float dy);
		Dynamic translate_dyn();

		virtual ::lime::utils::ArrayBufferView toArray( hx::Null< bool >  transpose);
		Dynamic toArray_dyn();

		virtual Void __cleanValues( );
		Dynamic __cleanValues_dyn();

		virtual ::lime::math::Matrix3 __toMatrix3( );
		Dynamic __toMatrix3_dyn();

		virtual Void __transformInversePoint( ::openfl::geom::Point point);
		Dynamic __transformInversePoint_dyn();

		virtual Float __transformInverseX( Float px,Float py);
		Dynamic __transformInverseX_dyn();

		virtual Float __transformInverseY( Float px,Float py);
		Dynamic __transformInverseY_dyn();

		virtual Void __transformPoint( ::openfl::geom::Point point);
		Dynamic __transformPoint_dyn();

		virtual Float __transformX( Float px,Float py);
		Dynamic __transformX_dyn();

		virtual Float __transformY( Float px,Float py);
		Dynamic __transformY_dyn();

		virtual Void __translateTransformed( Float px,Float py);
		Dynamic __translateTransformed_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Matrix */ 

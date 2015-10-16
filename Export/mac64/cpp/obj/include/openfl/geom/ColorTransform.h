#ifndef INCLUDED_openfl_geom_ColorTransform
#define INCLUDED_openfl_geom_ColorTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ColorTransform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColorTransform_obj OBJ_;
		ColorTransform_obj();
		Void __construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.geom.ColorTransform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ColorTransform_obj > __new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorTransform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ColorTransform","\xa9","\x6b","\x95","\x57"); }

		Float alphaMultiplier;
		Float alphaOffset;
		Float blueMultiplier;
		Float blueOffset;
		Float greenMultiplier;
		Float greenOffset;
		Float redMultiplier;
		Float redOffset;
		virtual Void concat( ::openfl::geom::ColorTransform second);
		Dynamic concat_dyn();

		virtual ::openfl::geom::ColorTransform __clone( );
		Dynamic __clone_dyn();

		virtual Void __combine( ::openfl::geom::ColorTransform ct);
		Dynamic __combine_dyn();

		virtual bool __equals( ::openfl::geom::ColorTransform ct,Dynamic skipAlphaMultiplier);
		Dynamic __equals_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual ::lime::utils::ArrayBufferView __toLimeColorMatrix( );
		Dynamic __toLimeColorMatrix_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_ColorTransform */ 

#ifndef INCLUDED_lime_text__Glyph_Glyph_Impl_
#define INCLUDED_lime_text__Glyph_Glyph_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,text,_Glyph,Glyph_Impl_)
namespace lime{
namespace text{
namespace _Glyph{


class HXCPP_CLASS_ATTRIBUTES  Glyph_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Glyph_Impl__obj OBJ_;
		Glyph_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.text._Glyph.Glyph_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Glyph_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Glyph_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Glyph_Impl_","\x2c","\x5b","\x88","\xc8"); }

		static int _new( int i);
		static Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace _Glyph

#endif /* INCLUDED_lime_text__Glyph_Glyph_Impl_ */ 

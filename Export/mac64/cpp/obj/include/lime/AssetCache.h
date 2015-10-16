#ifndef INCLUDED_lime_AssetCache
#define INCLUDED_lime_AssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(lime,AssetCache)
namespace lime{


class HXCPP_CLASS_ATTRIBUTES  AssetCache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetCache_obj OBJ_;
		AssetCache_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.AssetCache")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetCache_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetCache_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetCache","\x52","\x9e","\xa3","\xe4"); }

		::haxe::ds::StringMap audio;
		bool enabled;
		::haxe::ds::StringMap image;
		::haxe::ds::StringMap font;
		virtual Void clear( ::String prefix);
		Dynamic clear_dyn();

};

} // end namespace lime

#endif /* INCLUDED_lime_AssetCache */ 

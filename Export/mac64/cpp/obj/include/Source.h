#ifndef INCLUDED_Source
#define INCLUDED_Source

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Stuff
#include <Stuff.h>
#endif
HX_DECLARE_CLASS0(Body)
HX_DECLARE_CLASS0(Source)
HX_DECLARE_CLASS0(Sources)
HX_DECLARE_CLASS0(Stuff)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Source_obj : public ::Stuff_obj{
	public:
		typedef ::Stuff_obj super;
		typedef Source_obj OBJ_;
		Source_obj();
		Void __construct(::Sources kind);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Source")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Source_obj > __new(::Sources kind);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Source_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Source","\xfb","\x24","\xc6","\x66"); }

		::Sources kind;
};


#endif /* INCLUDED_Source */ 

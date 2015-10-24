#ifndef INCLUDED_Stuff
#define INCLUDED_Stuff

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Body
#include <Body.h>
#endif
HX_DECLARE_CLASS0(Body)
HX_DECLARE_CLASS0(Person)
HX_DECLARE_CLASS0(Stuff)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,GlowFilter)


class HXCPP_CLASS_ATTRIBUTES  Stuff_obj : public ::Body_obj{
	public:
		typedef ::Body_obj super;
		typedef Stuff_obj OBJ_;
		Stuff_obj();
		Void __construct(::String img,int width,int height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Stuff")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stuff_obj > __new(::String img,int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stuff_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stuff","\xd4","\x06","\x48","\x17"); }

		::openfl::filters::GlowFilter shine;
		virtual Void focus( ::Person target);
		Dynamic focus_dyn();

};


#endif /* INCLUDED_Stuff */ 

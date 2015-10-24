#ifndef INCLUDED_Person
#define INCLUDED_Person

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Body
#include <Body.h>
#endif
HX_DECLARE_CLASS0(Body)
HX_DECLARE_CLASS0(Person)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Person_obj : public ::Body_obj{
	public:
		typedef ::Body_obj super;
		typedef Person_obj OBJ_;
		Person_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Person")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Person_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Person_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Person","\xb5","\x6b","\xb7","\x6f"); }

};


#endif /* INCLUDED_Person */ 

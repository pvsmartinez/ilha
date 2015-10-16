#ifndef INCLUDED_Body
#define INCLUDED_Body

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Component
#include <Component.h>
#endif
HX_DECLARE_CLASS0(Body)
HX_DECLARE_CLASS0(Component)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Body_obj : public ::Component_obj{
	public:
		typedef ::Component_obj super;
		typedef Body_obj OBJ_;
		Body_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Body")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Body_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Body_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Body","\xc2","\xa6","\xf4","\x2b"); }

		virtual Void interact( Array< bool > keys,Array< ::Dynamic > stuff);
		Dynamic interact_dyn();

		virtual Void move( bool l,bool u,bool r,bool d);
		Dynamic move_dyn();

};


#endif /* INCLUDED_Body */ 

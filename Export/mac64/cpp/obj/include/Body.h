#ifndef INCLUDED_Body
#define INCLUDED_Body

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Body)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Body_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Body_obj OBJ_;
		Body_obj();
		Void __construct(::String img,int width,int height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Body")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Body_obj > __new(::String img,int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Body_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Body","\xc2","\xa6","\xf4","\x2b"); }

		int speed;
		::String img;
		::openfl::display::Bitmap bitmap;
		virtual Void addHitArea( int width,int height);
		Dynamic addHitArea_dyn();

		virtual Void addPng( );
		Dynamic addPng_dyn();

		virtual Void move( bool l,bool u,bool r,bool d);
		Dynamic move_dyn();

};


#endif /* INCLUDED_Body */ 

#ifndef INCLUDED_Collectable
#define INCLUDED_Collectable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Component
#include <Component.h>
#endif
HX_DECLARE_CLASS0(Collectable)
HX_DECLARE_CLASS0(Component)
HX_DECLARE_CLASS0(Kinds)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Collectable_obj : public ::Component_obj{
	public:
		typedef ::Component_obj super;
		typedef Collectable_obj OBJ_;
		Collectable_obj();
		Void __construct(::Kinds kind);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Collectable")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Collectable_obj > __new(::Kinds kind);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Collectable_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Collectable","\x24","\xc8","\xd0","\x41"); }

		bool carried;
		virtual Void action( bool trigger);

};


#endif /* INCLUDED_Collectable */ 

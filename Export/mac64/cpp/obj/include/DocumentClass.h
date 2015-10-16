#ifndef INCLUDED_DocumentClass
#define INCLUDED_DocumentClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Main
#include <Main.h>
#endif
HX_DECLARE_CLASS0(DocumentClass)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  DocumentClass_obj : public ::Main_obj{
	public:
		typedef ::Main_obj super;
		typedef DocumentClass_obj OBJ_;
		DocumentClass_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="DocumentClass")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DocumentClass_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DocumentClass_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DocumentClass","\xfd","\xa6","\x03","\x3e"); }

};


#endif /* INCLUDED_DocumentClass */ 

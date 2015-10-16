#ifndef INCLUDED_openfl_display_InteractiveObject
#define INCLUDED_openfl_display_InteractiveObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  InteractiveObject_obj : public ::openfl::display::DisplayObject_obj{
	public:
		typedef ::openfl::display::DisplayObject_obj super;
		typedef InteractiveObject_obj OBJ_;
		InteractiveObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.InteractiveObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InteractiveObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractiveObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InteractiveObject","\x21","\x86","\xb1","\xc3"); }

		bool doubleClickEnabled;
		Dynamic focusRect;
		bool mouseEnabled;
		bool needsSoftKeyboard;
		::openfl::geom::Rectangle softKeyboardInputAreaOfInterest;
		int tabIndex;
		bool __tabEnabled;
		virtual bool requestSoftKeyboard( );
		Dynamic requestSoftKeyboard_dyn();

		virtual bool __getInteractive( Array< ::Dynamic > stack);

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly);

		virtual bool get_tabEnabled( );
		Dynamic get_tabEnabled_dyn();

		virtual bool set_tabEnabled( bool value);
		Dynamic set_tabEnabled_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_InteractiveObject */ 

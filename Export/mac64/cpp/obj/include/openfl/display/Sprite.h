#ifndef INCLUDED_openfl_display_Sprite
#define INCLUDED_openfl_display_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Sprite_obj : public ::openfl::display::DisplayObjectContainer_obj{
	public:
		typedef ::openfl::display::DisplayObjectContainer_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Sprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sprite","\x25","\x50","\x2a","\xf8"); }

		bool buttonMode;
		::openfl::display::Graphics graphics;
		bool useHandCursor;
		virtual Void startDrag( hx::Null< bool >  lockCenter,::openfl::geom::Rectangle bounds);
		Dynamic startDrag_dyn();

		virtual Void stopDrag( );
		Dynamic stopDrag_dyn();

		virtual ::lime::ui::MouseCursor __getCursor( );

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly);

		virtual bool __hitTestMask( Float x,Float y);

		virtual ::openfl::display::Graphics get_graphics( );
		Dynamic get_graphics_dyn();

		virtual bool get_tabEnabled( );

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Sprite */ 

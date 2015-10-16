#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#define INCLUDED_openfl_display_DisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayObjectContainer_obj : public ::openfl::display::InteractiveObject_obj{
	public:
		typedef ::openfl::display::InteractiveObject_obj super;
		typedef DisplayObjectContainer_obj OBJ_;
		DisplayObjectContainer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.DisplayObjectContainer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DisplayObjectContainer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObjectContainer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DisplayObjectContainer","\x80","\xf2","\x98","\xea"); }

		bool mouseChildren;
		int numChildren;
		bool tabChildren;
		Array< ::Dynamic > __removedChildren;
		virtual ::openfl::display::DisplayObject addChild( ::openfl::display::DisplayObject child);
		Dynamic addChild_dyn();

		virtual ::openfl::display::DisplayObject addChildAt( ::openfl::display::DisplayObject child,int index);
		Dynamic addChildAt_dyn();

		virtual bool areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point);
		Dynamic areInaccessibleObjectsUnderPoint_dyn();

		virtual bool contains( ::openfl::display::DisplayObject child);
		Dynamic contains_dyn();

		virtual ::openfl::display::DisplayObject getChildAt( int index);
		Dynamic getChildAt_dyn();

		virtual ::openfl::display::DisplayObject getChildByName( ::String name);
		Dynamic getChildByName_dyn();

		virtual int getChildIndex( ::openfl::display::DisplayObject child);
		Dynamic getChildIndex_dyn();

		virtual Array< ::Dynamic > getObjectsUnderPoint( ::openfl::geom::Point point);
		Dynamic getObjectsUnderPoint_dyn();

		virtual ::openfl::display::DisplayObject removeChild( ::openfl::display::DisplayObject child);
		Dynamic removeChild_dyn();

		virtual ::openfl::display::DisplayObject removeChildAt( int index);
		Dynamic removeChildAt_dyn();

		virtual Void removeChildren( hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic removeChildren_dyn();

		virtual ::openfl::display::DisplayObject resolve( ::String fieldName);
		Dynamic resolve_dyn();

		virtual Void setChildIndex( ::openfl::display::DisplayObject child,int index);
		Dynamic setChildIndex_dyn();

		virtual Void swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2);
		Dynamic swapChildren_dyn();

		virtual Void swapChildrenAt( int child1,int child2);
		Dynamic swapChildrenAt_dyn();

		virtual bool __broadcast( ::openfl::events::Event event,bool notifyChilden);

		virtual Void __enterFrame( int deltaTime);

		virtual Void __getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly);

		virtual bool __hitTestMask( Float x,Float y);

		virtual Void __renderCairo( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __setStageReference( ::openfl::display::Stage stage);

		virtual Void __update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics);

		virtual Void __updateChildren( bool transformOnly);

		virtual int get_numChildren( );
		Dynamic get_numChildren_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DisplayObjectContainer */ 

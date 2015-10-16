#ifndef INCLUDED_lime_graphics_FlashRenderContext
#define INCLUDED_lime_graphics_FlashRenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,FlashRenderContext)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  FlashRenderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlashRenderContext_obj OBJ_;
		FlashRenderContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.FlashRenderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlashRenderContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlashRenderContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlashRenderContext","\x89","\x79","\x37","\x20"); }

		Dynamic accessibilityImplementation;
		Dynamic accessibilityProperties;
		Float alpha;
		Dynamic blendMode;
		Dynamic blendShader;
		bool buttonMode;
		bool cacheAsBitmap;
		Dynamic contextMenu;
		bool doubleClickEnabled;
		Dynamic dropTarget;
		cpp::ArrayBase filters;
		Dynamic focusRect;
		Dynamic graphics;
		Float height;
		Dynamic hitArea;
		Dynamic loaderInfo;
		Dynamic mask;
		bool mouseChildren;
		bool mouseEnabled;
		Float mouseX;
		Float mouseY;
		::String name;
		bool needsSoftKeyboard;
		int numChildren;
		Dynamic opaqueBackground;
		Dynamic parent;
		Dynamic root;
		Float rotation;
		Float rotationX;
		Float rotationY;
		Float rotationZ;
		Dynamic scale9Grid;
		Float scaleX;
		Float scaleY;
		Float scaleZ;
		Dynamic scrollRect;
		Dynamic softKeyboardInputAreaOfInterest;
		Dynamic soundTransform;
		Dynamic stage;
		bool tabChildren;
		bool tabEnabled;
		int tabIndex;
		Dynamic textSnapshot;
		Dynamic transform;
		bool useHandCursor;
		bool visible;
		Float width;
		Float x;
		Float y;
		Float z;
		virtual Dynamic addChild( Dynamic child);
		Dynamic addChild_dyn();

		virtual Dynamic addChildAt( Dynamic child,int index);
		Dynamic addChildAt_dyn();

		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);
		Dynamic addEventListener_dyn();

		virtual bool areInaccessibleObjectsUnderPoint( Dynamic point);
		Dynamic areInaccessibleObjectsUnderPoint_dyn();

		virtual bool contains( Dynamic child);
		Dynamic contains_dyn();

		virtual bool dispatchEvent( Dynamic event);
		Dynamic dispatchEvent_dyn();

		virtual Dynamic getBounds( Dynamic targetCoordinateSpace);
		Dynamic getBounds_dyn();

		virtual Dynamic getChildAt( int index);
		Dynamic getChildAt_dyn();

		virtual Dynamic getChildByName( ::String name);
		Dynamic getChildByName_dyn();

		virtual int getChildIndex( Dynamic child);
		Dynamic getChildIndex_dyn();

		virtual cpp::ArrayBase getObjectsUnderPoint( Dynamic point);
		Dynamic getObjectsUnderPoint_dyn();

		virtual Dynamic getRect( Dynamic targetCoordinateSpace);
		Dynamic getRect_dyn();

		virtual Dynamic globalToLocal( Dynamic point);
		Dynamic globalToLocal_dyn();

		virtual Dynamic globalToLocal3D( Dynamic point);
		Dynamic globalToLocal3D_dyn();

		virtual bool hasEventListener( ::String type);
		Dynamic hasEventListener_dyn();

		virtual bool hitTestObject( Dynamic obj);
		Dynamic hitTestObject_dyn();

		virtual bool hitTestPoint( Float x,Float y,hx::Null< bool >  shapeFlag);
		Dynamic hitTestPoint_dyn();

		virtual Dynamic local3DToGlobal( Dynamic point3d);
		Dynamic local3DToGlobal_dyn();

		virtual Dynamic localToGlobal( Dynamic point);
		Dynamic localToGlobal_dyn();

		virtual Dynamic removeChild( Dynamic child);
		Dynamic removeChild_dyn();

		virtual Dynamic removeChildAt( int index);
		Dynamic removeChildAt_dyn();

		virtual Void removeChildren( hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic removeChildren_dyn();

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture);
		Dynamic removeEventListener_dyn();

		virtual bool requestSoftKeyboard( );
		Dynamic requestSoftKeyboard_dyn();

		virtual Void setChildIndex( Dynamic child,int index);
		Dynamic setChildIndex_dyn();

		virtual Void startDrag( hx::Null< bool >  lockCenter,Dynamic bounds);
		Dynamic startDrag_dyn();

		virtual Void startTouchDrag( int touchPointID,hx::Null< bool >  lockCenter,Dynamic bounds);
		Dynamic startTouchDrag_dyn();

		virtual Void stopAllMovieClips( );
		Dynamic stopAllMovieClips_dyn();

		virtual Void stopDrag( );
		Dynamic stopDrag_dyn();

		virtual Void stopTouchDrag( int touchPointID);
		Dynamic stopTouchDrag_dyn();

		virtual Void swapChildren( Dynamic child1,Dynamic child2);
		Dynamic swapChildren_dyn();

		virtual Void swapChildrenAt( int index1,int index2);
		Dynamic swapChildrenAt_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool willTrigger( ::String type);
		Dynamic willTrigger_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_FlashRenderContext */ 

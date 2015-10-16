#ifndef INCLUDED_openfl__internal_renderer_GraphicsPaths
#define INCLUDED_openfl__internal_renderer_GraphicsPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,GraphicsPaths)
namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES  GraphicsPaths_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsPaths_obj OBJ_;
		GraphicsPaths_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.GraphicsPaths")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsPaths_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsPaths_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicsPaths","\x43","\x12","\x9c","\x1c"); }

		static void __boot();
		static Float SIN45;
		static Float TAN22;
		static Void ellipse( Array< Float > points,Float x,Float y,Float rx,Float ry,int segmentCount);
		static Dynamic ellipse_dyn();

		static Void cubicCurveTo( Array< Float > points,Float cx,Float cy,Float cx2,Float cy2,Float x,Float y);
		static Dynamic cubicCurveTo_dyn();

		static Void curveTo( Array< Float > points,Float cx,Float cy,Float x,Float y);
		static Dynamic curveTo_dyn();

		static Void roundRectangle( Array< Float > points,Float x,Float y,Float width,Float height,Float rx,Float ry);
		static Dynamic roundRectangle_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_GraphicsPaths */ 

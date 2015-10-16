#ifndef INCLUDED_openfl_display_GraphicsPathCommand
#define INCLUDED_openfl_display_GraphicsPathCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,GraphicsPathCommand)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  GraphicsPathCommand_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsPathCommand_obj OBJ_;
		GraphicsPathCommand_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display.GraphicsPathCommand")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsPathCommand_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsPathCommand_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicsPathCommand","\xfb","\xe6","\xad","\x7e"); }

		static void __boot();
		static int LINE_TO;
		static int MOVE_TO;
		static int CURVE_TO;
		static int WIDE_LINE_TO;
		static int WIDE_MOVE_TO;
		static int NO_OP;
		static int CUBIC_CURVE_TO;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsPathCommand */ 

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#define INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BucketDataType)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BucketMode)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLBucket)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLBucketData)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GraphicType)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  GLBucket_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLBucket_obj OBJ_;
		GLBucket_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.GLBucket")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLBucket_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBucket_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLBucket","\x6f","\x40","\x8e","\x38"); }

		::lime::graphics::GLRenderContext gl;
		Array< Float > color;
		Float alpha;
		bool dirty;
		::openfl::_internal::renderer::opengl::utils::GraphicType graphicType;
		int lastIndex;
		int fillIndex;
		::openfl::_internal::renderer::opengl::utils::BucketMode mode;
		Array< ::Dynamic > fills;
		Array< ::Dynamic > lines;
		::openfl::display::BitmapData bitmap;
		::lime::graphics::opengl::GLTexture texture;
		::openfl::geom::Matrix textureMatrix;
		bool textureRepeat;
		bool textureSmooth;
		::openfl::geom::Point textureTL;
		::openfl::geom::Point textureBR;
		::openfl::geom::Matrix overrideMatrix;
		::lime::graphics::opengl::GLBuffer tileBuffer;
		::lime::utils::ArrayBufferView glTile;
		Array< int > tile;
		bool uploadTileBuffer;
		virtual ::openfl::_internal::renderer::opengl::utils::GLBucketData getData( ::openfl::_internal::renderer::opengl::utils::BucketDataType type);
		Dynamic getData_dyn();

		virtual Void optimize( );
		Dynamic optimize_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void uploadTile( int x,int y,int w,int h);
		Dynamic uploadTile_dyn();

		virtual Void upload( );
		Dynamic upload_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket */ 

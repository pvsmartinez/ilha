#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#define INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,Shader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,SpriteBatch)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexArray)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,VertexAttribute)
HX_DECLARE_CLASS6(openfl,_internal,renderer,opengl,utils,_SpriteBatch,State)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,PixelSnapping)
HX_DECLARE_CLASS2(openfl,display,TextureUvs)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  SpriteBatch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SpriteBatch_obj OBJ_;
		SpriteBatch_obj();
		Void __construct(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.SpriteBatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SpriteBatch_obj > __new(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpriteBatch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SpriteBatch","\x55","\x61","\x90","\xc8"); }

		static void __boot();
		static int VERTS_PER_SPRITE;
		::lime::graphics::GLRenderContext gl;
		::openfl::_internal::renderer::RenderSession renderSession;
		Array< ::Dynamic > states;
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State currentState;
		::openfl::_internal::renderer::opengl::utils::VertexArray vertexArray;
		::lime::utils::ArrayBufferView positions;
		::lime::utils::ArrayBufferView colors;
		::lime::graphics::opengl::GLBuffer indexBuffer;
		::lime::utils::ArrayBufferView indices;
		bool dirty;
		bool drawing;
		::openfl::geom::Rectangle clipRect;
		int maxSprites;
		int batchedSprites;
		int vertexArraySize;
		int indexArraySize;
		int maxElementsPerVertex;
		int elementsPerVertex;
		int writtenVertexBytes;
		::openfl::_internal::renderer::opengl::shaders2::Shader shader;
		Array< ::Dynamic > attributes;
		bool enableColor;
		bool lastEnableColor;
		::openfl::geom::Matrix matrix;
		::openfl::display::TextureUvs uvs;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void begin( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Rectangle clipRect);
		Dynamic begin_dyn();

		virtual Void finish( );
		Dynamic finish_dyn();

		virtual Void start( ::openfl::geom::Rectangle clipRect);
		Dynamic start_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void renderBitmapData( ::openfl::display::BitmapData bitmapData,bool smoothing,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform ct,Dynamic alpha,::openfl::display::BlendMode blendMode,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  bgra);
		Dynamic renderBitmapData_dyn();

		virtual Void renderTiles( ::openfl::display::DisplayObject object,::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  smooth,hx::Null< int >  flags,hx::Null< int >  count);
		Dynamic renderTiles_dyn();

		virtual Void renderCachedGraphics( ::openfl::display::DisplayObject object);
		Dynamic renderCachedGraphics_dyn();

		virtual Void fillVertices( int index,Float width,Float height,::openfl::geom::Matrix matrix,::openfl::display::TextureUvs uvs,::openfl::geom::Point pivot,Dynamic color,::openfl::display::PixelSnapping pixelSnapping);
		Dynamic fillVertices_dyn();

		virtual Void enableAttributes( Dynamic color);
		Dynamic enableAttributes_dyn();

		virtual Void flush( );
		Dynamic flush_dyn();

		virtual Void renderBatch( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state,int size,int start);
		Dynamic renderBatch_dyn();

		virtual Void setState( int index,::lime::graphics::opengl::GLTexture texture,Dynamic smooth,::openfl::display::BlendMode blendMode,::openfl::geom::ColorTransform colorTransform,Dynamic skipAlpha);
		Dynamic setState_dyn();

		virtual Void setContext( ::lime::graphics::GLRenderContext gl);
		Dynamic setContext_dyn();

		virtual int getElementsPerVertex( );
		Dynamic getElementsPerVertex_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch */ 

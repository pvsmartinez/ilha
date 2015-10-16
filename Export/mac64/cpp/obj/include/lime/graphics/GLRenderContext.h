#ifndef INCLUDED_lime_graphics_GLRenderContext
#define INCLUDED_lime_graphics_GLRenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLProgram)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLRenderbuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLShader)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  GLRenderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLRenderContext_obj OBJ_;
		GLRenderContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.GLRenderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLRenderContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLRenderContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLRenderContext","\xd4","\x67","\x93","\x7a"); }

		int DEPTH_BUFFER_BIT;
		int STENCIL_BUFFER_BIT;
		int COLOR_BUFFER_BIT;
		int POINTS;
		int LINES;
		int LINE_LOOP;
		int LINE_STRIP;
		int TRIANGLES;
		int TRIANGLE_STRIP;
		int TRIANGLE_FAN;
		int ZERO;
		int ONE;
		int SRC_COLOR;
		int ONE_MINUS_SRC_COLOR;
		int SRC_ALPHA;
		int ONE_MINUS_SRC_ALPHA;
		int DST_ALPHA;
		int ONE_MINUS_DST_ALPHA;
		int DST_COLOR;
		int ONE_MINUS_DST_COLOR;
		int SRC_ALPHA_SATURATE;
		int FUNC_ADD;
		int BLEND_EQUATION;
		int BLEND_EQUATION_RGB;
		int BLEND_EQUATION_ALPHA;
		int FUNC_SUBTRACT;
		int FUNC_REVERSE_SUBTRACT;
		int BLEND_DST_RGB;
		int BLEND_SRC_RGB;
		int BLEND_DST_ALPHA;
		int BLEND_SRC_ALPHA;
		int CONSTANT_COLOR;
		int ONE_MINUS_CONSTANT_COLOR;
		int CONSTANT_ALPHA;
		int ONE_MINUS_CONSTANT_ALPHA;
		int BLEND_COLOR;
		int ARRAY_BUFFER;
		int ELEMENT_ARRAY_BUFFER;
		int ARRAY_BUFFER_BINDING;
		int ELEMENT_ARRAY_BUFFER_BINDING;
		int STREAM_DRAW;
		int STATIC_DRAW;
		int DYNAMIC_DRAW;
		int BUFFER_SIZE;
		int BUFFER_USAGE;
		int CURRENT_VERTEX_ATTRIB;
		int FRONT;
		int BACK;
		int FRONT_AND_BACK;
		int CULL_FACE;
		int BLEND;
		int DITHER;
		int STENCIL_TEST;
		int DEPTH_TEST;
		int SCISSOR_TEST;
		int POLYGON_OFFSET_FILL;
		int SAMPLE_ALPHA_TO_COVERAGE;
		int SAMPLE_COVERAGE;
		int NO_ERROR;
		int INVALID_ENUM;
		int INVALID_VALUE;
		int INVALID_OPERATION;
		int OUT_OF_MEMORY;
		int CW;
		int CCW;
		int LINE_WIDTH;
		int ALIASED_POINT_SIZE_RANGE;
		int ALIASED_LINE_WIDTH_RANGE;
		int CULL_FACE_MODE;
		int FRONT_FACE;
		int DEPTH_RANGE;
		int DEPTH_WRITEMASK;
		int DEPTH_CLEAR_VALUE;
		int DEPTH_FUNC;
		int STENCIL_CLEAR_VALUE;
		int STENCIL_FUNC;
		int STENCIL_FAIL;
		int STENCIL_PASS_DEPTH_FAIL;
		int STENCIL_PASS_DEPTH_PASS;
		int STENCIL_REF;
		int STENCIL_VALUE_MASK;
		int STENCIL_WRITEMASK;
		int STENCIL_BACK_FUNC;
		int STENCIL_BACK_FAIL;
		int STENCIL_BACK_PASS_DEPTH_FAIL;
		int STENCIL_BACK_PASS_DEPTH_PASS;
		int STENCIL_BACK_REF;
		int STENCIL_BACK_VALUE_MASK;
		int STENCIL_BACK_WRITEMASK;
		int VIEWPORT;
		int SCISSOR_BOX;
		int COLOR_CLEAR_VALUE;
		int COLOR_WRITEMASK;
		int UNPACK_ALIGNMENT;
		int PACK_ALIGNMENT;
		int MAX_TEXTURE_SIZE;
		int MAX_VIEWPORT_DIMS;
		int SUBPIXEL_BITS;
		int RED_BITS;
		int GREEN_BITS;
		int BLUE_BITS;
		int ALPHA_BITS;
		int DEPTH_BITS;
		int STENCIL_BITS;
		int POLYGON_OFFSET_UNITS;
		int POLYGON_OFFSET_FACTOR;
		int TEXTURE_BINDING_2D;
		int SAMPLE_BUFFERS;
		int SAMPLES;
		int SAMPLE_COVERAGE_VALUE;
		int SAMPLE_COVERAGE_INVERT;
		int COMPRESSED_TEXTURE_FORMATS;
		int DONT_CARE;
		int FASTEST;
		int NICEST;
		int GENERATE_MIPMAP_HINT;
		int BYTE;
		int UNSIGNED_BYTE;
		int SHORT;
		int UNSIGNED_SHORT;
		int INT;
		int UNSIGNED_INT;
		int FLOAT;
		int DEPTH_COMPONENT;
		int ALPHA;
		int RGB;
		int RGBA;
		int BGR_EXT;
		int BGRA_EXT;
		int LUMINANCE;
		int LUMINANCE_ALPHA;
		int UNSIGNED_SHORT_4_4_4_4;
		int UNSIGNED_SHORT_5_5_5_1;
		int UNSIGNED_SHORT_5_6_5;
		int FRAGMENT_SHADER;
		int VERTEX_SHADER;
		int MAX_VERTEX_ATTRIBS;
		int MAX_VERTEX_UNIFORM_VECTORS;
		int MAX_VARYING_VECTORS;
		int MAX_COMBINED_TEXTURE_IMAGE_UNITS;
		int MAX_VERTEX_TEXTURE_IMAGE_UNITS;
		int MAX_TEXTURE_IMAGE_UNITS;
		int MAX_FRAGMENT_UNIFORM_VECTORS;
		int SHADER_TYPE;
		int DELETE_STATUS;
		int LINK_STATUS;
		int VALIDATE_STATUS;
		int ATTACHED_SHADERS;
		int ACTIVE_UNIFORMS;
		int ACTIVE_ATTRIBUTES;
		int SHADING_LANGUAGE_VERSION;
		int CURRENT_PROGRAM;
		int NEVER;
		int LESS;
		int EQUAL;
		int LEQUAL;
		int GREATER;
		int NOTEQUAL;
		int GEQUAL;
		int ALWAYS;
		int KEEP;
		int REPLACE;
		int INCR;
		int DECR;
		int INVERT;
		int INCR_WRAP;
		int DECR_WRAP;
		int VENDOR;
		int RENDERER;
		int VERSION;
		int NEAREST;
		int LINEAR;
		int NEAREST_MIPMAP_NEAREST;
		int LINEAR_MIPMAP_NEAREST;
		int NEAREST_MIPMAP_LINEAR;
		int LINEAR_MIPMAP_LINEAR;
		int TEXTURE_MAG_FILTER;
		int TEXTURE_MIN_FILTER;
		int TEXTURE_WRAP_S;
		int TEXTURE_WRAP_T;
		int TEXTURE_2D;
		int TEXTURE;
		int TEXTURE_CUBE_MAP;
		int TEXTURE_BINDING_CUBE_MAP;
		int TEXTURE_CUBE_MAP_POSITIVE_X;
		int TEXTURE_CUBE_MAP_NEGATIVE_X;
		int TEXTURE_CUBE_MAP_POSITIVE_Y;
		int TEXTURE_CUBE_MAP_NEGATIVE_Y;
		int TEXTURE_CUBE_MAP_POSITIVE_Z;
		int TEXTURE_CUBE_MAP_NEGATIVE_Z;
		int MAX_CUBE_MAP_TEXTURE_SIZE;
		int TEXTURE0;
		int TEXTURE1;
		int TEXTURE2;
		int TEXTURE3;
		int TEXTURE4;
		int TEXTURE5;
		int TEXTURE6;
		int TEXTURE7;
		int TEXTURE8;
		int TEXTURE9;
		int TEXTURE10;
		int TEXTURE11;
		int TEXTURE12;
		int TEXTURE13;
		int TEXTURE14;
		int TEXTURE15;
		int TEXTURE16;
		int TEXTURE17;
		int TEXTURE18;
		int TEXTURE19;
		int TEXTURE20;
		int TEXTURE21;
		int TEXTURE22;
		int TEXTURE23;
		int TEXTURE24;
		int TEXTURE25;
		int TEXTURE26;
		int TEXTURE27;
		int TEXTURE28;
		int TEXTURE29;
		int TEXTURE30;
		int TEXTURE31;
		int ACTIVE_TEXTURE;
		int REPEAT;
		int CLAMP_TO_EDGE;
		int MIRRORED_REPEAT;
		int FLOAT_VEC2;
		int FLOAT_VEC3;
		int FLOAT_VEC4;
		int INT_VEC2;
		int INT_VEC3;
		int INT_VEC4;
		int BOOL;
		int BOOL_VEC2;
		int BOOL_VEC3;
		int BOOL_VEC4;
		int FLOAT_MAT2;
		int FLOAT_MAT3;
		int FLOAT_MAT4;
		int SAMPLER_2D;
		int SAMPLER_CUBE;
		int VERTEX_ATTRIB_ARRAY_ENABLED;
		int VERTEX_ATTRIB_ARRAY_SIZE;
		int VERTEX_ATTRIB_ARRAY_STRIDE;
		int VERTEX_ATTRIB_ARRAY_TYPE;
		int VERTEX_ATTRIB_ARRAY_NORMALIZED;
		int VERTEX_ATTRIB_ARRAY_POINTER;
		int VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
		int VERTEX_PROGRAM_POINT_SIZE;
		int POINT_SPRITE;
		int COMPILE_STATUS;
		int LOW_FLOAT;
		int MEDIUM_FLOAT;
		int HIGH_FLOAT;
		int LOW_INT;
		int MEDIUM_INT;
		int HIGH_INT;
		int FRAMEBUFFER;
		int RENDERBUFFER;
		int RGBA4;
		int RGB5_A1;
		int RGB565;
		int DEPTH_COMPONENT16;
		int STENCIL_INDEX;
		int STENCIL_INDEX8;
		int DEPTH_STENCIL;
		int RENDERBUFFER_WIDTH;
		int RENDERBUFFER_HEIGHT;
		int RENDERBUFFER_INTERNAL_FORMAT;
		int RENDERBUFFER_RED_SIZE;
		int RENDERBUFFER_GREEN_SIZE;
		int RENDERBUFFER_BLUE_SIZE;
		int RENDERBUFFER_ALPHA_SIZE;
		int RENDERBUFFER_DEPTH_SIZE;
		int RENDERBUFFER_STENCIL_SIZE;
		int FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
		int FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
		int COLOR_ATTACHMENT0;
		int DEPTH_ATTACHMENT;
		int STENCIL_ATTACHMENT;
		int DEPTH_STENCIL_ATTACHMENT;
		int NONE;
		int FRAMEBUFFER_COMPLETE;
		int FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
		int FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
		int FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
		int FRAMEBUFFER_UNSUPPORTED;
		int FRAMEBUFFER_BINDING;
		int RENDERBUFFER_BINDING;
		int MAX_RENDERBUFFER_SIZE;
		int INVALID_FRAMEBUFFER_OPERATION;
		int UNPACK_FLIP_Y_WEBGL;
		int UNPACK_PREMULTIPLY_ALPHA_WEBGL;
		int CONTEXT_LOST_WEBGL;
		int UNPACK_COLORSPACE_CONVERSION_WEBGL;
		int BROWSER_DEFAULT_WEBGL;
		int version;
		virtual Void activeTexture( int texture);
		Dynamic activeTexture_dyn();

		virtual Void attachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader);
		Dynamic attachShader_dyn();

		virtual Void bindAttribLocation( ::lime::graphics::opengl::GLProgram program,int index,::String name);
		Dynamic bindAttribLocation_dyn();

		virtual Void bindBuffer( int target,::lime::graphics::opengl::GLBuffer buffer);
		Dynamic bindBuffer_dyn();

		virtual Void bindFramebuffer( int target,::lime::graphics::opengl::GLFramebuffer framebuffer);
		Dynamic bindFramebuffer_dyn();

		virtual Void bindRenderbuffer( int target,::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		Dynamic bindRenderbuffer_dyn();

		virtual Void bindTexture( int target,::lime::graphics::opengl::GLTexture texture);
		Dynamic bindTexture_dyn();

		virtual Void blendColor( Float red,Float green,Float blue,Float alpha);
		Dynamic blendColor_dyn();

		virtual Void blendEquation( int mode);
		Dynamic blendEquation_dyn();

		virtual Void blendEquationSeparate( int modeRGB,int modeAlpha);
		Dynamic blendEquationSeparate_dyn();

		virtual Void blendFunc( int sfactor,int dfactor);
		Dynamic blendFunc_dyn();

		virtual Void blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		Dynamic blendFuncSeparate_dyn();

		virtual Void bufferData( int target,::lime::utils::ArrayBufferView data,int usage);
		Dynamic bufferData_dyn();

		virtual Void bufferSubData( int target,int offset,::lime::utils::ArrayBufferView data);
		Dynamic bufferSubData_dyn();

		virtual int checkFramebufferStatus( int target);
		Dynamic checkFramebufferStatus_dyn();

		virtual Void clear( int mask);
		Dynamic clear_dyn();

		virtual Void clearColor( Float red,Float green,Float blue,Float alpha);
		Dynamic clearColor_dyn();

		virtual Void clearDepth( Float depth);
		Dynamic clearDepth_dyn();

		virtual Void clearStencil( int s);
		Dynamic clearStencil_dyn();

		virtual Void colorMask( bool red,bool green,bool blue,bool alpha);
		Dynamic colorMask_dyn();

		virtual Void compileShader( ::lime::graphics::opengl::GLShader shader);
		Dynamic compileShader_dyn();

		virtual Void compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::lime::utils::ArrayBufferView data);
		Dynamic compressedTexImage2D_dyn();

		virtual Void compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::lime::utils::ArrayBufferView data);
		Dynamic compressedTexSubImage2D_dyn();

		virtual Void copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border);
		Dynamic copyTexImage2D_dyn();

		virtual Void copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		Dynamic copyTexSubImage2D_dyn();

		virtual ::lime::graphics::opengl::GLBuffer createBuffer( );
		Dynamic createBuffer_dyn();

		virtual ::lime::graphics::opengl::GLFramebuffer createFramebuffer( );
		Dynamic createFramebuffer_dyn();

		virtual ::lime::graphics::opengl::GLProgram createProgram( );
		Dynamic createProgram_dyn();

		virtual ::lime::graphics::opengl::GLRenderbuffer createRenderbuffer( );
		Dynamic createRenderbuffer_dyn();

		virtual ::lime::graphics::opengl::GLShader createShader( int type);
		Dynamic createShader_dyn();

		virtual ::lime::graphics::opengl::GLTexture createTexture( );
		Dynamic createTexture_dyn();

		virtual Void cullFace( int mode);
		Dynamic cullFace_dyn();

		virtual Void deleteBuffer( ::lime::graphics::opengl::GLBuffer buffer);
		Dynamic deleteBuffer_dyn();

		virtual Void deleteFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer);
		Dynamic deleteFramebuffer_dyn();

		virtual Void deleteProgram( ::lime::graphics::opengl::GLProgram program);
		Dynamic deleteProgram_dyn();

		virtual Void deleteRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		Dynamic deleteRenderbuffer_dyn();

		virtual Void deleteShader( ::lime::graphics::opengl::GLShader shader);
		Dynamic deleteShader_dyn();

		virtual Void deleteTexture( ::lime::graphics::opengl::GLTexture texture);
		Dynamic deleteTexture_dyn();

		virtual Void depthFunc( int func);
		Dynamic depthFunc_dyn();

		virtual Void depthMask( bool flag);
		Dynamic depthMask_dyn();

		virtual Void depthRange( Float zNear,Float zFar);
		Dynamic depthRange_dyn();

		virtual Void detachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader);
		Dynamic detachShader_dyn();

		virtual Void disable( int cap);
		Dynamic disable_dyn();

		virtual Void disableVertexAttribArray( int index);
		Dynamic disableVertexAttribArray_dyn();

		virtual Void drawArrays( int mode,int first,int count);
		Dynamic drawArrays_dyn();

		virtual Void drawElements( int mode,int count,int type,int offset);
		Dynamic drawElements_dyn();

		virtual Void enable( int cap);
		Dynamic enable_dyn();

		virtual Void enableVertexAttribArray( int index);
		Dynamic enableVertexAttribArray_dyn();

		virtual Void finish( );
		Dynamic finish_dyn();

		virtual Void flush( );
		Dynamic flush_dyn();

		virtual Void framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		Dynamic framebufferRenderbuffer_dyn();

		virtual Void framebufferTexture2D( int target,int attachment,int textarget,::lime::graphics::opengl::GLTexture texture,int level);
		Dynamic framebufferTexture2D_dyn();

		virtual Void frontFace( int mode);
		Dynamic frontFace_dyn();

		virtual Void generateMipmap( int target);
		Dynamic generateMipmap_dyn();

		virtual Dynamic getActiveAttrib( ::lime::graphics::opengl::GLProgram program,int index);
		Dynamic getActiveAttrib_dyn();

		virtual Dynamic getActiveUniform( ::lime::graphics::opengl::GLProgram program,int index);
		Dynamic getActiveUniform_dyn();

		virtual Array< ::Dynamic > getAttachedShaders( ::lime::graphics::opengl::GLProgram program);
		Dynamic getAttachedShaders_dyn();

		virtual int getAttribLocation( ::lime::graphics::opengl::GLProgram program,::String name);
		Dynamic getAttribLocation_dyn();

		virtual int getBufferParameter( int target,int pname);
		Dynamic getBufferParameter_dyn();

		virtual Dynamic getContextAttributes( );
		Dynamic getContextAttributes_dyn();

		virtual int getError( );
		Dynamic getError_dyn();

		virtual Dynamic getExtension( ::String name);
		Dynamic getExtension_dyn();

		virtual int getFramebufferAttachmentParameter( int target,int attachment,int pname);
		Dynamic getFramebufferAttachmentParameter_dyn();

		virtual Dynamic getParameter( int pname);
		Dynamic getParameter_dyn();

		virtual ::String getProgramInfoLog( ::lime::graphics::opengl::GLProgram program);
		Dynamic getProgramInfoLog_dyn();

		virtual int getProgramParameter( ::lime::graphics::opengl::GLProgram program,int pname);
		Dynamic getProgramParameter_dyn();

		virtual int getRenderbufferParameter( int target,int pname);
		Dynamic getRenderbufferParameter_dyn();

		virtual ::String getShaderInfoLog( ::lime::graphics::opengl::GLShader shader);
		Dynamic getShaderInfoLog_dyn();

		virtual int getShaderParameter( ::lime::graphics::opengl::GLShader shader,int pname);
		Dynamic getShaderParameter_dyn();

		virtual Dynamic getShaderPrecisionFormat( int shadertype,int precisiontype);
		Dynamic getShaderPrecisionFormat_dyn();

		virtual ::String getShaderSource( ::lime::graphics::opengl::GLShader shader);
		Dynamic getShaderSource_dyn();

		virtual Array< ::String > getSupportedExtensions( );
		Dynamic getSupportedExtensions_dyn();

		virtual int getTexParameter( int target,int pname);
		Dynamic getTexParameter_dyn();

		virtual Dynamic getUniform( ::lime::graphics::opengl::GLProgram program,int location);
		Dynamic getUniform_dyn();

		virtual int getUniformLocation( ::lime::graphics::opengl::GLProgram program,::String name);
		Dynamic getUniformLocation_dyn();

		virtual int getVertexAttrib( int index,int pname);
		Dynamic getVertexAttrib_dyn();

		virtual int getVertexAttribOffset( int index,int pname);
		Dynamic getVertexAttribOffset_dyn();

		virtual Void hint( int target,int mode);
		Dynamic hint_dyn();

		virtual bool isBuffer( ::lime::graphics::opengl::GLBuffer buffer);
		Dynamic isBuffer_dyn();

		virtual bool isContextLost( );
		Dynamic isContextLost_dyn();

		virtual bool isEnabled( int cap);
		Dynamic isEnabled_dyn();

		virtual bool isFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer);
		Dynamic isFramebuffer_dyn();

		virtual bool isProgram( ::lime::graphics::opengl::GLProgram program);
		Dynamic isProgram_dyn();

		virtual bool isRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		Dynamic isRenderbuffer_dyn();

		virtual bool isShader( ::lime::graphics::opengl::GLShader shader);
		Dynamic isShader_dyn();

		virtual bool isTexture( ::lime::graphics::opengl::GLTexture texture);
		Dynamic isTexture_dyn();

		virtual Void lineWidth( Float width);
		Dynamic lineWidth_dyn();

		virtual Void linkProgram( ::lime::graphics::opengl::GLProgram program);
		Dynamic linkProgram_dyn();

		virtual Void pixelStorei( int pname,int param);
		Dynamic pixelStorei_dyn();

		virtual Void polygonOffset( Float factor,Float units);
		Dynamic polygonOffset_dyn();

		virtual Void readPixels( int x,int y,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels);
		Dynamic readPixels_dyn();

		virtual Void renderbufferStorage( int target,int internalformat,int width,int height);
		Dynamic renderbufferStorage_dyn();

		virtual Void sampleCoverage( Float value,bool invert);
		Dynamic sampleCoverage_dyn();

		virtual Void scissor( int x,int y,int width,int height);
		Dynamic scissor_dyn();

		virtual Void shaderSource( ::lime::graphics::opengl::GLShader shader,::String source);
		Dynamic shaderSource_dyn();

		virtual Void stencilFunc( int func,int ref,int mask);
		Dynamic stencilFunc_dyn();

		virtual Void stencilFuncSeparate( int face,int func,int ref,int mask);
		Dynamic stencilFuncSeparate_dyn();

		virtual Void stencilMask( int mask);
		Dynamic stencilMask_dyn();

		virtual Void stencilMaskSeparate( int face,int mask);
		Dynamic stencilMaskSeparate_dyn();

		virtual Void stencilOp( int fail,int zfail,int zpass);
		Dynamic stencilOp_dyn();

		virtual Void stencilOpSeparate( int face,int fail,int zfail,int zpass);
		Dynamic stencilOpSeparate_dyn();

		virtual Void texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::lime::utils::ArrayBufferView pixels);
		Dynamic texImage2D_dyn();

		virtual Void texParameterf( int target,int pname,Float param);
		Dynamic texParameterf_dyn();

		virtual Void texParameteri( int target,int pname,int param);
		Dynamic texParameteri_dyn();

		virtual Void texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels);
		Dynamic texSubImage2D_dyn();

		virtual Void uniform1f( int location,Float x);
		Dynamic uniform1f_dyn();

		virtual Void uniform1fv( int location,::lime::utils::ArrayBufferView x);
		Dynamic uniform1fv_dyn();

		virtual Void uniform1i( int location,int x);
		Dynamic uniform1i_dyn();

		virtual Void uniform1iv( int location,::lime::utils::ArrayBufferView v);
		Dynamic uniform1iv_dyn();

		virtual Void uniform2f( int location,Float x,Float y);
		Dynamic uniform2f_dyn();

		virtual Void uniform2fv( int location,::lime::utils::ArrayBufferView v);
		Dynamic uniform2fv_dyn();

		virtual Void uniform2i( int location,int x,int y);
		Dynamic uniform2i_dyn();

		virtual Void uniform2iv( int location,::lime::utils::ArrayBufferView v);
		Dynamic uniform2iv_dyn();

		virtual Void uniform3f( int location,Float x,Float y,Float z);
		Dynamic uniform3f_dyn();

		virtual Void uniform3fv( int location,::lime::utils::ArrayBufferView v);
		Dynamic uniform3fv_dyn();

		virtual Void uniform3i( int location,int x,int y,int z);
		Dynamic uniform3i_dyn();

		virtual Void uniform3iv( int location,::lime::utils::ArrayBufferView v);
		Dynamic uniform3iv_dyn();

		virtual Void uniform4f( int location,Float x,Float y,Float z,Float w);
		Dynamic uniform4f_dyn();

		virtual Void uniform4fv( int location,::lime::utils::ArrayBufferView v);
		Dynamic uniform4fv_dyn();

		virtual Void uniform4i( int location,int x,int y,int z,int w);
		Dynamic uniform4i_dyn();

		virtual Void uniform4iv( int location,::lime::utils::ArrayBufferView v);
		Dynamic uniform4iv_dyn();

		virtual Void uniformMatrix2fv( int location,bool transpose,::lime::utils::ArrayBufferView v);
		Dynamic uniformMatrix2fv_dyn();

		virtual Void uniformMatrix3fv( int location,bool transpose,::lime::utils::ArrayBufferView v);
		Dynamic uniformMatrix3fv_dyn();

		virtual Void uniformMatrix4fv( int location,bool transpose,::lime::utils::ArrayBufferView v);
		Dynamic uniformMatrix4fv_dyn();

		virtual Void useProgram( ::lime::graphics::opengl::GLProgram program);
		Dynamic useProgram_dyn();

		virtual Void validateProgram( ::lime::graphics::opengl::GLProgram program);
		Dynamic validateProgram_dyn();

		virtual Void vertexAttrib1f( int indx,Float x);
		Dynamic vertexAttrib1f_dyn();

		virtual Void vertexAttrib1fv( int indx,::lime::utils::ArrayBufferView values);
		Dynamic vertexAttrib1fv_dyn();

		virtual Void vertexAttrib2f( int indx,Float x,Float y);
		Dynamic vertexAttrib2f_dyn();

		virtual Void vertexAttrib2fv( int indx,::lime::utils::ArrayBufferView values);
		Dynamic vertexAttrib2fv_dyn();

		virtual Void vertexAttrib3f( int indx,Float x,Float y,Float z);
		Dynamic vertexAttrib3f_dyn();

		virtual Void vertexAttrib3fv( int indx,::lime::utils::ArrayBufferView values);
		Dynamic vertexAttrib3fv_dyn();

		virtual Void vertexAttrib4f( int indx,Float x,Float y,Float z,Float w);
		Dynamic vertexAttrib4f_dyn();

		virtual Void vertexAttrib4fv( int indx,::lime::utils::ArrayBufferView values);
		Dynamic vertexAttrib4fv_dyn();

		virtual Void vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset);
		Dynamic vertexAttribPointer_dyn();

		virtual Void viewport( int x,int y,int width,int height);
		Dynamic viewport_dyn();

		virtual int get_version( );
		Dynamic get_version_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_GLRenderContext */ 

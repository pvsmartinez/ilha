#ifndef INCLUDED_lime_graphics_opengl_GL
#define INCLUDED_lime_graphics_opengl_GL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GL)
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
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GL_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GL_obj OBJ_;
		GL_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.GL")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GL_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GL","\x25","\x3e","\x00","\x00"); }

		static void __boot();
		static int DEPTH_BUFFER_BIT;
		static int STENCIL_BUFFER_BIT;
		static int COLOR_BUFFER_BIT;
		static int POINTS;
		static int LINES;
		static int LINE_LOOP;
		static int LINE_STRIP;
		static int TRIANGLES;
		static int TRIANGLE_STRIP;
		static int TRIANGLE_FAN;
		static int ZERO;
		static int ONE;
		static int SRC_COLOR;
		static int ONE_MINUS_SRC_COLOR;
		static int SRC_ALPHA;
		static int ONE_MINUS_SRC_ALPHA;
		static int DST_ALPHA;
		static int ONE_MINUS_DST_ALPHA;
		static int DST_COLOR;
		static int ONE_MINUS_DST_COLOR;
		static int SRC_ALPHA_SATURATE;
		static int FUNC_ADD;
		static int BLEND_EQUATION;
		static int BLEND_EQUATION_RGB;
		static int BLEND_EQUATION_ALPHA;
		static int FUNC_SUBTRACT;
		static int FUNC_REVERSE_SUBTRACT;
		static int BLEND_DST_RGB;
		static int BLEND_SRC_RGB;
		static int BLEND_DST_ALPHA;
		static int BLEND_SRC_ALPHA;
		static int CONSTANT_COLOR;
		static int ONE_MINUS_CONSTANT_COLOR;
		static int CONSTANT_ALPHA;
		static int ONE_MINUS_CONSTANT_ALPHA;
		static int BLEND_COLOR;
		static int ARRAY_BUFFER;
		static int ELEMENT_ARRAY_BUFFER;
		static int ARRAY_BUFFER_BINDING;
		static int ELEMENT_ARRAY_BUFFER_BINDING;
		static int STREAM_DRAW;
		static int STATIC_DRAW;
		static int DYNAMIC_DRAW;
		static int BUFFER_SIZE;
		static int BUFFER_USAGE;
		static int CURRENT_VERTEX_ATTRIB;
		static int FRONT;
		static int BACK;
		static int FRONT_AND_BACK;
		static int CULL_FACE;
		static int BLEND;
		static int DITHER;
		static int STENCIL_TEST;
		static int DEPTH_TEST;
		static int SCISSOR_TEST;
		static int POLYGON_OFFSET_FILL;
		static int SAMPLE_ALPHA_TO_COVERAGE;
		static int SAMPLE_COVERAGE;
		static int NO_ERROR;
		static int INVALID_ENUM;
		static int INVALID_VALUE;
		static int INVALID_OPERATION;
		static int OUT_OF_MEMORY;
		static int CW;
		static int CCW;
		static int LINE_WIDTH;
		static int ALIASED_POINT_SIZE_RANGE;
		static int ALIASED_LINE_WIDTH_RANGE;
		static int CULL_FACE_MODE;
		static int FRONT_FACE;
		static int DEPTH_RANGE;
		static int DEPTH_WRITEMASK;
		static int DEPTH_CLEAR_VALUE;
		static int DEPTH_FUNC;
		static int STENCIL_CLEAR_VALUE;
		static int STENCIL_FUNC;
		static int STENCIL_FAIL;
		static int STENCIL_PASS_DEPTH_FAIL;
		static int STENCIL_PASS_DEPTH_PASS;
		static int STENCIL_REF;
		static int STENCIL_VALUE_MASK;
		static int STENCIL_WRITEMASK;
		static int STENCIL_BACK_FUNC;
		static int STENCIL_BACK_FAIL;
		static int STENCIL_BACK_PASS_DEPTH_FAIL;
		static int STENCIL_BACK_PASS_DEPTH_PASS;
		static int STENCIL_BACK_REF;
		static int STENCIL_BACK_VALUE_MASK;
		static int STENCIL_BACK_WRITEMASK;
		static int VIEWPORT;
		static int SCISSOR_BOX;
		static int COLOR_CLEAR_VALUE;
		static int COLOR_WRITEMASK;
		static int UNPACK_ALIGNMENT;
		static int PACK_ALIGNMENT;
		static int MAX_TEXTURE_SIZE;
		static int MAX_VIEWPORT_DIMS;
		static int SUBPIXEL_BITS;
		static int RED_BITS;
		static int GREEN_BITS;
		static int BLUE_BITS;
		static int ALPHA_BITS;
		static int DEPTH_BITS;
		static int STENCIL_BITS;
		static int POLYGON_OFFSET_UNITS;
		static int POLYGON_OFFSET_FACTOR;
		static int TEXTURE_BINDING_2D;
		static int SAMPLE_BUFFERS;
		static int SAMPLES;
		static int SAMPLE_COVERAGE_VALUE;
		static int SAMPLE_COVERAGE_INVERT;
		static int COMPRESSED_TEXTURE_FORMATS;
		static int DONT_CARE;
		static int FASTEST;
		static int NICEST;
		static int GENERATE_MIPMAP_HINT;
		static int BYTE;
		static int UNSIGNED_BYTE;
		static int SHORT;
		static int UNSIGNED_SHORT;
		static int INT;
		static int UNSIGNED_INT;
		static int FLOAT;
		static int DEPTH_COMPONENT;
		static int ALPHA;
		static int RGB;
		static int RGBA;
		static int BGR_EXT;
		static int BGRA_EXT;
		static int LUMINANCE;
		static int LUMINANCE_ALPHA;
		static int UNSIGNED_SHORT_4_4_4_4;
		static int UNSIGNED_SHORT_5_5_5_1;
		static int UNSIGNED_SHORT_5_6_5;
		static int FRAGMENT_SHADER;
		static int VERTEX_SHADER;
		static int MAX_VERTEX_ATTRIBS;
		static int MAX_VERTEX_UNIFORM_VECTORS;
		static int MAX_VARYING_VECTORS;
		static int MAX_COMBINED_TEXTURE_IMAGE_UNITS;
		static int MAX_VERTEX_TEXTURE_IMAGE_UNITS;
		static int MAX_TEXTURE_IMAGE_UNITS;
		static int MAX_FRAGMENT_UNIFORM_VECTORS;
		static int SHADER_TYPE;
		static int DELETE_STATUS;
		static int LINK_STATUS;
		static int VALIDATE_STATUS;
		static int ATTACHED_SHADERS;
		static int ACTIVE_UNIFORMS;
		static int ACTIVE_ATTRIBUTES;
		static int SHADING_LANGUAGE_VERSION;
		static int CURRENT_PROGRAM;
		static int NEVER;
		static int LESS;
		static int EQUAL;
		static int LEQUAL;
		static int GREATER;
		static int NOTEQUAL;
		static int GEQUAL;
		static int ALWAYS;
		static int KEEP;
		static int REPLACE;
		static int INCR;
		static int DECR;
		static int INVERT;
		static int INCR_WRAP;
		static int DECR_WRAP;
		static int VENDOR;
		static int RENDERER;
		static int VERSION;
		static int NEAREST;
		static int LINEAR;
		static int NEAREST_MIPMAP_NEAREST;
		static int LINEAR_MIPMAP_NEAREST;
		static int NEAREST_MIPMAP_LINEAR;
		static int LINEAR_MIPMAP_LINEAR;
		static int TEXTURE_MAG_FILTER;
		static int TEXTURE_MIN_FILTER;
		static int TEXTURE_WRAP_S;
		static int TEXTURE_WRAP_T;
		static int TEXTURE_2D;
		static int TEXTURE;
		static int TEXTURE_CUBE_MAP;
		static int TEXTURE_BINDING_CUBE_MAP;
		static int TEXTURE_CUBE_MAP_POSITIVE_X;
		static int TEXTURE_CUBE_MAP_NEGATIVE_X;
		static int TEXTURE_CUBE_MAP_POSITIVE_Y;
		static int TEXTURE_CUBE_MAP_NEGATIVE_Y;
		static int TEXTURE_CUBE_MAP_POSITIVE_Z;
		static int TEXTURE_CUBE_MAP_NEGATIVE_Z;
		static int MAX_CUBE_MAP_TEXTURE_SIZE;
		static int TEXTURE0;
		static int TEXTURE1;
		static int TEXTURE2;
		static int TEXTURE3;
		static int TEXTURE4;
		static int TEXTURE5;
		static int TEXTURE6;
		static int TEXTURE7;
		static int TEXTURE8;
		static int TEXTURE9;
		static int TEXTURE10;
		static int TEXTURE11;
		static int TEXTURE12;
		static int TEXTURE13;
		static int TEXTURE14;
		static int TEXTURE15;
		static int TEXTURE16;
		static int TEXTURE17;
		static int TEXTURE18;
		static int TEXTURE19;
		static int TEXTURE20;
		static int TEXTURE21;
		static int TEXTURE22;
		static int TEXTURE23;
		static int TEXTURE24;
		static int TEXTURE25;
		static int TEXTURE26;
		static int TEXTURE27;
		static int TEXTURE28;
		static int TEXTURE29;
		static int TEXTURE30;
		static int TEXTURE31;
		static int ACTIVE_TEXTURE;
		static int REPEAT;
		static int CLAMP_TO_EDGE;
		static int MIRRORED_REPEAT;
		static int FLOAT_VEC2;
		static int FLOAT_VEC3;
		static int FLOAT_VEC4;
		static int INT_VEC2;
		static int INT_VEC3;
		static int INT_VEC4;
		static int BOOL;
		static int BOOL_VEC2;
		static int BOOL_VEC3;
		static int BOOL_VEC4;
		static int FLOAT_MAT2;
		static int FLOAT_MAT3;
		static int FLOAT_MAT4;
		static int SAMPLER_2D;
		static int SAMPLER_CUBE;
		static int VERTEX_ATTRIB_ARRAY_ENABLED;
		static int VERTEX_ATTRIB_ARRAY_SIZE;
		static int VERTEX_ATTRIB_ARRAY_STRIDE;
		static int VERTEX_ATTRIB_ARRAY_TYPE;
		static int VERTEX_ATTRIB_ARRAY_NORMALIZED;
		static int VERTEX_ATTRIB_ARRAY_POINTER;
		static int VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
		static int VERTEX_PROGRAM_POINT_SIZE;
		static int POINT_SPRITE;
		static int COMPILE_STATUS;
		static int LOW_FLOAT;
		static int MEDIUM_FLOAT;
		static int HIGH_FLOAT;
		static int LOW_INT;
		static int MEDIUM_INT;
		static int HIGH_INT;
		static int FRAMEBUFFER;
		static int RENDERBUFFER;
		static int RGBA4;
		static int RGB5_A1;
		static int RGB565;
		static int DEPTH_COMPONENT16;
		static int STENCIL_INDEX;
		static int STENCIL_INDEX8;
		static int DEPTH_STENCIL;
		static int RENDERBUFFER_WIDTH;
		static int RENDERBUFFER_HEIGHT;
		static int RENDERBUFFER_INTERNAL_FORMAT;
		static int RENDERBUFFER_RED_SIZE;
		static int RENDERBUFFER_GREEN_SIZE;
		static int RENDERBUFFER_BLUE_SIZE;
		static int RENDERBUFFER_ALPHA_SIZE;
		static int RENDERBUFFER_DEPTH_SIZE;
		static int RENDERBUFFER_STENCIL_SIZE;
		static int FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
		static int FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
		static int FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
		static int FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
		static int COLOR_ATTACHMENT0;
		static int DEPTH_ATTACHMENT;
		static int STENCIL_ATTACHMENT;
		static int DEPTH_STENCIL_ATTACHMENT;
		static int NONE;
		static int FRAMEBUFFER_COMPLETE;
		static int FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
		static int FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
		static int FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
		static int FRAMEBUFFER_UNSUPPORTED;
		static int FRAMEBUFFER_BINDING;
		static int RENDERBUFFER_BINDING;
		static int MAX_RENDERBUFFER_SIZE;
		static int INVALID_FRAMEBUFFER_OPERATION;
		static int UNPACK_FLIP_Y_WEBGL;
		static int UNPACK_PREMULTIPLY_ALPHA_WEBGL;
		static int CONTEXT_LOST_WEBGL;
		static int UNPACK_COLORSPACE_CONVERSION_WEBGL;
		static int BROWSER_DEFAULT_WEBGL;
		static int version;
		static Void activeTexture( int texture);
		static Dynamic activeTexture_dyn();

		static Void attachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader);
		static Dynamic attachShader_dyn();

		static Void bindAttribLocation( ::lime::graphics::opengl::GLProgram program,int index,::String name);
		static Dynamic bindAttribLocation_dyn();

		static Void bindBuffer( int target,::lime::graphics::opengl::GLBuffer buffer);
		static Dynamic bindBuffer_dyn();

		static Void bindFramebuffer( int target,::lime::graphics::opengl::GLFramebuffer framebuffer);
		static Dynamic bindFramebuffer_dyn();

		static Void bindRenderbuffer( int target,::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		static Dynamic bindRenderbuffer_dyn();

		static Void bindTexture( int target,::lime::graphics::opengl::GLTexture texture);
		static Dynamic bindTexture_dyn();

		static Void blendColor( Float red,Float green,Float blue,Float alpha);
		static Dynamic blendColor_dyn();

		static Void blendEquation( int mode);
		static Dynamic blendEquation_dyn();

		static Void blendEquationSeparate( int modeRGB,int modeAlpha);
		static Dynamic blendEquationSeparate_dyn();

		static Void blendFunc( int sfactor,int dfactor);
		static Dynamic blendFunc_dyn();

		static Void blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		static Dynamic blendFuncSeparate_dyn();

		static Void bufferData( int target,::lime::utils::ArrayBufferView data,int usage);
		static Dynamic bufferData_dyn();

		static Void bufferSubData( int target,int offset,::lime::utils::ArrayBufferView data);
		static Dynamic bufferSubData_dyn();

		static int checkFramebufferStatus( int target);
		static Dynamic checkFramebufferStatus_dyn();

		static Void clear( int mask);
		static Dynamic clear_dyn();

		static Void clearColor( Float red,Float green,Float blue,Float alpha);
		static Dynamic clearColor_dyn();

		static Void clearDepth( Float depth);
		static Dynamic clearDepth_dyn();

		static Void clearStencil( int s);
		static Dynamic clearStencil_dyn();

		static Void colorMask( bool red,bool green,bool blue,bool alpha);
		static Dynamic colorMask_dyn();

		static Void compileShader( ::lime::graphics::opengl::GLShader shader);
		static Dynamic compileShader_dyn();

		static Void compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::lime::utils::ArrayBufferView data);
		static Dynamic compressedTexImage2D_dyn();

		static Void compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::lime::utils::ArrayBufferView data);
		static Dynamic compressedTexSubImage2D_dyn();

		static Void copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border);
		static Dynamic copyTexImage2D_dyn();

		static Void copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		static Dynamic copyTexSubImage2D_dyn();

		static ::lime::graphics::opengl::GLBuffer createBuffer( );
		static Dynamic createBuffer_dyn();

		static ::lime::graphics::opengl::GLFramebuffer createFramebuffer( );
		static Dynamic createFramebuffer_dyn();

		static ::lime::graphics::opengl::GLProgram createProgram( );
		static Dynamic createProgram_dyn();

		static ::lime::graphics::opengl::GLRenderbuffer createRenderbuffer( );
		static Dynamic createRenderbuffer_dyn();

		static ::lime::graphics::opengl::GLShader createShader( int type);
		static Dynamic createShader_dyn();

		static ::lime::graphics::opengl::GLTexture createTexture( );
		static Dynamic createTexture_dyn();

		static Void cullFace( int mode);
		static Dynamic cullFace_dyn();

		static Void deleteBuffer( ::lime::graphics::opengl::GLBuffer buffer);
		static Dynamic deleteBuffer_dyn();

		static Void deleteFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer);
		static Dynamic deleteFramebuffer_dyn();

		static Void deleteProgram( ::lime::graphics::opengl::GLProgram program);
		static Dynamic deleteProgram_dyn();

		static Void deleteRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		static Dynamic deleteRenderbuffer_dyn();

		static Void deleteShader( ::lime::graphics::opengl::GLShader shader);
		static Dynamic deleteShader_dyn();

		static Void deleteTexture( ::lime::graphics::opengl::GLTexture texture);
		static Dynamic deleteTexture_dyn();

		static Void depthFunc( int func);
		static Dynamic depthFunc_dyn();

		static Void depthMask( bool flag);
		static Dynamic depthMask_dyn();

		static Void depthRange( Float zNear,Float zFar);
		static Dynamic depthRange_dyn();

		static Void detachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader);
		static Dynamic detachShader_dyn();

		static Void disable( int cap);
		static Dynamic disable_dyn();

		static Void disableVertexAttribArray( int index);
		static Dynamic disableVertexAttribArray_dyn();

		static Void drawArrays( int mode,int first,int count);
		static Dynamic drawArrays_dyn();

		static Void drawElements( int mode,int count,int type,int offset);
		static Dynamic drawElements_dyn();

		static Void enable( int cap);
		static Dynamic enable_dyn();

		static Void enableVertexAttribArray( int index);
		static Dynamic enableVertexAttribArray_dyn();

		static Void finish( );
		static Dynamic finish_dyn();

		static Void flush( );
		static Dynamic flush_dyn();

		static Void framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		static Dynamic framebufferRenderbuffer_dyn();

		static Void framebufferTexture2D( int target,int attachment,int textarget,::lime::graphics::opengl::GLTexture texture,int level);
		static Dynamic framebufferTexture2D_dyn();

		static Void frontFace( int mode);
		static Dynamic frontFace_dyn();

		static Void generateMipmap( int target);
		static Dynamic generateMipmap_dyn();

		static Dynamic getActiveAttrib( ::lime::graphics::opengl::GLProgram program,int index);
		static Dynamic getActiveAttrib_dyn();

		static Dynamic getActiveUniform( ::lime::graphics::opengl::GLProgram program,int index);
		static Dynamic getActiveUniform_dyn();

		static Array< ::Dynamic > getAttachedShaders( ::lime::graphics::opengl::GLProgram program);
		static Dynamic getAttachedShaders_dyn();

		static int getAttribLocation( ::lime::graphics::opengl::GLProgram program,::String name);
		static Dynamic getAttribLocation_dyn();

		static int getBufferParameter( int target,int pname);
		static Dynamic getBufferParameter_dyn();

		static Dynamic getContextAttributes( );
		static Dynamic getContextAttributes_dyn();

		static int getError( );
		static Dynamic getError_dyn();

		static Dynamic getExtension( ::String name);
		static Dynamic getExtension_dyn();

		static int getFramebufferAttachmentParameter( int target,int attachment,int pname);
		static Dynamic getFramebufferAttachmentParameter_dyn();

		static Dynamic getParameter( int pname);
		static Dynamic getParameter_dyn();

		static ::String getProgramInfoLog( ::lime::graphics::opengl::GLProgram program);
		static Dynamic getProgramInfoLog_dyn();

		static int getProgramParameter( ::lime::graphics::opengl::GLProgram program,int pname);
		static Dynamic getProgramParameter_dyn();

		static int getRenderbufferParameter( int target,int pname);
		static Dynamic getRenderbufferParameter_dyn();

		static ::String getShaderInfoLog( ::lime::graphics::opengl::GLShader shader);
		static Dynamic getShaderInfoLog_dyn();

		static int getShaderParameter( ::lime::graphics::opengl::GLShader shader,int pname);
		static Dynamic getShaderParameter_dyn();

		static Dynamic getShaderPrecisionFormat( int shadertype,int precisiontype);
		static Dynamic getShaderPrecisionFormat_dyn();

		static ::String getShaderSource( ::lime::graphics::opengl::GLShader shader);
		static Dynamic getShaderSource_dyn();

		static Array< ::String > getSupportedExtensions( );
		static Dynamic getSupportedExtensions_dyn();

		static int getTexParameter( int target,int pname);
		static Dynamic getTexParameter_dyn();

		static Dynamic getUniform( ::lime::graphics::opengl::GLProgram program,int location);
		static Dynamic getUniform_dyn();

		static int getUniformLocation( ::lime::graphics::opengl::GLProgram program,::String name);
		static Dynamic getUniformLocation_dyn();

		static int getVertexAttrib( int index,int pname);
		static Dynamic getVertexAttrib_dyn();

		static int getVertexAttribOffset( int index,int pname);
		static Dynamic getVertexAttribOffset_dyn();

		static Void hint( int target,int mode);
		static Dynamic hint_dyn();

		static bool isBuffer( ::lime::graphics::opengl::GLBuffer buffer);
		static Dynamic isBuffer_dyn();

		static bool isContextLost( );
		static Dynamic isContextLost_dyn();

		static bool isEnabled( int cap);
		static Dynamic isEnabled_dyn();

		static bool isFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer);
		static Dynamic isFramebuffer_dyn();

		static bool isProgram( ::lime::graphics::opengl::GLProgram program);
		static Dynamic isProgram_dyn();

		static bool isRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer);
		static Dynamic isRenderbuffer_dyn();

		static bool isShader( ::lime::graphics::opengl::GLShader shader);
		static Dynamic isShader_dyn();

		static bool isTexture( ::lime::graphics::opengl::GLTexture texture);
		static Dynamic isTexture_dyn();

		static Void lineWidth( Float width);
		static Dynamic lineWidth_dyn();

		static Void linkProgram( ::lime::graphics::opengl::GLProgram program);
		static Dynamic linkProgram_dyn();

		static Void pixelStorei( int pname,int param);
		static Dynamic pixelStorei_dyn();

		static Void polygonOffset( Float factor,Float units);
		static Dynamic polygonOffset_dyn();

		static Void readPixels( int x,int y,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels);
		static Dynamic readPixels_dyn();

		static Void renderbufferStorage( int target,int internalformat,int width,int height);
		static Dynamic renderbufferStorage_dyn();

		static Void sampleCoverage( Float value,bool invert);
		static Dynamic sampleCoverage_dyn();

		static Void scissor( int x,int y,int width,int height);
		static Dynamic scissor_dyn();

		static Void shaderSource( ::lime::graphics::opengl::GLShader shader,::String source);
		static Dynamic shaderSource_dyn();

		static Void stencilFunc( int func,int ref,int mask);
		static Dynamic stencilFunc_dyn();

		static Void stencilFuncSeparate( int face,int func,int ref,int mask);
		static Dynamic stencilFuncSeparate_dyn();

		static Void stencilMask( int mask);
		static Dynamic stencilMask_dyn();

		static Void stencilMaskSeparate( int face,int mask);
		static Dynamic stencilMaskSeparate_dyn();

		static Void stencilOp( int fail,int zfail,int zpass);
		static Dynamic stencilOp_dyn();

		static Void stencilOpSeparate( int face,int fail,int zfail,int zpass);
		static Dynamic stencilOpSeparate_dyn();

		static Void texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::lime::utils::ArrayBufferView pixels);
		static Dynamic texImage2D_dyn();

		static Void texParameterf( int target,int pname,Float param);
		static Dynamic texParameterf_dyn();

		static Void texParameteri( int target,int pname,int param);
		static Dynamic texParameteri_dyn();

		static Void texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels);
		static Dynamic texSubImage2D_dyn();

		static Void uniform1f( int location,Float x);
		static Dynamic uniform1f_dyn();

		static Void uniform1fv( int location,::lime::utils::ArrayBufferView x);
		static Dynamic uniform1fv_dyn();

		static Void uniform1i( int location,int x);
		static Dynamic uniform1i_dyn();

		static Void uniform1iv( int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform1iv_dyn();

		static Void uniform2f( int location,Float x,Float y);
		static Dynamic uniform2f_dyn();

		static Void uniform2fv( int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform2fv_dyn();

		static Void uniform2i( int location,int x,int y);
		static Dynamic uniform2i_dyn();

		static Void uniform2iv( int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform2iv_dyn();

		static Void uniform3f( int location,Float x,Float y,Float z);
		static Dynamic uniform3f_dyn();

		static Void uniform3fv( int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform3fv_dyn();

		static Void uniform3i( int location,int x,int y,int z);
		static Dynamic uniform3i_dyn();

		static Void uniform3iv( int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform3iv_dyn();

		static Void uniform4f( int location,Float x,Float y,Float z,Float w);
		static Dynamic uniform4f_dyn();

		static Void uniform4fv( int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform4fv_dyn();

		static Void uniform4i( int location,int x,int y,int z,int w);
		static Dynamic uniform4i_dyn();

		static Void uniform4iv( int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform4iv_dyn();

		static Void uniformMatrix2fv( int location,bool transpose,::lime::utils::ArrayBufferView v);
		static Dynamic uniformMatrix2fv_dyn();

		static Void uniformMatrix3fv( int location,bool transpose,::lime::utils::ArrayBufferView v);
		static Dynamic uniformMatrix3fv_dyn();

		static Void uniformMatrix4fv( int location,bool transpose,::lime::utils::ArrayBufferView v);
		static Dynamic uniformMatrix4fv_dyn();

		static Void useProgram( ::lime::graphics::opengl::GLProgram program);
		static Dynamic useProgram_dyn();

		static Void validateProgram( ::lime::graphics::opengl::GLProgram program);
		static Dynamic validateProgram_dyn();

		static Void vertexAttrib1f( int indx,Float x);
		static Dynamic vertexAttrib1f_dyn();

		static Void vertexAttrib1fv( int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttrib1fv_dyn();

		static Void vertexAttrib2f( int indx,Float x,Float y);
		static Dynamic vertexAttrib2f_dyn();

		static Void vertexAttrib2fv( int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttrib2fv_dyn();

		static Void vertexAttrib3f( int indx,Float x,Float y,Float z);
		static Dynamic vertexAttrib3f_dyn();

		static Void vertexAttrib3fv( int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttrib3fv_dyn();

		static Void vertexAttrib4f( int indx,Float x,Float y,Float z,Float w);
		static Dynamic vertexAttrib4f_dyn();

		static Void vertexAttrib4fv( int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttrib4fv_dyn();

		static Void vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset);
		static Dynamic vertexAttribPointer_dyn();

		static Void viewport( int x,int y,int width,int height);
		static Dynamic viewport_dyn();

		static int get_version( );
		static Dynamic get_version_dyn();

		static Void lime_gl_active_texture( int texture);
		static Dynamic lime_gl_active_texture_dyn();

		static Void lime_gl_attach_shader( int program,int shader);
		static Dynamic lime_gl_attach_shader_dyn();

		static Void lime_gl_bind_attrib_location( int program,int index,::String name);
		static Dynamic lime_gl_bind_attrib_location_dyn();

		static Void lime_gl_bind_buffer( int target,int buffer);
		static Dynamic lime_gl_bind_buffer_dyn();

		static Void lime_gl_bind_framebuffer( int target,int framebuffer);
		static Dynamic lime_gl_bind_framebuffer_dyn();

		static Void lime_gl_bind_renderbuffer( int target,int renderbuffer);
		static Dynamic lime_gl_bind_renderbuffer_dyn();

		static Void lime_gl_bind_texture( int target,int texture);
		static Dynamic lime_gl_bind_texture_dyn();

		static Void lime_gl_blend_color( ::cpp::Float32 red,::cpp::Float32 green,::cpp::Float32 blue,::cpp::Float32 alpha);
		static Dynamic lime_gl_blend_color_dyn();

		static Void lime_gl_blend_equation( int mode);
		static Dynamic lime_gl_blend_equation_dyn();

		static Void lime_gl_blend_equation_separate( int modeRGB,int modeAlpha);
		static Dynamic lime_gl_blend_equation_separate_dyn();

		static Void lime_gl_blend_func( int sfactor,int dfactor);
		static Dynamic lime_gl_blend_func_dyn();

		static Void lime_gl_blend_func_separate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		static Dynamic lime_gl_blend_func_separate_dyn();

		static Void lime_gl_buffer_data( int target,Dynamic buffer,int byteOffset,int size,int usage);
		static Dynamic lime_gl_buffer_data_dyn();

		static Void lime_gl_buffer_sub_data( int target,int offset,Dynamic buffer,int byteOffset,int size);
		static Dynamic lime_gl_buffer_sub_data_dyn();

		static int lime_gl_check_framebuffer_status( int target);
		static Dynamic lime_gl_check_framebuffer_status_dyn();

		static Void lime_gl_clear( int mask);
		static Dynamic lime_gl_clear_dyn();

		static Void lime_gl_clear_color( ::cpp::Float32 red,::cpp::Float32 green,::cpp::Float32 blue,::cpp::Float32 alpha);
		static Dynamic lime_gl_clear_color_dyn();

		static Void lime_gl_clear_depth( ::cpp::Float32 depth);
		static Dynamic lime_gl_clear_depth_dyn();

		static Void lime_gl_clear_stencil( int s);
		static Dynamic lime_gl_clear_stencil_dyn();

		static Void lime_gl_color_mask( bool red,bool green,bool blue,bool alpha);
		static Dynamic lime_gl_color_mask_dyn();

		static Void lime_gl_compile_shader( int shader);
		static Dynamic lime_gl_compile_shader_dyn();

		static Void lime_gl_compressed_tex_image_2d( int target,int level,int internalformat,int width,int height,int border,Dynamic buffer,int byteOffset);
		static Dynamic lime_gl_compressed_tex_image_2d_dyn();

		static Void lime_gl_compressed_tex_sub_image_2d( int target,int level,int xoffset,int yoffset,int width,int height,int format,Dynamic buffer,int byteOffset);
		static Dynamic lime_gl_compressed_tex_sub_image_2d_dyn();

		static Void lime_gl_copy_tex_image_2d( int target,int level,int internalformat,int x,int y,int width,int height,int border);
		static Dynamic lime_gl_copy_tex_image_2d_dyn();

		static Void lime_gl_copy_tex_sub_image_2d( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		static Dynamic lime_gl_copy_tex_sub_image_2d_dyn();

		static int lime_gl_create_buffer( );
		static Dynamic lime_gl_create_buffer_dyn();

		static int lime_gl_create_framebuffer( );
		static Dynamic lime_gl_create_framebuffer_dyn();

		static int lime_gl_create_program( );
		static Dynamic lime_gl_create_program_dyn();

		static int lime_gl_create_render_buffer( );
		static Dynamic lime_gl_create_render_buffer_dyn();

		static int lime_gl_create_shader( int type);
		static Dynamic lime_gl_create_shader_dyn();

		static int lime_gl_create_texture( );
		static Dynamic lime_gl_create_texture_dyn();

		static Void lime_gl_cull_face( int mode);
		static Dynamic lime_gl_cull_face_dyn();

		static Void lime_gl_delete_buffer( int buffer);
		static Dynamic lime_gl_delete_buffer_dyn();

		static Void lime_gl_delete_framebuffer( int framebuffer);
		static Dynamic lime_gl_delete_framebuffer_dyn();

		static Void lime_gl_delete_program( int program);
		static Dynamic lime_gl_delete_program_dyn();

		static Void lime_gl_delete_render_buffer( int renderbuffer);
		static Dynamic lime_gl_delete_render_buffer_dyn();

		static Void lime_gl_delete_shader( int shader);
		static Dynamic lime_gl_delete_shader_dyn();

		static Void lime_gl_delete_texture( int texture);
		static Dynamic lime_gl_delete_texture_dyn();

		static Void lime_gl_depth_func( int func);
		static Dynamic lime_gl_depth_func_dyn();

		static Void lime_gl_depth_mask( bool flag);
		static Dynamic lime_gl_depth_mask_dyn();

		static Void lime_gl_depth_range( ::cpp::Float32 zNear,::cpp::Float32 zFar);
		static Dynamic lime_gl_depth_range_dyn();

		static Void lime_gl_detach_shader( int program,int shader);
		static Dynamic lime_gl_detach_shader_dyn();

		static Void lime_gl_disable( int cap);
		static Dynamic lime_gl_disable_dyn();

		static Void lime_gl_disable_vertex_attrib_array( int index);
		static Dynamic lime_gl_disable_vertex_attrib_array_dyn();

		static Void lime_gl_draw_arrays( int mode,int first,int count);
		static Dynamic lime_gl_draw_arrays_dyn();

		static Void lime_gl_draw_elements( int mode,int count,int type,int offset);
		static Dynamic lime_gl_draw_elements_dyn();

		static Void lime_gl_enable( int cap);
		static Dynamic lime_gl_enable_dyn();

		static Void lime_gl_enable_vertex_attrib_array( int index);
		static Dynamic lime_gl_enable_vertex_attrib_array_dyn();

		static Void lime_gl_finish( );
		static Dynamic lime_gl_finish_dyn();

		static Void lime_gl_flush( );
		static Dynamic lime_gl_flush_dyn();

		static Void lime_gl_framebuffer_renderbuffer( int target,int attachment,int renderbuffertarget,int renderbuffer);
		static Dynamic lime_gl_framebuffer_renderbuffer_dyn();

		static Void lime_gl_framebuffer_texture2D( int target,int attachment,int textarget,int texture,int level);
		static Dynamic lime_gl_framebuffer_texture2D_dyn();

		static Void lime_gl_front_face( int mode);
		static Dynamic lime_gl_front_face_dyn();

		static Void lime_gl_generate_mipmap( int target);
		static Dynamic lime_gl_generate_mipmap_dyn();

		static Dynamic lime_gl_get_active_attrib( int program,int index);
		static Dynamic lime_gl_get_active_attrib_dyn();

		static Dynamic lime_gl_get_active_uniform( int program,int index);
		static Dynamic lime_gl_get_active_uniform_dyn();

		static int lime_gl_get_attrib_location( int program,::String name);
		static Dynamic lime_gl_get_attrib_location_dyn();

		static int lime_gl_get_buffer_parameter( int target,int pname);
		static Dynamic lime_gl_get_buffer_parameter_dyn();

		static Dynamic lime_gl_get_context_attributes( );
		static Dynamic lime_gl_get_context_attributes_dyn();

		static int lime_gl_get_error( );
		static Dynamic lime_gl_get_error_dyn();

		static Dynamic lime_gl_get_extension( ::String name);
		static Dynamic lime_gl_get_extension_dyn();

		static int lime_gl_get_framebuffer_attachment_parameter( int target,int attachment,int pname);
		static Dynamic lime_gl_get_framebuffer_attachment_parameter_dyn();

		static Dynamic lime_gl_get_parameter( int pname);
		static Dynamic lime_gl_get_parameter_dyn();

		static ::String lime_gl_get_program_info_log( int program);
		static Dynamic lime_gl_get_program_info_log_dyn();

		static int lime_gl_get_program_parameter( int program,int pname);
		static Dynamic lime_gl_get_program_parameter_dyn();

		static int lime_gl_get_render_buffer_parameter( int target,int pname);
		static Dynamic lime_gl_get_render_buffer_parameter_dyn();

		static ::String lime_gl_get_shader_info_log( int shader);
		static Dynamic lime_gl_get_shader_info_log_dyn();

		static int lime_gl_get_shader_parameter( int shader,int pname);
		static Dynamic lime_gl_get_shader_parameter_dyn();

		static Dynamic lime_gl_get_shader_precision_format( int shadertype,int precisiontype);
		static Dynamic lime_gl_get_shader_precision_format_dyn();

		static Dynamic lime_gl_get_shader_source( int shader);
		static Dynamic lime_gl_get_shader_source_dyn();

		static Void lime_gl_get_supported_extensions( Dynamic result);
		static Dynamic lime_gl_get_supported_extensions_dyn();

		static int lime_gl_get_tex_parameter( int target,int pname);
		static Dynamic lime_gl_get_tex_parameter_dyn();

		static Dynamic lime_gl_get_uniform( int program,int location);
		static Dynamic lime_gl_get_uniform_dyn();

		static int lime_gl_get_uniform_location( int program,::String name);
		static Dynamic lime_gl_get_uniform_location_dyn();

		static int lime_gl_get_vertex_attrib( int index,int pname);
		static Dynamic lime_gl_get_vertex_attrib_dyn();

		static int lime_gl_get_vertex_attrib_offset( int index,int pname);
		static Dynamic lime_gl_get_vertex_attrib_offset_dyn();

		static Void lime_gl_hint( int target,int mode);
		static Dynamic lime_gl_hint_dyn();

		static bool lime_gl_is_buffer( int buffer);
		static Dynamic lime_gl_is_buffer_dyn();

		static bool lime_gl_is_enabled( int cap);
		static Dynamic lime_gl_is_enabled_dyn();

		static bool lime_gl_is_framebuffer( int framebuffer);
		static Dynamic lime_gl_is_framebuffer_dyn();

		static bool lime_gl_is_program( int program);
		static Dynamic lime_gl_is_program_dyn();

		static bool lime_gl_is_renderbuffer( int renderbuffer);
		static Dynamic lime_gl_is_renderbuffer_dyn();

		static bool lime_gl_is_shader( int shader);
		static Dynamic lime_gl_is_shader_dyn();

		static bool lime_gl_is_texture( int texture);
		static Dynamic lime_gl_is_texture_dyn();

		static Void lime_gl_line_width( ::cpp::Float32 width);
		static Dynamic lime_gl_line_width_dyn();

		static Void lime_gl_link_program( int program);
		static Dynamic lime_gl_link_program_dyn();

		static Void lime_gl_pixel_storei( int pname,int param);
		static Dynamic lime_gl_pixel_storei_dyn();

		static Void lime_gl_polygon_offset( ::cpp::Float32 factor,::cpp::Float32 units);
		static Dynamic lime_gl_polygon_offset_dyn();

		static Void lime_gl_read_pixels( int x,int y,int width,int height,int format,int type,Dynamic buffer,int byteOffset);
		static Dynamic lime_gl_read_pixels_dyn();

		static Void lime_gl_renderbuffer_storage( int target,int internalformat,int width,int height);
		static Dynamic lime_gl_renderbuffer_storage_dyn();

		static Void lime_gl_sample_coverage( ::cpp::Float32 value,bool invert);
		static Dynamic lime_gl_sample_coverage_dyn();

		static Void lime_gl_scissor( int x,int y,int width,int height);
		static Dynamic lime_gl_scissor_dyn();

		static Void lime_gl_shader_source( int shader,::String source);
		static Dynamic lime_gl_shader_source_dyn();

		static Void lime_gl_stencil_func( int func,int ref,int mask);
		static Dynamic lime_gl_stencil_func_dyn();

		static Void lime_gl_stencil_func_separate( int face,int func,int ref,int mask);
		static Dynamic lime_gl_stencil_func_separate_dyn();

		static Void lime_gl_stencil_mask( int mask);
		static Dynamic lime_gl_stencil_mask_dyn();

		static Void lime_gl_stencil_mask_separate( int face,int mask);
		static Dynamic lime_gl_stencil_mask_separate_dyn();

		static Void lime_gl_stencil_op( int fail,int zfail,int zpass);
		static Dynamic lime_gl_stencil_op_dyn();

		static Void lime_gl_stencil_op_separate( int face,int fail,int zfail,int zpass);
		static Dynamic lime_gl_stencil_op_separate_dyn();

		static Void lime_gl_tex_image_2d( int target,int level,int internalformat,int width,int height,int border,int format,int type,Dynamic buffer,int byteOffset);
		static Dynamic lime_gl_tex_image_2d_dyn();

		static Void lime_gl_tex_parameterf( int target,int pname,::cpp::Float32 param);
		static Dynamic lime_gl_tex_parameterf_dyn();

		static Void lime_gl_tex_parameteri( int target,int pname,int param);
		static Dynamic lime_gl_tex_parameteri_dyn();

		static Void lime_gl_tex_sub_image_2d( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,Dynamic buffer,int byteOffset);
		static Dynamic lime_gl_tex_sub_image_2d_dyn();

		static Void lime_gl_uniform1f( int location,::cpp::Float32 x);
		static Dynamic lime_gl_uniform1f_dyn();

		static Void lime_gl_uniform1fv( int location,Dynamic v);
		static Dynamic lime_gl_uniform1fv_dyn();

		static Void lime_gl_uniform1i( int location,int x);
		static Dynamic lime_gl_uniform1i_dyn();

		static Void lime_gl_uniform1iv( int location,Dynamic v);
		static Dynamic lime_gl_uniform1iv_dyn();

		static Void lime_gl_uniform2f( int location,::cpp::Float32 x,::cpp::Float32 y);
		static Dynamic lime_gl_uniform2f_dyn();

		static Void lime_gl_uniform2fv( int location,Dynamic v);
		static Dynamic lime_gl_uniform2fv_dyn();

		static Void lime_gl_uniform2i( int location,int x,int y);
		static Dynamic lime_gl_uniform2i_dyn();

		static Void lime_gl_uniform2iv( int location,Dynamic v);
		static Dynamic lime_gl_uniform2iv_dyn();

		static Void lime_gl_uniform3f( int location,::cpp::Float32 x,::cpp::Float32 y,::cpp::Float32 z);
		static Dynamic lime_gl_uniform3f_dyn();

		static Void lime_gl_uniform3fv( int location,Dynamic v);
		static Dynamic lime_gl_uniform3fv_dyn();

		static Void lime_gl_uniform3i( int location,int x,int y,int z);
		static Dynamic lime_gl_uniform3i_dyn();

		static Void lime_gl_uniform3iv( int location,Dynamic v);
		static Dynamic lime_gl_uniform3iv_dyn();

		static Void lime_gl_uniform4f( int location,::cpp::Float32 x,::cpp::Float32 y,::cpp::Float32 z,::cpp::Float32 w);
		static Dynamic lime_gl_uniform4f_dyn();

		static Void lime_gl_uniform4fv( int location,Dynamic v);
		static Dynamic lime_gl_uniform4fv_dyn();

		static Void lime_gl_uniform4i( int location,int x,int y,int z,int w);
		static Dynamic lime_gl_uniform4i_dyn();

		static Void lime_gl_uniform4iv( int location,Dynamic v);
		static Dynamic lime_gl_uniform4iv_dyn();

		static Void lime_gl_uniform_matrix( int location,bool transpose,Dynamic buffer,int count);
		static Dynamic lime_gl_uniform_matrix_dyn();

		static Void lime_gl_use_program( int program);
		static Dynamic lime_gl_use_program_dyn();

		static Void lime_gl_validate_program( int program);
		static Dynamic lime_gl_validate_program_dyn();

		static ::String lime_gl_version( );
		static Dynamic lime_gl_version_dyn();

		static Void lime_gl_vertex_attrib1f( int indx,::cpp::Float32 x);
		static Dynamic lime_gl_vertex_attrib1f_dyn();

		static Void lime_gl_vertex_attrib1fv( int indx,Dynamic values);
		static Dynamic lime_gl_vertex_attrib1fv_dyn();

		static Void lime_gl_vertex_attrib2f( int indx,::cpp::Float32 x,::cpp::Float32 y);
		static Dynamic lime_gl_vertex_attrib2f_dyn();

		static Void lime_gl_vertex_attrib2fv( int indx,Dynamic values);
		static Dynamic lime_gl_vertex_attrib2fv_dyn();

		static Void lime_gl_vertex_attrib3f( int indx,::cpp::Float32 x,::cpp::Float32 y,::cpp::Float32 z);
		static Dynamic lime_gl_vertex_attrib3f_dyn();

		static Void lime_gl_vertex_attrib3fv( int indx,Dynamic values);
		static Dynamic lime_gl_vertex_attrib3fv_dyn();

		static Void lime_gl_vertex_attrib4f( int indx,::cpp::Float32 x,::cpp::Float32 y,::cpp::Float32 z,::cpp::Float32 w);
		static Dynamic lime_gl_vertex_attrib4f_dyn();

		static Void lime_gl_vertex_attrib4fv( int indx,Dynamic values);
		static Dynamic lime_gl_vertex_attrib4fv_dyn();

		static Void lime_gl_vertex_attrib_pointer( int indx,int size,int type,bool normalized,int stride,int offset);
		static Dynamic lime_gl_vertex_attrib_pointer_dyn();

		static Void lime_gl_viewport( int x,int y,int width,int height);
		static Dynamic lime_gl_viewport_dyn();

		static ::cpp::Function< void ( int ) > cffi_lime_gl_active_texture;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_attach_shader;
		static ::cpp::Function< void ( int ,int ,::String ) > cffi_lime_gl_bind_attrib_location;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_bind_buffer;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_bind_framebuffer;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_bind_renderbuffer;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_bind_texture;
		static ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_blend_color;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_blend_equation;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_blend_equation_separate;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_blend_func;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_blend_func_separate;
		static ::cpp::Function< void ( int ,::hx::Object * ,int ,int ,int ) > cffi_lime_gl_buffer_data;
		static ::cpp::Function< void ( int ,int ,::hx::Object * ,int ,int ) > cffi_lime_gl_buffer_sub_data;
		static ::cpp::Function< int ( int ) > cffi_lime_gl_check_framebuffer_status;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_clear;
		static ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_clear_color;
		static ::cpp::Function< void ( ::cpp::Float32 ) > cffi_lime_gl_clear_depth;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_clear_stencil;
		static ::cpp::Function< void ( bool ,bool ,bool ,bool ) > cffi_lime_gl_color_mask;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_compile_shader;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,::hx::Object * ,int ) > cffi_lime_gl_compressed_tex_image_2d;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,::hx::Object * ,int ) > cffi_lime_gl_compressed_tex_sub_image_2d;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) > cffi_lime_gl_copy_tex_image_2d;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ) > cffi_lime_gl_copy_tex_sub_image_2d;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_buffer;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_framebuffer;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_program;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_render_buffer;
		static ::cpp::Function< int ( int ) > cffi_lime_gl_create_shader;
		static ::cpp::Function< int ( ) > cffi_lime_gl_create_texture;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_cull_face;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_buffer;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_framebuffer;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_program;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_render_buffer;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_shader;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_delete_texture;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_depth_func;
		static ::cpp::Function< void ( bool ) > cffi_lime_gl_depth_mask;
		static ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_depth_range;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_detach_shader;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_disable;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_disable_vertex_attrib_array;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_draw_arrays;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_draw_elements;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_enable;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_enable_vertex_attrib_array;
		static ::cpp::Function< void ( ) > cffi_lime_gl_finish;
		static ::cpp::Function< void ( ) > cffi_lime_gl_flush;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_framebuffer_renderbuffer;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ) > cffi_lime_gl_framebuffer_texture2D;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_front_face;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_generate_mipmap;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_gl_get_active_attrib;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_gl_get_active_uniform;
		static ::cpp::Function< int ( int ,::String ) > cffi_lime_gl_get_attrib_location;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_buffer_parameter;
		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_gl_get_context_attributes;
		static ::cpp::Function< int ( ) > cffi_lime_gl_get_error;
		static ::cpp::Function< ::hx::Object * ( ::String ) > cffi_lime_gl_get_extension;
		static ::cpp::Function< int ( int ,int ,int ) > cffi_lime_gl_get_framebuffer_attachment_parameter;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_gl_get_parameter;
		static ::cpp::Function< ::String ( int ) > cffi_lime_gl_get_program_info_log;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_program_parameter;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_render_buffer_parameter;
		static ::cpp::Function< ::String ( int ) > cffi_lime_gl_get_shader_info_log;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_shader_parameter;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_gl_get_shader_precision_format;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_gl_get_shader_source;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_gl_get_supported_extensions;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_tex_parameter;
		static ::cpp::Function< ::hx::Object * ( int ,int ) > cffi_lime_gl_get_uniform;
		static ::cpp::Function< int ( int ,::String ) > cffi_lime_gl_get_uniform_location;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_vertex_attrib;
		static ::cpp::Function< int ( int ,int ) > cffi_lime_gl_get_vertex_attrib_offset;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_hint;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_buffer;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_enabled;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_framebuffer;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_program;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_renderbuffer;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_shader;
		static ::cpp::Function< bool ( int ) > cffi_lime_gl_is_texture;
		static ::cpp::Function< void ( ::cpp::Float32 ) > cffi_lime_gl_line_width;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_link_program;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_pixel_storei;
		static ::cpp::Function< void ( ::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_polygon_offset;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,::hx::Object * ,int ) > cffi_lime_gl_read_pixels;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_renderbuffer_storage;
		static ::cpp::Function< void ( ::cpp::Float32 ,bool ) > cffi_lime_gl_sample_coverage;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_scissor;
		static ::cpp::Function< void ( int ,::String ) > cffi_lime_gl_shader_source;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_stencil_func;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_stencil_func_separate;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_stencil_mask;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_stencil_mask_separate;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_stencil_op;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_stencil_op_separate;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,::hx::Object * ,int ) > cffi_lime_gl_tex_image_2d;
		static ::cpp::Function< void ( int ,int ,::cpp::Float32 ) > cffi_lime_gl_tex_parameterf;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_tex_parameteri;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ,int ,int ,int ,::hx::Object * ,int ) > cffi_lime_gl_tex_sub_image_2d;
		static ::cpp::Function< void ( int ,::cpp::Float32 ) > cffi_lime_gl_uniform1f;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_uniform1fv;
		static ::cpp::Function< void ( int ,int ) > cffi_lime_gl_uniform1i;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_uniform1iv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_uniform2f;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_uniform2fv;
		static ::cpp::Function< void ( int ,int ,int ) > cffi_lime_gl_uniform2i;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_uniform2iv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_uniform3f;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_uniform3fv;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_uniform3i;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_uniform3iv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_uniform4f;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_uniform4fv;
		static ::cpp::Function< void ( int ,int ,int ,int ,int ) > cffi_lime_gl_uniform4i;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_uniform4iv;
		static ::cpp::Function< void ( int ,bool ,::hx::Object * ,int ) > cffi_lime_gl_uniform_matrix;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_use_program;
		static ::cpp::Function< void ( int ) > cffi_lime_gl_validate_program;
		static ::cpp::Function< ::String ( ) > cffi_lime_gl_version;
		static ::cpp::Function< void ( int ,::cpp::Float32 ) > cffi_lime_gl_vertex_attrib1f;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_vertex_attrib1fv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_vertex_attrib2f;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_vertex_attrib2fv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_vertex_attrib3f;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_vertex_attrib3fv;
		static ::cpp::Function< void ( int ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ,::cpp::Float32 ) > cffi_lime_gl_vertex_attrib4f;
		static ::cpp::Function< void ( int ,::hx::Object * ) > cffi_lime_gl_vertex_attrib4fv;
		static ::cpp::Function< void ( int ,int ,int ,bool ,int ,int ) > cffi_lime_gl_vertex_attrib_pointer;
		static ::cpp::Function< void ( int ,int ,int ,int ) > cffi_lime_gl_viewport;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_GL */ 

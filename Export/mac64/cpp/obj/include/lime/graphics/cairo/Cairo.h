#ifndef INCLUDED_lime_graphics_cairo_Cairo
#define INCLUDED_lime_graphics_cairo_Cairo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,math,Vector2)
namespace lime{
namespace graphics{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  Cairo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Cairo_obj OBJ_;
		Cairo_obj();
		Void __construct(Dynamic surface);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.cairo.Cairo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Cairo_obj > __new(Dynamic surface);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cairo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Cairo","\x68","\xa0","\x46","\xd4"); }

		static void __boot();
		static int version;
		static ::String versionString;
		static int get_version( );
		static Dynamic get_version_dyn();

		static ::String get_versionString( );
		static Dynamic get_versionString_dyn();

		static Void lime_cairo_arc( Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2);
		static Dynamic lime_cairo_arc_dyn();

		static Void lime_cairo_arc_negative( Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2);
		static Dynamic lime_cairo_arc_negative_dyn();

		static Void lime_cairo_clip( Dynamic handle);
		static Dynamic lime_cairo_clip_dyn();

		static Void lime_cairo_clip_preserve( Dynamic handle);
		static Dynamic lime_cairo_clip_preserve_dyn();

		static Void lime_cairo_clip_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2);
		static Dynamic lime_cairo_clip_extents_dyn();

		static Void lime_cairo_close_path( Dynamic handle);
		static Dynamic lime_cairo_close_path_dyn();

		static Void lime_cairo_copy_page( Dynamic handle);
		static Dynamic lime_cairo_copy_page_dyn();

		static Dynamic lime_cairo_create( Dynamic handle);
		static Dynamic lime_cairo_create_dyn();

		static Void lime_cairo_curve_to( Dynamic handle,Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		static Dynamic lime_cairo_curve_to_dyn();

		static Void lime_cairo_fill( Dynamic handle);
		static Dynamic lime_cairo_fill_dyn();

		static Void lime_cairo_fill_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2);
		static Dynamic lime_cairo_fill_extents_dyn();

		static Void lime_cairo_fill_preserve( Dynamic handle);
		static Dynamic lime_cairo_fill_preserve_dyn();

		static int lime_cairo_get_antialias( Dynamic handle);
		static Dynamic lime_cairo_get_antialias_dyn();

		static Dynamic lime_cairo_get_current_point( Dynamic handle);
		static Dynamic lime_cairo_get_current_point_dyn();

		static Dynamic lime_cairo_get_dash( Dynamic handle);
		static Dynamic lime_cairo_get_dash_dyn();

		static int lime_cairo_get_dash_count( Dynamic handle);
		static Dynamic lime_cairo_get_dash_count_dyn();

		static int lime_cairo_get_fill_rule( Dynamic handle);
		static Dynamic lime_cairo_get_fill_rule_dyn();

		static Dynamic lime_cairo_get_font_face( Dynamic handle);
		static Dynamic lime_cairo_get_font_face_dyn();

		static Dynamic lime_cairo_get_font_options( Dynamic handle);
		static Dynamic lime_cairo_get_font_options_dyn();

		static Dynamic lime_cairo_get_group_target( Dynamic handle);
		static Dynamic lime_cairo_get_group_target_dyn();

		static int lime_cairo_get_line_cap( Dynamic handle);
		static Dynamic lime_cairo_get_line_cap_dyn();

		static int lime_cairo_get_line_join( Dynamic handle);
		static Dynamic lime_cairo_get_line_join_dyn();

		static Float lime_cairo_get_line_width( Dynamic handle);
		static Dynamic lime_cairo_get_line_width_dyn();

		static Dynamic lime_cairo_get_matrix( Dynamic handle);
		static Dynamic lime_cairo_get_matrix_dyn();

		static Float lime_cairo_get_miter_limit( Dynamic handle);
		static Dynamic lime_cairo_get_miter_limit_dyn();

		static int lime_cairo_get_operator( Dynamic handle);
		static Dynamic lime_cairo_get_operator_dyn();

		static Dynamic lime_cairo_get_source( Dynamic handle);
		static Dynamic lime_cairo_get_source_dyn();

		static Dynamic lime_cairo_get_target( Dynamic handle);
		static Dynamic lime_cairo_get_target_dyn();

		static Float lime_cairo_get_tolerance( Dynamic handle);
		static Dynamic lime_cairo_get_tolerance_dyn();

		static bool lime_cairo_has_current_point( Dynamic handle);
		static Dynamic lime_cairo_has_current_point_dyn();

		static Void lime_cairo_identity_matrix( Dynamic handle);
		static Dynamic lime_cairo_identity_matrix_dyn();

		static bool lime_cairo_in_clip( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_in_clip_dyn();

		static bool lime_cairo_in_fill( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_in_fill_dyn();

		static bool lime_cairo_in_stroke( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_in_stroke_dyn();

		static Void lime_cairo_line_to( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_line_to_dyn();

		static Void lime_cairo_mask( Dynamic handle,Dynamic pattern);
		static Dynamic lime_cairo_mask_dyn();

		static Void lime_cairo_mask_surface( Dynamic handle,Dynamic surface,Float x,Float y);
		static Dynamic lime_cairo_mask_surface_dyn();

		static Void lime_cairo_move_to( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_move_to_dyn();

		static Void lime_cairo_new_path( Dynamic handle);
		static Dynamic lime_cairo_new_path_dyn();

		static Void lime_cairo_paint( Dynamic handle);
		static Dynamic lime_cairo_paint_dyn();

		static Void lime_cairo_paint_with_alpha( Dynamic handle,Float alpha);
		static Dynamic lime_cairo_paint_with_alpha_dyn();

		static Dynamic lime_cairo_pop_group( Dynamic handle);
		static Dynamic lime_cairo_pop_group_dyn();

		static Void lime_cairo_pop_group_to_source( Dynamic handle);
		static Dynamic lime_cairo_pop_group_to_source_dyn();

		static Void lime_cairo_push_group( Dynamic handle);
		static Dynamic lime_cairo_push_group_dyn();

		static Void lime_cairo_push_group_with_content( Dynamic handle,int content);
		static Dynamic lime_cairo_push_group_with_content_dyn();

		static Void lime_cairo_rectangle( Dynamic handle,Float x,Float y,Float width,Float height);
		static Dynamic lime_cairo_rectangle_dyn();

		static Void lime_cairo_rel_curve_to( Dynamic handle,Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3);
		static Dynamic lime_cairo_rel_curve_to_dyn();

		static Void lime_cairo_rel_line_to( Dynamic handle,Float dx,Float dy);
		static Dynamic lime_cairo_rel_line_to_dyn();

		static Void lime_cairo_rel_move_to( Dynamic handle,Float dx,Float dy);
		static Dynamic lime_cairo_rel_move_to_dyn();

		static Void lime_cairo_reset_clip( Dynamic handle);
		static Dynamic lime_cairo_reset_clip_dyn();

		static Void lime_cairo_restore( Dynamic handle);
		static Dynamic lime_cairo_restore_dyn();

		static Void lime_cairo_rotate( Dynamic handle,Float amount);
		static Dynamic lime_cairo_rotate_dyn();

		static Void lime_cairo_save( Dynamic handle);
		static Dynamic lime_cairo_save_dyn();

		static Void lime_cairo_scale( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_scale_dyn();

		static Void lime_cairo_set_antialias( Dynamic handle,int cap);
		static Dynamic lime_cairo_set_antialias_dyn();

		static Void lime_cairo_set_dash( Dynamic handle,Dynamic dash);
		static Dynamic lime_cairo_set_dash_dyn();

		static Void lime_cairo_set_fill_rule( Dynamic handle,int cap);
		static Dynamic lime_cairo_set_fill_rule_dyn();

		static Void lime_cairo_set_font_face( Dynamic handle,Dynamic face);
		static Dynamic lime_cairo_set_font_face_dyn();

		static Void lime_cairo_set_font_options( Dynamic handle,Dynamic options);
		static Dynamic lime_cairo_set_font_options_dyn();

		static Void lime_cairo_set_font_size( Dynamic handle,Float size);
		static Dynamic lime_cairo_set_font_size_dyn();

		static Void lime_cairo_set_line_cap( Dynamic handle,int cap);
		static Dynamic lime_cairo_set_line_cap_dyn();

		static Void lime_cairo_set_line_join( Dynamic handle,int join);
		static Dynamic lime_cairo_set_line_join_dyn();

		static Void lime_cairo_set_line_width( Dynamic handle,Float width);
		static Dynamic lime_cairo_set_line_width_dyn();

		static Void lime_cairo_set_matrix( Dynamic handle,Dynamic matrix);
		static Dynamic lime_cairo_set_matrix_dyn();

		static Void lime_cairo_set_miter_limit( Dynamic handle,Float miterLimit);
		static Dynamic lime_cairo_set_miter_limit_dyn();

		static Void lime_cairo_set_operator( Dynamic handle,int op);
		static Dynamic lime_cairo_set_operator_dyn();

		static Void lime_cairo_set_source( Dynamic handle,Dynamic pattern);
		static Dynamic lime_cairo_set_source_dyn();

		static Void lime_cairo_set_source_rgb( Dynamic handle,Float r,Float g,Float b);
		static Dynamic lime_cairo_set_source_rgb_dyn();

		static Void lime_cairo_set_source_rgba( Dynamic handle,Float r,Float g,Float b,Float a);
		static Dynamic lime_cairo_set_source_rgba_dyn();

		static Void lime_cairo_set_source_surface( Dynamic handle,Dynamic surface,Float x,Float y);
		static Dynamic lime_cairo_set_source_surface_dyn();

		static Void lime_cairo_set_tolerance( Dynamic handle,Float tolerance);
		static Dynamic lime_cairo_set_tolerance_dyn();

		static Void lime_cairo_show_page( Dynamic handle);
		static Dynamic lime_cairo_show_page_dyn();

		static Void lime_cairo_show_text( Dynamic handle,::String text);
		static Dynamic lime_cairo_show_text_dyn();

		static int lime_cairo_status( Dynamic handle);
		static Dynamic lime_cairo_status_dyn();

		static Void lime_cairo_stroke( Dynamic handle);
		static Dynamic lime_cairo_stroke_dyn();

		static Void lime_cairo_stroke_extents( Dynamic handle,Float x1,Float y1,Float x2,Float y2);
		static Dynamic lime_cairo_stroke_extents_dyn();

		static Void lime_cairo_stroke_preserve( Dynamic handle);
		static Dynamic lime_cairo_stroke_preserve_dyn();

		static Void lime_cairo_transform( Dynamic handle,Dynamic matrix);
		static Dynamic lime_cairo_transform_dyn();

		static Void lime_cairo_translate( Dynamic handle,Float x,Float y);
		static Dynamic lime_cairo_translate_dyn();

		static int lime_cairo_version( );
		static Dynamic lime_cairo_version_dyn();

		static ::String lime_cairo_version_string( );
		static Dynamic lime_cairo_version_string_dyn();

		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_arc;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_arc_negative;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_clip;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_clip_preserve;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_clip_extents;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_close_path;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_copy_page;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_create;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_curve_to;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_fill;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_fill_extents;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_fill_preserve;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_antialias;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_current_point;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_dash;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_dash_count;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_fill_rule;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_font_face;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_font_options;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_group_target;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_line_cap;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_line_join;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_cairo_get_line_width;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_matrix;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_cairo_get_miter_limit;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_get_operator;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_source;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_get_target;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_cairo_get_tolerance;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_cairo_has_current_point;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_identity_matrix;
		static ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_in_clip;
		static ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_in_fill;
		static ::cpp::Function< bool ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_in_stroke;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_line_to;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_mask;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > cffi_lime_cairo_mask_surface;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_move_to;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_new_path;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_paint;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_paint_with_alpha;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_cairo_pop_group;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_pop_group_to_source;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_push_group;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_push_group_with_content;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_rectangle;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_rel_curve_to;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_rel_line_to;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_rel_move_to;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_reset_clip;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_restore;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_rotate;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_save;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_scale;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_antialias;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_set_dash;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_fill_rule;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_set_font_face;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_set_font_options;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_set_font_size;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_line_cap;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_line_join;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_set_line_width;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_set_matrix;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_set_miter_limit;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_cairo_set_operator;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_set_source;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ) > cffi_lime_cairo_set_source_rgb;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_set_source_rgba;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,Float ,Float ) > cffi_lime_cairo_set_source_surface;
		static ::cpp::Function< void ( ::hx::Object * ,Float ) > cffi_lime_cairo_set_tolerance;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_show_page;
		static ::cpp::Function< void ( ::hx::Object * ,::String ) > cffi_lime_cairo_show_text;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_cairo_status;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_stroke;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ,Float ,Float ) > cffi_lime_cairo_stroke_extents;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_cairo_stroke_preserve;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_cairo_transform;
		static ::cpp::Function< void ( ::hx::Object * ,Float ,Float ) > cffi_lime_cairo_translate;
		static ::cpp::Function< int ( ) > cffi_lime_cairo_version;
		static ::cpp::Function< ::String ( ) > cffi_lime_cairo_version_string;
		Dynamic target;
		Dynamic userData;
		Dynamic handle;
		virtual Void arc( Float xc,Float yc,Float radius,Float angle1,Float angle2);
		Dynamic arc_dyn();

		virtual Void arcNegative( Float xc,Float yc,Float radius,Float angle1,Float angle2);
		Dynamic arcNegative_dyn();

		virtual Void clip( );
		Dynamic clip_dyn();

		virtual Void clipExtents( Float x1,Float y1,Float x2,Float y2);
		Dynamic clipExtents_dyn();

		virtual Void clipPreserve( );
		Dynamic clipPreserve_dyn();

		virtual Void closePath( );
		Dynamic closePath_dyn();

		virtual Void copyPage( );
		Dynamic copyPage_dyn();

		virtual Void curveTo( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		Dynamic curveTo_dyn();

		virtual Void fill( );
		Dynamic fill_dyn();

		virtual Void fillExtents( Float x1,Float y1,Float x2,Float y2);
		Dynamic fillExtents_dyn();

		virtual Void fillPreserve( );
		Dynamic fillPreserve_dyn();

		virtual Void identityMatrix( );
		Dynamic identityMatrix_dyn();

		virtual bool inClip( Float x,Float y);
		Dynamic inClip_dyn();

		virtual bool inFill( Float x,Float y);
		Dynamic inFill_dyn();

		virtual bool inStroke( Float x,Float y);
		Dynamic inStroke_dyn();

		virtual Void lineTo( Float x,Float y);
		Dynamic lineTo_dyn();

		virtual Void moveTo( Float x,Float y);
		Dynamic moveTo_dyn();

		virtual Void mask( Dynamic pattern);
		Dynamic mask_dyn();

		virtual Void maskSurface( Dynamic surface,Float x,Float y);
		Dynamic maskSurface_dyn();

		virtual Void newPath( );
		Dynamic newPath_dyn();

		virtual Void paint( );
		Dynamic paint_dyn();

		virtual Void paintWithAlpha( Float alpha);
		Dynamic paintWithAlpha_dyn();

		virtual Dynamic popGroup( );
		Dynamic popGroup_dyn();

		virtual Void popGroupToSource( );
		Dynamic popGroupToSource_dyn();

		virtual Void pushGroup( );
		Dynamic pushGroup_dyn();

		virtual Void pushGroupWithContent( int content);
		Dynamic pushGroupWithContent_dyn();

		virtual Void recreate( Dynamic surface);
		Dynamic recreate_dyn();

		virtual Void rectangle( Float x,Float y,Float width,Float height);
		Dynamic rectangle_dyn();

		virtual Void relCurveTo( Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3);
		Dynamic relCurveTo_dyn();

		virtual Void relLineTo( Float dx,Float dy);
		Dynamic relLineTo_dyn();

		virtual Void relMoveTo( Float dx,Float dy);
		Dynamic relMoveTo_dyn();

		virtual Void resetClip( );
		Dynamic resetClip_dyn();

		virtual Void restore( );
		Dynamic restore_dyn();

		virtual Void save( );
		Dynamic save_dyn();

		virtual Void setFontSize( Float size);
		Dynamic setFontSize_dyn();

		virtual Void setSourceRGB( Float r,Float g,Float b);
		Dynamic setSourceRGB_dyn();

		virtual Void setSourceRGBA( Float r,Float g,Float b,Float a);
		Dynamic setSourceRGBA_dyn();

		virtual Void setSourceSurface( Dynamic surface,Float x,Float y);
		Dynamic setSourceSurface_dyn();

		virtual Void showPage( );
		Dynamic showPage_dyn();

		virtual Void showText( ::String utf8);
		Dynamic showText_dyn();

		virtual int status( );
		Dynamic status_dyn();

		virtual Void stroke( );
		Dynamic stroke_dyn();

		virtual Void strokeExtents( Float x1,Float y1,Float x2,Float y2);
		Dynamic strokeExtents_dyn();

		virtual Void strokePreserve( );
		Dynamic strokePreserve_dyn();

		virtual Void transform( ::lime::math::Matrix3 matrix);
		Dynamic transform_dyn();

		virtual Void rotate( Float amount);
		Dynamic rotate_dyn();

		virtual Void scale( Float x,Float y);
		Dynamic scale_dyn();

		virtual Void translate( Float x,Float y);
		Dynamic translate_dyn();

		virtual int get_antialias( );
		Dynamic get_antialias_dyn();

		virtual int set_antialias( int value);
		Dynamic set_antialias_dyn();

		virtual ::lime::math::Vector2 get_currentPoint( );
		Dynamic get_currentPoint_dyn();

		virtual Array< Float > get_dash( );
		Dynamic get_dash_dyn();

		virtual Array< Float > set_dash( Array< Float > value);
		Dynamic set_dash_dyn();

		virtual int get_dashCount( );
		Dynamic get_dashCount_dyn();

		virtual int get_fillRule( );
		Dynamic get_fillRule_dyn();

		virtual int set_fillRule( int value);
		Dynamic set_fillRule_dyn();

		virtual Dynamic get_fontFace( );
		Dynamic get_fontFace_dyn();

		virtual Dynamic set_fontFace( Dynamic value);
		Dynamic set_fontFace_dyn();

		virtual Dynamic get_fontOptions( );
		Dynamic get_fontOptions_dyn();

		virtual Dynamic set_fontOptions( Dynamic value);
		Dynamic set_fontOptions_dyn();

		virtual Dynamic get_groupTarget( );
		Dynamic get_groupTarget_dyn();

		virtual bool get_hasCurrentPoint( );
		Dynamic get_hasCurrentPoint_dyn();

		virtual int get_lineCap( );
		Dynamic get_lineCap_dyn();

		virtual int set_lineCap( int value);
		Dynamic set_lineCap_dyn();

		virtual int get_lineJoin( );
		Dynamic get_lineJoin_dyn();

		virtual int set_lineJoin( int value);
		Dynamic set_lineJoin_dyn();

		virtual Float get_lineWidth( );
		Dynamic get_lineWidth_dyn();

		virtual Float set_lineWidth( Float value);
		Dynamic set_lineWidth_dyn();

		virtual ::lime::math::Matrix3 get_matrix( );
		Dynamic get_matrix_dyn();

		virtual ::lime::math::Matrix3 set_matrix( ::lime::math::Matrix3 value);
		Dynamic set_matrix_dyn();

		virtual Float get_miterLimit( );
		Dynamic get_miterLimit_dyn();

		virtual Float set_miterLimit( Float value);
		Dynamic set_miterLimit_dyn();

		virtual int get_operator( );
		Dynamic get_operator_dyn();

		virtual int set_operator( int value);
		Dynamic set_operator_dyn();

		virtual Dynamic get_source( );
		Dynamic get_source_dyn();

		virtual Dynamic set_source( Dynamic value);
		Dynamic set_source_dyn();

		virtual Dynamic get_target( );
		Dynamic get_target_dyn();

		virtual Float get_tolerance( );
		Dynamic get_tolerance_dyn();

		virtual Float set_tolerance( Float value);
		Dynamic set_tolerance_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo

#endif /* INCLUDED_lime_graphics_cairo_Cairo */ 

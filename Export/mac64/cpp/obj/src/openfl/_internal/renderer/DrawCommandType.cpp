#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::BEGIN_BITMAP_FILL;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::BEGIN_FILL;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::BEGIN_GRADIENT_FILL;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::CUBIC_CURVE_TO;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::CURVE_TO;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_CIRCLE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_ELLIPSE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_PATH;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_RECT;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_ROUND_RECT;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_TILES;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::DRAW_TRIANGLES;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::END_FILL;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::LINE_BITMAP_STYLE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::LINE_GRADIENT_STYLE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::LINE_STYLE;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::LINE_TO;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::MOVE_TO;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::OVERRIDE_MATRIX;

::openfl::_internal::renderer::DrawCommandType DrawCommandType_obj::UNKNOWN;

HX_DEFINE_CREATE_ENUM(DrawCommandType_obj)

int DrawCommandType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BEGIN_BITMAP_FILL","\x9d","\x8d","\xc1","\xd5")) return 0;
	if (inName==HX_HCSTRING("BEGIN_FILL","\xb9","\x8f","\x44","\x38")) return 1;
	if (inName==HX_HCSTRING("BEGIN_GRADIENT_FILL","\x7c","\x12","\x1d","\xec")) return 2;
	if (inName==HX_HCSTRING("CUBIC_CURVE_TO","\x60","\x8b","\x92","\xac")) return 3;
	if (inName==HX_HCSTRING("CURVE_TO","\x6b","\xde","\x71","\x42")) return 4;
	if (inName==HX_HCSTRING("DRAW_CIRCLE","\x2b","\x84","\x66","\x49")) return 5;
	if (inName==HX_HCSTRING("DRAW_ELLIPSE","\x43","\x06","\x1d","\x06")) return 6;
	if (inName==HX_HCSTRING("DRAW_PATH","\x00","\xc7","\x6b","\x9a")) return 7;
	if (inName==HX_HCSTRING("DRAW_RECT","\x7f","\x2e","\xc1","\x9b")) return 8;
	if (inName==HX_HCSTRING("DRAW_ROUND_RECT","\xb0","\xa9","\x34","\x42")) return 9;
	if (inName==HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6")) return 10;
	if (inName==HX_HCSTRING("DRAW_TRIANGLES","\x50","\xbd","\x1f","\x61")) return 11;
	if (inName==HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27")) return 12;
	if (inName==HX_HCSTRING("LINE_BITMAP_STYLE","\xec","\xc7","\x38","\x2d")) return 13;
	if (inName==HX_HCSTRING("LINE_GRADIENT_STYLE","\x6d","\x7d","\x1a","\xa1")) return 14;
	if (inName==HX_HCSTRING("LINE_STYLE","\x46","\x73","\x8d","\xdd")) return 15;
	if (inName==HX_HCSTRING("LINE_TO","\x26","\xf0","\x91","\x9f")) return 16;
	if (inName==HX_HCSTRING("MOVE_TO","\x29","\x35","\x80","\xca")) return 17;
	if (inName==HX_HCSTRING("OVERRIDE_MATRIX","\x14","\x63","\x08","\xa8")) return 18;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 19;
	return super::__FindIndex(inName);
}

int DrawCommandType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BEGIN_BITMAP_FILL","\x9d","\x8d","\xc1","\xd5")) return 0;
	if (inName==HX_HCSTRING("BEGIN_FILL","\xb9","\x8f","\x44","\x38")) return 0;
	if (inName==HX_HCSTRING("BEGIN_GRADIENT_FILL","\x7c","\x12","\x1d","\xec")) return 0;
	if (inName==HX_HCSTRING("CUBIC_CURVE_TO","\x60","\x8b","\x92","\xac")) return 0;
	if (inName==HX_HCSTRING("CURVE_TO","\x6b","\xde","\x71","\x42")) return 0;
	if (inName==HX_HCSTRING("DRAW_CIRCLE","\x2b","\x84","\x66","\x49")) return 0;
	if (inName==HX_HCSTRING("DRAW_ELLIPSE","\x43","\x06","\x1d","\x06")) return 0;
	if (inName==HX_HCSTRING("DRAW_PATH","\x00","\xc7","\x6b","\x9a")) return 0;
	if (inName==HX_HCSTRING("DRAW_RECT","\x7f","\x2e","\xc1","\x9b")) return 0;
	if (inName==HX_HCSTRING("DRAW_ROUND_RECT","\xb0","\xa9","\x34","\x42")) return 0;
	if (inName==HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6")) return 0;
	if (inName==HX_HCSTRING("DRAW_TRIANGLES","\x50","\xbd","\x1f","\x61")) return 0;
	if (inName==HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27")) return 0;
	if (inName==HX_HCSTRING("LINE_BITMAP_STYLE","\xec","\xc7","\x38","\x2d")) return 0;
	if (inName==HX_HCSTRING("LINE_GRADIENT_STYLE","\x6d","\x7d","\x1a","\xa1")) return 0;
	if (inName==HX_HCSTRING("LINE_STYLE","\x46","\x73","\x8d","\xdd")) return 0;
	if (inName==HX_HCSTRING("LINE_TO","\x26","\xf0","\x91","\x9f")) return 0;
	if (inName==HX_HCSTRING("MOVE_TO","\x29","\x35","\x80","\xca")) return 0;
	if (inName==HX_HCSTRING("OVERRIDE_MATRIX","\x14","\x63","\x08","\xa8")) return 0;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic DrawCommandType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BEGIN_BITMAP_FILL","\x9d","\x8d","\xc1","\xd5")) return BEGIN_BITMAP_FILL;
	if (inName==HX_HCSTRING("BEGIN_FILL","\xb9","\x8f","\x44","\x38")) return BEGIN_FILL;
	if (inName==HX_HCSTRING("BEGIN_GRADIENT_FILL","\x7c","\x12","\x1d","\xec")) return BEGIN_GRADIENT_FILL;
	if (inName==HX_HCSTRING("CUBIC_CURVE_TO","\x60","\x8b","\x92","\xac")) return CUBIC_CURVE_TO;
	if (inName==HX_HCSTRING("CURVE_TO","\x6b","\xde","\x71","\x42")) return CURVE_TO;
	if (inName==HX_HCSTRING("DRAW_CIRCLE","\x2b","\x84","\x66","\x49")) return DRAW_CIRCLE;
	if (inName==HX_HCSTRING("DRAW_ELLIPSE","\x43","\x06","\x1d","\x06")) return DRAW_ELLIPSE;
	if (inName==HX_HCSTRING("DRAW_PATH","\x00","\xc7","\x6b","\x9a")) return DRAW_PATH;
	if (inName==HX_HCSTRING("DRAW_RECT","\x7f","\x2e","\xc1","\x9b")) return DRAW_RECT;
	if (inName==HX_HCSTRING("DRAW_ROUND_RECT","\xb0","\xa9","\x34","\x42")) return DRAW_ROUND_RECT;
	if (inName==HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6")) return DRAW_TILES;
	if (inName==HX_HCSTRING("DRAW_TRIANGLES","\x50","\xbd","\x1f","\x61")) return DRAW_TRIANGLES;
	if (inName==HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27")) return END_FILL;
	if (inName==HX_HCSTRING("LINE_BITMAP_STYLE","\xec","\xc7","\x38","\x2d")) return LINE_BITMAP_STYLE;
	if (inName==HX_HCSTRING("LINE_GRADIENT_STYLE","\x6d","\x7d","\x1a","\xa1")) return LINE_GRADIENT_STYLE;
	if (inName==HX_HCSTRING("LINE_STYLE","\x46","\x73","\x8d","\xdd")) return LINE_STYLE;
	if (inName==HX_HCSTRING("LINE_TO","\x26","\xf0","\x91","\x9f")) return LINE_TO;
	if (inName==HX_HCSTRING("MOVE_TO","\x29","\x35","\x80","\xca")) return MOVE_TO;
	if (inName==HX_HCSTRING("OVERRIDE_MATRIX","\x14","\x63","\x08","\xa8")) return OVERRIDE_MATRIX;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BEGIN_BITMAP_FILL","\x9d","\x8d","\xc1","\xd5"),
	HX_HCSTRING("BEGIN_FILL","\xb9","\x8f","\x44","\x38"),
	HX_HCSTRING("BEGIN_GRADIENT_FILL","\x7c","\x12","\x1d","\xec"),
	HX_HCSTRING("CUBIC_CURVE_TO","\x60","\x8b","\x92","\xac"),
	HX_HCSTRING("CURVE_TO","\x6b","\xde","\x71","\x42"),
	HX_HCSTRING("DRAW_CIRCLE","\x2b","\x84","\x66","\x49"),
	HX_HCSTRING("DRAW_ELLIPSE","\x43","\x06","\x1d","\x06"),
	HX_HCSTRING("DRAW_PATH","\x00","\xc7","\x6b","\x9a"),
	HX_HCSTRING("DRAW_RECT","\x7f","\x2e","\xc1","\x9b"),
	HX_HCSTRING("DRAW_ROUND_RECT","\xb0","\xa9","\x34","\x42"),
	HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6"),
	HX_HCSTRING("DRAW_TRIANGLES","\x50","\xbd","\x1f","\x61"),
	HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27"),
	HX_HCSTRING("LINE_BITMAP_STYLE","\xec","\xc7","\x38","\x2d"),
	HX_HCSTRING("LINE_GRADIENT_STYLE","\x6d","\x7d","\x1a","\xa1"),
	HX_HCSTRING("LINE_STYLE","\x46","\x73","\x8d","\xdd"),
	HX_HCSTRING("LINE_TO","\x26","\xf0","\x91","\x9f"),
	HX_HCSTRING("MOVE_TO","\x29","\x35","\x80","\xca"),
	HX_HCSTRING("OVERRIDE_MATRIX","\x14","\x63","\x08","\xa8"),
	HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::BEGIN_BITMAP_FILL,"BEGIN_BITMAP_FILL");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::BEGIN_FILL,"BEGIN_FILL");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::BEGIN_GRADIENT_FILL,"BEGIN_GRADIENT_FILL");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::CUBIC_CURVE_TO,"CUBIC_CURVE_TO");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::CURVE_TO,"CURVE_TO");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_CIRCLE,"DRAW_CIRCLE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_ELLIPSE,"DRAW_ELLIPSE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_PATH,"DRAW_PATH");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_RECT,"DRAW_RECT");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_ROUND_RECT,"DRAW_ROUND_RECT");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_TILES,"DRAW_TILES");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::DRAW_TRIANGLES,"DRAW_TRIANGLES");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::END_FILL,"END_FILL");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::LINE_BITMAP_STYLE,"LINE_BITMAP_STYLE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::LINE_GRADIENT_STYLE,"LINE_GRADIENT_STYLE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::LINE_STYLE,"LINE_STYLE");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::LINE_TO,"LINE_TO");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::MOVE_TO,"MOVE_TO");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::OVERRIDE_MATRIX,"OVERRIDE_MATRIX");
	HX_MARK_MEMBER_NAME(DrawCommandType_obj::UNKNOWN,"UNKNOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::BEGIN_BITMAP_FILL,"BEGIN_BITMAP_FILL");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::BEGIN_FILL,"BEGIN_FILL");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::BEGIN_GRADIENT_FILL,"BEGIN_GRADIENT_FILL");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::CUBIC_CURVE_TO,"CUBIC_CURVE_TO");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::CURVE_TO,"CURVE_TO");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_CIRCLE,"DRAW_CIRCLE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_ELLIPSE,"DRAW_ELLIPSE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_PATH,"DRAW_PATH");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_RECT,"DRAW_RECT");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_ROUND_RECT,"DRAW_ROUND_RECT");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_TILES,"DRAW_TILES");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::DRAW_TRIANGLES,"DRAW_TRIANGLES");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::END_FILL,"END_FILL");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::LINE_BITMAP_STYLE,"LINE_BITMAP_STYLE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::LINE_GRADIENT_STYLE,"LINE_GRADIENT_STYLE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::LINE_STYLE,"LINE_STYLE");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::LINE_TO,"LINE_TO");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::MOVE_TO,"MOVE_TO");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::OVERRIDE_MATRIX,"OVERRIDE_MATRIX");
	HX_VISIT_MEMBER_NAME(DrawCommandType_obj::UNKNOWN,"UNKNOWN");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class DrawCommandType_obj::__mClass;

Dynamic __Create_DrawCommandType_obj() { return new DrawCommandType_obj; }

void DrawCommandType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.renderer.DrawCommandType","\xe6","\x40","\xe3","\x94"), hx::TCanCast< DrawCommandType_obj >,sStaticFields,sMemberFields,
	&__Create_DrawCommandType_obj, &__Create,
	&super::__SGetClass(), &CreateDrawCommandType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DrawCommandType_obj::__boot()
{
hx::Static(BEGIN_BITMAP_FILL) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("BEGIN_BITMAP_FILL","\x9d","\x8d","\xc1","\xd5"),0);
hx::Static(BEGIN_FILL) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("BEGIN_FILL","\xb9","\x8f","\x44","\x38"),1);
hx::Static(BEGIN_GRADIENT_FILL) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("BEGIN_GRADIENT_FILL","\x7c","\x12","\x1d","\xec"),2);
hx::Static(CUBIC_CURVE_TO) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("CUBIC_CURVE_TO","\x60","\x8b","\x92","\xac"),3);
hx::Static(CURVE_TO) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("CURVE_TO","\x6b","\xde","\x71","\x42"),4);
hx::Static(DRAW_CIRCLE) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_CIRCLE","\x2b","\x84","\x66","\x49"),5);
hx::Static(DRAW_ELLIPSE) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_ELLIPSE","\x43","\x06","\x1d","\x06"),6);
hx::Static(DRAW_PATH) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_PATH","\x00","\xc7","\x6b","\x9a"),7);
hx::Static(DRAW_RECT) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_RECT","\x7f","\x2e","\xc1","\x9b"),8);
hx::Static(DRAW_ROUND_RECT) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_ROUND_RECT","\xb0","\xa9","\x34","\x42"),9);
hx::Static(DRAW_TILES) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6"),10);
hx::Static(DRAW_TRIANGLES) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("DRAW_TRIANGLES","\x50","\xbd","\x1f","\x61"),11);
hx::Static(END_FILL) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("END_FILL","\xc7","\x2c","\xf5","\x27"),12);
hx::Static(LINE_BITMAP_STYLE) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("LINE_BITMAP_STYLE","\xec","\xc7","\x38","\x2d"),13);
hx::Static(LINE_GRADIENT_STYLE) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("LINE_GRADIENT_STYLE","\x6d","\x7d","\x1a","\xa1"),14);
hx::Static(LINE_STYLE) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("LINE_STYLE","\x46","\x73","\x8d","\xdd"),15);
hx::Static(LINE_TO) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("LINE_TO","\x26","\xf0","\x91","\x9f"),16);
hx::Static(MOVE_TO) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("MOVE_TO","\x29","\x35","\x80","\xca"),17);
hx::Static(OVERRIDE_MATRIX) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("OVERRIDE_MATRIX","\x14","\x63","\x08","\xa8"),18);
hx::Static(UNKNOWN) = hx::CreateEnum< DrawCommandType_obj >(HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),19);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Tilesheet_obj::__construct(::openfl::display::BitmapData image)
{
HX_STACK_FRAME("openfl.display.Tilesheet","new",0x93eb2f79,"openfl.display.Tilesheet.new","openfl/display/Tilesheet.hx",60,0x2fc30619)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
{
	HX_STACK_LINE(62)
	this->__bitmap = image;
	HX_STACK_LINE(63)
	this->__centerPoints = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(64)
	this->__tileRects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(65)
	this->__tileUVs = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	this->__rectTile = tmp;
	HX_STACK_LINE(68)
	::openfl::geom::Rectangle tmp1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	this->__rectUV = tmp1;
	HX_STACK_LINE(69)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	this->__point = tmp2;
}
;
	return null();
}

//Tilesheet_obj::~Tilesheet_obj() { }

Dynamic Tilesheet_obj::__CreateEmpty() { return  new Tilesheet_obj; }
hx::ObjectPtr< Tilesheet_obj > Tilesheet_obj::__new(::openfl::display::BitmapData image)
{  hx::ObjectPtr< Tilesheet_obj > _result_ = new Tilesheet_obj();
	_result_->__construct(image);
	return _result_;}

Dynamic Tilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilesheet_obj > _result_ = new Tilesheet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int Tilesheet_obj::addTileRect( ::openfl::geom::Rectangle rectangle,::openfl::geom::Point centerPoint){
	HX_STACK_FRAME("openfl.display.Tilesheet","addTileRect",0x692b4acc,"openfl.display.Tilesheet.addTileRect","openfl/display/Tilesheet.hx",88,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rectangle,"rectangle")
	HX_STACK_ARG(centerPoint,"centerPoint")
	HX_STACK_LINE(90)
	::openfl::geom::Rectangle tmp = rectangle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	this->__tileRects->push(tmp);
	HX_STACK_LINE(92)
	bool tmp1 = (centerPoint == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	if ((tmp1)){
		HX_STACK_LINE(94)
		::openfl::geom::Point tmp2 = ::openfl::display::Tilesheet_obj::__defaultPoint;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		centerPoint = tmp2;
	}
	HX_STACK_LINE(101)
	::openfl::geom::Point tmp2 = centerPoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	this->__centerPoints->push(tmp2);
	HX_STACK_LINE(104)
	Float tmp3 = rectangle->get_left();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	::openfl::display::BitmapData tmp4 = this->__bitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	Float tmp6 = (Float(tmp3) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(104)
	Float tmp7 = rectangle->get_top();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(104)
	::openfl::display::BitmapData tmp8 = this->__bitmap;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(104)
	int tmp9 = tmp8->height;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(104)
	Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(104)
	Float tmp11 = rectangle->get_right();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(104)
	::openfl::display::BitmapData tmp12 = this->__bitmap;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(104)
	int tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(104)
	Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(104)
	Float tmp15 = rectangle->get_bottom();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(104)
	::openfl::display::BitmapData tmp16 = this->__bitmap;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(104)
	int tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(104)
	Float tmp18 = (Float(tmp15) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(104)
	::openfl::geom::Rectangle tmp19 = ::openfl::geom::Rectangle_obj::__new(tmp6,tmp10,tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(104)
	this->__tileUVs->push(tmp19);
	HX_STACK_LINE(106)
	int tmp20 = this->__tileRects->length;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(106)
	int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(106)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilesheet_obj,addTileRect,return )

Void Tilesheet_obj::drawTiles( ::openfl::display::Graphics graphics,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl.display.Tilesheet","drawTiles",0x3dc16aba,"openfl.display.Tilesheet.drawTiles","openfl/display/Tilesheet.hx",192,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(194)
		bool tmp = smooth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		int tmp1 = flags;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		graphics->drawTiles(hx::ObjectPtr<OBJ_>(this),tileData,tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Tilesheet_obj,drawTiles,(void))

::openfl::geom::Point Tilesheet_obj::getTileCenter( int index){
	HX_STACK_FRAME("openfl.display.Tilesheet","getTileCenter",0x7cc0f032,"openfl.display.Tilesheet.getTileCenter","openfl/display/Tilesheet.hx",198,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(200)
	::openfl::geom::Point tmp = this->__centerPoints->__get(index).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileCenter,return )

::openfl::geom::Rectangle Tilesheet_obj::getTileRect( int index){
	HX_STACK_FRAME("openfl.display.Tilesheet","getTileRect",0x5dc2d641,"openfl.display.Tilesheet.getTileRect","openfl/display/Tilesheet.hx",205,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(207)
	::openfl::geom::Rectangle tmp = this->__tileRects->__get(index).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileRect,return )

::openfl::geom::Rectangle Tilesheet_obj::getTileUVs( int index){
	HX_STACK_FRAME("openfl.display.Tilesheet","getTileUVs",0x006ddc95,"openfl.display.Tilesheet.getTileUVs","openfl/display/Tilesheet.hx",212,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(214)
	::openfl::geom::Rectangle tmp = this->__tileUVs->__get(index).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileUVs,return )

int Tilesheet_obj::TILE_SCALE;

int Tilesheet_obj::TILE_ROTATION;

int Tilesheet_obj::TILE_RGB;

int Tilesheet_obj::TILE_ALPHA;

int Tilesheet_obj::TILE_TRANS_2x2;

int Tilesheet_obj::TILE_RECT;

int Tilesheet_obj::TILE_ORIGIN;

int Tilesheet_obj::TILE_BLEND_NORMAL;

int Tilesheet_obj::TILE_BLEND_ADD;

int Tilesheet_obj::TILE_BLEND_MULTIPLY;

int Tilesheet_obj::TILE_BLEND_SCREEN;

int Tilesheet_obj::TILE_BLEND_SUBTRACT;

int Tilesheet_obj::TILE_BLEND_DARKEN;

int Tilesheet_obj::TILE_BLEND_LIGHTEN;

int Tilesheet_obj::TILE_BLEND_OVERLAY;

int Tilesheet_obj::TILE_BLEND_HARDLIGHT;

int Tilesheet_obj::TILE_BLEND_DIFFERENCE;

int Tilesheet_obj::TILE_BLEND_INVERT;

::openfl::geom::Point Tilesheet_obj::__defaultPoint;


Tilesheet_obj::Tilesheet_obj()
{
}

void Tilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilesheet);
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(__centerPoints,"__centerPoints");
	HX_MARK_MEMBER_NAME(__tileRects,"__tileRects");
	HX_MARK_MEMBER_NAME(__tileUVs,"__tileUVs");
	HX_MARK_MEMBER_NAME(__rectTile,"__rectTile");
	HX_MARK_MEMBER_NAME(__rectUV,"__rectUV");
	HX_MARK_MEMBER_NAME(__point,"__point");
	HX_MARK_END_CLASS();
}

void Tilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(__centerPoints,"__centerPoints");
	HX_VISIT_MEMBER_NAME(__tileRects,"__tileRects");
	HX_VISIT_MEMBER_NAME(__tileUVs,"__tileUVs");
	HX_VISIT_MEMBER_NAME(__rectTile,"__rectTile");
	HX_VISIT_MEMBER_NAME(__rectUV,"__rectUV");
	HX_VISIT_MEMBER_NAME(__point,"__point");
}

Dynamic Tilesheet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__point") ) { return __point; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		if (HX_FIELD_EQ(inName,"__rectUV") ) { return __rectUV; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__tileUVs") ) { return __tileUVs; }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__rectTile") ) { return __rectTile; }
		if (HX_FIELD_EQ(inName,"getTileUVs") ) { return getTileUVs_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__tileRects") ) { return __tileRects; }
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileRect") ) { return getTileRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTileCenter") ) { return getTileCenter_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__centerPoints") ) { return __centerPoints; }
	}
	return super::__Field(inName,inCallProp);
}

bool Tilesheet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultPoint") ) { outValue = __defaultPoint; return true;  }
	}
	return false;
}

Dynamic Tilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__point") ) { __point=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rectUV") ) { __rectUV=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__tileUVs") ) { __tileUVs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__rectTile") ) { __rectTile=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__tileRects") ) { __tileRects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__centerPoints") ) { __centerPoints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tilesheet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultPoint") ) { __defaultPoint=ioValue.Cast< ::openfl::geom::Point >(); return true; }
	}
	return false;
}

void Tilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"));
	outFields->push(HX_HCSTRING("__centerPoints","\xf8","\xbc","\x23","\xdc"));
	outFields->push(HX_HCSTRING("__tileRects","\xa1","\xd9","\x43","\xa0"));
	outFields->push(HX_HCSTRING("__tileUVs","\x64","\x01","\xcb","\xc6"));
	outFields->push(HX_HCSTRING("__rectTile","\x92","\x19","\x4d","\x1b"));
	outFields->push(HX_HCSTRING("__rectUV","\xa5","\x93","\x1f","\xa6"));
	outFields->push(HX_HCSTRING("__point","\x30","\x0d","\xee","\x30"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Tilesheet_obj,__bitmap),HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,__centerPoints),HX_HCSTRING("__centerPoints","\xf8","\xbc","\x23","\xdc")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,__tileRects),HX_HCSTRING("__tileRects","\xa1","\xd9","\x43","\xa0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,__tileUVs),HX_HCSTRING("__tileUVs","\x64","\x01","\xcb","\xc6")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Tilesheet_obj,__rectTile),HX_HCSTRING("__rectTile","\x92","\x19","\x4d","\x1b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Tilesheet_obj,__rectUV),HX_HCSTRING("__rectUV","\xa5","\x93","\x1f","\xa6")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Tilesheet_obj,__point),HX_HCSTRING("__point","\x30","\x0d","\xee","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_SCALE,HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_ROTATION,HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_RGB,HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_ALPHA,HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_TRANS_2x2,HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_RECT,HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_ORIGIN,HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_NORMAL,HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_ADD,HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_MULTIPLY,HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_SCREEN,HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_SUBTRACT,HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_DARKEN,HX_HCSTRING("TILE_BLEND_DARKEN","\xde","\xc6","\x32","\x1d")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_LIGHTEN,HX_HCSTRING("TILE_BLEND_LIGHTEN","\x40","\x29","\x69","\x97")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_OVERLAY,HX_HCSTRING("TILE_BLEND_OVERLAY","\x11","\x22","\x96","\x26")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_HARDLIGHT,HX_HCSTRING("TILE_BLEND_HARDLIGHT","\xcc","\x92","\x06","\xa5")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_DIFFERENCE,HX_HCSTRING("TILE_BLEND_DIFFERENCE","\xfc","\x9f","\xb6","\x5c")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_INVERT,HX_HCSTRING("TILE_BLEND_INVERT","\x95","\x77","\xd1","\x9b")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(void *) &Tilesheet_obj::__defaultPoint,HX_HCSTRING("__defaultPoint","\xef","\x72","\xab","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"),
	HX_HCSTRING("__centerPoints","\xf8","\xbc","\x23","\xdc"),
	HX_HCSTRING("__tileRects","\xa1","\xd9","\x43","\xa0"),
	HX_HCSTRING("__tileUVs","\x64","\x01","\xcb","\xc6"),
	HX_HCSTRING("__rectTile","\x92","\x19","\x4d","\x1b"),
	HX_HCSTRING("__rectUV","\xa5","\x93","\x1f","\xa6"),
	HX_HCSTRING("__point","\x30","\x0d","\xee","\x30"),
	HX_HCSTRING("addTileRect","\xb3","\xaa","\x09","\xb7"),
	HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"),
	HX_HCSTRING("getTileCenter","\xd9","\x57","\xe4","\xc6"),
	HX_HCSTRING("getTileRect","\x28","\x36","\xa1","\xab"),
	HX_HCSTRING("getTileUVs","\x8e","\x36","\xde","\x94"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_DARKEN,"TILE_BLEND_DARKEN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_LIGHTEN,"TILE_BLEND_LIGHTEN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_OVERLAY,"TILE_BLEND_OVERLAY");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_HARDLIGHT,"TILE_BLEND_HARDLIGHT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_DIFFERENCE,"TILE_BLEND_DIFFERENCE");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_INVERT,"TILE_BLEND_INVERT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::__defaultPoint,"__defaultPoint");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_DARKEN,"TILE_BLEND_DARKEN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_LIGHTEN,"TILE_BLEND_LIGHTEN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_OVERLAY,"TILE_BLEND_OVERLAY");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_HARDLIGHT,"TILE_BLEND_HARDLIGHT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_DIFFERENCE,"TILE_BLEND_DIFFERENCE");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_INVERT,"TILE_BLEND_INVERT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::__defaultPoint,"__defaultPoint");
};

#endif

hx::Class Tilesheet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62"),
	HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62"),
	HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc"),
	HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a"),
	HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2"),
	HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f"),
	HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94"),
	HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c"),
	HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89"),
	HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2"),
	HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43"),
	HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f"),
	HX_HCSTRING("TILE_BLEND_DARKEN","\xde","\xc6","\x32","\x1d"),
	HX_HCSTRING("TILE_BLEND_LIGHTEN","\x40","\x29","\x69","\x97"),
	HX_HCSTRING("TILE_BLEND_OVERLAY","\x11","\x22","\x96","\x26"),
	HX_HCSTRING("TILE_BLEND_HARDLIGHT","\xcc","\x92","\x06","\xa5"),
	HX_HCSTRING("TILE_BLEND_DIFFERENCE","\xfc","\x9f","\xb6","\x5c"),
	HX_HCSTRING("TILE_BLEND_INVERT","\x95","\x77","\xd1","\x9b"),
	HX_HCSTRING("__defaultPoint","\xef","\x72","\xab","\x9c"),
	::String(null()) };

void Tilesheet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Tilesheet","\x07","\xff","\xf5","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tilesheet_obj::__GetStatic;
	__mClass->mSetStaticField = &Tilesheet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tilesheet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Tilesheet_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	TILE_BLEND_MULTIPLY= (int)131072;
	TILE_BLEND_SCREEN= (int)262144;
	TILE_BLEND_SUBTRACT= (int)524288;
	TILE_BLEND_DARKEN= (int)1048576;
	TILE_BLEND_LIGHTEN= (int)2097152;
	TILE_BLEND_OVERLAY= (int)4194304;
	TILE_BLEND_HARDLIGHT= (int)8388608;
	TILE_BLEND_DIFFERENCE= (int)16777216;
	TILE_BLEND_INVERT= (int)33554432;
	__defaultPoint= ::openfl::geom::Point_obj::__new((int)0,(int)0);
}

} // end namespace openfl
} // end namespace display

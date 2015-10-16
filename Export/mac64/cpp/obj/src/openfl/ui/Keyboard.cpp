#include <hxcpp.h>

#ifndef INCLUDED_openfl_ui_Keyboard
#include <openfl/ui/Keyboard.h>
#endif
namespace openfl{
namespace ui{

Void Keyboard_obj::__construct()
{
	return null();
}

//Keyboard_obj::~Keyboard_obj() { }

Dynamic Keyboard_obj::__CreateEmpty() { return  new Keyboard_obj; }
hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__new()
{  hx::ObjectPtr< Keyboard_obj > _result_ = new Keyboard_obj();
	_result_->__construct();
	return _result_;}

Dynamic Keyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Keyboard_obj > _result_ = new Keyboard_obj();
	_result_->__construct();
	return _result_;}

int Keyboard_obj::NUMBER_0;

int Keyboard_obj::NUMBER_1;

int Keyboard_obj::NUMBER_2;

int Keyboard_obj::NUMBER_3;

int Keyboard_obj::NUMBER_4;

int Keyboard_obj::NUMBER_5;

int Keyboard_obj::NUMBER_6;

int Keyboard_obj::NUMBER_7;

int Keyboard_obj::NUMBER_8;

int Keyboard_obj::NUMBER_9;

int Keyboard_obj::A;

int Keyboard_obj::B;

int Keyboard_obj::C;

int Keyboard_obj::D;

int Keyboard_obj::E;

int Keyboard_obj::F;

int Keyboard_obj::G;

int Keyboard_obj::H;

int Keyboard_obj::I;

int Keyboard_obj::J;

int Keyboard_obj::K;

int Keyboard_obj::L;

int Keyboard_obj::M;

int Keyboard_obj::N;

int Keyboard_obj::O;

int Keyboard_obj::P;

int Keyboard_obj::Q;

int Keyboard_obj::R;

int Keyboard_obj::S;

int Keyboard_obj::T;

int Keyboard_obj::U;

int Keyboard_obj::V;

int Keyboard_obj::W;

int Keyboard_obj::X;

int Keyboard_obj::Y;

int Keyboard_obj::Z;

int Keyboard_obj::NUMPAD_0;

int Keyboard_obj::NUMPAD_1;

int Keyboard_obj::NUMPAD_2;

int Keyboard_obj::NUMPAD_3;

int Keyboard_obj::NUMPAD_4;

int Keyboard_obj::NUMPAD_5;

int Keyboard_obj::NUMPAD_6;

int Keyboard_obj::NUMPAD_7;

int Keyboard_obj::NUMPAD_8;

int Keyboard_obj::NUMPAD_9;

int Keyboard_obj::NUMPAD_MULTIPLY;

int Keyboard_obj::NUMPAD_ADD;

int Keyboard_obj::NUMPAD_ENTER;

int Keyboard_obj::NUMPAD_SUBTRACT;

int Keyboard_obj::NUMPAD_DECIMAL;

int Keyboard_obj::NUMPAD_DIVIDE;

int Keyboard_obj::F1;

int Keyboard_obj::F2;

int Keyboard_obj::F3;

int Keyboard_obj::F4;

int Keyboard_obj::F5;

int Keyboard_obj::F6;

int Keyboard_obj::F7;

int Keyboard_obj::F8;

int Keyboard_obj::F9;

int Keyboard_obj::F10;

int Keyboard_obj::F11;

int Keyboard_obj::F12;

int Keyboard_obj::F13;

int Keyboard_obj::F14;

int Keyboard_obj::F15;

int Keyboard_obj::BACKSPACE;

int Keyboard_obj::TAB;

int Keyboard_obj::ALTERNATE;

int Keyboard_obj::ENTER;

int Keyboard_obj::COMMAND;

int Keyboard_obj::SHIFT;

int Keyboard_obj::CONTROL;

int Keyboard_obj::BREAK;

int Keyboard_obj::CAPS_LOCK;

int Keyboard_obj::NUMPAD;

int Keyboard_obj::ESCAPE;

int Keyboard_obj::SPACE;

int Keyboard_obj::PAGE_UP;

int Keyboard_obj::PAGE_DOWN;

int Keyboard_obj::END;

int Keyboard_obj::HOME;

int Keyboard_obj::LEFT;

int Keyboard_obj::RIGHT;

int Keyboard_obj::UP;

int Keyboard_obj::DOWN;

int Keyboard_obj::INSERT;

int Keyboard_obj::DELETE;

int Keyboard_obj::NUMLOCK;

int Keyboard_obj::SEMICOLON;

int Keyboard_obj::EQUAL;

int Keyboard_obj::COMMA;

int Keyboard_obj::MINUS;

int Keyboard_obj::PERIOD;

int Keyboard_obj::SLASH;

int Keyboard_obj::BACKQUOTE;

int Keyboard_obj::LEFTBRACKET;

int Keyboard_obj::BACKSLASH;

int Keyboard_obj::RIGHTBRACKET;

int Keyboard_obj::QUOTE;

bool Keyboard_obj::capsLock;

bool Keyboard_obj::numLock;

bool Keyboard_obj::isAccessible( ){
	HX_STACK_FRAME("openfl.ui.Keyboard","isAccessible",0xa9f8adcb,"openfl.ui.Keyboard.isAccessible","openfl/ui/Keyboard.hx",561,0x5fb867bb)
	HX_STACK_LINE(561)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Keyboard_obj,isAccessible,return )

int Keyboard_obj::__convertKeyCode( int key){
	HX_STACK_FRAME("openfl.ui.Keyboard","__convertKeyCode",0x9705d864,"openfl.ui.Keyboard.__convertKeyCode","openfl/ui/Keyboard.hx",566,0x5fb867bb)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(568)
	int tmp = key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(568)
	switch( (int)(tmp)){
		case (int)8: {
			HX_STACK_LINE(570)
			tmp1 = (int)8;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(571)
			tmp1 = (int)9;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(572)
			tmp1 = (int)13;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(573)
			tmp1 = (int)27;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(574)
			tmp1 = (int)32;
		}
		;break;
		case (int)33: {
			HX_STACK_LINE(575)
			tmp1 = (int)49;
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(576)
			tmp1 = (int)222;
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(577)
			tmp1 = (int)51;
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(578)
			tmp1 = (int)52;
		}
		;break;
		case (int)37: {
			HX_STACK_LINE(579)
			tmp1 = (int)53;
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(580)
			tmp1 = (int)55;
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(581)
			tmp1 = (int)222;
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(582)
			tmp1 = (int)57;
		}
		;break;
		case (int)41: {
			HX_STACK_LINE(583)
			tmp1 = (int)48;
		}
		;break;
		case (int)42: {
			HX_STACK_LINE(584)
			tmp1 = (int)56;
		}
		;break;
		case (int)44: {
			HX_STACK_LINE(586)
			tmp1 = (int)188;
		}
		;break;
		case (int)45: {
			HX_STACK_LINE(587)
			tmp1 = (int)189;
		}
		;break;
		case (int)46: {
			HX_STACK_LINE(588)
			tmp1 = (int)190;
		}
		;break;
		case (int)47: {
			HX_STACK_LINE(589)
			tmp1 = (int)191;
		}
		;break;
		case (int)48: {
			HX_STACK_LINE(590)
			tmp1 = (int)48;
		}
		;break;
		case (int)49: {
			HX_STACK_LINE(591)
			tmp1 = (int)49;
		}
		;break;
		case (int)50: {
			HX_STACK_LINE(592)
			tmp1 = (int)50;
		}
		;break;
		case (int)51: {
			HX_STACK_LINE(593)
			tmp1 = (int)51;
		}
		;break;
		case (int)52: {
			HX_STACK_LINE(594)
			tmp1 = (int)52;
		}
		;break;
		case (int)53: {
			HX_STACK_LINE(595)
			tmp1 = (int)53;
		}
		;break;
		case (int)54: {
			HX_STACK_LINE(596)
			tmp1 = (int)54;
		}
		;break;
		case (int)55: {
			HX_STACK_LINE(597)
			tmp1 = (int)55;
		}
		;break;
		case (int)56: {
			HX_STACK_LINE(598)
			tmp1 = (int)56;
		}
		;break;
		case (int)57: {
			HX_STACK_LINE(599)
			tmp1 = (int)57;
		}
		;break;
		case (int)58: {
			HX_STACK_LINE(600)
			tmp1 = (int)186;
		}
		;break;
		case (int)59: {
			HX_STACK_LINE(601)
			tmp1 = (int)186;
		}
		;break;
		case (int)60: {
			HX_STACK_LINE(602)
			tmp1 = (int)60;
		}
		;break;
		case (int)61: {
			HX_STACK_LINE(603)
			tmp1 = (int)187;
		}
		;break;
		case (int)62: {
			HX_STACK_LINE(604)
			tmp1 = (int)190;
		}
		;break;
		case (int)63: {
			HX_STACK_LINE(605)
			tmp1 = (int)191;
		}
		;break;
		case (int)64: {
			HX_STACK_LINE(606)
			tmp1 = (int)50;
		}
		;break;
		case (int)91: {
			HX_STACK_LINE(607)
			tmp1 = (int)219;
		}
		;break;
		case (int)92: {
			HX_STACK_LINE(608)
			tmp1 = (int)220;
		}
		;break;
		case (int)93: {
			HX_STACK_LINE(609)
			tmp1 = (int)221;
		}
		;break;
		case (int)94: {
			HX_STACK_LINE(610)
			tmp1 = (int)54;
		}
		;break;
		case (int)95: {
			HX_STACK_LINE(611)
			tmp1 = (int)189;
		}
		;break;
		case (int)96: {
			HX_STACK_LINE(612)
			tmp1 = (int)192;
		}
		;break;
		case (int)97: {
			HX_STACK_LINE(613)
			tmp1 = (int)65;
		}
		;break;
		case (int)98: {
			HX_STACK_LINE(614)
			tmp1 = (int)66;
		}
		;break;
		case (int)99: {
			HX_STACK_LINE(615)
			tmp1 = (int)67;
		}
		;break;
		case (int)100: {
			HX_STACK_LINE(616)
			tmp1 = (int)68;
		}
		;break;
		case (int)101: {
			HX_STACK_LINE(617)
			tmp1 = (int)69;
		}
		;break;
		case (int)102: {
			HX_STACK_LINE(618)
			tmp1 = (int)70;
		}
		;break;
		case (int)103: {
			HX_STACK_LINE(619)
			tmp1 = (int)71;
		}
		;break;
		case (int)104: {
			HX_STACK_LINE(620)
			tmp1 = (int)72;
		}
		;break;
		case (int)105: {
			HX_STACK_LINE(621)
			tmp1 = (int)73;
		}
		;break;
		case (int)106: {
			HX_STACK_LINE(622)
			tmp1 = (int)74;
		}
		;break;
		case (int)107: {
			HX_STACK_LINE(623)
			tmp1 = (int)75;
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(624)
			tmp1 = (int)76;
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(625)
			tmp1 = (int)77;
		}
		;break;
		case (int)110: {
			HX_STACK_LINE(626)
			tmp1 = (int)78;
		}
		;break;
		case (int)111: {
			HX_STACK_LINE(627)
			tmp1 = (int)79;
		}
		;break;
		case (int)112: {
			HX_STACK_LINE(628)
			tmp1 = (int)80;
		}
		;break;
		case (int)113: {
			HX_STACK_LINE(629)
			tmp1 = (int)81;
		}
		;break;
		case (int)114: {
			HX_STACK_LINE(630)
			tmp1 = (int)82;
		}
		;break;
		case (int)115: {
			HX_STACK_LINE(631)
			tmp1 = (int)83;
		}
		;break;
		case (int)116: {
			HX_STACK_LINE(632)
			tmp1 = (int)84;
		}
		;break;
		case (int)117: {
			HX_STACK_LINE(633)
			tmp1 = (int)85;
		}
		;break;
		case (int)118: {
			HX_STACK_LINE(634)
			tmp1 = (int)86;
		}
		;break;
		case (int)119: {
			HX_STACK_LINE(635)
			tmp1 = (int)87;
		}
		;break;
		case (int)120: {
			HX_STACK_LINE(636)
			tmp1 = (int)88;
		}
		;break;
		case (int)121: {
			HX_STACK_LINE(637)
			tmp1 = (int)89;
		}
		;break;
		case (int)122: {
			HX_STACK_LINE(638)
			tmp1 = (int)90;
		}
		;break;
		case (int)127: {
			HX_STACK_LINE(639)
			tmp1 = (int)46;
		}
		;break;
		case (int)1073741881: {
			HX_STACK_LINE(640)
			tmp1 = (int)20;
		}
		;break;
		case (int)1073741882: {
			HX_STACK_LINE(641)
			tmp1 = (int)112;
		}
		;break;
		case (int)1073741883: {
			HX_STACK_LINE(642)
			tmp1 = (int)113;
		}
		;break;
		case (int)1073741884: {
			HX_STACK_LINE(643)
			tmp1 = (int)114;
		}
		;break;
		case (int)1073741885: {
			HX_STACK_LINE(644)
			tmp1 = (int)115;
		}
		;break;
		case (int)1073741886: {
			HX_STACK_LINE(645)
			tmp1 = (int)116;
		}
		;break;
		case (int)1073741887: {
			HX_STACK_LINE(646)
			tmp1 = (int)117;
		}
		;break;
		case (int)1073741888: {
			HX_STACK_LINE(647)
			tmp1 = (int)118;
		}
		;break;
		case (int)1073741889: {
			HX_STACK_LINE(648)
			tmp1 = (int)119;
		}
		;break;
		case (int)1073741890: {
			HX_STACK_LINE(649)
			tmp1 = (int)120;
		}
		;break;
		case (int)1073741891: {
			HX_STACK_LINE(650)
			tmp1 = (int)121;
		}
		;break;
		case (int)1073741892: {
			HX_STACK_LINE(651)
			tmp1 = (int)122;
		}
		;break;
		case (int)1073741893: {
			HX_STACK_LINE(652)
			tmp1 = (int)123;
		}
		;break;
		case (int)1073741894: {
			HX_STACK_LINE(653)
			tmp1 = (int)301;
		}
		;break;
		case (int)1073741895: {
			HX_STACK_LINE(654)
			tmp1 = (int)145;
		}
		;break;
		case (int)1073741896: {
			HX_STACK_LINE(655)
			tmp1 = (int)19;
		}
		;break;
		case (int)1073741897: {
			HX_STACK_LINE(656)
			tmp1 = (int)45;
		}
		;break;
		case (int)1073741898: {
			HX_STACK_LINE(657)
			tmp1 = (int)36;
		}
		;break;
		case (int)1073741899: {
			HX_STACK_LINE(658)
			tmp1 = (int)33;
		}
		;break;
		case (int)1073741901: {
			HX_STACK_LINE(659)
			tmp1 = (int)35;
		}
		;break;
		case (int)1073741902: {
			HX_STACK_LINE(660)
			tmp1 = (int)34;
		}
		;break;
		case (int)1073741903: {
			HX_STACK_LINE(661)
			tmp1 = (int)39;
		}
		;break;
		case (int)1073741904: {
			HX_STACK_LINE(662)
			tmp1 = (int)37;
		}
		;break;
		case (int)1073741905: {
			HX_STACK_LINE(663)
			tmp1 = (int)40;
		}
		;break;
		case (int)1073741906: {
			HX_STACK_LINE(664)
			tmp1 = (int)38;
		}
		;break;
		case (int)1073741907: {
			HX_STACK_LINE(665)
			tmp1 = (int)144;
		}
		;break;
		case (int)1073741908: {
			HX_STACK_LINE(666)
			tmp1 = (int)111;
		}
		;break;
		case (int)1073741909: {
			HX_STACK_LINE(667)
			tmp1 = (int)106;
		}
		;break;
		case (int)1073741910: {
			HX_STACK_LINE(668)
			tmp1 = (int)109;
		}
		;break;
		case (int)1073741911: {
			HX_STACK_LINE(669)
			tmp1 = (int)107;
		}
		;break;
		case (int)1073741912: {
			HX_STACK_LINE(670)
			tmp1 = (int)108;
		}
		;break;
		case (int)1073741913: {
			HX_STACK_LINE(671)
			tmp1 = (int)97;
		}
		;break;
		case (int)1073741914: {
			HX_STACK_LINE(672)
			tmp1 = (int)98;
		}
		;break;
		case (int)1073741915: {
			HX_STACK_LINE(673)
			tmp1 = (int)99;
		}
		;break;
		case (int)1073741916: {
			HX_STACK_LINE(674)
			tmp1 = (int)100;
		}
		;break;
		case (int)1073741917: {
			HX_STACK_LINE(675)
			tmp1 = (int)101;
		}
		;break;
		case (int)1073741918: {
			HX_STACK_LINE(676)
			tmp1 = (int)102;
		}
		;break;
		case (int)1073741919: {
			HX_STACK_LINE(677)
			tmp1 = (int)103;
		}
		;break;
		case (int)1073741920: {
			HX_STACK_LINE(678)
			tmp1 = (int)104;
		}
		;break;
		case (int)1073741921: {
			HX_STACK_LINE(679)
			tmp1 = (int)105;
		}
		;break;
		case (int)1073741922: {
			HX_STACK_LINE(680)
			tmp1 = (int)96;
		}
		;break;
		case (int)1073741923: {
			HX_STACK_LINE(681)
			tmp1 = (int)110;
		}
		;break;
		case (int)1073741925: {
			HX_STACK_LINE(682)
			tmp1 = (int)302;
		}
		;break;
		case (int)1073741928: {
			HX_STACK_LINE(685)
			tmp1 = (int)124;
		}
		;break;
		case (int)1073741929: {
			HX_STACK_LINE(686)
			tmp1 = (int)125;
		}
		;break;
		case (int)1073741930: {
			HX_STACK_LINE(687)
			tmp1 = (int)126;
		}
		;break;
		case (int)1073741982: {
			HX_STACK_LINE(718)
			tmp1 = (int)13;
		}
		;break;
		case (int)1073742044: {
			HX_STACK_LINE(769)
			tmp1 = (int)110;
		}
		;break;
		case (int)1073742048: {
			HX_STACK_LINE(771)
			tmp1 = (int)17;
		}
		;break;
		case (int)1073742049: {
			HX_STACK_LINE(772)
			tmp1 = (int)16;
		}
		;break;
		case (int)1073742050: {
			HX_STACK_LINE(773)
			tmp1 = (int)18;
		}
		;break;
		case (int)1073742051: {
			HX_STACK_LINE(774)
			tmp1 = (int)15;
		}
		;break;
		case (int)1073742052: {
			HX_STACK_LINE(775)
			tmp1 = (int)17;
		}
		;break;
		case (int)1073742053: {
			HX_STACK_LINE(776)
			tmp1 = (int)16;
		}
		;break;
		case (int)1073742054: {
			HX_STACK_LINE(777)
			tmp1 = (int)18;
		}
		;break;
		case (int)1073742055: {
			HX_STACK_LINE(778)
			tmp1 = (int)15;
		}
		;break;
		default: {
			HX_STACK_LINE(805)
			tmp1 = key;
		}
	}
	HX_STACK_LINE(568)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,__convertKeyCode,return )

int Keyboard_obj::__getCharCode( int key,hx::Null< bool >  __o_shift){
bool shift = __o_shift.Default(false);
	HX_STACK_FRAME("openfl.ui.Keyboard","__getCharCode",0x5c5ae14e,"openfl.ui.Keyboard.__getCharCode","openfl/ui/Keyboard.hx",812,0x5fb867bb)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(shift,"shift")
{
		HX_STACK_LINE(814)
		bool tmp = shift;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(814)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(814)
		if ((tmp1)){
			HX_STACK_LINE(816)
			int tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(816)
			switch( (int)(tmp2)){
				case (int)8: {
					HX_STACK_LINE(818)
					return (int)8;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(819)
					return (int)9;
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(820)
					return (int)13;
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(821)
					return (int)27;
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(822)
					return (int)32;
				}
				;break;
				case (int)186: {
					HX_STACK_LINE(823)
					return (int)59;
				}
				;break;
				case (int)187: {
					HX_STACK_LINE(824)
					return (int)61;
				}
				;break;
				case (int)188: {
					HX_STACK_LINE(825)
					return (int)44;
				}
				;break;
				case (int)189: {
					HX_STACK_LINE(826)
					return (int)45;
				}
				;break;
				case (int)190: {
					HX_STACK_LINE(827)
					return (int)46;
				}
				;break;
				case (int)191: {
					HX_STACK_LINE(828)
					return (int)47;
				}
				;break;
				case (int)192: {
					HX_STACK_LINE(829)
					return (int)96;
				}
				;break;
				case (int)219: {
					HX_STACK_LINE(830)
					return (int)91;
				}
				;break;
				case (int)220: {
					HX_STACK_LINE(831)
					return (int)92;
				}
				;break;
				case (int)221: {
					HX_STACK_LINE(832)
					return (int)93;
				}
				;break;
				case (int)222: {
					HX_STACK_LINE(833)
					return (int)39;
				}
				;break;
			}
			HX_STACK_LINE(837)
			bool tmp3 = (key >= (int)48);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(837)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(837)
			if ((tmp3)){
				HX_STACK_LINE(837)
				tmp4 = (key <= (int)57);
			}
			else{
				HX_STACK_LINE(837)
				tmp4 = false;
			}
			HX_STACK_LINE(837)
			if ((tmp4)){
				HX_STACK_LINE(839)
				int tmp5 = (key - (int)48);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(839)
				int tmp6 = (tmp5 + (int)48);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(839)
				return tmp6;
			}
			HX_STACK_LINE(843)
			bool tmp5 = (key >= (int)65);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(843)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(843)
			if ((tmp5)){
				HX_STACK_LINE(843)
				tmp6 = (key <= (int)90);
			}
			else{
				HX_STACK_LINE(843)
				tmp6 = false;
			}
			HX_STACK_LINE(843)
			if ((tmp6)){
				HX_STACK_LINE(845)
				int tmp7 = (key - (int)65);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(845)
				int tmp8 = (tmp7 + (int)97);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(845)
				return tmp8;
			}
		}
		else{
			HX_STACK_LINE(851)
			int tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(851)
			switch( (int)(tmp2)){
				case (int)48: {
					HX_STACK_LINE(853)
					return (int)41;
				}
				;break;
				case (int)49: {
					HX_STACK_LINE(854)
					return (int)33;
				}
				;break;
				case (int)50: {
					HX_STACK_LINE(855)
					return (int)64;
				}
				;break;
				case (int)51: {
					HX_STACK_LINE(856)
					return (int)35;
				}
				;break;
				case (int)52: {
					HX_STACK_LINE(857)
					return (int)36;
				}
				;break;
				case (int)53: {
					HX_STACK_LINE(858)
					return (int)37;
				}
				;break;
				case (int)54: {
					HX_STACK_LINE(859)
					return (int)94;
				}
				;break;
				case (int)55: {
					HX_STACK_LINE(860)
					return (int)38;
				}
				;break;
				case (int)56: {
					HX_STACK_LINE(861)
					return (int)42;
				}
				;break;
				case (int)57: {
					HX_STACK_LINE(862)
					return (int)40;
				}
				;break;
				case (int)186: {
					HX_STACK_LINE(863)
					return (int)58;
				}
				;break;
				case (int)187: {
					HX_STACK_LINE(864)
					return (int)43;
				}
				;break;
				case (int)188: {
					HX_STACK_LINE(865)
					return (int)60;
				}
				;break;
				case (int)189: {
					HX_STACK_LINE(866)
					return (int)95;
				}
				;break;
				case (int)190: {
					HX_STACK_LINE(867)
					return (int)62;
				}
				;break;
				case (int)191: {
					HX_STACK_LINE(868)
					return (int)63;
				}
				;break;
				case (int)192: {
					HX_STACK_LINE(869)
					return (int)126;
				}
				;break;
				case (int)219: {
					HX_STACK_LINE(870)
					return (int)123;
				}
				;break;
				case (int)220: {
					HX_STACK_LINE(871)
					return (int)124;
				}
				;break;
				case (int)221: {
					HX_STACK_LINE(872)
					return (int)125;
				}
				;break;
				case (int)222: {
					HX_STACK_LINE(873)
					return (int)34;
				}
				;break;
			}
			HX_STACK_LINE(877)
			bool tmp3 = (key >= (int)65);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(877)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(877)
			if ((tmp3)){
				HX_STACK_LINE(877)
				tmp4 = (key <= (int)90);
			}
			else{
				HX_STACK_LINE(877)
				tmp4 = false;
			}
			HX_STACK_LINE(877)
			if ((tmp4)){
				HX_STACK_LINE(879)
				int tmp5 = (key - (int)65);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(879)
				int tmp6 = (tmp5 + (int)65);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(879)
				return tmp6;
			}
		}
		HX_STACK_LINE(885)
		bool tmp2 = (key >= (int)96);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(885)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(885)
		if ((tmp2)){
			HX_STACK_LINE(885)
			tmp3 = (key <= (int)105);
		}
		else{
			HX_STACK_LINE(885)
			tmp3 = false;
		}
		HX_STACK_LINE(885)
		if ((tmp3)){
			HX_STACK_LINE(887)
			int tmp4 = (key - (int)96);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(887)
			int tmp5 = (tmp4 + (int)48);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(887)
			return tmp5;
		}
		HX_STACK_LINE(891)
		int tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(891)
		switch( (int)(tmp4)){
			case (int)106: {
				HX_STACK_LINE(893)
				return (int)42;
			}
			;break;
			case (int)107: {
				HX_STACK_LINE(894)
				return (int)43;
			}
			;break;
			case (int)108: {
				HX_STACK_LINE(895)
				return (int)44;
			}
			;break;
			case (int)110: {
				HX_STACK_LINE(896)
				return (int)45;
			}
			;break;
			case (int)111: {
				HX_STACK_LINE(897)
				return (int)46;
			}
			;break;
			case (int)46: {
				HX_STACK_LINE(898)
				return (int)127;
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(899)
				return (int)13;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(900)
				return (int)8;
			}
			;break;
		}
		HX_STACK_LINE(904)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Keyboard_obj,__getCharCode,return )

int Keyboard_obj::__getKeyLocation( int key){
	HX_STACK_FRAME("openfl.ui.Keyboard","__getKeyLocation",0xfd1dd5a9,"openfl.ui.Keyboard.__getKeyLocation","openfl/ui/Keyboard.hx",909,0x5fb867bb)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(911)
	int tmp = key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(911)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(911)
	switch( (int)(tmp)){
		case (int)1073742048: case (int)1073742049: case (int)1073742050: case (int)1073742051: {
			HX_STACK_LINE(913)
			tmp1 = (int)1;
		}
		;break;
		case (int)1073742052: case (int)1073742053: case (int)1073742054: case (int)1073742055: {
			HX_STACK_LINE(914)
			tmp1 = (int)2;
		}
		;break;
		case (int)1073741908: case (int)1073741909: case (int)1073741910: case (int)1073741911: case (int)1073741912: case (int)1073741913: case (int)1073741914: case (int)1073741915: case (int)1073741916: case (int)1073741917: case (int)1073741918: case (int)1073741919: case (int)1073741920: case (int)1073741921: case (int)1073741922: case (int)1073741923: case (int)1073742044: {
			HX_STACK_LINE(915)
			tmp1 = (int)3;
		}
		;break;
		default: {
			HX_STACK_LINE(916)
			tmp1 = (int)0;
		}
	}
	HX_STACK_LINE(911)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,__getKeyLocation,return )


Keyboard_obj::Keyboard_obj()
{
}

bool Keyboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numLock") ) { outValue = numLock; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"capsLock") ) { outValue = capsLock; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isAccessible") ) { outValue = isAccessible_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__getCharCode") ) { outValue = __getCharCode_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__convertKeyCode") ) { outValue = __convertKeyCode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__getKeyLocation") ) { outValue = __getKeyLocation_dyn(); return true;  }
	}
	return false;
}

bool Keyboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numLock") ) { numLock=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"capsLock") ) { capsLock=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_0,HX_HCSTRING("NUMBER_0","\xfa","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_1,HX_HCSTRING("NUMBER_1","\xfb","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_2,HX_HCSTRING("NUMBER_2","\xfc","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_3,HX_HCSTRING("NUMBER_3","\xfd","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_4,HX_HCSTRING("NUMBER_4","\xfe","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_5,HX_HCSTRING("NUMBER_5","\xff","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_6,HX_HCSTRING("NUMBER_6","\x00","\x8a","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_7,HX_HCSTRING("NUMBER_7","\x01","\x8a","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_8,HX_HCSTRING("NUMBER_8","\x02","\x8a","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_9,HX_HCSTRING("NUMBER_9","\x03","\x8a","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::C,HX_HCSTRING("C","\x43","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::D,HX_HCSTRING("D","\x44","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::E,HX_HCSTRING("E","\x45","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F,HX_HCSTRING("F","\x46","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::G,HX_HCSTRING("G","\x47","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::H,HX_HCSTRING("H","\x48","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::I,HX_HCSTRING("I","\x49","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::J,HX_HCSTRING("J","\x4a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::K,HX_HCSTRING("K","\x4b","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::L,HX_HCSTRING("L","\x4c","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::M,HX_HCSTRING("M","\x4d","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::N,HX_HCSTRING("N","\x4e","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::O,HX_HCSTRING("O","\x4f","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::Q,HX_HCSTRING("Q","\x51","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::R,HX_HCSTRING("R","\x52","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::S,HX_HCSTRING("S","\x53","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::T,HX_HCSTRING("T","\x54","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::U,HX_HCSTRING("U","\x55","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::V,HX_HCSTRING("V","\x56","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::W,HX_HCSTRING("W","\x57","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::Z,HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_0,HX_HCSTRING("NUMPAD_0","\xfe","\x2e","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_1,HX_HCSTRING("NUMPAD_1","\xff","\x2e","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_2,HX_HCSTRING("NUMPAD_2","\x00","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_3,HX_HCSTRING("NUMPAD_3","\x01","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_4,HX_HCSTRING("NUMPAD_4","\x02","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_5,HX_HCSTRING("NUMPAD_5","\x03","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_6,HX_HCSTRING("NUMPAD_6","\x04","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_7,HX_HCSTRING("NUMPAD_7","\x05","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_8,HX_HCSTRING("NUMPAD_8","\x06","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_9,HX_HCSTRING("NUMPAD_9","\x07","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_MULTIPLY,HX_HCSTRING("NUMPAD_MULTIPLY","\x16","\xd9","\xd8","\x96")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_ADD,HX_HCSTRING("NUMPAD_ADD","\x4f","\x8c","\x28","\x37")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_ENTER,HX_HCSTRING("NUMPAD_ENTER","\xc6","\x52","\xe2","\x0f")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_SUBTRACT,HX_HCSTRING("NUMPAD_SUBTRACT","\x06","\x6c","\x5d","\xf4")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_DECIMAL,HX_HCSTRING("NUMPAD_DECIMAL","\xbf","\xc5","\x36","\x01")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_DIVIDE,HX_HCSTRING("NUMPAD_DIVIDE","\xeb","\x41","\x1f","\x90")},
	{hx::fsInt,(void *) &Keyboard_obj::F1,HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F2,HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F3,HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F4,HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F5,HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F6,HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F7,HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F8,HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F9,HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F10,HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F11,HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F12,HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F13,HX_HCSTRING("F13","\xa8","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F14,HX_HCSTRING("F14","\xa9","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F15,HX_HCSTRING("F15","\xaa","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::BACKSPACE,HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")},
	{hx::fsInt,(void *) &Keyboard_obj::TAB,HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::ALTERNATE,HX_HCSTRING("ALTERNATE","\x1a","\x39","\x8c","\x30")},
	{hx::fsInt,(void *) &Keyboard_obj::ENTER,HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")},
	{hx::fsInt,(void *) &Keyboard_obj::COMMAND,HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01")},
	{hx::fsInt,(void *) &Keyboard_obj::SHIFT,HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")},
	{hx::fsInt,(void *) &Keyboard_obj::CONTROL,HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99")},
	{hx::fsInt,(void *) &Keyboard_obj::BREAK,HX_HCSTRING("BREAK","\x9f","\x5c","\xda","\x36")},
	{hx::fsInt,(void *) &Keyboard_obj::CAPS_LOCK,HX_HCSTRING("CAPS_LOCK","\x09","\x04","\xdb","\xce")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD,HX_HCSTRING("NUMPAD","\xcd","\xce","\x07","\x54")},
	{hx::fsInt,(void *) &Keyboard_obj::ESCAPE,HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")},
	{hx::fsInt,(void *) &Keyboard_obj::SPACE,HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff")},
	{hx::fsInt,(void *) &Keyboard_obj::PAGE_UP,HX_HCSTRING("PAGE_UP","\x8b","\xd9","\x3e","\x0b")},
	{hx::fsInt,(void *) &Keyboard_obj::PAGE_DOWN,HX_HCSTRING("PAGE_DOWN","\x92","\x7b","\x93","\x70")},
	{hx::fsInt,(void *) &Keyboard_obj::END,HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::HOME,HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")},
	{hx::fsInt,(void *) &Keyboard_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &Keyboard_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &Keyboard_obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &Keyboard_obj::INSERT,HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50")},
	{hx::fsInt,(void *) &Keyboard_obj::DELETE,HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMLOCK,HX_HCSTRING("NUMLOCK","\x11","\xe9","\x32","\x30")},
	{hx::fsInt,(void *) &Keyboard_obj::SEMICOLON,HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49")},
	{hx::fsInt,(void *) &Keyboard_obj::EQUAL,HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsInt,(void *) &Keyboard_obj::COMMA,HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8")},
	{hx::fsInt,(void *) &Keyboard_obj::MINUS,HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86")},
	{hx::fsInt,(void *) &Keyboard_obj::PERIOD,HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed")},
	{hx::fsInt,(void *) &Keyboard_obj::SLASH,HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc")},
	{hx::fsInt,(void *) &Keyboard_obj::BACKQUOTE,HX_HCSTRING("BACKQUOTE","\x95","\x8b","\xce","\xa2")},
	{hx::fsInt,(void *) &Keyboard_obj::LEFTBRACKET,HX_HCSTRING("LEFTBRACKET","\xe1","\xa8","\x04","\xa4")},
	{hx::fsInt,(void *) &Keyboard_obj::BACKSLASH,HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3")},
	{hx::fsInt,(void *) &Keyboard_obj::RIGHTBRACKET,HX_HCSTRING("RIGHTBRACKET","\xcc","\x45","\x32","\x57")},
	{hx::fsInt,(void *) &Keyboard_obj::QUOTE,HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb")},
	{hx::fsBool,(void *) &Keyboard_obj::capsLock,HX_HCSTRING("capsLock","\xac","\x08","\xc2","\x11")},
	{hx::fsBool,(void *) &Keyboard_obj::numLock,HX_HCSTRING("numLock","\x51","\x41","\x38","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_0,"NUMBER_0");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_1,"NUMBER_1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_2,"NUMBER_2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_3,"NUMBER_3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_4,"NUMBER_4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_5,"NUMBER_5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_6,"NUMBER_6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_7,"NUMBER_7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_8,"NUMBER_8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_9,"NUMBER_9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::A,"A");
	HX_MARK_MEMBER_NAME(Keyboard_obj::B,"B");
	HX_MARK_MEMBER_NAME(Keyboard_obj::C,"C");
	HX_MARK_MEMBER_NAME(Keyboard_obj::D,"D");
	HX_MARK_MEMBER_NAME(Keyboard_obj::E,"E");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F,"F");
	HX_MARK_MEMBER_NAME(Keyboard_obj::G,"G");
	HX_MARK_MEMBER_NAME(Keyboard_obj::H,"H");
	HX_MARK_MEMBER_NAME(Keyboard_obj::I,"I");
	HX_MARK_MEMBER_NAME(Keyboard_obj::J,"J");
	HX_MARK_MEMBER_NAME(Keyboard_obj::K,"K");
	HX_MARK_MEMBER_NAME(Keyboard_obj::L,"L");
	HX_MARK_MEMBER_NAME(Keyboard_obj::M,"M");
	HX_MARK_MEMBER_NAME(Keyboard_obj::N,"N");
	HX_MARK_MEMBER_NAME(Keyboard_obj::O,"O");
	HX_MARK_MEMBER_NAME(Keyboard_obj::P,"P");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(Keyboard_obj::R,"R");
	HX_MARK_MEMBER_NAME(Keyboard_obj::S,"S");
	HX_MARK_MEMBER_NAME(Keyboard_obj::T,"T");
	HX_MARK_MEMBER_NAME(Keyboard_obj::U,"U");
	HX_MARK_MEMBER_NAME(Keyboard_obj::V,"V");
	HX_MARK_MEMBER_NAME(Keyboard_obj::W,"W");
	HX_MARK_MEMBER_NAME(Keyboard_obj::X,"X");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_0,"NUMPAD_0");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_1,"NUMPAD_1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_2,"NUMPAD_2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_3,"NUMPAD_3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_4,"NUMPAD_4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_5,"NUMPAD_5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_6,"NUMPAD_6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_7,"NUMPAD_7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_8,"NUMPAD_8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_9,"NUMPAD_9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F1,"F1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F2,"F2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F3,"F3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F4,"F4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F5,"F5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F6,"F6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F7,"F7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F8,"F8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F9,"F9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F10,"F10");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F11,"F11");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F12,"F12");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F13,"F13");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F14,"F14");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F15,"F15");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ALTERNATE,"ALTERNATE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Keyboard_obj::COMMAND,"COMMAND");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BREAK,"BREAK");
	HX_MARK_MEMBER_NAME(Keyboard_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD,"NUMPAD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PAGE_UP,"PAGE_UP");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_MARK_MEMBER_NAME(Keyboard_obj::END,"END");
	HX_MARK_MEMBER_NAME(Keyboard_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(Keyboard_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(Keyboard_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Keyboard_obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMLOCK,"NUMLOCK");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(Keyboard_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(Keyboard_obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKQUOTE,"BACKQUOTE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::LEFTBRACKET,"LEFTBRACKET");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(Keyboard_obj::RIGHTBRACKET,"RIGHTBRACKET");
	HX_MARK_MEMBER_NAME(Keyboard_obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::capsLock,"capsLock");
	HX_MARK_MEMBER_NAME(Keyboard_obj::numLock,"numLock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_0,"NUMBER_0");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_1,"NUMBER_1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_2,"NUMBER_2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_3,"NUMBER_3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_4,"NUMBER_4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_5,"NUMBER_5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_6,"NUMBER_6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_7,"NUMBER_7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_8,"NUMBER_8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_9,"NUMBER_9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::A,"A");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::B,"B");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::C,"C");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::D,"D");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::E,"E");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F,"F");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::G,"G");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::H,"H");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::I,"I");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::J,"J");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::K,"K");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::L,"L");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::M,"M");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::N,"N");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::O,"O");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::P,"P");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::R,"R");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::S,"S");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::T,"T");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::U,"U");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::V,"V");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::W,"W");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_0,"NUMPAD_0");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_1,"NUMPAD_1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_2,"NUMPAD_2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_3,"NUMPAD_3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_4,"NUMPAD_4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_5,"NUMPAD_5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_6,"NUMPAD_6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_7,"NUMPAD_7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_8,"NUMPAD_8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_9,"NUMPAD_9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F13,"F13");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F14,"F14");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F15,"F15");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ALTERNATE,"ALTERNATE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::COMMAND,"COMMAND");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BREAK,"BREAK");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD,"NUMPAD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PAGE_UP,"PAGE_UP");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::END,"END");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMLOCK,"NUMLOCK");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKQUOTE,"BACKQUOTE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::LEFTBRACKET,"LEFTBRACKET");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::RIGHTBRACKET,"RIGHTBRACKET");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::capsLock,"capsLock");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::numLock,"numLock");
};

#endif

hx::Class Keyboard_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NUMBER_0","\xfa","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_1","\xfb","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_2","\xfc","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_3","\xfd","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_4","\xfe","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_5","\xff","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_6","\x00","\x8a","\xc6","\x33"),
	HX_HCSTRING("NUMBER_7","\x01","\x8a","\xc6","\x33"),
	HX_HCSTRING("NUMBER_8","\x02","\x8a","\xc6","\x33"),
	HX_HCSTRING("NUMBER_9","\x03","\x8a","\xc6","\x33"),
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("C","\x43","\x00","\x00","\x00"),
	HX_HCSTRING("D","\x44","\x00","\x00","\x00"),
	HX_HCSTRING("E","\x45","\x00","\x00","\x00"),
	HX_HCSTRING("F","\x46","\x00","\x00","\x00"),
	HX_HCSTRING("G","\x47","\x00","\x00","\x00"),
	HX_HCSTRING("H","\x48","\x00","\x00","\x00"),
	HX_HCSTRING("I","\x49","\x00","\x00","\x00"),
	HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),
	HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("M","\x4d","\x00","\x00","\x00"),
	HX_HCSTRING("N","\x4e","\x00","\x00","\x00"),
	HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	HX_HCSTRING("Q","\x51","\x00","\x00","\x00"),
	HX_HCSTRING("R","\x52","\x00","\x00","\x00"),
	HX_HCSTRING("S","\x53","\x00","\x00","\x00"),
	HX_HCSTRING("T","\x54","\x00","\x00","\x00"),
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("V","\x56","\x00","\x00","\x00"),
	HX_HCSTRING("W","\x57","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"),
	HX_HCSTRING("NUMPAD_0","\xfe","\x2e","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_1","\xff","\x2e","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_2","\x00","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_3","\x01","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_4","\x02","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_5","\x03","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_6","\x04","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_7","\x05","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_8","\x06","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_9","\x07","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_MULTIPLY","\x16","\xd9","\xd8","\x96"),
	HX_HCSTRING("NUMPAD_ADD","\x4f","\x8c","\x28","\x37"),
	HX_HCSTRING("NUMPAD_ENTER","\xc6","\x52","\xe2","\x0f"),
	HX_HCSTRING("NUMPAD_SUBTRACT","\x06","\x6c","\x5d","\xf4"),
	HX_HCSTRING("NUMPAD_DECIMAL","\xbf","\xc5","\x36","\x01"),
	HX_HCSTRING("NUMPAD_DIVIDE","\xeb","\x41","\x1f","\x90"),
	HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"),
	HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"),
	HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"),
	HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"),
	HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"),
	HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"),
	HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"),
	HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"),
	HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"),
	HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"),
	HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"),
	HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"),
	HX_HCSTRING("F13","\xa8","\x48","\x35","\x00"),
	HX_HCSTRING("F14","\xa9","\x48","\x35","\x00"),
	HX_HCSTRING("F15","\xaa","\x48","\x35","\x00"),
	HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),
	HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),
	HX_HCSTRING("ALTERNATE","\x1a","\x39","\x8c","\x30"),
	HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),
	HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01"),
	HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),
	HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"),
	HX_HCSTRING("BREAK","\x9f","\x5c","\xda","\x36"),
	HX_HCSTRING("CAPS_LOCK","\x09","\x04","\xdb","\xce"),
	HX_HCSTRING("NUMPAD","\xcd","\xce","\x07","\x54"),
	HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),
	HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"),
	HX_HCSTRING("PAGE_UP","\x8b","\xd9","\x3e","\x0b"),
	HX_HCSTRING("PAGE_DOWN","\x92","\x7b","\x93","\x70"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"),
	HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),
	HX_HCSTRING("NUMLOCK","\x11","\xe9","\x32","\x30"),
	HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"),
	HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"),
	HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"),
	HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"),
	HX_HCSTRING("BACKQUOTE","\x95","\x8b","\xce","\xa2"),
	HX_HCSTRING("LEFTBRACKET","\xe1","\xa8","\x04","\xa4"),
	HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"),
	HX_HCSTRING("RIGHTBRACKET","\xcc","\x45","\x32","\x57"),
	HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"),
	HX_HCSTRING("capsLock","\xac","\x08","\xc2","\x11"),
	HX_HCSTRING("numLock","\x51","\x41","\x38","\x9b"),
	HX_HCSTRING("isAccessible","\xc0","\x82","\xfd","\x3f"),
	HX_HCSTRING("__convertKeyCode","\xd9","\xcb","\x30","\x83"),
	HX_HCSTRING("__getCharCode","\xb9","\x62","\x90","\x0a"),
	HX_HCSTRING("__getKeyLocation","\x1e","\xc9","\x48","\xe9"),
	::String(null()) };

void Keyboard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui.Keyboard","\x43","\xb4","\x37","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Keyboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Keyboard_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Keyboard_obj >;
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

void Keyboard_obj::__boot()
{
	NUMBER_0= (int)48;
	NUMBER_1= (int)49;
	NUMBER_2= (int)50;
	NUMBER_3= (int)51;
	NUMBER_4= (int)52;
	NUMBER_5= (int)53;
	NUMBER_6= (int)54;
	NUMBER_7= (int)55;
	NUMBER_8= (int)56;
	NUMBER_9= (int)57;
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	NUMPAD_0= (int)96;
	NUMPAD_1= (int)97;
	NUMPAD_2= (int)98;
	NUMPAD_3= (int)99;
	NUMPAD_4= (int)100;
	NUMPAD_5= (int)101;
	NUMPAD_6= (int)102;
	NUMPAD_7= (int)103;
	NUMPAD_8= (int)104;
	NUMPAD_9= (int)105;
	NUMPAD_MULTIPLY= (int)106;
	NUMPAD_ADD= (int)107;
	NUMPAD_ENTER= (int)108;
	NUMPAD_SUBTRACT= (int)109;
	NUMPAD_DECIMAL= (int)110;
	NUMPAD_DIVIDE= (int)111;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	F13= (int)124;
	F14= (int)125;
	F15= (int)126;
	BACKSPACE= (int)8;
	TAB= (int)9;
	ALTERNATE= (int)18;
	ENTER= (int)13;
	COMMAND= (int)15;
	SHIFT= (int)16;
	CONTROL= (int)17;
	BREAK= (int)19;
	CAPS_LOCK= (int)20;
	NUMPAD= (int)21;
	ESCAPE= (int)27;
	SPACE= (int)32;
	PAGE_UP= (int)33;
	PAGE_DOWN= (int)34;
	END= (int)35;
	HOME= (int)36;
	LEFT= (int)37;
	RIGHT= (int)39;
	UP= (int)38;
	DOWN= (int)40;
	INSERT= (int)45;
	DELETE= (int)46;
	NUMLOCK= (int)144;
	SEMICOLON= (int)186;
	EQUAL= (int)187;
	COMMA= (int)188;
	MINUS= (int)189;
	PERIOD= (int)190;
	SLASH= (int)191;
	BACKQUOTE= (int)192;
	LEFTBRACKET= (int)219;
	BACKSLASH= (int)220;
	RIGHTBRACKET= (int)221;
	QUOTE= (int)222;
}

} // end namespace openfl
} // end namespace ui

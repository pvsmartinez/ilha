#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace graphics{
namespace format{

Void BMP_obj::__construct()
{
	return null();
}

//BMP_obj::~BMP_obj() { }

Dynamic BMP_obj::__CreateEmpty() { return  new BMP_obj; }
hx::ObjectPtr< BMP_obj > BMP_obj::__new()
{  hx::ObjectPtr< BMP_obj > _result_ = new BMP_obj();
	_result_->__construct();
	return _result_;}

Dynamic BMP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BMP_obj > _result_ = new BMP_obj();
	_result_->__construct();
	return _result_;}

::lime::utils::ByteArray BMP_obj::encode( ::lime::graphics::Image image,::lime::graphics::format::BMPType type){
	HX_STACK_FRAME("lime.graphics.format.BMP","encode",0xdcae556c,"lime.graphics.format.BMP.encode","lime/graphics/format/BMP.hx",12,0xe68a6e47)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(14)
	bool tmp = image->get_premultiplied();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	if ((tmp1)){
		HX_STACK_LINE(14)
		int tmp3 = image->get_format();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		tmp2 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(14)
		tmp2 = true;
	}
	HX_STACK_LINE(14)
	if ((tmp2)){
		HX_STACK_LINE(18)
		::lime::graphics::Image tmp3 = image->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		image = tmp3;
		HX_STACK_LINE(19)
		image->set_premultiplied(false);
		HX_STACK_LINE(20)
		image->set_format((int)0);
	}
	HX_STACK_LINE(24)
	bool tmp3 = (type == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	if ((tmp3)){
		HX_STACK_LINE(26)
		type = ::lime::graphics::format::BMPType_obj::RGB;
	}
	HX_STACK_LINE(30)
	int fileHeaderLength = (int)14;		HX_STACK_VAR(fileHeaderLength,"fileHeaderLength");
	HX_STACK_LINE(31)
	int infoHeaderLength = (int)40;		HX_STACK_VAR(infoHeaderLength,"infoHeaderLength");
	HX_STACK_LINE(32)
	int tmp4 = (image->width * image->height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	int tmp5 = (tmp4 * (int)4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	int pixelValuesLength = tmp5;		HX_STACK_VAR(pixelValuesLength,"pixelValuesLength");
	HX_STACK_LINE(34)
	bool tmp6 = (type != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	if ((tmp6)){
		HX_STACK_LINE(34)
		switch( (int)(type->__Index())){
			case (int)1: {
				HX_STACK_LINE(38)
				infoHeaderLength = (int)108;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(42)
				fileHeaderLength = (int)0;
				HX_STACK_LINE(43)
				int tmp7 = (image->width * image->height);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				hx::AddEq(pixelValuesLength,tmp7);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(47)
				int tmp7 = (image->width * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				int tmp8 = (image->width * (int)3);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				int tmp9 = hx::Mod(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				int tmp11 = (image->height * (int)3);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(47)
				int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(47)
				int tmp13 = (image->height * (int)3);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(47)
				int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				pixelValuesLength = tmp14;
			}
			;break;
			default: {
			}
		}
	}
	else{
	}
	HX_STACK_LINE(54)
	int tmp7 = (fileHeaderLength + infoHeaderLength);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	int tmp8 = pixelValuesLength;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(54)
	::lime::utils::ByteArray tmp10 = ::lime::utils::ByteArray_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(54)
	::lime::utils::ByteArray data = tmp10;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		data->littleEndian = tmp11;
		HX_STACK_LINE(61)
		false;
	}
	HX_STACK_LINE(64)
	bool tmp11 = (fileHeaderLength > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(64)
	if ((tmp11)){
		HX_STACK_LINE(66)
		data->writeByte((int)66);
		HX_STACK_LINE(67)
		data->writeByte((int)77);
		HX_STACK_LINE(68)
		int tmp12 = data->length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(68)
		data->writeInt(tmp12);
		HX_STACK_LINE(69)
		data->writeShort((int)0);
		HX_STACK_LINE(70)
		data->writeShort((int)0);
		HX_STACK_LINE(71)
		int tmp13 = (fileHeaderLength + infoHeaderLength);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(71)
		data->writeInt(tmp13);
	}
	HX_STACK_LINE(75)
	int tmp12 = infoHeaderLength;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(75)
	data->writeInt(tmp12);
	HX_STACK_LINE(76)
	int tmp13 = image->width;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(76)
	data->writeInt(tmp13);
	HX_STACK_LINE(77)
	bool tmp14 = (type == ::lime::graphics::format::BMPType_obj::ICO);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(77)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(77)
	if ((tmp14)){
		HX_STACK_LINE(77)
		tmp15 = (image->height * (int)2);
	}
	else{
		HX_STACK_LINE(77)
		tmp15 = image->height;
	}
	HX_STACK_LINE(77)
	data->writeInt(tmp15);
	HX_STACK_LINE(78)
	data->writeShort((int)1);
	HX_STACK_LINE(79)
	bool tmp16 = (type == ::lime::graphics::format::BMPType_obj::RGB);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(79)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(79)
	if ((tmp16)){
		HX_STACK_LINE(79)
		tmp17 = (int)24;
	}
	else{
		HX_STACK_LINE(79)
		tmp17 = (int)32;
	}
	HX_STACK_LINE(79)
	data->writeShort(tmp17);
	HX_STACK_LINE(80)
	bool tmp18 = (type == ::lime::graphics::format::BMPType_obj::BITFIELD);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(80)
	int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(80)
	if ((tmp18)){
		HX_STACK_LINE(80)
		tmp19 = (int)3;
	}
	else{
		HX_STACK_LINE(80)
		tmp19 = (int)0;
	}
	HX_STACK_LINE(80)
	data->writeInt(tmp19);
	HX_STACK_LINE(81)
	int tmp20 = pixelValuesLength;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(81)
	data->writeInt(tmp20);
	HX_STACK_LINE(82)
	data->writeInt((int)11824);
	HX_STACK_LINE(83)
	data->writeInt((int)11824);
	HX_STACK_LINE(84)
	data->writeInt((int)0);
	HX_STACK_LINE(85)
	data->writeInt((int)0);
	HX_STACK_LINE(87)
	bool tmp21 = (type == ::lime::graphics::format::BMPType_obj::BITFIELD);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(87)
	if ((tmp21)){
		HX_STACK_LINE(89)
		data->writeInt((int)16711680);
		HX_STACK_LINE(90)
		data->writeInt((int)65280);
		HX_STACK_LINE(91)
		data->writeInt((int)255);
		HX_STACK_LINE(92)
		data->writeInt((int)-16777216);
		HX_STACK_LINE(94)
		data->writeByte((int)32);
		HX_STACK_LINE(95)
		data->writeByte((int)110);
		HX_STACK_LINE(96)
		data->writeByte((int)105);
		HX_STACK_LINE(97)
		data->writeByte((int)87);
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			while((true)){
				HX_STACK_LINE(99)
				bool tmp22 = (_g < (int)48);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(99)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(99)
				if ((tmp23)){
					HX_STACK_LINE(99)
					break;
				}
				HX_STACK_LINE(99)
				int tmp24 = (_g)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(99)
				int i = tmp24;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(101)
				data->writeByte((int)0);
			}
		}
	}
	HX_STACK_LINE(107)
	::lime::math::Rectangle tmp22 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(107)
	::lime::utils::ByteArray tmp23 = image->getPixels(tmp22,(int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(107)
	::lime::utils::ByteArray pixels = tmp23;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(108)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(108)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(108)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(108)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(110)
	bool tmp24 = (type != null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(110)
	if ((tmp24)){
		HX_STACK_LINE(110)
		switch( (int)(type->__Index())){
			case (int)1: {
				HX_STACK_LINE(114)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(114)
				int _g = image->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(114)
				while((true)){
					HX_STACK_LINE(114)
					bool tmp25 = (_g1 < _g);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(114)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(114)
					if ((tmp26)){
						HX_STACK_LINE(114)
						break;
					}
					HX_STACK_LINE(114)
					int tmp27 = (_g1)++;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(114)
					int y = tmp27;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(116)
					int tmp28 = (image->height - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(116)
					int tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(116)
					int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(116)
					int tmp31 = (tmp30 * (int)4);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(116)
					int tmp32 = image->width;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(116)
					int tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(116)
					pixels->position = tmp33;
					HX_STACK_LINE(118)
					{
						HX_STACK_LINE(118)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(118)
						int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(118)
						while((true)){
							HX_STACK_LINE(118)
							bool tmp34 = (_g3 < _g2);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(118)
							bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(118)
							if ((tmp35)){
								HX_STACK_LINE(118)
								break;
							}
							HX_STACK_LINE(118)
							int tmp36 = (_g3)++;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(118)
							int x = tmp36;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(120)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(120)
							{
								HX_STACK_LINE(120)
								bool tmp38 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(120)
								int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(120)
								if ((tmp38)){
									HX_STACK_LINE(120)
									int tmp40 = (pixels->position)++;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(120)
									int pos = tmp40;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(120)
									tmp39 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(120)
									tmp39 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(120)
								int val = tmp39;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(120)
								int tmp40 = (int(val) & int((int)128));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(120)
								bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(120)
								if ((tmp41)){
									HX_STACK_LINE(120)
									tmp37 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(120)
									tmp37 = val;
								}
							}
							HX_STACK_LINE(120)
							a = tmp37;
							HX_STACK_LINE(121)
							int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								bool tmp39 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(121)
								int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(121)
								if ((tmp39)){
									HX_STACK_LINE(121)
									int tmp41 = (pixels->position)++;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(121)
									int pos = tmp41;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(121)
									tmp40 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(121)
									tmp40 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(121)
								int val = tmp40;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(121)
								int tmp41 = (int(val) & int((int)128));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(121)
								bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(121)
								if ((tmp42)){
									HX_STACK_LINE(121)
									tmp38 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(121)
									tmp38 = val;
								}
							}
							HX_STACK_LINE(121)
							r = tmp38;
							HX_STACK_LINE(122)
							int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								bool tmp40 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(122)
								int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(122)
								if ((tmp40)){
									HX_STACK_LINE(122)
									int tmp42 = (pixels->position)++;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(122)
									int pos = tmp42;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(122)
									tmp41 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(122)
									tmp41 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(122)
								int val = tmp41;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(122)
								int tmp42 = (int(val) & int((int)128));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(122)
								bool tmp43 = (tmp42 != (int)0);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(122)
								if ((tmp43)){
									HX_STACK_LINE(122)
									tmp39 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(122)
									tmp39 = val;
								}
							}
							HX_STACK_LINE(122)
							g = tmp39;
							HX_STACK_LINE(123)
							int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(123)
							{
								HX_STACK_LINE(123)
								bool tmp41 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(123)
								int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(123)
								if ((tmp41)){
									HX_STACK_LINE(123)
									int tmp43 = (pixels->position)++;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(123)
									int pos = tmp43;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(123)
									tmp42 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(123)
									tmp42 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(123)
								int val = tmp42;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(123)
								int tmp43 = (int(val) & int((int)128));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(123)
								bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(123)
								if ((tmp44)){
									HX_STACK_LINE(123)
									tmp40 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(123)
									tmp40 = val;
								}
							}
							HX_STACK_LINE(123)
							b = tmp40;
							HX_STACK_LINE(125)
							int tmp41 = b;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(125)
							data->writeByte(tmp41);
							HX_STACK_LINE(126)
							int tmp42 = g;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(126)
							data->writeByte(tmp42);
							HX_STACK_LINE(127)
							int tmp43 = r;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(127)
							data->writeByte(tmp43);
							HX_STACK_LINE(128)
							int tmp44 = a;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(128)
							data->writeByte(tmp44);
						}
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(137)
				int tmp25 = (image->width * image->height);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(137)
				::lime::utils::ByteArray tmp26 = ::lime::utils::ByteArray_obj::__new(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(137)
				::lime::utils::ByteArray andMask = tmp26;		HX_STACK_VAR(andMask,"andMask");
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(143)
					int _g = image->height;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(143)
					while((true)){
						HX_STACK_LINE(143)
						bool tmp27 = (_g1 < _g);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(143)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(143)
						if ((tmp28)){
							HX_STACK_LINE(143)
							break;
						}
						HX_STACK_LINE(143)
						int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(143)
						int y = tmp29;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(145)
						int tmp30 = (image->height - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(145)
						int tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(145)
						int tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(145)
						int tmp33 = (tmp32 * (int)4);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(145)
						int tmp34 = image->width;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(145)
						int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(145)
						pixels->position = tmp35;
						HX_STACK_LINE(147)
						{
							HX_STACK_LINE(147)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(147)
							int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(147)
							while((true)){
								HX_STACK_LINE(147)
								bool tmp36 = (_g3 < _g2);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(147)
								bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(147)
								if ((tmp37)){
									HX_STACK_LINE(147)
									break;
								}
								HX_STACK_LINE(147)
								int tmp38 = (_g3)++;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(147)
								int x = tmp38;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(149)
								int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(149)
								{
									HX_STACK_LINE(149)
									bool tmp40 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(149)
									int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(149)
									if ((tmp40)){
										HX_STACK_LINE(149)
										int tmp42 = (pixels->position)++;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(149)
										int pos = tmp42;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(149)
										tmp41 = pixels->b->__get(pos);
									}
									else{
										HX_STACK_LINE(149)
										tmp41 = pixels->ThrowEOFi();
									}
									HX_STACK_LINE(149)
									int val = tmp41;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(149)
									int tmp42 = (int(val) & int((int)128));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(149)
									bool tmp43 = (tmp42 != (int)0);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(149)
									if ((tmp43)){
										HX_STACK_LINE(149)
										tmp39 = (val - (int)256);
									}
									else{
										HX_STACK_LINE(149)
										tmp39 = val;
									}
								}
								HX_STACK_LINE(149)
								a = tmp39;
								HX_STACK_LINE(150)
								int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(150)
								{
									HX_STACK_LINE(150)
									bool tmp41 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(150)
									int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(150)
									if ((tmp41)){
										HX_STACK_LINE(150)
										int tmp43 = (pixels->position)++;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(150)
										int pos = tmp43;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(150)
										tmp42 = pixels->b->__get(pos);
									}
									else{
										HX_STACK_LINE(150)
										tmp42 = pixels->ThrowEOFi();
									}
									HX_STACK_LINE(150)
									int val = tmp42;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(150)
									int tmp43 = (int(val) & int((int)128));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(150)
									bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(150)
									if ((tmp44)){
										HX_STACK_LINE(150)
										tmp40 = (val - (int)256);
									}
									else{
										HX_STACK_LINE(150)
										tmp40 = val;
									}
								}
								HX_STACK_LINE(150)
								r = tmp40;
								HX_STACK_LINE(151)
								int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(151)
								{
									HX_STACK_LINE(151)
									bool tmp42 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(151)
									int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(151)
									if ((tmp42)){
										HX_STACK_LINE(151)
										int tmp44 = (pixels->position)++;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(151)
										int pos = tmp44;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(151)
										tmp43 = pixels->b->__get(pos);
									}
									else{
										HX_STACK_LINE(151)
										tmp43 = pixels->ThrowEOFi();
									}
									HX_STACK_LINE(151)
									int val = tmp43;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(151)
									int tmp44 = (int(val) & int((int)128));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(151)
									bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(151)
									if ((tmp45)){
										HX_STACK_LINE(151)
										tmp41 = (val - (int)256);
									}
									else{
										HX_STACK_LINE(151)
										tmp41 = val;
									}
								}
								HX_STACK_LINE(151)
								g = tmp41;
								HX_STACK_LINE(152)
								int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(152)
								{
									HX_STACK_LINE(152)
									bool tmp43 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(152)
									int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(152)
									if ((tmp43)){
										HX_STACK_LINE(152)
										int tmp45 = (pixels->position)++;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(152)
										int pos = tmp45;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(152)
										tmp44 = pixels->b->__get(pos);
									}
									else{
										HX_STACK_LINE(152)
										tmp44 = pixels->ThrowEOFi();
									}
									HX_STACK_LINE(152)
									int val = tmp44;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(152)
									int tmp45 = (int(val) & int((int)128));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(152)
									bool tmp46 = (tmp45 != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(152)
									if ((tmp46)){
										HX_STACK_LINE(152)
										tmp42 = (val - (int)256);
									}
									else{
										HX_STACK_LINE(152)
										tmp42 = val;
									}
								}
								HX_STACK_LINE(152)
								b = tmp42;
								HX_STACK_LINE(154)
								int tmp43 = b;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(154)
								data->writeByte(tmp43);
								HX_STACK_LINE(155)
								int tmp44 = g;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(155)
								data->writeByte(tmp44);
								HX_STACK_LINE(156)
								int tmp45 = r;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(156)
								data->writeByte(tmp45);
								HX_STACK_LINE(157)
								int tmp46 = a;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(157)
								data->writeByte(tmp46);
								HX_STACK_LINE(165)
								andMask->writeByte((int)0);
							}
						}
					}
				}
				HX_STACK_LINE(173)
				::lime::utils::ByteArray tmp27 = andMask;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(173)
				data->writeBytes(tmp27,null(),null());
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(177)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(177)
				int _g = image->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(177)
				while((true)){
					HX_STACK_LINE(177)
					bool tmp25 = (_g1 < _g);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(177)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(177)
					if ((tmp26)){
						HX_STACK_LINE(177)
						break;
					}
					HX_STACK_LINE(177)
					int tmp27 = (_g1)++;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(177)
					int y = tmp27;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(179)
					int tmp28 = (image->height - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(179)
					int tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(179)
					int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(179)
					int tmp31 = (tmp30 * (int)4);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(179)
					int tmp32 = image->width;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(179)
					int tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(179)
					pixels->position = tmp33;
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(181)
						int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(181)
						while((true)){
							HX_STACK_LINE(181)
							bool tmp34 = (_g3 < _g2);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(181)
							bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(181)
							if ((tmp35)){
								HX_STACK_LINE(181)
								break;
							}
							HX_STACK_LINE(181)
							int tmp36 = (_g3)++;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(181)
							int x = tmp36;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(183)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(183)
							{
								HX_STACK_LINE(183)
								bool tmp38 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(183)
								int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(183)
								if ((tmp38)){
									HX_STACK_LINE(183)
									int tmp40 = (pixels->position)++;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(183)
									int pos = tmp40;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(183)
									tmp39 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(183)
									tmp39 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(183)
								int val = tmp39;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(183)
								int tmp40 = (int(val) & int((int)128));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(183)
								bool tmp41 = (tmp40 != (int)0);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(183)
								if ((tmp41)){
									HX_STACK_LINE(183)
									tmp37 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(183)
									tmp37 = val;
								}
							}
							HX_STACK_LINE(183)
							a = tmp37;
							HX_STACK_LINE(184)
							int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								bool tmp39 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(184)
								int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(184)
								if ((tmp39)){
									HX_STACK_LINE(184)
									int tmp41 = (pixels->position)++;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(184)
									int pos = tmp41;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(184)
									tmp40 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(184)
									tmp40 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(184)
								int val = tmp40;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(184)
								int tmp41 = (int(val) & int((int)128));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(184)
								bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(184)
								if ((tmp42)){
									HX_STACK_LINE(184)
									tmp38 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(184)
									tmp38 = val;
								}
							}
							HX_STACK_LINE(184)
							r = tmp38;
							HX_STACK_LINE(185)
							int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								bool tmp40 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(185)
								int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(185)
								if ((tmp40)){
									HX_STACK_LINE(185)
									int tmp42 = (pixels->position)++;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(185)
									int pos = tmp42;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(185)
									tmp41 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(185)
									tmp41 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(185)
								int val = tmp41;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(185)
								int tmp42 = (int(val) & int((int)128));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(185)
								bool tmp43 = (tmp42 != (int)0);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(185)
								if ((tmp43)){
									HX_STACK_LINE(185)
									tmp39 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(185)
									tmp39 = val;
								}
							}
							HX_STACK_LINE(185)
							g = tmp39;
							HX_STACK_LINE(186)
							int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(186)
							{
								HX_STACK_LINE(186)
								bool tmp41 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(186)
								int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(186)
								if ((tmp41)){
									HX_STACK_LINE(186)
									int tmp43 = (pixels->position)++;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(186)
									int pos = tmp43;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(186)
									tmp42 = pixels->b->__get(pos);
								}
								else{
									HX_STACK_LINE(186)
									tmp42 = pixels->ThrowEOFi();
								}
								HX_STACK_LINE(186)
								int val = tmp42;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(186)
								int tmp43 = (int(val) & int((int)128));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(186)
								bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(186)
								if ((tmp44)){
									HX_STACK_LINE(186)
									tmp40 = (val - (int)256);
								}
								else{
									HX_STACK_LINE(186)
									tmp40 = val;
								}
							}
							HX_STACK_LINE(186)
							b = tmp40;
							HX_STACK_LINE(188)
							int tmp41 = b;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(188)
							data->writeByte(tmp41);
							HX_STACK_LINE(189)
							int tmp42 = g;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(189)
							data->writeByte(tmp42);
							HX_STACK_LINE(190)
							int tmp43 = r;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(190)
							data->writeByte(tmp43);
						}
					}
					HX_STACK_LINE(194)
					{
						HX_STACK_LINE(194)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(194)
						int tmp34 = (image->width * (int)3);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(194)
						int tmp35 = hx::Mod(tmp34,(int)4);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(194)
						int _g2 = tmp35;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(194)
						while((true)){
							HX_STACK_LINE(194)
							bool tmp36 = (_g3 < _g2);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(194)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(194)
							if ((tmp37)){
								HX_STACK_LINE(194)
								break;
							}
							HX_STACK_LINE(194)
							int tmp38 = (_g3)++;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(194)
							int i = tmp38;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(196)
							data->writeByte((int)0);
						}
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	else{
	}
	HX_STACK_LINE(206)
	::lime::utils::ByteArray tmp25 = data;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(206)
	return tmp25;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

bool BMP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#endif

hx::Class BMP_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	::String(null()) };

void BMP_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.BMP","\x58","\xee","\xa1","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMP_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BMP_obj >;
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

} // end namespace lime
} // end namespace graphics
} // end namespace format

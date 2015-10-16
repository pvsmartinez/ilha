#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void VertexAttribute_obj::__construct(int components,int type,hx::Null< bool >  __o_normalized,::String name,::lime::utils::ArrayBufferView defaultValue)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexAttribute","new",0x2b2790c9,"openfl._internal.renderer.opengl.utils.VertexAttribute.new","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",8,0x4f6c066a)
HX_STACK_THIS(this)
HX_STACK_ARG(components,"components")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_normalized,"normalized")
HX_STACK_ARG(name,"name")
HX_STACK_ARG(defaultValue,"defaultValue")
bool normalized = __o_normalized.Default(false);
{
	HX_STACK_LINE(14)
	this->enabled = true;
	HX_STACK_LINE(11)
	this->normalized = false;
	HX_STACK_LINE(20)
	this->components = components;
	HX_STACK_LINE(21)
	this->type = type;
	HX_STACK_LINE(22)
	this->normalized = normalized;
	HX_STACK_LINE(23)
	this->name = name;
	HX_STACK_LINE(25)
	bool tmp = (defaultValue == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	if ((tmp)){
		HX_STACK_LINE(26)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(26)
			bool tmp2 = (components != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			if ((tmp2)){
				HX_STACK_LINE(26)
				::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(components,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(26)
				this1 = tmp3;
			}
			else{
				HX_STACK_LINE(26)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(26)
				if ((tmp3)){
					HX_STACK_LINE(26)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(26)
					{
						HX_STACK_LINE(26)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(26)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(26)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(26)
						int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(26)
						_this->length = tmp6;
						HX_STACK_LINE(26)
						int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(26)
						_this->byteLength = tmp7;
						HX_STACK_LINE(26)
						::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(26)
						{
							HX_STACK_LINE(26)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(26)
							int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(26)
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(26)
							this2 = tmp10;
							HX_STACK_LINE(26)
							tmp8 = this2;
						}
						HX_STACK_LINE(26)
						_this->buffer = tmp8;
						HX_STACK_LINE(26)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(26)
						tmp4 = _this;
					}
					HX_STACK_LINE(26)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(26)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(26)
					if ((tmp4)){
						HX_STACK_LINE(26)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(26)
						{
							HX_STACK_LINE(26)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(26)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(26)
							::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(26)
							::haxe::io::Bytes srcData = tmp7;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(26)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(26)
							int srcLength = tmp8;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(26)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(26)
							int srcByteOffset = tmp9;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(26)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(26)
							int srcElementSize = tmp10;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(26)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(26)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(26)
							int tmp12 = _this->type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(26)
							bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(26)
							if ((tmp13)){
								HX_STACK_LINE(26)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(26)
								int tmp14 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(26)
								int cloneLength = tmp14;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(26)
								::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(26)
								{
									HX_STACK_LINE(26)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(26)
									int tmp16 = cloneLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(26)
									::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(26)
									this2 = tmp17;
									HX_STACK_LINE(26)
									tmp15 = this2;
								}
								HX_STACK_LINE(26)
								_this->buffer = tmp15;
								HX_STACK_LINE(26)
								::haxe::io::Bytes tmp16 = srcData;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(26)
								int tmp17 = srcByteOffset;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(26)
								int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(26)
								_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
							}
							else{
								HX_STACK_LINE(26)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(26)
							int tmp14 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(26)
							_this->byteLength = tmp14;
							HX_STACK_LINE(26)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(26)
							_this->length = srcLength;
							HX_STACK_LINE(26)
							tmp5 = _this;
						}
						HX_STACK_LINE(26)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(26)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(26)
						if ((tmp5)){
							HX_STACK_LINE(26)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(26)
							{
								HX_STACK_LINE(26)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(26)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(26)
								bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(26)
								if ((tmp8)){
									HX_STACK_LINE(26)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(26)
								int tmp9 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(26)
								bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(26)
								if ((tmp10)){
									HX_STACK_LINE(26)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(26)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(26)
								int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(26)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(26)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(26)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(26)
								if ((tmp12)){
									HX_STACK_LINE(26)
									int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(26)
									newByteLength = tmp13;
									HX_STACK_LINE(26)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(26)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(26)
									if ((tmp15)){
										HX_STACK_LINE(26)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(26)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(26)
									if ((tmp16)){
										HX_STACK_LINE(26)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(26)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(26)
									newByteLength = tmp13;
									HX_STACK_LINE(26)
									int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(26)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(26)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(26)
									if ((tmp15)){
										HX_STACK_LINE(26)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(26)
								_this->buffer = null();
								HX_STACK_LINE(26)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(26)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(26)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(26)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(26)
								_this->length = tmp14;
								HX_STACK_LINE(26)
								tmp6 = _this;
							}
							HX_STACK_LINE(26)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(26)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(26)
			tmp1 = this1;
		}
		HX_STACK_LINE(26)
		this->defaultValue = tmp1;
	}
	else{
		HX_STACK_LINE(28)
		this->defaultValue = defaultValue;
	}
}
;
	return null();
}

//VertexAttribute_obj::~VertexAttribute_obj() { }

Dynamic VertexAttribute_obj::__CreateEmpty() { return  new VertexAttribute_obj; }
hx::ObjectPtr< VertexAttribute_obj > VertexAttribute_obj::__new(int components,int type,hx::Null< bool >  __o_normalized,::String name,::lime::utils::ArrayBufferView defaultValue)
{  hx::ObjectPtr< VertexAttribute_obj > _result_ = new VertexAttribute_obj();
	_result_->__construct(components,type,__o_normalized,name,defaultValue);
	return _result_;}

Dynamic VertexAttribute_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexAttribute_obj > _result_ = new VertexAttribute_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::_internal::renderer::opengl::utils::VertexAttribute VertexAttribute_obj::copy( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexAttribute","copy",0x9039572c,"openfl._internal.renderer.opengl.utils.VertexAttribute.copy","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",33,0x4f6c066a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	int tmp = this->components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = this->normalized;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	::lime::utils::ArrayBufferView tmp4 = this->defaultValue;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexAttribute_obj,copy,return )

int VertexAttribute_obj::getElementsBytes( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexAttribute","getElementsBytes",0x78aa7635,"openfl._internal.renderer.opengl.utils.VertexAttribute.getElementsBytes","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",37,0x4f6c066a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		switch( (int)(tmp2)){
			case (int)5120: case (int)5121: {
				HX_STACK_LINE(39)
				tmp = (int)1;
			}
			;break;
			case (int)5122: case (int)5123: {
				HX_STACK_LINE(40)
				tmp = (int)2;
			}
			;break;
			default: {
				HX_STACK_LINE(41)
				tmp = (int)4;
			}
		}
	}
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexAttribute_obj,getElementsBytes,return )

int VertexAttribute_obj::get_elements( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexAttribute","get_elements",0x541d54b7,"openfl._internal.renderer.opengl.utils.VertexAttribute.get_elements","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",45,0x4f6c066a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	int tmp = this->components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		switch( (int)(tmp3)){
			case (int)5120: case (int)5121: {
				HX_STACK_LINE(46)
				tmp1 = (int)1;
			}
			;break;
			case (int)5122: case (int)5123: {
				HX_STACK_LINE(46)
				tmp1 = (int)2;
			}
			;break;
			default: {
				HX_STACK_LINE(46)
				tmp1 = (int)4;
			}
		}
	}
	HX_STACK_LINE(46)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Float tmp3 = (Float(tmp2) / Float((int)4));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexAttribute_obj,get_elements,return )


VertexAttribute_obj::VertexAttribute_obj()
{
}

void VertexAttribute_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexAttribute);
	HX_MARK_MEMBER_NAME(components,"components");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(defaultValue,"defaultValue");
	HX_MARK_END_CLASS();
}

void VertexAttribute_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(components,"components");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(defaultValue,"defaultValue");
}

Dynamic VertexAttribute_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { if (inCallProp == hx::paccAlways) return get_elements(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { return components; }
		if (HX_FIELD_EQ(inName,"normalized") ) { return normalized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { return defaultValue; }
		if (HX_FIELD_EQ(inName,"get_elements") ) { return get_elements_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getElementsBytes") ) { return getElementsBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexAttribute_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { components=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { defaultValue=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexAttribute_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"));
	outFields->push(HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("elements","\x37","\x36","\xc4","\x83"));
	outFields->push(HX_HCSTRING("defaultValue","\xf0","\xba","\x13","\xe7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VertexAttribute_obj,components),HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a")},
	{hx::fsBool,(int)offsetof(VertexAttribute_obj,normalized),HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81")},
	{hx::fsInt,(int)offsetof(VertexAttribute_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(VertexAttribute_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsBool,(int)offsetof(VertexAttribute_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(VertexAttribute_obj,defaultValue),HX_HCSTRING("defaultValue","\xf0","\xba","\x13","\xe7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"),
	HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("defaultValue","\xf0","\xba","\x13","\xe7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("getElementsBytes","\x3e","\x04","\xbf","\x53"),
	HX_HCSTRING("get_elements","\x40","\xea","\xdd","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexAttribute_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexAttribute_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexAttribute_obj::__mClass;

void VertexAttribute_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.VertexAttribute","\x57","\x78","\x73","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexAttribute_obj >;
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

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

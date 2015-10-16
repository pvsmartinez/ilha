#ifndef INCLUDED_lime_utils_ByteArray
#define INCLUDED_lime_utils_ByteArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,CompressionAlgorithm)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ByteArray_obj : public ::haxe::io::Bytes_obj{
	public:
		typedef ::haxe::io::Bytes_obj super;
		typedef ByteArray_obj OBJ_;
		ByteArray_obj();
		Void __construct(hx::Null< int >  __o_size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.utils.ByteArray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ByteArray_obj > __new(hx::Null< int >  __o_size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArray_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::lime::utils::IMemoryRange_obj *();
		operator ::lime::utils::IDataInput_obj *();
		::String __ToString() const { return HX_HCSTRING("ByteArray","\x51","\x21","\x97","\x5d"); }

		static void __boot();
		typedef int __array_access;
		static ::lime::utils::ByteArray fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::utils::ByteArray readFile( ::String path);
		static Dynamic readFile_dyn();

		static ::lime::utils::ByteArray __fromNativePointer( Dynamic data,int length);
		static Dynamic __fromNativePointer_dyn();

		static Dynamic lime_bytes_from_data_pointer( Float data,int length);
		static Dynamic lime_bytes_from_data_pointer_dyn();

		static Float lime_bytes_get_data_pointer( Dynamic data);
		static Dynamic lime_bytes_get_data_pointer_dyn();

		static Dynamic lime_bytes_read_file( ::String path);
		static Dynamic lime_bytes_read_file_dyn();

		static ::cpp::Function< ::hx::Object * ( Float ,int ) > cffi_lime_bytes_from_data_pointer;
		static ::cpp::Function< Float ( ::hx::Object * ) > cffi_lime_bytes_get_data_pointer;
		static ::cpp::Function< ::hx::Object * ( ::String ) > cffi_lime_bytes_read_file;
		int bytesAvailable;
		int objectEncoding;
		int position;
		int allocated;
		bool littleEndian;
		int byteLength;
		virtual ::String asString( );
		Dynamic asString_dyn();

		virtual Void checkData( int length);
		Dynamic checkData_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void compress( ::lime::utils::CompressionAlgorithm algorithm);
		Dynamic compress_dyn();

		virtual Void deflate( );
		Dynamic deflate_dyn();

		virtual Void ensureElem( int size,bool updateLength);
		Dynamic ensureElem_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual ::lime::utils::ByteArray getByteBuffer( );
		Dynamic getByteBuffer_dyn();

		virtual int getStart( );
		Dynamic getStart_dyn();

		virtual Void inflate( );
		Dynamic inflate_dyn();

		virtual bool readBoolean( );
		Dynamic readBoolean_dyn();

		virtual int readByte( );
		Dynamic readByte_dyn();

		virtual Void readBytes( ::lime::utils::ByteArray bytes,hx::Null< int >  offset,hx::Null< int >  length);
		Dynamic readBytes_dyn();

		virtual Float readDouble( );
		Dynamic readDouble_dyn();

		virtual Float readFloat( );
		Dynamic readFloat_dyn();

		virtual int readInt( );
		Dynamic readInt_dyn();

		virtual ::String readMultiByte( int length,::String charSet);
		Dynamic readMultiByte_dyn();

		virtual int readShort( );
		Dynamic readShort_dyn();

		virtual int readUnsignedByte( );
		Dynamic readUnsignedByte_dyn();

		virtual int readUnsignedInt( );
		Dynamic readUnsignedInt_dyn();

		virtual int readUnsignedShort( );
		Dynamic readUnsignedShort_dyn();

		virtual ::String readUTF( );
		Dynamic readUTF_dyn();

		virtual ::String readUTFBytes( int len);
		Dynamic readUTFBytes_dyn();

		virtual Void setLength( int length);
		Dynamic setLength_dyn();

		virtual ::lime::utils::ByteArray slice( int begin,Dynamic inEnd);
		Dynamic slice_dyn();

		virtual int ThrowEOFi( );
		Dynamic ThrowEOFi_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void uncompress( ::lime::utils::CompressionAlgorithm algorithm);
		Dynamic uncompress_dyn();

		virtual Void write_uncheck( int byte);
		Dynamic write_uncheck_dyn();

		virtual Void writeBoolean( bool value);
		Dynamic writeBoolean_dyn();

		virtual Void writeByte( int value);
		Dynamic writeByte_dyn();

		virtual Void writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  offset,hx::Null< int >  length);
		Dynamic writeBytes_dyn();

		virtual Void writeDouble( Float x);
		Dynamic writeDouble_dyn();

		virtual Void writeFile( ::String path);
		Dynamic writeFile_dyn();

		virtual Void writeFloat( Float x);
		Dynamic writeFloat_dyn();

		virtual Void writeInt( int value);
		Dynamic writeInt_dyn();

		virtual Void writeShort( int value);
		Dynamic writeShort_dyn();

		virtual Void writeUnsignedInt( int value);
		Dynamic writeUnsignedInt_dyn();

		virtual Void writeUnsignedShort( int value);
		Dynamic writeUnsignedShort_dyn();

		virtual Void writeUTF( ::String value);
		Dynamic writeUTF_dyn();

		virtual Void writeUTFBytes( ::String value);
		Dynamic writeUTFBytes_dyn();

		virtual Void __fromBytes( ::haxe::io::Bytes bytes);
		Dynamic __fromBytes_dyn();

		virtual int __get( int pos);
		Dynamic __get_dyn();

		virtual Dynamic __getNativePointer( );
		Dynamic __getNativePointer_dyn();

		virtual Void __set( int pos,int v);
		Dynamic __set_dyn();

		virtual bool get_bigEndian( );
		Dynamic get_bigEndian_dyn();

		virtual bool set_bigEndian( bool value);
		Dynamic set_bigEndian_dyn();

		virtual int get_bytesAvailable( );
		Dynamic get_bytesAvailable_dyn();

		virtual int get_byteLength( );
		Dynamic get_byteLength_dyn();

		virtual ::String get_endian( );
		Dynamic get_endian_dyn();

		virtual ::String set_endian( ::String endian);
		Dynamic set_endian_dyn();

		virtual int set_length( int value);
		Dynamic set_length_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ByteArray */ 

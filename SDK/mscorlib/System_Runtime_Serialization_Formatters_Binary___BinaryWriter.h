#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct Stream; };
#include "System_Runtime_Serialization_Formatters_FormatterTypeStyle.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectWriter; };
namespace mscorlib::System::IO { struct BinaryWriter; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryMethodCall; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryMethodReturn; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryObject; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryObjectWithMap; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryObjectWithMapTyped; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryObjectString; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryArray; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct MemberPrimitiveUnTyped; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct MemberPrimitiveTyped; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectNull; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct MemberReference; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryAssembly; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
namespace mscorlib::System { struct String; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct NameInfo; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct WriteObjectInfo; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System { struct Object; };
#include "System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE.h"

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct __BinaryWriter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* sout;
		mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle;
		mscorlib::System::Collections::Hashtable* objectMapTable;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter;
		mscorlib::System::IO::BinaryWriter* dataWriter;
		int32_t m_nestedObjectCount;
		int32_t nullCount;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* binaryMethodCall;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* binaryMethodReturn;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* binaryObjectWithMap;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* binaryObjectWithMapTyped;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* binaryObjectString;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryArray* binaryArray;
		IL2CPP::Array<uint8_t>* byteBuffer;
		int32_t chunkSize;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* binaryAssembly;
		void _ctor(mscorlib::System::IO::Stream* sout, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle);
		void WriteBegin();
		void WriteEnd();
		void WriteBoolean(bool value);
		void WriteByte(uint8_t value);
		void WriteBytes(IL2CPP::Array<uint8_t>* value);
		void WriteBytes(IL2CPP::Array<uint8_t>* byteA, int32_t offset, int32_t size);
		void WriteChar(wchar_t value);
		void WriteChars(IL2CPP::Array<wchar_t>* value);
		void WriteDecimal(mscorlib::System::Decimal value);
		void WriteSingle(float value);
		void WriteDouble(double value);
		void WriteInt16(int16_t value);
		void WriteInt32(int32_t value);
		void WriteInt64(int64_t value);
		void WriteSByte(int8_t value);
		void WriteString(mscorlib::System::String* value);
		void WriteTimeSpan(mscorlib::System::TimeSpan value);
		void WriteDateTime(mscorlib::System::DateTime value);
		void WriteUInt16(uint16_t value);
		void WriteUInt32(uint32_t value);
		void WriteUInt64(uint64_t value);
		void WriteObjectEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
		void WriteSerializationHeaderEnd();
		void WriteSerializationHeader(int32_t topId, int32_t headerId, int32_t minorVersion, int32_t majorVersion);
		void WriteMethodCall();
		void WriteMethodReturn();
		void WriteObject(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, int32_t numMembers, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes, IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos);
		void WriteObjectString(int32_t objectId, mscorlib::System::String* value);
		void WriteSingleArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length, int32_t lowerBound, mscorlib::System::Array* array);
		void WriteArrayAsBytes(mscorlib::System::Array* array, int32_t typeLength);
		void WriteJaggedArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length, int32_t lowerBound);
		void WriteRectangleArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t rank, IL2CPP::Array<int32_t>* lengthA, IL2CPP::Array<int32_t>* lowerBoundA);
		void WriteObjectByteArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length, int32_t lowerBound, IL2CPP::Array<uint8_t>* byteA);
		void WriteMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* value);
		void WriteNullMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
		void WriteMemberObjectRef(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, int32_t idRef);
		void WriteMemberNested(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo);
		void WriteMemberString(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::String* value);
		void WriteItem(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* value);
		void WriteNullItem(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
		void WriteDelayedNullItem();
		void WriteItemEnd();
		void InternalWriteItemNull();
		void WriteItemObjectRef(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int32_t idRef);
		void WriteAssembly(mscorlib::System::Type* type, mscorlib::System::String* assemblyString, int32_t assemId, bool isNew);
		void WriteValue(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, mscorlib::System::Object* value);
	};
}


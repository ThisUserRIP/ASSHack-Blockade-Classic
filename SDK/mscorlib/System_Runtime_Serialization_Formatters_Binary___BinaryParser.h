#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectReader; };
namespace mscorlib::System::IO { struct Stream; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SizedArray; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SerStack; };
#include "System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnum.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ParseRecord; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryAssemblyInfo; };
namespace mscorlib::System::IO { struct BinaryReader; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryObject; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryObjectWithMap; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryObjectWithMapTyped; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryObjectString; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryCrossAppDomainString; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct MemberPrimitiveTyped; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct MemberPrimitiveUnTyped; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct MemberReference; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectNull; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct MessageEnd; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
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
#include "System_Runtime_Serialization_Formatters_Binary_BinaryHeaderEnum.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE.h"
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectProgress; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct __BinaryParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader;
		mscorlib::System::IO::Stream* input;
		int64_t topId;
		int64_t headerId;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SizedArray* objectMapIdTable;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerStack* stack;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;
		mscorlib::System::Object* expectedTypeInformation;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* PRS;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* systemAssemblyInfo;
		mscorlib::System::IO::BinaryReader* dataReader;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SerStack* opPool;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* bowm;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* bowmt;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* objectString;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* crossAppDomainString;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;
		IL2CPP::Array<uint8_t>* byteBuffer;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;
		struct StaticFields
		{
			mscorlib::System::Text::Encoding* encoding;
			mscorlib::System::Runtime::Serialization::Formatters::Binary::MessageEnd* messageEnd;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* get_SystemAssemblyInfo();
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SizedArray* get_ObjectMapIdTable();
		mscorlib::System::Runtime::Serialization::Formatters::Binary::SizedArray* get_AssemIdToAssemblyTable();
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* get_prs();
		void Run();
		void ReadBegin();
		void ReadEnd();
		bool ReadBoolean();
		uint8_t ReadByte();
		IL2CPP::Array<uint8_t>* ReadBytes(int32_t length);
		void ReadBytes(IL2CPP::Array<uint8_t>* byteA, int32_t offset, int32_t size);
		wchar_t ReadChar();
		IL2CPP::Array<wchar_t>* ReadChars(int32_t length);
		mscorlib::System::Decimal ReadDecimal();
		float ReadSingle();
		double ReadDouble();
		int16_t ReadInt16();
		int32_t ReadInt32();
		int64_t ReadInt64();
		int8_t ReadSByte();
		mscorlib::System::String* ReadString();
		mscorlib::System::TimeSpan ReadTimeSpan();
		mscorlib::System::DateTime ReadDateTime();
		uint16_t ReadUInt16();
		uint32_t ReadUInt32();
		uint64_t ReadUInt64();
		void ReadSerializationHeaderRecord();
		void ReadAssembly(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
		void ReadObject();
		void ReadCrossAppDomainMap();
		void ReadObjectWithMap(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
		void ReadObjectWithMap(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* record);
		void ReadObjectWithMapTyped(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
		void ReadObjectWithMapTyped(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* record);
		void ReadObjectString(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
		void ReadMemberPrimitiveTyped();
		void ReadArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
		void ReadArrayAsBytes(mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
		void ReadMemberPrimitiveUnTyped();
		void ReadMemberReference();
		void ReadObjectNull(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
		void ReadMessageEnd();
		mscorlib::System::Object* ReadValue(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* GetOp();
		void PutOp(mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* op);
		static void _cctor();
	};
}


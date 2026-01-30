#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Runtime_Serialization_Formatters_Binary_InternalParseTypeE.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalObjectTypeE.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalArrayTypeE.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalMemberTypeE.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalMemberValueE.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalObjectPositionE.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ReadObjectInfo; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct PrimitiveArray; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct ParseRecord : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE PRparseTypeEnum;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE PRobjectTypeEnum;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE PRarrayTypeEnum;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE PRmemberTypeEnum;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE PRmemberValueEnum;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE PRobjectPositionEnum;
		mscorlib::System::String* PRname;
		mscorlib::System::String* PRvalue;
		mscorlib::System::Object* PRvarValue;
		mscorlib::System::String* PRkeyDt;
		mscorlib::System::Type* PRdtType;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRdtTypeCode;
		bool PRisEnum;
		int64_t PRobjectId;
		int64_t PRidRef;
		mscorlib::System::String* PRarrayElementTypeString;
		mscorlib::System::Type* PRarrayElementType;
		bool PRisArrayVariant;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRarrayElementTypeCode;
		int32_t PRrank;
		IL2CPP::Array<int32_t>* PRlengthA;
		IL2CPP::Array<int32_t>* PRpositionA;
		IL2CPP::Array<int32_t>* PRlowerBoundA;
		IL2CPP::Array<int32_t>* PRupperBoundA;
		IL2CPP::Array<int32_t>* PRindexMap;
		int32_t PRmemberIndex;
		int32_t PRlinearlength;
		IL2CPP::Array<int32_t>* PRrectangularMap;
		bool PRisLowerBound;
		int64_t PRtopId;
		int64_t PRheaderId;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo;
		bool PRisValueTypeFixup;
		mscorlib::System::Object* PRnewObj;
		IL2CPP::Array<mscorlib::System::Object*>* PRobjectA;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray;
		bool PRisRegistered;
		IL2CPP::Array<mscorlib::System::Object*>* PRmemberData;
		mscorlib::System::Runtime::Serialization::SerializationInfo* PRsi;
		int32_t PRnullCount;
		struct StaticFields
		{
			int32_t parseRecordIdCount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Init();
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnum.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "System_Runtime_Serialization_Formatters_Binary_InternalObjectTypeE.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalMemberTypeE.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalMemberValueE.h"
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ParseRecord; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct ObjectProgress : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isInitial;
		int32_t count;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;
		mscorlib::System::Object* expectedTypeInformation;
		mscorlib::System::String* name;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE objectTypeEnum;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE memberTypeEnum;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE memberValueEnum;
		mscorlib::System::Type* dtType;
		int32_t numItems;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;
		mscorlib::System::Object* typeInformation;
		int32_t nullCount;
		int32_t memberLength;
		IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA;
		IL2CPP::Array<mscorlib::System::Object*>* typeInformationA;
		IL2CPP::Array<mscorlib::System::String*>* memberNames;
		IL2CPP::Array<mscorlib::System::Type*>* memberTypes;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr;
		struct StaticFields
		{
			int32_t opRecordIdCount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Init();
		void ArrayCountIncrement(int32_t value);
		bool GetNext(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& outBinaryTypeEnum, mscorlib::System::Object& outTypeInformation);
		static void _cctor();
	};
}


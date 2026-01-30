#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Serialization_Formatters_Binary_BinaryHeaderEnum.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnum.h"
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryWriter; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryParser; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct BinaryObjectWithMapTyped : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
		int32_t objectId;
		mscorlib::System::String* name;
		int32_t numMembers;
		IL2CPP::Array<mscorlib::System::String*>* memberNames;
		IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA;
		IL2CPP::Array<mscorlib::System::Object*>* typeInformationA;
		IL2CPP::Array<int32_t>* memberAssemIds;
		int32_t assemId;
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
		void Set(int32_t objectId, mscorlib::System::String* name, int32_t numMembers, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, IL2CPP::Array<mscorlib::System::Object*>* typeInformationA, IL2CPP::Array<int32_t>* memberAssemIds, int32_t assemId);
		void Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
		void Read(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
	};
}


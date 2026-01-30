#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnum.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ReadObjectInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectReader; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryAssemblyInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct SizedArray; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct ObjectMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* objectName;
		mscorlib::System::Type* objectType;
		IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA;
		IL2CPP::Array<mscorlib::System::Object*>* typeInformationA;
		IL2CPP::Array<mscorlib::System::Type*>* memberTypes;
		IL2CPP::Array<mscorlib::System::String*>* memberNames;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;
		bool isInitObjectInfo;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader;
		int32_t objectId;
		mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo;
		void _ctor(mscorlib::System::String* objectName, mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);
		void _ctor(mscorlib::System::String* objectName, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, IL2CPP::Array<mscorlib::System::Object*>* typeInformationA, IL2CPP::Array<int32_t>* memberAssemIds, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);
		mscorlib::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateObjectInfo(mscorlib::System::Runtime::Serialization::SerializationInfo& si, IL2CPP::Array<mscorlib::System::Object*>& memberData);
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(mscorlib::System::String* name, mscorlib::System::Type* objectType, IL2CPP::Array<mscorlib::System::String*>* memberNames, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, IL2CPP::Array<mscorlib::System::Object*>* typeInformationA, IL2CPP::Array<int32_t>* memberAssemIds, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int32_t objectId, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);
	};
}


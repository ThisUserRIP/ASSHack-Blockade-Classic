#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Serialization_Formatters_Binary_BinaryTypeEnum.h"
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct WriteObjectInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectWriter; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryWriter; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryParser; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct ObjectReader; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryAssemblyInfo; };
#include "System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct BinaryConverter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetBinaryTypeInfo(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::String* typeName, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, mscorlib::System::Object& typeInformation, int32_t& assemId);
		static mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetParserBinaryTypeInfo(mscorlib::System::Type* type, mscorlib::System::Object& typeInformation);
		static void WriteTypeInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, mscorlib::System::Object* typeInformation, int32_t assemId, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
		static mscorlib::System::Object* ReadTypeInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, int32_t& assemId);
		static void TypeFromInfo(mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, mscorlib::System::Object* typeInformation, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& primitiveTypeEnum, mscorlib::System::String& typeString, mscorlib::System::Type& type, bool& isVariant);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE.h"
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryWriter; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryParser; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct MemberPrimitiveTyped : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum;
		mscorlib::System::Object* value;
		void _ctor();
		void Set(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum, mscorlib::System::Object* value);
		void Write(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
		void Read(mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
		void Dump();
	};
}


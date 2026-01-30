#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Runtime_Serialization_Formatters_Binary_MessageEnum.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct __BinaryWriter; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct IOUtil : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool FlagTest(mscorlib::System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, mscorlib::System::Runtime::Serialization::Formatters::Binary::MessageEnum target);
		static void WriteStringWithCode(mscorlib::System::String* value, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
		static void WriteWithCode(mscorlib::System::Type* type, mscorlib::System::Object* value, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
	};
}


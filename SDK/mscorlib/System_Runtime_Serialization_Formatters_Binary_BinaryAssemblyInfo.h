#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct BinaryAssemblyInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* assemblyString;
		mscorlib::System::Reflection::Assembly* assembly;
		void _ctor(mscorlib::System::String* assemblyString);
		void _ctor(mscorlib::System::String* assemblyString, mscorlib::System::Reflection::Assembly* assembly);
		mscorlib::System::Reflection::Assembly* GetAssembly();
	};
}


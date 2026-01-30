#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Runtime::Serialization
{
	struct SerializationBinder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void BindToName(mscorlib::System::Type* serializedType, mscorlib::System::String& assemblyName, mscorlib::System::String& typeName);
		mscorlib::System::Type* BindToType(mscorlib::System::String* assemblyName, mscorlib::System::String* typeName);
		void _ctor();
	};
}


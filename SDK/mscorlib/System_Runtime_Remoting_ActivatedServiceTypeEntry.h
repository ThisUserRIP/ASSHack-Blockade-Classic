#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_TypeEntry.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Runtime::Remoting
{
	struct ActivatedServiceTypeEntry : mscorlib::System::Runtime::Remoting::TypeEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* obj_type;
		void _ctor(mscorlib::System::String* typeName, mscorlib::System::String* assemblyName);
		mscorlib::System::Type* get_ObjectType();
		mscorlib::System::String* ToString();
	};
}


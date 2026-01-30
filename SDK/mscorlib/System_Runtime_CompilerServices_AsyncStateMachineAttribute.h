#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_CompilerServices_StateMachineAttribute.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct AsyncStateMachineAttribute : mscorlib::System::Runtime::CompilerServices::StateMachineAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Type* stateMachineType);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Runtime_CompilerServices_LoadHint.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct DefaultDependencyAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::CompilerServices::LoadHint loadHint;
		void _ctor(mscorlib::System::Runtime::CompilerServices::LoadHint loadHintArgument);
	};
}


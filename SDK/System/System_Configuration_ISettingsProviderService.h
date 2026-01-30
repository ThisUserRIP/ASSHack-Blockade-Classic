#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System::System::Configuration { struct SettingsProvider; };
namespace System::System::Configuration { struct SettingsProperty; };

namespace System::System::Configuration
{
	struct ISettingsProviderService
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Configuration::SettingsProvider* GetSettingsProvider(System::Configuration::SettingsProperty* property);
	};
}


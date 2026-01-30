#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System::System::Configuration { struct SettingsPropertyValue; };
namespace System::System::Configuration { struct SettingsContext; };
namespace System::System::Configuration { struct SettingsProperty; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Configuration { struct SettingsPropertyCollection; };

namespace System::System::Configuration
{
	struct IApplicationSettingsProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Configuration::SettingsPropertyValue* GetPreviousVersion(System::Configuration::SettingsContext* context, System::Configuration::SettingsProperty* property);
		void Reset(System::Configuration::SettingsContext* context);
		void Upgrade(System::Configuration::SettingsContext* context, System::Configuration::SettingsPropertyCollection* properties);
	};
}


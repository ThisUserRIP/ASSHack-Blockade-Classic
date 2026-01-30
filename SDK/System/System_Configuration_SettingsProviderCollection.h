#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_Provider_ProviderCollection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Configuration { struct SettingsProvider; };
namespace mscorlib::System { struct String; };
namespace System_Configuration::System::Configuration::Provider { struct ProviderBase; };

namespace System::System::Configuration
{
	struct SettingsProviderCollection : System_Configuration::System::Configuration::Provider::ProviderCollection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Configuration::SettingsProvider* get_Item(mscorlib::System::String* name);
		void Add(System_Configuration::System::Configuration::Provider::ProviderBase* provider);
	};
}


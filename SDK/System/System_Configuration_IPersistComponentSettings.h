#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace System::System::Configuration
{
	struct IPersistComponentSettings
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_SaveSettings();
		void set_SaveSettings(bool value);
		mscorlib::System::String* get_SettingsKey();
		void set_SettingsKey(mscorlib::System::String* value);
		void LoadComponentSettings();
		void ResetComponentSettings();
		void SaveComponentSettings();
	};
}


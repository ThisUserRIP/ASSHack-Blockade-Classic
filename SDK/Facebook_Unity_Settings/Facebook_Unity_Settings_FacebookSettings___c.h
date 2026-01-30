#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_Settings_FacebookSettings.h"
namespace Facebook_Unity_Settings::Facebook::Unity::Settings { struct FacebookSettings; };
namespace Facebook_Unity_Settings::Facebook::Unity::Settings { struct FacebookSettings_OnChangeCallback; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity_Settings::Facebook::Unity::Settings
{
	struct FacebookSettings___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings___c* __9;
			mscorlib::System::Action_1<Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_OnChangeCallback>* __9__80_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _SettingsChanged_b__80_0(Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_OnChangeCallback* callback);
	};
}


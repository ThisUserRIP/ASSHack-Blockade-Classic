#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_CancelEventArgs.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Configuration
{
	struct SettingChangingEventArgs : System::ComponentModel::CancelEventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::String* settingName, mscorlib::System::String* settingClass, mscorlib::System::String* settingKey, mscorlib::System::Object* newValue, bool cancel);
		mscorlib::System::Object* get_NewValue();
		mscorlib::System::String* get_SettingClass();
		mscorlib::System::String* get_SettingKey();
		mscorlib::System::String* get_SettingName();
	};
}


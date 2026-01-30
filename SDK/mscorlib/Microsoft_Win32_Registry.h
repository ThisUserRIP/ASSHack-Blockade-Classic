#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::Microsoft::Win32 { struct RegistryKey; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "Microsoft_Win32_RegistryValueKind.h"

namespace mscorlib::Microsoft::Win32
{
	struct Registry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::Microsoft::Win32::RegistryKey* ClassesRoot;
			mscorlib::Microsoft::Win32::RegistryKey* CurrentConfig;
			mscorlib::Microsoft::Win32::RegistryKey* CurrentUser;
			mscorlib::Microsoft::Win32::RegistryKey* DynData;
			mscorlib::Microsoft::Win32::RegistryKey* LocalMachine;
			mscorlib::Microsoft::Win32::RegistryKey* PerformanceData;
			mscorlib::Microsoft::Win32::RegistryKey* Users;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::Microsoft::Win32::RegistryKey* ToKey(mscorlib::System::String* keyName, bool setting);
		static void SetValue(mscorlib::System::String* keyName, mscorlib::System::String* valueName, mscorlib::System::Object* value, mscorlib::Microsoft::Win32::RegistryValueKind valueKind);
		static mscorlib::System::Object* GetValue(mscorlib::System::String* keyName, mscorlib::System::String* valueName, mscorlib::System::Object* defaultValue);
		static void _cctor();
	};
}


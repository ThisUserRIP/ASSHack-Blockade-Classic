#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::Microsoft::Win32 { struct RegistryKey; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "Microsoft_Win32_RegistryValueOptions.h"
#include "Microsoft_Win32_RegistryValueKind.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace mscorlib::Microsoft::Win32
{
	struct IRegistryApi
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Microsoft::Win32::RegistryKey* CreateSubKey(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* keyname);
		mscorlib::Microsoft::Win32::RegistryKey* OpenSubKey(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* keyname, bool writtable);
		void Flush(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		void Close(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		mscorlib::System::Object* GetValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::System::Object* default_value, mscorlib::Microsoft::Win32::RegistryValueOptions options);
		IL2CPP::Array<mscorlib::System::String*>* GetSubKeyNames(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		mscorlib::System::String* ToString(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		void SetValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::Microsoft::Win32::RegistryValueKind valueKind);
		intptr_t GetHandle(mscorlib::Microsoft::Win32::RegistryKey* key);
	};
}


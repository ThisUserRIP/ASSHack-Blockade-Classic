#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::Microsoft::Win32::SafeHandles { struct SafeRegistryHandle; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::Microsoft::Win32 { struct IRegistryApi; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Microsoft_Win32_RegistryHive.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "Microsoft_Win32_RegistryValueKind.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct IOException; };

namespace mscorlib::Microsoft::Win32
{
	struct RegistryKey : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* handle;
		mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle* safe_handle;
		mscorlib::System::Object* hive;
		mscorlib::System::String* qname;
		bool isRemoteRoot;
		bool isWritable;
		struct StaticFields
		{
			mscorlib::Microsoft::Win32::IRegistryApi* RegistryApi;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(mscorlib::Microsoft::Win32::RegistryHive hiveId);
		void _ctor(mscorlib::Microsoft::Win32::RegistryHive hiveId, intptr_t keyHandle, bool remoteRoot);
		void _ctor(mscorlib::System::Object* data, mscorlib::System::String* keyName, bool writable);
		static bool IsEquals(mscorlib::Microsoft::Win32::RegistryKey* a, mscorlib::Microsoft::Win32::RegistryKey* b);
		void Dispose();
		mscorlib::System::String* get_Name();
		void Flush();
		void Close();
		mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle* get_Handle();
		void SetValue(mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::Microsoft::Win32::RegistryValueKind valueKind);
		mscorlib::Microsoft::Win32::RegistryKey* OpenSubKey(mscorlib::System::String* name);
		mscorlib::Microsoft::Win32::RegistryKey* OpenSubKey(mscorlib::System::String* name, bool writable);
		mscorlib::System::Object* GetValue(mscorlib::System::String* name);
		mscorlib::System::Object* GetValue(mscorlib::System::String* name, mscorlib::System::Object* defaultValue);
		mscorlib::Microsoft::Win32::RegistryKey* CreateSubKey(mscorlib::System::String* subkey);
		IL2CPP::Array<mscorlib::System::String*>* GetSubKeyNames();
		mscorlib::System::String* ToString();
		bool get_IsRoot();
		bool get_IsWritable();
		mscorlib::Microsoft::Win32::RegistryHive get_Hive();
		mscorlib::System::Object* get_InternalHandle();
		void AssertKeyStillValid();
		void AssertKeyNameNotNull(mscorlib::System::String* subKeyName);
		void AssertKeyNameLength(mscorlib::System::String* name);
		static mscorlib::System::String* DecodeString(IL2CPP::Array<uint8_t>* data);
		static mscorlib::System::IO::IOException* CreateMarkedForDeletionException();
		static mscorlib::System::String* GetHiveName(mscorlib::Microsoft::Win32::RegistryHive hive);
	};
}


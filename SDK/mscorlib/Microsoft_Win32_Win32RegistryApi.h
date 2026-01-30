#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "Microsoft_Win32_RegistryValueKind.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::Microsoft::Win32 { struct RegistryKey; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "Microsoft_Win32_RegistryValueOptions.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Microsoft::Win32
{
	struct Win32RegistryApi : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t NativeBytesPerCharacter;
		static int32_t RegCreateKeyEx(intptr_t keyBase, mscorlib::System::String* keyName, int32_t reserved, intptr_t lpClass, int32_t options, int32_t access, intptr_t securityAttrs, intptr_t& keyHandle, int32_t& disposition);
		static int32_t RegCloseKey(intptr_t keyHandle);
		static int32_t RegFlushKey(intptr_t keyHandle);
		static int32_t RegOpenKeyEx(intptr_t keyBase, mscorlib::System::String* keyName, intptr_t reserved, int32_t access, intptr_t& keyHandle);
		static int32_t RegEnumKeyEx(intptr_t keyHandle, int32_t dwIndex, wchar_t* lpName, int32_t& lpcbName, IL2CPP::Array<int32_t>* lpReserved, mscorlib::System::Text::StringBuilder* lpClass, IL2CPP::Array<int32_t>* lpcbClass, IL2CPP::Array<int64_t>* lpftLastWriteTime);
		static int32_t RegSetValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind type, mscorlib::System::String* data, int32_t rawDataLength);
		static int32_t RegSetValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind type, IL2CPP::Array<uint8_t>* rawData, int32_t rawDataLength);
		static int32_t RegSetValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind type, int32_t& data, int32_t rawDataLength);
		static int32_t RegSetValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind type, int64_t& data, int32_t rawDataLength);
		static int32_t RegQueryValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind& type, intptr_t zero, int32_t& dataSize);
		static int32_t RegQueryValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind& type, IL2CPP::Array<uint8_t>* data, int32_t& dataSize);
		static int32_t RegQueryValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind& type, int32_t& data, int32_t& dataSize);
		static int32_t RegQueryValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind& type, int64_t& data, int32_t& dataSize);
		static int32_t RegQueryInfoKey(intptr_t hKey, mscorlib::System::Text::StringBuilder* lpClass, IL2CPP::Array<int32_t>* lpcbClass, intptr_t lpReserved_MustBeZero, int32_t& lpcSubKeys, IL2CPP::Array<int32_t>* lpcbMaxSubKeyLen, IL2CPP::Array<int32_t>* lpcbMaxClassLen, int32_t& lpcValues, IL2CPP::Array<int32_t>* lpcbMaxValueNameLen, IL2CPP::Array<int32_t>* lpcbMaxValueLen, IL2CPP::Array<int32_t>* lpcbSecurityDescriptor, IL2CPP::Array<int32_t>* lpftLastWriteTime);
		intptr_t GetHandle(mscorlib::Microsoft::Win32::RegistryKey* key);
		static bool IsHandleValid(mscorlib::Microsoft::Win32::RegistryKey* key);
		mscorlib::System::Object* GetValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::System::Object* defaultValue, mscorlib::Microsoft::Win32::RegistryValueOptions options);
		void SetValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::Microsoft::Win32::RegistryValueKind valueKind);
		int32_t GetBinaryValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::Microsoft::Win32::RegistryValueKind type, IL2CPP::Array<uint8_t>& data, int32_t size);
		int32_t SubKeyCount(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		mscorlib::Microsoft::Win32::RegistryKey* OpenSubKey(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* keyName, bool writable);
		void Flush(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		void Close(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		mscorlib::Microsoft::Win32::RegistryKey* CreateSubKey(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* keyName);
		IL2CPP::Array<mscorlib::System::String*>* GetSubKeyNames(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		void CheckResult(int32_t result);
		void GenerateException(int32_t errorCode);
		mscorlib::System::String* ToString(mscorlib::Microsoft::Win32::RegistryKey* rkey);
		static mscorlib::System::String* CombineName(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* localName);
		void _ctor();
	};
}


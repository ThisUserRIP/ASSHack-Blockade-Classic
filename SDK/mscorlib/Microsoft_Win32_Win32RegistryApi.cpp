#include "Microsoft_Win32_Win32RegistryApi.h"

IL2CPP::Il2CppClass* mscorlib::Microsoft::Win32::Win32RegistryApi::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Microsoft.Win32", "Win32RegistryApi");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Microsoft::Win32::Win32RegistryApi::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegCreateKeyEx(intptr_t keyBase, mscorlib::System::String* keyName, int32_t reserved, intptr_t lpClass, int32_t options, int32_t access, intptr_t securityAttrs, intptr_t& keyHandle, int32_t& disposition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegCreateKeyEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.Int32", "System.IntPtr", "System.Int32", "System.Int32", "System.IntPtr", "System.IntPtr&", "System.Int32&" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)keyName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&lpClass;
	params[4] = (intptr_t)&options;
	params[5] = (intptr_t)&access;
	params[6] = (intptr_t)&securityAttrs;
	params[7] = (intptr_t)&keyHandle;
	params[8] = (intptr_t)&disposition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegCloseKey(intptr_t keyHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegCloseKey", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegFlushKey(intptr_t keyHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegFlushKey", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keyHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegOpenKeyEx(intptr_t keyBase, mscorlib::System::String* keyName, intptr_t reserved, int32_t access, intptr_t& keyHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegOpenKeyEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.IntPtr", "System.Int32", "System.IntPtr&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)keyName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&access;
	params[4] = (intptr_t)&keyHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegEnumKeyEx(intptr_t keyHandle, int32_t dwIndex, wchar_t* lpName, int32_t& lpcbName, IL2CPP::Array<int32_t>* lpReserved, mscorlib::System::Text::StringBuilder* lpClass, IL2CPP::Array<int32_t>* lpcbClass, IL2CPP::Array<int64_t>* lpftLastWriteTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegEnumKeyEx", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Char*", "System.Int32&", "System.Int32[]", "System.Text.StringBuilder", "System.Int32[]", "System.Int64[]" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&keyHandle;
	params[1] = (intptr_t)&dwIndex;
	params[2] = (intptr_t)lpName;
	params[3] = (intptr_t)&lpcbName;
	params[4] = (intptr_t)lpReserved;
	params[5] = (intptr_t)lpClass;
	params[6] = (intptr_t)lpcbClass;
	params[7] = (intptr_t)lpftLastWriteTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegSetValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind type, mscorlib::System::String* data, int32_t rawDataLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegSetValueEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.IntPtr", "Microsoft.Win32.RegistryValueKind", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&type;
	params[4] = (intptr_t)data;
	params[5] = (intptr_t)&rawDataLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegSetValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind type, IL2CPP::Array<uint8_t>* rawData, int32_t rawDataLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegSetValueEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.IntPtr", "Microsoft.Win32.RegistryValueKind", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&type;
	params[4] = (intptr_t)rawData;
	params[5] = (intptr_t)&rawDataLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegSetValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind type, int32_t& data, int32_t rawDataLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegSetValueEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.IntPtr", "Microsoft.Win32.RegistryValueKind", "System.Int32&", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&type;
	params[4] = (intptr_t)&data;
	params[5] = (intptr_t)&rawDataLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegSetValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind type, int64_t& data, int32_t rawDataLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegSetValueEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.IntPtr", "Microsoft.Win32.RegistryValueKind", "System.Int64&", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&type;
	params[4] = (intptr_t)&data;
	params[5] = (intptr_t)&rawDataLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegQueryValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind& type, intptr_t zero, int32_t& dataSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegQueryValueEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.IntPtr", "Microsoft.Win32.RegistryValueKind&", "System.IntPtr", "System.Int32&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&type;
	params[4] = (intptr_t)&zero;
	params[5] = (intptr_t)&dataSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegQueryValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind& type, IL2CPP::Array<uint8_t>* data, int32_t& dataSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegQueryValueEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.IntPtr", "Microsoft.Win32.RegistryValueKind&", "System.Byte[]", "System.Int32&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&type;
	params[4] = (intptr_t)data;
	params[5] = (intptr_t)&dataSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegQueryValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind& type, int32_t& data, int32_t& dataSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegQueryValueEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.IntPtr", "Microsoft.Win32.RegistryValueKind&", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&type;
	params[4] = (intptr_t)&data;
	params[5] = (intptr_t)&dataSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegQueryValueEx(intptr_t keyBase, mscorlib::System::String* valueName, intptr_t reserved, mscorlib::Microsoft::Win32::RegistryValueKind& type, int64_t& data, int32_t& dataSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegQueryValueEx", std::vector<std::string> { "System.IntPtr", "System.String", "System.IntPtr", "Microsoft.Win32.RegistryValueKind&", "System.Int64&", "System.Int32&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&keyBase;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)&reserved;
	params[3] = (intptr_t)&type;
	params[4] = (intptr_t)&data;
	params[5] = (intptr_t)&dataSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::RegQueryInfoKey(intptr_t hKey, mscorlib::System::Text::StringBuilder* lpClass, IL2CPP::Array<int32_t>* lpcbClass, intptr_t lpReserved_MustBeZero, int32_t& lpcSubKeys, IL2CPP::Array<int32_t>* lpcbMaxSubKeyLen, IL2CPP::Array<int32_t>* lpcbMaxClassLen, int32_t& lpcValues, IL2CPP::Array<int32_t>* lpcbMaxValueNameLen, IL2CPP::Array<int32_t>* lpcbMaxValueLen, IL2CPP::Array<int32_t>* lpcbSecurityDescriptor, IL2CPP::Array<int32_t>* lpftLastWriteTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegQueryInfoKey", std::vector<std::string> { "System.IntPtr", "System.Text.StringBuilder", "System.Int32[]", "System.IntPtr", "System.Int32&", "System.Int32[]", "System.Int32[]", "System.Int32&", "System.Int32[]", "System.Int32[]", "System.Int32[]", "System.Int32[]" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)&hKey;
	params[1] = (intptr_t)lpClass;
	params[2] = (intptr_t)lpcbClass;
	params[3] = (intptr_t)&lpReserved_MustBeZero;
	params[4] = (intptr_t)&lpcSubKeys;
	params[5] = (intptr_t)lpcbMaxSubKeyLen;
	params[6] = (intptr_t)lpcbMaxClassLen;
	params[7] = (intptr_t)&lpcValues;
	params[8] = (intptr_t)lpcbMaxValueNameLen;
	params[9] = (intptr_t)lpcbMaxValueLen;
	params[10] = (intptr_t)lpcbSecurityDescriptor;
	params[11] = (intptr_t)lpftLastWriteTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
intptr_t mscorlib::Microsoft::Win32::Win32RegistryApi::GetHandle(mscorlib::Microsoft::Win32::RegistryKey* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHandle", std::vector<std::string> { "Microsoft.Win32.RegistryKey" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Microsoft::Win32::Win32RegistryApi::IsHandleValid(mscorlib::Microsoft::Win32::RegistryKey* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsHandleValid", std::vector<std::string> { "Microsoft.Win32.RegistryKey" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::Microsoft::Win32::Win32RegistryApi::GetValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::System::Object* defaultValue, mscorlib::Microsoft::Win32::RegistryValueOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "System.String", "System.Object", "Microsoft.Win32.RegistryValueOptions" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rkey;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)defaultValue;
	params[3] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::Microsoft::Win32::Win32RegistryApi::SetValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::Microsoft::Win32::RegistryValueKind valueKind)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetValue", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "System.String", "System.Object", "Microsoft.Win32.RegistryValueKind" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rkey;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)&valueKind;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::GetBinaryValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::Microsoft::Win32::RegistryValueKind type, IL2CPP::Array<uint8_t>& data, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBinaryValue", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "System.String", "Microsoft.Win32.RegistryValueKind", "System.Byte[]&", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)rkey;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)&type;
	params[3] = (intptr_t)&data;
	params[4] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::Win32RegistryApi::SubKeyCount(mscorlib::Microsoft::Win32::RegistryKey* rkey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubKeyCount", std::vector<std::string> { "Microsoft.Win32.RegistryKey" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rkey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::Microsoft::Win32::Win32RegistryApi::OpenSubKey(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* keyName, bool writable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OpenSubKey", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "System.String", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rkey;
	params[1] = (intptr_t)keyName;
	params[2] = (intptr_t)&writable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
void mscorlib::Microsoft::Win32::Win32RegistryApi::Flush(mscorlib::Microsoft::Win32::RegistryKey* rkey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flush", std::vector<std::string> { "Microsoft.Win32.RegistryKey" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rkey;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Microsoft::Win32::Win32RegistryApi::Close(mscorlib::Microsoft::Win32::RegistryKey* rkey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close", std::vector<std::string> { "Microsoft.Win32.RegistryKey" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rkey;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::Microsoft::Win32::Win32RegistryApi::CreateSubKey(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* keyName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSubKey", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rkey;
	params[1] = (intptr_t)keyName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::Microsoft::Win32::Win32RegistryApi::GetSubKeyNames(mscorlib::Microsoft::Win32::RegistryKey* rkey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSubKeyNames", std::vector<std::string> { "Microsoft.Win32.RegistryKey" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rkey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
void mscorlib::Microsoft::Win32::Win32RegistryApi::CheckResult(int32_t result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckResult", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Microsoft::Win32::Win32RegistryApi::GenerateException(int32_t errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateException", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::Microsoft::Win32::Win32RegistryApi::ToString(mscorlib::Microsoft::Win32::RegistryKey* rkey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "Microsoft.Win32.RegistryKey" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rkey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::Microsoft::Win32::Win32RegistryApi::CombineName(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* localName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CombineName", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rkey;
	params[1] = (intptr_t)localName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::Microsoft::Win32::Win32RegistryApi::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

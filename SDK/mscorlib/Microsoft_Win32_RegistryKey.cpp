#include "Microsoft_Win32_RegistryKey.h"

IL2CPP::Il2CppClass* mscorlib::Microsoft::Win32::RegistryKey::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Microsoft.Win32", "RegistryKey");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Microsoft::Win32::RegistryKey::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Microsoft::Win32::RegistryKey::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Microsoft::Win32::RegistryKey::_ctor(mscorlib::Microsoft::Win32::RegistryHive hiveId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Microsoft.Win32.RegistryHive" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hiveId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Microsoft::Win32::RegistryKey::_ctor(mscorlib::Microsoft::Win32::RegistryHive hiveId, intptr_t keyHandle, bool remoteRoot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Microsoft.Win32.RegistryHive", "System.IntPtr", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hiveId;
	params[1] = (intptr_t)&keyHandle;
	params[2] = (intptr_t)&remoteRoot;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Microsoft::Win32::RegistryKey::_ctor(mscorlib::System::Object* data, mscorlib::System::String* keyName, bool writable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)keyName;
	params[2] = (intptr_t)&writable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::Microsoft::Win32::RegistryKey::IsEquals(mscorlib::Microsoft::Win32::RegistryKey* a, mscorlib::Microsoft::Win32::RegistryKey* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEquals", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "Microsoft.Win32.RegistryKey" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
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
void mscorlib::Microsoft::Win32::RegistryKey::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::Microsoft::Win32::RegistryKey::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::Microsoft::Win32::RegistryKey::Flush()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flush");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Microsoft::Win32::RegistryKey::Close()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle* mscorlib::Microsoft::Win32::RegistryKey::get_Handle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Handle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle*)returnValue;
}
void mscorlib::Microsoft::Win32::RegistryKey::SetValue(mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::Microsoft::Win32::RegistryValueKind valueKind)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetValue", std::vector<std::string> { "System.String", "System.Object", "Microsoft.Win32.RegistryValueKind" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)value;
	params[2] = (intptr_t)&valueKind;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::Microsoft::Win32::RegistryKey::OpenSubKey(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OpenSubKey", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::Microsoft::Win32::RegistryKey::OpenSubKey(mscorlib::System::String* name, bool writable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OpenSubKey", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&writable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
mscorlib::System::Object* mscorlib::Microsoft::Win32::RegistryKey::GetValue(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* mscorlib::Microsoft::Win32::RegistryKey::GetValue(mscorlib::System::String* name, mscorlib::System::Object* defaultValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { "System.String", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)defaultValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::Microsoft::Win32::RegistryKey::CreateSubKey(mscorlib::System::String* subkey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSubKey", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)subkey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::Microsoft::Win32::RegistryKey::GetSubKeyNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSubKeyNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
mscorlib::System::String* mscorlib::Microsoft::Win32::RegistryKey::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::Microsoft::Win32::RegistryKey::get_IsRoot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsRoot");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Microsoft::Win32::RegistryKey::get_IsWritable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsWritable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::Microsoft::Win32::RegistryHive mscorlib::Microsoft::Win32::RegistryKey::get_Hive()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Hive");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::Microsoft::Win32::RegistryHive ret;
		std::memset(&ret, 0, sizeof(mscorlib::Microsoft::Win32::RegistryHive));
		return ret;
	}
	return static_cast<mscorlib::Microsoft::Win32::RegistryHive>(*(mscorlib::Microsoft::Win32::RegistryHive*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::Microsoft::Win32::RegistryKey::get_InternalHandle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InternalHandle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::Microsoft::Win32::RegistryKey::AssertKeyStillValid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AssertKeyStillValid");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Microsoft::Win32::RegistryKey::AssertKeyNameNotNull(mscorlib::System::String* subKeyName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AssertKeyNameNotNull", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)subKeyName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Microsoft::Win32::RegistryKey::AssertKeyNameLength(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AssertKeyNameLength", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::Microsoft::Win32::RegistryKey::DecodeString(IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodeString", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::IO::IOException* mscorlib::Microsoft::Win32::RegistryKey::CreateMarkedForDeletionException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMarkedForDeletionException");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::IOException*)returnValue;
}
mscorlib::System::String* mscorlib::Microsoft::Win32::RegistryKey::GetHiveName(mscorlib::Microsoft::Win32::RegistryHive hive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHiveName", std::vector<std::string> { "Microsoft.Win32.RegistryHive" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hive;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

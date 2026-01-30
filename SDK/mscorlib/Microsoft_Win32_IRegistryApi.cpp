#include "Microsoft_Win32_IRegistryApi.h"

IL2CPP::Il2CppClass* mscorlib::Microsoft::Win32::IRegistryApi::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Microsoft.Win32", "IRegistryApi");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Microsoft::Win32::IRegistryApi::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::Microsoft::Win32::IRegistryApi::CreateSubKey(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* keyname)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSubKey", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rkey;
	params[1] = (intptr_t)keyname;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::Microsoft::Win32::IRegistryApi::OpenSubKey(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* keyname, bool writtable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OpenSubKey", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "System.String", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rkey;
	params[1] = (intptr_t)keyname;
	params[2] = (intptr_t)&writtable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
void mscorlib::Microsoft::Win32::IRegistryApi::Flush(mscorlib::Microsoft::Win32::RegistryKey* rkey)
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
void mscorlib::Microsoft::Win32::IRegistryApi::Close(mscorlib::Microsoft::Win32::RegistryKey* rkey)
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
mscorlib::System::Object* mscorlib::Microsoft::Win32::IRegistryApi::GetValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::System::Object* default_value, mscorlib::Microsoft::Win32::RegistryValueOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { "Microsoft.Win32.RegistryKey", "System.String", "System.Object", "Microsoft.Win32.RegistryValueOptions" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rkey;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)default_value;
	params[3] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::Microsoft::Win32::IRegistryApi::GetSubKeyNames(mscorlib::Microsoft::Win32::RegistryKey* rkey)
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
mscorlib::System::String* mscorlib::Microsoft::Win32::IRegistryApi::ToString(mscorlib::Microsoft::Win32::RegistryKey* rkey)
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
void mscorlib::Microsoft::Win32::IRegistryApi::SetValue(mscorlib::Microsoft::Win32::RegistryKey* rkey, mscorlib::System::String* name, mscorlib::System::Object* value, mscorlib::Microsoft::Win32::RegistryValueKind valueKind)
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
intptr_t mscorlib::Microsoft::Win32::IRegistryApi::GetHandle(mscorlib::Microsoft::Win32::RegistryKey* key)
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

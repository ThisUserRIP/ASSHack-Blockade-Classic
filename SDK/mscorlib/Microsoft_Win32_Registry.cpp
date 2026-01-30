#include "Microsoft_Win32_Registry.h"

IL2CPP::Il2CppClass* mscorlib::Microsoft::Win32::Registry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Microsoft.Win32", "Registry");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Microsoft::Win32::Registry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::Microsoft::Win32::RegistryKey* mscorlib::Microsoft::Win32::Registry::ToKey(mscorlib::System::String* keyName, bool setting)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToKey", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)keyName;
	params[1] = (intptr_t)&setting;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Microsoft::Win32::RegistryKey*)returnValue;
}
void mscorlib::Microsoft::Win32::Registry::SetValue(mscorlib::System::String* keyName, mscorlib::System::String* valueName, mscorlib::System::Object* value, mscorlib::Microsoft::Win32::RegistryValueKind valueKind)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetValue", std::vector<std::string> { "System.String", "System.String", "System.Object", "Microsoft.Win32.RegistryValueKind" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)keyName;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)value;
	params[3] = (intptr_t)&valueKind;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::Microsoft::Win32::Registry::GetValue(mscorlib::System::String* keyName, mscorlib::System::String* valueName, mscorlib::System::Object* defaultValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { "System.String", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)keyName;
	params[1] = (intptr_t)valueName;
	params[2] = (intptr_t)defaultValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::Microsoft::Win32::Registry::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

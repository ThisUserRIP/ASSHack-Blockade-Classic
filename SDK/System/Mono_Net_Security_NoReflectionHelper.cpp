#include "Mono_Net_Security_NoReflectionHelper.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::NoReflectionHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net.Security", "NoReflectionHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::NoReflectionHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Object* System::Mono::Net::Security::NoReflectionHelper::GetInternalValidator(mscorlib::System::Object* provider, mscorlib::System::Object* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInternalValidator", std::vector<std::string> { "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)settings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* System::Mono::Net::Security::NoReflectionHelper::GetProvider()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProvider");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}

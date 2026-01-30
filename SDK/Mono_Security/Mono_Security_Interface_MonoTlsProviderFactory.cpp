#include "Mono_Security_Interface_MonoTlsProviderFactory.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::MonoTlsProviderFactory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "MonoTlsProviderFactory");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::MonoTlsProviderFactory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Security::Interface::MonoTlsProvider* Mono_Security::Mono::Security::Interface::MonoTlsProviderFactory::GetProvider()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProvider");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoTlsProvider*)returnValue;
}

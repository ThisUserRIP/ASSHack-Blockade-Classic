#include "Mono_Net_Security_Private_CallbackHelpers.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::Private::CallbackHelpers::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net.Security.Private", "CallbackHelpers");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::Private::CallbackHelpers::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* System::Mono::Net::Security::Private::CallbackHelpers::PublicToMono(System::Net::Security::RemoteCertificateValidationCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PublicToMono", std::vector<std::string> { "System.Net.Security.RemoteCertificateValidationCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*)returnValue;
}
Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* System::Mono::Net::Security::Private::CallbackHelpers::PublicToMono(System::Net::Security::LocalCertificateSelectionCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PublicToMono", std::vector<std::string> { "System.Net.Security.LocalCertificateSelectionCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)returnValue;
}
System::System::Net::Security::RemoteCertificateValidationCallback* System::Mono::Net::Security::Private::CallbackHelpers::MonoToPublic(Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MonoToPublic", std::vector<std::string> { "Mono.Security.Interface.MonoRemoteCertificateValidationCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Security::RemoteCertificateValidationCallback*)returnValue;
}
System::System::Net::Security::LocalCertSelectionCallback* System::Mono::Net::Security::Private::CallbackHelpers::MonoToInternal(Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MonoToInternal", std::vector<std::string> { "Mono.Security.Interface.MonoLocalCertificateSelectionCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Security::LocalCertSelectionCallback*)returnValue;
}

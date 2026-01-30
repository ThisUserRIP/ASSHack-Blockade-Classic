#include "System_Security_Cryptography_X509Certificates_X509Helper2.h"

IL2CPP::Il2CppClass* System::System::Security::Cryptography::X509Certificates::X509Helper2::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509Helper2");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Security::Cryptography::X509Certificates::X509Helper2::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Security::Cryptography::X509Certificates::X509Helper2::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowIfContextInvalid", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509CertificateImpl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)impl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* System::System::Security::Cryptography::X509Certificates::X509Helper2::Import(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, bool disableProvider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import", std::vector<std::string> { "System.Byte[]", "System.String", "System.Security.Cryptography.X509Certificates.X509KeyStorageFlags", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rawData;
	params[1] = (intptr_t)password;
	params[2] = (intptr_t)&keyStorageFlags;
	params[3] = (intptr_t)&disableProvider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Security::Cryptography::X509Certificates::X509Certificate2Impl*)returnValue;
}
System::System::Security::Cryptography::X509Certificates::X509ChainImpl* System::System::Security::Cryptography::X509Certificates::X509Helper2::CreateChainImpl(bool useMachineContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateChainImpl", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&useMachineContext;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Security::Cryptography::X509Certificates::X509ChainImpl*)returnValue;
}
bool System::System::Security::Cryptography::X509Certificates::X509Helper2::IsValid(System::Security::Cryptography::X509Certificates::X509ChainImpl* impl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509ChainImpl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)impl;
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
void System::System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid(System::Security::Cryptography::X509Certificates::X509ChainImpl* impl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowIfContextInvalid", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509ChainImpl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)impl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Exception* System::System::Security::Cryptography::X509Certificates::X509Helper2::GetInvalidChainContextException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInvalidChainContextException");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}

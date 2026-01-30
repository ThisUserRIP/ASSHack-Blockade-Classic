#include "System_Net_ServerCertValidationCallback_CallbackContext.h"

IL2CPP::Il2CppClass* System::System::Net::ServerCertValidationCallback_CallbackContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::ServerCertValidationCallback::GetIl2CppClass(), "CallbackContext");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::ServerCertValidationCallback_CallbackContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::ServerCertValidationCallback_CallbackContext::_ctor(mscorlib::System::Object* request, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Net::Security::SslPolicyErrors sslPolicyErrors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509Chain", "System.Net.Security.SslPolicyErrors" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)certificate;
	params[2] = (intptr_t)chain;
	params[3] = (intptr_t)&sslPolicyErrors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

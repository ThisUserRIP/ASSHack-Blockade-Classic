#include "Mono_Security_Interface_MonoRemoteCertificateValidationCallback.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "MonoRemoteCertificateValidationCallback");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::Invoke(mscorlib::System::String* targetHost, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::System::Security::Cryptography::X509Certificates::X509Chain* chain, Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.String", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509Chain", "Mono.Security.Interface.MonoSslPolicyErrors" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)targetHost;
	params[1] = (intptr_t)certificate;
	params[2] = (intptr_t)chain;
	params[3] = (intptr_t)&sslPolicyErrors;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
mscorlib::System::IAsyncResult* Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::BeginInvoke(mscorlib::System::String* targetHost, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::System::Security::Cryptography::X509Certificates::X509Chain* chain, Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "System.String", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509Chain", "Mono.Security.Interface.MonoSslPolicyErrors", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)targetHost;
	params[1] = (intptr_t)certificate;
	params[2] = (intptr_t)chain;
	params[3] = (intptr_t)&sslPolicyErrors;
	params[4] = (intptr_t)callback;
	params[5] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
bool Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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

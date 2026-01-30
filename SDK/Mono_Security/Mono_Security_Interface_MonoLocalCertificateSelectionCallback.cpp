#include "Mono_Security_Interface_MonoLocalCertificateSelectionCallback.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "MonoLocalCertificateSelectionCallback");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::_ctor(mscorlib::System::Object* object, intptr_t method)
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
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::Invoke(mscorlib::System::String* targetHost, System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.String", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.String[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)targetHost;
	params[1] = (intptr_t)localCertificates;
	params[2] = (intptr_t)remoteCertificate;
	params[3] = (intptr_t)acceptableIssuers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}
mscorlib::System::IAsyncResult* Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::BeginInvoke(mscorlib::System::String* targetHost, System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "System.String", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.String[]", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)targetHost;
	params[1] = (intptr_t)localCertificates;
	params[2] = (intptr_t)remoteCertificate;
	params[3] = (intptr_t)acceptableIssuers;
	params[4] = (intptr_t)callback;
	params[5] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}

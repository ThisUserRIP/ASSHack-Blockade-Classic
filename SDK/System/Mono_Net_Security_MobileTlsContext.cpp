#include "Mono_Net_Security_MobileTlsContext.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::MobileTlsContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net.Security", "MobileTlsContext");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::MobileTlsContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::Security::MobileTlsContext::_ctor(System::Mono::Net::Security::MobileAuthenticatedStream* parent, bool serverMode, mscorlib::System::String* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Net.Security.MobileAuthenticatedStream", "System.Boolean", "System.String", "System.Security.Authentication.SslProtocols", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&serverMode;
	params[2] = (intptr_t)targetHost;
	params[3] = (intptr_t)&enabledProtocols;
	params[4] = (intptr_t)serverCertificate;
	params[5] = (intptr_t)clientCertificates;
	params[6] = (intptr_t)&askForClientCert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::Mono::Net::Security::MobileAuthenticatedStream* System::Mono::Net::Security::MobileTlsContext::get_Parent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Parent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Mono::Net::Security::MobileAuthenticatedStream*)returnValue;
}
Mono_Security::Mono::Security::Interface::MonoTlsSettings* System::Mono::Net::Security::MobileTlsContext::get_Settings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Settings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoTlsSettings*)returnValue;
}
bool System::Mono::Net::Security::MobileTlsContext::get_IsAuthenticated()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsAuthenticated");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::Mono::Net::Security::MobileTlsContext::get_IsServer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsServer");
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
mscorlib::System::String* System::Mono::Net::Security::MobileTlsContext::get_TargetHost()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TargetHost");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::Mono::Net::Security::MobileTlsContext::get_ServerName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ServerName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Mono::Net::Security::MobileTlsContext::get_ClientCertificates()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ClientCertificates");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Security::Cryptography::X509Certificates::X509CertificateCollection*)returnValue;
}
void System::Mono::Net::Security::MobileTlsContext::StartHandshake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartHandshake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System::Mono::Net::Security::MobileTlsContext::ProcessHandshake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessHandshake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System::Mono::Net::Security::MobileTlsContext::FinishHandshake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FinishHandshake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* System::Mono::Net::Security::MobileTlsContext::get_LocalServerCertificate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LocalServerCertificate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* System::Mono::Net::Security::MobileTlsContext::get_LocalClientCertificate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LocalClientCertificate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}
mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> System::Mono::Net::Security::MobileTlsContext::Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean>));
		return ret;
	}
	return static_cast<mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean>>(*(mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean>*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> System::Mono::Net::Security::MobileTlsContext::Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Write", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean>));
		return ret;
	}
	return static_cast<mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean>>(*(mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean>*)il2cpp_object_unbox(returnValue));
}
void System::Mono::Net::Security::MobileTlsContext::Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shutdown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System::Mono::Net::Security::MobileTlsContext::ValidateCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateCertificate", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509Chain" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)leaf;
	params[1] = (intptr_t)chain;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* System::Mono::Net::Security::MobileTlsContext::SelectClientCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectClientCertificate", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509Certificate", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serverCertificate;
	params[1] = (intptr_t)acceptableIssuers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}
void System::Mono::Net::Security::MobileTlsContext::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Net::Security::MobileTlsContext::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Net::Security::MobileTlsContext::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

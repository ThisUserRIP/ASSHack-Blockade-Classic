#include "Mono_Unity_UnityTlsProvider.h"

IL2CPP::Il2CppClass* System::Mono::Unity::UnityTlsProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Unity", "UnityTlsProvider");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::UnityTlsProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::Mono::Unity::UnityTlsProvider::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Guid System::Mono::Unity::UnityTlsProvider::get_ID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ID");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
bool System::Mono::Unity::UnityTlsProvider::get_SupportsSslStream()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportsSslStream");
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
bool System::Mono::Unity::UnityTlsProvider::get_SupportsMonoExtensions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportsMonoExtensions");
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
bool System::Mono::Unity::UnityTlsProvider::get_SupportsConnectionInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportsConnectionInfo");
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
bool System::Mono::Unity::UnityTlsProvider::get_SupportsCleanShutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportsCleanShutdown");
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
System::System::Security::Authentication::SslProtocols System::Mono::Unity::UnityTlsProvider::get_SupportedProtocols()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportedProtocols");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Security::Authentication::SslProtocols ret;
		std::memset(&ret, 0, sizeof(System::Security::Authentication::SslProtocols));
		return ret;
	}
	return static_cast<System::Security::Authentication::SslProtocols>(*(System::Security::Authentication::SslProtocols*)il2cpp_object_unbox(returnValue));
}
Mono_Security::Mono::Security::Interface::IMonoSslStream* System::Mono::Unity::UnityTlsProvider::CreateSslStream(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSslStream", std::vector<std::string> { "System.IO.Stream", "System.Boolean", "Mono.Security.Interface.MonoTlsSettings" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)innerStream;
	params[1] = (intptr_t)&leaveInnerStreamOpen;
	params[2] = (intptr_t)settings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::IMonoSslStream*)returnValue;
}
Mono_Security::Mono::Security::Interface::IMonoSslStream* System::Mono::Unity::UnityTlsProvider::CreateSslStreamInternal(System::Net::Security::SslStream* sslStream, mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSslStreamInternal", std::vector<std::string> { "System.Net.Security.SslStream", "System.IO.Stream", "System.Boolean", "Mono.Security.Interface.MonoTlsSettings" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)sslStream;
	params[1] = (intptr_t)innerStream;
	params[2] = (intptr_t)&leaveInnerStreamOpen;
	params[3] = (intptr_t)settings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::IMonoSslStream*)returnValue;
}
bool System::Mono::Unity::UnityTlsProvider::ValidateCertificate(Mono_Security::Mono::Security::Interface::ICertificateValidator2* validator, mscorlib::System::String* targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain, System::Security::Cryptography::X509Certificates::X509Chain& chain, Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors& errors, int32_t& status11)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateCertificate", std::vector<std::string> { "Mono.Security.Interface.ICertificateValidator2", "System.String", "System.Boolean", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Boolean", "System.Security.Cryptography.X509Certificates.X509Chain&", "Mono.Security.Interface.MonoSslPolicyErrors&", "System.Int32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)validator;
	params[1] = (intptr_t)targetHost;
	params[2] = (intptr_t)&serverMode;
	params[3] = (intptr_t)certificates;
	params[4] = (intptr_t)&wantsChain;
	params[5] = (intptr_t)&chain;
	params[6] = (intptr_t)&errors;
	params[7] = (intptr_t)&status11;
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
void System::Mono::Unity::UnityTlsProvider::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

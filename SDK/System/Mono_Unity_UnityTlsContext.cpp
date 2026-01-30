#include "Mono_Unity_UnityTlsContext.h"

IL2CPP::Il2CppClass* System::Mono::Unity::UnityTlsContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Unity", "UnityTlsContext");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::UnityTlsContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Unity::UnityTlsContext::_ctor(System::Mono::Net::Security::MobileAuthenticatedStream* parent, bool serverMode, mscorlib::System::String* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert)
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
void System::Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* cert, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState, System::Mono::Unity::UnityTls_unitytls_x509list& nativeCertChain, System::Mono::Unity::UnityTls_unitytls_key& nativeKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractNativeKeyAndChainFromManagedCertificate", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509Certificate", "Mono.Unity.UnityTls/unitytls_errorstate*", "Mono.Unity.UnityTls/unitytls_x509list*&", "Mono.Unity.UnityTls/unitytls_key*&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cert;
	params[1] = (intptr_t)errorState;
	params[2] = (intptr_t)&nativeCertChain;
	params[3] = (intptr_t)&nativeKey;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::Mono::Unity::UnityTlsContext::get_IsAuthenticated()
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
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* System::Mono::Unity::UnityTlsContext::get_LocalClientCertificate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LocalClientCertificate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}
mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> System::Mono::Unity::UnityTlsContext::Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count)
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
mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> System::Mono::Unity::UnityTlsContext::Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count)
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
void System::Mono::Unity::UnityTlsContext::Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shutdown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Unity::UnityTlsContext::Dispose(bool disposing)
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
void System::Mono::Unity::UnityTlsContext::StartHandshake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartHandshake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System::Mono::Unity::UnityTlsContext::ProcessHandshake()
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
void System::Mono::Unity::UnityTlsContext::FinishHandshake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FinishHandshake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t System::Mono::Unity::UnityTlsContext::WriteCallback(void* userData, uint8_t* data, intptr_t bufferLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteCallback", std::vector<std::string> { "System.Void*", "System.Byte*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)userData;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&bufferLen;
	params[3] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t System::Mono::Unity::UnityTlsContext::WriteCallback(uint8_t* data, intptr_t bufferLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteCallback", std::vector<std::string> { "System.Byte*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&bufferLen;
	params[2] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t System::Mono::Unity::UnityTlsContext::ReadCallback(void* userData, uint8_t* buffer, intptr_t bufferLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadCallback", std::vector<std::string> { "System.Void*", "System.Byte*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)userData;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&bufferLen;
	params[3] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t System::Mono::Unity::UnityTlsContext::ReadCallback(uint8_t* buffer, intptr_t bufferLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadCallback", std::vector<std::string> { "System.Byte*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&bufferLen;
	params[2] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
System::Mono::Unity::UnityTls_unitytls_x509verify_result System::Mono::Unity::UnityTlsContext::VerifyCallback(void* userData, System::Mono::Unity::UnityTls_unitytls_x509list_ref chain, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyCallback", std::vector<std::string> { "System.Void*", "Mono.Unity.UnityTls/unitytls_x509list_ref", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)userData;
	params[1] = (intptr_t)&chain;
	params[2] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Mono::Unity::UnityTls_unitytls_x509verify_result ret;
		std::memset(&ret, 0, sizeof(System::Mono::Unity::UnityTls_unitytls_x509verify_result));
		return ret;
	}
	return static_cast<System::Mono::Unity::UnityTls_unitytls_x509verify_result>(*(System::Mono::Unity::UnityTls_unitytls_x509verify_result*)il2cpp_object_unbox(returnValue));
}
System::Mono::Unity::UnityTls_unitytls_x509verify_result System::Mono::Unity::UnityTlsContext::VerifyCallback(System::Mono::Unity::UnityTls_unitytls_x509list_ref chain, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyCallback", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_x509list_ref", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&chain;
	params[1] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Mono::Unity::UnityTls_unitytls_x509verify_result ret;
		std::memset(&ret, 0, sizeof(System::Mono::Unity::UnityTls_unitytls_x509verify_result));
		return ret;
	}
	return static_cast<System::Mono::Unity::UnityTls_unitytls_x509verify_result>(*(System::Mono::Unity::UnityTls_unitytls_x509verify_result*)il2cpp_object_unbox(returnValue));
}
void System::Mono::Unity::UnityTlsContext::CertificateCallback(void* userData, System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_x509name* caList, intptr_t caListLen, System::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, System::Mono::Unity::UnityTls_unitytls_key_ref* key, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CertificateCallback", std::vector<std::string> { "System.Void*", "Mono.Unity.UnityTls/unitytls_tlsctx*", "System.Byte*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_x509name*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_x509list_ref*", "Mono.Unity.UnityTls/unitytls_key_ref*", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)userData;
	params[1] = (intptr_t)ctx;
	params[2] = (intptr_t)cn;
	params[3] = (intptr_t)&cnLen;
	params[4] = (intptr_t)caList;
	params[5] = (intptr_t)&caListLen;
	params[6] = (intptr_t)chain;
	params[7] = (intptr_t)key;
	params[8] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Unity::UnityTlsContext::CertificateCallback(System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_x509name* caList, intptr_t caListLen, System::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, System::Mono::Unity::UnityTls_unitytls_key_ref* key, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CertificateCallback", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_tlsctx*", "System.Byte*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_x509name*", "System.IntPtr", "Mono.Unity.UnityTls/unitytls_x509list_ref*", "Mono.Unity.UnityTls/unitytls_key_ref*", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)ctx;
	params[1] = (intptr_t)cn;
	params[2] = (intptr_t)&cnLen;
	params[3] = (intptr_t)caList;
	params[4] = (intptr_t)&caListLen;
	params[5] = (intptr_t)chain;
	params[6] = (intptr_t)key;
	params[7] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

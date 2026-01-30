#include "Mono_Unity_X509ChainImplUnityTls.h"

IL2CPP::Il2CppClass* System::Mono::Unity::X509ChainImplUnityTls::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Unity", "X509ChainImplUnityTls");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::X509ChainImplUnityTls::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Unity::X509ChainImplUnityTls::_ctor(System::Mono::Unity::UnityTls_unitytls_x509list_ref nativeCertificateChain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_x509list_ref" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&nativeCertificateChain;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::Mono::Unity::X509ChainImplUnityTls::get_IsValid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsValid");
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
System::Mono::Unity::UnityTls_unitytls_x509list_ref System::Mono::Unity::X509ChainImplUnityTls::get_NativeCertificateChain()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NativeCertificateChain");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Mono::Unity::UnityTls_unitytls_x509list_ref ret;
		std::memset(&ret, 0, sizeof(System::Mono::Unity::UnityTls_unitytls_x509list_ref));
		return ret;
	}
	return static_cast<System::Mono::Unity::UnityTls_unitytls_x509list_ref>(*(System::Mono::Unity::UnityTls_unitytls_x509list_ref*)il2cpp_object_unbox(returnValue));
}
System::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* System::Mono::Unity::X509ChainImplUnityTls::get_ChainElements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ChainElements");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Security::Cryptography::X509Certificates::X509ChainElementCollection*)returnValue;
}
void System::Mono::Unity::X509ChainImplUnityTls::set_ChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainPolicy* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ChainPolicy", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509ChainPolicy" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Unity::X509ChainImplUnityTls::AddStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddStatus", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509ChainStatusFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Unity::X509ChainImplUnityTls::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Unity::X509ChainImplUnityTls::Dispose(bool disposing)
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

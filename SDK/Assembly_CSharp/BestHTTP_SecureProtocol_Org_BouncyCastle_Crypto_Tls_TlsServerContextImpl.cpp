#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Tls_TlsServerContextImpl.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Tls", "TlsServerContextImpl");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* secureRandom, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Tls.SecurityParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)secureRandom;
	params[1] = (intptr_t)securityParameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::get_IsServer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsServer");
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

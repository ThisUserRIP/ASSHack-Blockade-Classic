#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Pkix_PkixCertPathBuilderResult.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix", "PkixCertPathBuilderResult");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.TrustAnchor", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)trustAnchor;
	params[2] = (intptr_t)policyTree;
	params[3] = (intptr_t)subjectPublicKey;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::get_CertPath()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CertPath");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

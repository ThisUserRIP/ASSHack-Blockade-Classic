#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Pkix_PkixAttrCertPathBuilder.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix", "PkixAttrCertPathBuilder");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Build", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixBuilderParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* tbvCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams, mscorlib::System::Collections::IList* tbvPath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Build", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.IX509AttributeCertificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixBuilderParameters", "System.Collections.IList" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)attrCert;
	params[1] = (intptr_t)tbvCert;
	params[2] = (intptr_t)pkixParams;
	params[3] = (intptr_t)tbvPath;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

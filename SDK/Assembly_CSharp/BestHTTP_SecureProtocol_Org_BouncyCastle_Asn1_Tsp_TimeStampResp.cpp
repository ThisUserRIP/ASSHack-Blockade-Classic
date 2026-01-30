#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Tsp_TimeStampResp.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Tsp", "TimeStampResp");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::GetInstance(mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInstance", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Sequence" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)seq;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStampToken)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cmp.PkiStatusInfo", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.ContentInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pkiStatusInfo;
	params[1] = (intptr_t)timeStampToken;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::get_Status()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Status");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::get_TimeStampToken()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TimeStampToken");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp::ToAsn1Object()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToAsn1Object");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*)returnValue;
}

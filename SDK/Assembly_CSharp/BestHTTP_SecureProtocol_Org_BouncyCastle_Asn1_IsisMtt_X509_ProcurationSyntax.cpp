#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_IsisMtt_X509_ProcurationSyntax.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.IsisMtt.X509", "ProcurationSyntax");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::GetInstance(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInstance", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Sequence" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)seq;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::_ctor(mscorlib::System::String* country, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X500.DirectoryString", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.IssuerSerial" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)country;
	params[1] = (intptr_t)typeOfSubstitution;
	params[2] = (intptr_t)certRef;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::_ctor(mscorlib::System::String* country, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X500.DirectoryString", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.GeneralName" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)country;
	params[1] = (intptr_t)typeOfSubstitution;
	params[2] = (intptr_t)thirdPerson;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_Country()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Country");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_TypeOfSubstitution()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TypeOfSubstitution");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_ThirdPerson()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ThirdPerson");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_CertRef()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CertRef");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::ToAsn1Object()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToAsn1Object");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*)returnValue;
}

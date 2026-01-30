#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_DerOctetString.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOctetString::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1", "DerOctetString");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOctetString::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOctetString::_ctor(IL2CPP::Array<uint8_t>* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOctetString::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Encodable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOctetString::Encode(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* derOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerOutputStream" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)derOut;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOctetString::Encode(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* derOut, IL2CPP::Array<uint8_t>* bytes, int32_t offset, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerOutputStream", "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)derOut;
	params[1] = (intptr_t)bytes;
	params[2] = (intptr_t)&offset;
	params[3] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsSignedDataStreamGenerator_CmsSignedDataOutputStream.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::GetIl2CppClass(), "CmsSignedDataOutputStream");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator* outer, mscorlib::System::IO::Stream* outStream, mscorlib::System::String* contentOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* sigGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsSignedDataStreamGenerator", "System.IO.Stream", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.BerSequenceGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.BerSequenceGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.BerSequenceGenerator" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)outer;
	params[1] = (intptr_t)outStream;
	params[2] = (intptr_t)contentOID;
	params[3] = (intptr_t)sGen;
	params[4] = (intptr_t)sigGen;
	params[5] = (intptr_t)eiGen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::WriteByte(uint8_t b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteByte", std::vector<std::string> { "System.Byte" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::Write(IL2CPP::Array<uint8_t>* bytes, int32_t off, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Write", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bytes;
	params[1] = (intptr_t)&off;
	params[2] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::Close()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::DoClose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoClose");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator_CmsSignedDataOutputStream::WriteToGenerator(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Generator* ag, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* ae)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteToGenerator", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Generator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Encodable" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ag;
	params[1] = (intptr_t)ae;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

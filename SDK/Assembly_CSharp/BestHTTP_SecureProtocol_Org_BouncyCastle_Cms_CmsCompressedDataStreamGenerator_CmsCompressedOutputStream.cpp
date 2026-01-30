#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsCompressedDataStreamGenerator_CmsCompressedOutputStream.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::GetIl2CppClass(), "CmsCompressedOutputStream");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* outStream, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.ZOutputStream", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.BerSequenceGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.BerSequenceGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.BerSequenceGenerator" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)outStream;
	params[1] = (intptr_t)sGen;
	params[2] = (intptr_t)cGen;
	params[3] = (intptr_t)eiGen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::WriteByte(uint8_t b)
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::Write(IL2CPP::Array<uint8_t>* bytes, int32_t off, int32_t len)
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator_CmsCompressedOutputStream::Close()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

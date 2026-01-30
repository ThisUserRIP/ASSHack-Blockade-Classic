#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Tls_TlsStreamCipher.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Tls", "TlsStreamCipher");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* clientWriteCipher, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* serverWriteCipher, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest, int32_t cipherKeySize, bool usesNonce)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Tls.TlsContext", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IStreamCipher", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IStreamCipher", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)context;
	params[1] = (intptr_t)clientWriteCipher;
	params[2] = (intptr_t)serverWriteCipher;
	params[3] = (intptr_t)clientWriteDigest;
	params[4] = (intptr_t)serverWriteDigest;
	params[5] = (intptr_t)&cipherKeySize;
	params[6] = (intptr_t)&usesNonce;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::GetPlaintextLimit(int32_t ciphertextLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlaintextLimit", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ciphertextLimit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::EncodePlaintext(int64_t seqNo, uint8_t type, IL2CPP::Array<uint8_t>* plaintext, int32_t offset, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodePlaintext", std::vector<std::string> { "System.Int64", "System.Byte", "System.Byte[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&seqNo;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)plaintext;
	params[3] = (intptr_t)&offset;
	params[4] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::DecodeCiphertext(int64_t seqNo, uint8_t type, IL2CPP::Array<uint8_t>* ciphertext, int32_t offset, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodeCiphertext", std::vector<std::string> { "System.Int64", "System.Byte", "System.Byte[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&seqNo;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)ciphertext;
	params[3] = (intptr_t)&offset;
	params[4] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::CheckMac(int64_t seqNo, uint8_t type, IL2CPP::Array<uint8_t>* recBuf, int32_t recStart, int32_t recEnd, IL2CPP::Array<uint8_t>* calcBuf, int32_t calcOff, int32_t calcLen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckMac", std::vector<std::string> { "System.Int64", "System.Byte", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&seqNo;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)recBuf;
	params[3] = (intptr_t)&recStart;
	params[4] = (intptr_t)&recEnd;
	params[5] = (intptr_t)calcBuf;
	params[6] = (intptr_t)&calcOff;
	params[7] = (intptr_t)&calcLen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::UpdateIV(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* cipher, bool forEncryption, int64_t seqNo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateIV", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IStreamCipher", "System.Boolean", "System.Int64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cipher;
	params[1] = (intptr_t)&forEncryption;
	params[2] = (intptr_t)&seqNo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

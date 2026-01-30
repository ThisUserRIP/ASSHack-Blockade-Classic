#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Prng_Drbg_CtrSP800Drbg.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Prng.Drbg", "CtrSP800Drbg");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t keySizeInBits, int32_t securityStrength, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* entropySource, IL2CPP::Array<uint8_t>* personalizationString, IL2CPP::Array<uint8_t>* nonce)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IBlockCipher", "System.Int32", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IEntropySource", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)engine;
	params[1] = (intptr_t)&keySizeInBits;
	params[2] = (intptr_t)&securityStrength;
	params[3] = (intptr_t)entropySource;
	params[4] = (intptr_t)personalizationString;
	params[5] = (intptr_t)nonce;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::CTR_DRBG_Instantiate_algorithm(IL2CPP::Array<uint8_t>* entropy, IL2CPP::Array<uint8_t>* nonce, IL2CPP::Array<uint8_t>* personalisationString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CTR_DRBG_Instantiate_algorithm", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)entropy;
	params[1] = (intptr_t)nonce;
	params[2] = (intptr_t)personalisationString;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::CTR_DRBG_Update(IL2CPP::Array<uint8_t>* seed, IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CTR_DRBG_Update", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)seed;
	params[1] = (intptr_t)key;
	params[2] = (intptr_t)v;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::CTR_DRBG_Reseed_algorithm(IL2CPP::Array<uint8_t>* additionalInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CTR_DRBG_Reseed_algorithm", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)additionalInput;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::XOR(IL2CPP::Array<uint8_t>* output, IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b, int32_t bOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XOR", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)output;
	params[1] = (intptr_t)a;
	params[2] = (intptr_t)b;
	params[3] = (intptr_t)&bOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::AddOneTo(IL2CPP::Array<uint8_t>* longer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddOneTo", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)longer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::GetEntropy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEntropy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::Block_Cipher_df(IL2CPP::Array<uint8_t>* inputString, int32_t bitLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Block_Cipher_df", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)inputString;
	params[1] = (intptr_t)&bitLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::BCC(IL2CPP::Array<uint8_t>* bccOut, IL2CPP::Array<uint8_t>* k, IL2CPP::Array<uint8_t>* iV, IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BCC", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)bccOut;
	params[1] = (intptr_t)k;
	params[2] = (intptr_t)iV;
	params[3] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::copyIntToByteArray(IL2CPP::Array<uint8_t>* buf, int32_t value, int32_t offSet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "copyIntToByteArray", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buf;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&offSet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::get_BlockSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BlockSize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::Generate(IL2CPP::Array<uint8_t>* output, IL2CPP::Array<uint8_t>* additionalInput, bool predictionResistant)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)output;
	params[1] = (intptr_t)additionalInput;
	params[2] = (intptr_t)&predictionResistant;
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::Reseed(IL2CPP::Array<uint8_t>* additionalInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reseed", std::vector<std::string> { "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)additionalInput;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::IsTdea(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsTdea", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IBlockCipher" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cipher;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::GetMaxSecurityStrength(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t keySizeInBits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaxSecurityStrength", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IBlockCipher", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cipher;
	params[1] = (intptr_t)&keySizeInBits;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::ExpandKey(IL2CPP::Array<uint8_t>* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpandKey", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::PadKey(IL2CPP::Array<uint8_t>* keyMaster, int32_t keyOff, IL2CPP::Array<uint8_t>* tmp, int32_t tmpOff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PadKey", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)keyMaster;
	params[1] = (intptr_t)&keyOff;
	params[2] = (intptr_t)tmp;
	params[3] = (intptr_t)&tmpOff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

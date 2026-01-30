#include "System_Security_Cryptography_Utils.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::Utils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography", "Utils");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::Utils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::Cryptography::Utils::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider* mscorlib::System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_StaticRandomNumberGenerator");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RNGCryptoServiceProvider*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::Utils::GenerateRandom(int32_t keySize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateRandom", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keySize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
bool mscorlib::System::Security::Cryptography::Utils::HasAlgorithm(int32_t dwCalg, int32_t dwKeySize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasAlgorithm", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dwCalg;
	params[1] = (intptr_t)&dwKeySize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::String* mscorlib::System::Security::Cryptography::Utils::DiscardWhiteSpaces(mscorlib::System::String* inputBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DiscardWhiteSpaces", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)inputBuffer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Security::Cryptography::Utils::DiscardWhiteSpaces(mscorlib::System::String* inputBuffer, int32_t inputOffset, int32_t inputCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DiscardWhiteSpaces", std::vector<std::string> { "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inputBuffer;
	params[1] = (intptr_t)&inputOffset;
	params[2] = (intptr_t)&inputCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t mscorlib::System::Security::Cryptography::Utils::ConvertByteArrayToInt(IL2CPP::Array<uint8_t>* input)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertByteArrayToInt", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)input;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::Utils::ConvertIntToByteArray(int32_t dwInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertIntToByteArray", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dwInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void mscorlib::System::Security::Cryptography::Utils::ConvertIntToByteArray(uint32_t dwInput, IL2CPP::Array<uint8_t>& counter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertIntToByteArray", std::vector<std::string> { "System.UInt32", "System.Byte[]&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dwInput;
	params[1] = (intptr_t)&counter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::Utils::FixupKeyParity(IL2CPP::Array<uint8_t>* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixupKeyParity", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void mscorlib::System::Security::Cryptography::Utils::DWORDFromLittleEndian(uint32_t* x, int32_t digits, uint8_t* block)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DWORDFromLittleEndian", std::vector<std::string> { "System.UInt32*", "System.Int32", "System.Byte*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&digits;
	params[2] = (intptr_t)block;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::Utils::DWORDToLittleEndian(IL2CPP::Array<uint8_t>* block, IL2CPP::Array<uint32_t>* x, int32_t digits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DWORDToLittleEndian", std::vector<std::string> { "System.Byte[]", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)block;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&digits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::Utils::DWORDFromBigEndian(uint32_t* x, int32_t digits, uint8_t* block)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DWORDFromBigEndian", std::vector<std::string> { "System.UInt32*", "System.Int32", "System.Byte*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&digits;
	params[2] = (intptr_t)block;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::Utils::DWORDToBigEndian(IL2CPP::Array<uint8_t>* block, IL2CPP::Array<uint32_t>* x, int32_t digits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DWORDToBigEndian", std::vector<std::string> { "System.Byte[]", "System.UInt32[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)block;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&digits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::Utils::QuadWordFromBigEndian(uint64_t* x, int32_t digits, uint8_t* block)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QuadWordFromBigEndian", std::vector<std::string> { "System.UInt64*", "System.Int32", "System.Byte*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&digits;
	params[2] = (intptr_t)block;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::Utils::QuadWordToBigEndian(IL2CPP::Array<uint8_t>* block, IL2CPP::Array<uint64_t>* x, int32_t digits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QuadWordToBigEndian", std::vector<std::string> { "System.Byte[]", "System.UInt64[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)block;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)&digits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::Utils::Int(uint32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Int", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::Utils::RsaOaepEncrypt(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, mscorlib::System::Security::Cryptography::PKCS1MaskGenerationMethod* mgf, mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng, IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RsaOaepEncrypt", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Security.Cryptography.HashAlgorithm", "System.Security.Cryptography.PKCS1MaskGenerationMethod", "System.Security.Cryptography.RandomNumberGenerator", "System.Byte[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)hash;
	params[2] = (intptr_t)mgf;
	params[3] = (intptr_t)rng;
	params[4] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::Utils::RsaOaepDecrypt(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, mscorlib::System::Security::Cryptography::PKCS1MaskGenerationMethod* mgf, IL2CPP::Array<uint8_t>* encryptedData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RsaOaepDecrypt", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Security.Cryptography.HashAlgorithm", "System.Security.Cryptography.PKCS1MaskGenerationMethod", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)hash;
	params[2] = (intptr_t)mgf;
	params[3] = (intptr_t)encryptedData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::Utils::RsaPkcs1Padding(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* oid, IL2CPP::Array<uint8_t>* hash)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RsaPkcs1Padding", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)oid;
	params[2] = (intptr_t)hash;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
bool mscorlib::System::Security::Cryptography::Utils::CompareBigIntArrays(IL2CPP::Array<uint8_t>* lhs, IL2CPP::Array<uint8_t>* rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareBigIntArrays", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)lhs;
	params[1] = (intptr_t)rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::Security::Cryptography::HashAlgorithmName mscorlib::System::Security::Cryptography::Utils::OidToHashAlgorithmName(mscorlib::System::String* oid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OidToHashAlgorithmName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)oid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::HashAlgorithmName ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::HashAlgorithmName));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::HashAlgorithmName>(*(mscorlib::System::Security::Cryptography::HashAlgorithmName*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Security::Cryptography::Utils::DoesRsaKeyOverride(mscorlib::System::Security::Cryptography::RSA* rsaKey, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* parameterTypes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesRsaKeyOverride", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.String", "System.Type[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rsaKey;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)parameterTypes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool mscorlib::System::Security::Cryptography::Utils::DoesRsaKeyOverrideSlowPath(mscorlib::System::Type* t, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* parameterTypes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesRsaKeyOverrideSlowPath", std::vector<std::string> { "System.Type", "System.String", "System.Type[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)parameterTypes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool mscorlib::System::Security::Cryptography::Utils::_ProduceLegacyHmacValues()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_ProduceLegacyHmacValues");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}

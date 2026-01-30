#include "Mono_Security_Cryptography_PKCS1.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Security::Cryptography::PKCS1::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Security.Cryptography", "PKCS1");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Security::Cryptography::PKCS1::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::Mono::Security::Cryptography::PKCS1::Compare(IL2CPP::Array<uint8_t>* array1, IL2CPP::Array<uint8_t>* array2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)array1;
	params[1] = (intptr_t)array2;
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
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::xor_(IL2CPP::Array<uint8_t>* array1, IL2CPP::Array<uint8_t>* array2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xor", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)array1;
	params[1] = (intptr_t)array2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::GetEmptyHash(mscorlib::System::Security::Cryptography::HashAlgorithm* hash)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEmptyHash", std::vector<std::string> { "System.Security.Cryptography.HashAlgorithm" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hash;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::I2OSP(int32_t x, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "I2OSP", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::I2OSP(IL2CPP::Array<uint8_t>* x, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "I2OSP", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::OS2IP(IL2CPP::Array<uint8_t>* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OS2IP", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::RSAEP(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RSAEP", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)m;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::RSADP(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RSADP", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)c;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::RSASP1(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RSASP1", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)m;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::RSAVP1(mscorlib::System::Security::Cryptography::RSA* rsa, IL2CPP::Array<uint8_t>* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RSAVP1", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::Encrypt_OAEP(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng, IL2CPP::Array<uint8_t>* M)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encrypt_OAEP", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Security.Cryptography.HashAlgorithm", "System.Security.Cryptography.RandomNumberGenerator", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)hash;
	params[2] = (intptr_t)rng;
	params[3] = (intptr_t)M;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::Decrypt_OAEP(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* C)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decrypt_OAEP", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Security.Cryptography.HashAlgorithm", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)hash;
	params[2] = (intptr_t)C;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::Sign_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* hashValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sign_v15", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Security.Cryptography.HashAlgorithm", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)hash;
	params[2] = (intptr_t)hashValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::Sign_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::String* hashName, IL2CPP::Array<uint8_t>* hashValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sign_v15", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.String", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)hashName;
	params[2] = (intptr_t)hashValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
bool mscorlib::Mono::Security::Cryptography::PKCS1::Verify_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* hashValue, IL2CPP::Array<uint8_t>* signature)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Verify_v15", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Security.Cryptography.HashAlgorithm", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)hash;
	params[2] = (intptr_t)hashValue;
	params[3] = (intptr_t)signature;
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
bool mscorlib::Mono::Security::Cryptography::PKCS1::Verify_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::String* hashName, IL2CPP::Array<uint8_t>* hashValue, IL2CPP::Array<uint8_t>* signature)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Verify_v15", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.String", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)hashName;
	params[2] = (intptr_t)hashValue;
	params[3] = (intptr_t)signature;
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
bool mscorlib::Mono::Security::Cryptography::PKCS1::Verify_v15(mscorlib::System::Security::Cryptography::RSA* rsa, mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* hashValue, IL2CPP::Array<uint8_t>* signature, bool tryNonStandardEncoding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Verify_v15", std::vector<std::string> { "System.Security.Cryptography.RSA", "System.Security.Cryptography.HashAlgorithm", "System.Byte[]", "System.Byte[]", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)rsa;
	params[1] = (intptr_t)hash;
	params[2] = (intptr_t)hashValue;
	params[3] = (intptr_t)signature;
	params[4] = (intptr_t)&tryNonStandardEncoding;
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
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::Encode_v15(mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* hashValue, int32_t emLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode_v15", std::vector<std::string> { "System.Security.Cryptography.HashAlgorithm", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hash;
	params[1] = (intptr_t)hashValue;
	params[2] = (intptr_t)&emLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS1::MGF1(mscorlib::System::Security::Cryptography::HashAlgorithm* hash, IL2CPP::Array<uint8_t>* mgfSeed, int32_t maskLen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MGF1", std::vector<std::string> { "System.Security.Cryptography.HashAlgorithm", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hash;
	params[1] = (intptr_t)mgfSeed;
	params[2] = (intptr_t)&maskLen;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::Security::Cryptography::HashAlgorithm* mscorlib::Mono::Security::Cryptography::PKCS1::CreateFromName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFromName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::HashAlgorithm*)returnValue;
}
void mscorlib::Mono::Security::Cryptography::PKCS1::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

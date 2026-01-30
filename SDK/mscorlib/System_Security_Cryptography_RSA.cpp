#include "System_Security_Cryptography_RSA.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::RSA::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography", "RSA");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::RSA::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::Cryptography::RSA::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::RSA* mscorlib::System::Security::Cryptography::RSA::Create()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* mscorlib::System::Security::Cryptography::RSA::Create(mscorlib::System::String* algName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)algName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::Encrypt(IL2CPP::Array<uint8_t>* data, mscorlib::System::Security::Cryptography::RSAEncryptionPadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encrypt", std::vector<std::string> { "System.Byte[]", "System.Security.Cryptography.RSAEncryptionPadding" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)padding;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::Decrypt(IL2CPP::Array<uint8_t>* data, mscorlib::System::Security::Cryptography::RSAEncryptionPadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decrypt", std::vector<std::string> { "System.Byte[]", "System.Security.Cryptography.RSAEncryptionPadding" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)padding;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::SignHash(IL2CPP::Array<uint8_t>* hash, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SignHash", std::vector<std::string> { "System.Byte[]", "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.RSASignaturePadding" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hash;
	params[1] = (intptr_t)&hashAlgorithm;
	params[2] = (intptr_t)padding;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
bool mscorlib::System::Security::Cryptography::RSA::VerifyHash(IL2CPP::Array<uint8_t>* hash, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyHash", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.RSASignaturePadding" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)hash;
	params[1] = (intptr_t)signature;
	params[2] = (intptr_t)&hashAlgorithm;
	params[3] = (intptr_t)padding;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::HashData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HashData", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Security.Cryptography.HashAlgorithmName" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&hashAlgorithm;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::HashData(mscorlib::System::IO::Stream* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HashData", std::vector<std::string> { "System.IO.Stream", "System.Security.Cryptography.HashAlgorithmName" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&hashAlgorithm;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::SignData(IL2CPP::Array<uint8_t>* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SignData", std::vector<std::string> { "System.Byte[]", "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.RSASignaturePadding" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&hashAlgorithm;
	params[2] = (intptr_t)padding;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::SignData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SignData", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.RSASignaturePadding" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&hashAlgorithm;
	params[4] = (intptr_t)padding;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::SignData(mscorlib::System::IO::Stream* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SignData", std::vector<std::string> { "System.IO.Stream", "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.RSASignaturePadding" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&hashAlgorithm;
	params[2] = (intptr_t)padding;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
bool mscorlib::System::Security::Cryptography::RSA::VerifyData(IL2CPP::Array<uint8_t>* data, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyData", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.RSASignaturePadding" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)signature;
	params[2] = (intptr_t)&hashAlgorithm;
	params[3] = (intptr_t)padding;
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
bool mscorlib::System::Security::Cryptography::RSA::VerifyData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyData", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.RSASignaturePadding" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)signature;
	params[4] = (intptr_t)&hashAlgorithm;
	params[5] = (intptr_t)padding;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::Security::Cryptography::RSA::VerifyData(mscorlib::System::IO::Stream* data, IL2CPP::Array<uint8_t>* signature, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, mscorlib::System::Security::Cryptography::RSASignaturePadding* padding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyData", std::vector<std::string> { "System.IO.Stream", "System.Byte[]", "System.Security.Cryptography.HashAlgorithmName", "System.Security.Cryptography.RSASignaturePadding" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)signature;
	params[2] = (intptr_t)&hashAlgorithm;
	params[3] = (intptr_t)padding;
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
mscorlib::System::Exception* mscorlib::System::Security::Cryptography::RSA::DerivedClassMustOverride()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DerivedClassMustOverride");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::System::Exception* mscorlib::System::Security::Cryptography::RSA::HashAlgorithmNameNullOrEmpty()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HashAlgorithmNameNullOrEmpty");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::DecryptValue(IL2CPP::Array<uint8_t>* rgb)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecryptValue", std::vector<std::string> { "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rgb;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::RSA::EncryptValue(IL2CPP::Array<uint8_t>* rgb)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncryptValue", std::vector<std::string> { "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rgb;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::String* mscorlib::System::Security::Cryptography::RSA::get_KeyExchangeAlgorithm()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_KeyExchangeAlgorithm");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Security::Cryptography::RSA::get_SignatureAlgorithm()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SignatureAlgorithm");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Security::Cryptography::RSA::FromXmlString(mscorlib::System::String* xmlString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromXmlString", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xmlString;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Security::Cryptography::RSA::ToXmlString(bool includePrivateParameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToXmlString", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&includePrivateParameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Security::Cryptography::RSAParameters mscorlib::System::Security::Cryptography::RSA::ExportParameters(bool includePrivateParameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExportParameters", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&includePrivateParameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::RSAParameters ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::RSAParameters));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::RSAParameters>(*(mscorlib::System::Security::Cryptography::RSAParameters*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Security::Cryptography::RSA::ImportParameters(mscorlib::System::Security::Cryptography::RSAParameters parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportParameters", std::vector<std::string> { "System.Security.Cryptography.RSAParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

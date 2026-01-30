#include "Mono_Security_X509_PKCS12.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Security::X509::PKCS12::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Security.X509", "PKCS12");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Security::X509::PKCS12::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Security::X509::PKCS12::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::PKCS12::_ctor(IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::PKCS12::_ctor(IL2CPP::Array<uint8_t>* data, mscorlib::System::String* password)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte[]", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)password;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::PKCS12::Decode(IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::PKCS12::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::PKCS12::set_Password(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Password", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::Mono::Security::X509::PKCS12::get_IterationCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IterationCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::Mono::Security::X509::PKCS12::set_IterationCount(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_IterationCount", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::ArrayList* mscorlib::Mono::Security::X509::PKCS12::get_Keys()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Keys");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ArrayList*)returnValue;
}
mscorlib::Mono::Security::X509::X509CertificateCollection* mscorlib::Mono::Security::X509::PKCS12::get_Certificates()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Certificates");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Security::X509::X509CertificateCollection*)returnValue;
}
mscorlib::System::Security::Cryptography::RandomNumberGenerator* mscorlib::Mono::Security::X509::PKCS12::get_RNG()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RNG");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RandomNumberGenerator*)returnValue;
}
bool mscorlib::Mono::Security::X509::PKCS12::Compare(IL2CPP::Array<uint8_t>* expected, IL2CPP::Array<uint8_t>* actual)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)expected;
	params[1] = (intptr_t)actual;
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
mscorlib::System::Security::Cryptography::SymmetricAlgorithm* mscorlib::Mono::Security::X509::PKCS12::GetSymmetricAlgorithm(mscorlib::System::String* algorithmOid, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSymmetricAlgorithm", std::vector<std::string> { "System.String", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)algorithmOid;
	params[1] = (intptr_t)salt;
	params[2] = (intptr_t)&iterationCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::SymmetricAlgorithm*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::X509::PKCS12::Decrypt(mscorlib::System::String* algorithmOid, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount, IL2CPP::Array<uint8_t>* encryptedData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decrypt", std::vector<std::string> { "System.String", "System.Byte[]", "System.Int32", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)algorithmOid;
	params[1] = (intptr_t)salt;
	params[2] = (intptr_t)&iterationCount;
	params[3] = (intptr_t)encryptedData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::X509::PKCS12::Decrypt(mscorlib::Mono::Security::PKCS7_EncryptedData* ed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decrypt", std::vector<std::string> { "Mono.Security.PKCS7/EncryptedData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ed;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::X509::PKCS12::Encrypt(mscorlib::System::String* algorithmOid, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount, IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encrypt", std::vector<std::string> { "System.String", "System.Byte[]", "System.Int32", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)algorithmOid;
	params[1] = (intptr_t)salt;
	params[2] = (intptr_t)&iterationCount;
	params[3] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::Security::Cryptography::DSAParameters mscorlib::Mono::Security::X509::PKCS12::GetExistingParameters(bool& found)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExistingParameters", std::vector<std::string> { "System.Boolean&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&found;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::DSAParameters ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::DSAParameters));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::DSAParameters>(*(mscorlib::System::Security::Cryptography::DSAParameters*)il2cpp_object_unbox(returnValue));
}
void mscorlib::Mono::Security::X509::PKCS12::AddPrivateKey(mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* pki)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddPrivateKey", std::vector<std::string> { "Mono.Security.Cryptography.PKCS8/PrivateKeyInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pki;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::PKCS12::ReadSafeBag(mscorlib::Mono::Security::ASN1* safeBag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadSafeBag", std::vector<std::string> { "Mono.Security.ASN1" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)safeBag;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::Mono::Security::ASN1* mscorlib::Mono::Security::X509::PKCS12::CertificateSafeBag(mscorlib::Mono::Security::X509::X509Certificate* x509, mscorlib::System::Collections::IDictionary* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CertificateSafeBag", std::vector<std::string> { "Mono.Security.X509.X509Certificate", "System.Collections.IDictionary" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)x509;
	params[1] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Security::ASN1*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::X509::PKCS12::MAC(IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt, int32_t iterations, IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MAC", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Int32", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)password;
	params[1] = (intptr_t)salt;
	params[2] = (intptr_t)&iterations;
	params[3] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::X509::PKCS12::GetBytes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBytes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::Mono::Security::PKCS7_ContentInfo* mscorlib::Mono::Security::X509::PKCS12::EncryptedContentInfo(mscorlib::Mono::Security::ASN1* safeBags, mscorlib::System::String* algorithmOid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncryptedContentInfo", std::vector<std::string> { "Mono.Security.ASN1", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)safeBags;
	params[1] = (intptr_t)algorithmOid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Security::PKCS7_ContentInfo*)returnValue;
}
void mscorlib::Mono::Security::X509::PKCS12::AddCertificate(mscorlib::Mono::Security::X509::X509Certificate* cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCertificate", std::vector<std::string> { "Mono.Security.X509.X509Certificate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::PKCS12::AddCertificate(mscorlib::Mono::Security::X509::X509Certificate* cert, mscorlib::System::Collections::IDictionary* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCertificate", std::vector<std::string> { "Mono.Security.X509.X509Certificate", "System.Collections.IDictionary" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cert;
	params[1] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::PKCS12::RemoveCertificate(mscorlib::Mono::Security::X509::X509Certificate* cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveCertificate", std::vector<std::string> { "Mono.Security.X509.X509Certificate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::X509::PKCS12::RemoveCertificate(mscorlib::Mono::Security::X509::X509Certificate* cert, mscorlib::System::Collections::IDictionary* attrs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveCertificate", std::vector<std::string> { "Mono.Security.X509.X509Certificate", "System.Collections.IDictionary" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cert;
	params[1] = (intptr_t)attrs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::Mono::Security::X509::PKCS12::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
int32_t mscorlib::Mono::Security::X509::PKCS12::get_MaximumPasswordLength()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaximumPasswordLength");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::Mono::Security::X509::PKCS12::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

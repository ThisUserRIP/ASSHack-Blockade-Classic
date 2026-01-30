#include "System_Security_Cryptography_X509Certificates_X509Helper.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography.X509Certificates", "X509Helper");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::InstallNativeHelper(mscorlib::System::Security::Cryptography::X509Certificates::INativeCertificateHelper* helper)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InstallNativeHelper", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.INativeCertificateHelper" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)helper;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::Import(IL2CPP::Array<uint8_t>* rawData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rawData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)returnValue;
}
mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitFromCertificate", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509CertificateImpl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)impl;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)returnValue;
}
bool mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::IsValid(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509CertificateImpl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)impl;
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
void mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::ThrowIfContextInvalid(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowIfContextInvalid", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509CertificateImpl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)impl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Exception* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::GetInvalidContextException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInvalidContextException");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
mscorlib::Mono::Security::X509::X509Certificate* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::ImportPkcs12(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportPkcs12", std::vector<std::string> { "System.Byte[]", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rawData;
	params[1] = (intptr_t)password;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Security::X509::X509Certificate*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::PEM(mscorlib::System::String* type, IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PEM", std::vector<std::string> { "System.String", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::ConvertData(IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertData", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::ImportCore(IL2CPP::Array<uint8_t>* rawData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImportCore", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rawData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)returnValue;
}
mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::Import(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import", std::vector<std::string> { "System.Byte[]", "System.String", "System.Security.Cryptography.X509Certificates.X509KeyStorageFlags" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rawData;
	params[1] = (intptr_t)password;
	params[2] = (intptr_t)&keyStorageFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)returnValue;
}
mscorlib::System::String* mscorlib::System::Security::Cryptography::X509Certificates::X509Helper::ToHexString(IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToHexString", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

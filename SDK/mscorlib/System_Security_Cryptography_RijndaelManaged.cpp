#include "System_Security_Cryptography_RijndaelManaged.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::RijndaelManaged::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography", "RijndaelManaged");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::RijndaelManaged::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::Cryptography::RijndaelManaged::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::ICryptoTransform* mscorlib::System::Security::Cryptography::RijndaelManaged::CreateEncryptor(IL2CPP::Array<uint8_t>* rgbKey, IL2CPP::Array<uint8_t>* rgbIV)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEncryptor", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rgbKey;
	params[1] = (intptr_t)rgbIV;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::ICryptoTransform*)returnValue;
}
mscorlib::System::Security::Cryptography::ICryptoTransform* mscorlib::System::Security::Cryptography::RijndaelManaged::CreateDecryptor(IL2CPP::Array<uint8_t>* rgbKey, IL2CPP::Array<uint8_t>* rgbIV)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDecryptor", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rgbKey;
	params[1] = (intptr_t)rgbIV;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::ICryptoTransform*)returnValue;
}
void mscorlib::System::Security::Cryptography::RijndaelManaged::GenerateKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateKey");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::RijndaelManaged::GenerateIV()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateIV");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::ICryptoTransform* mscorlib::System::Security::Cryptography::RijndaelManaged::NewEncryptor(IL2CPP::Array<uint8_t>* rgbKey, mscorlib::System::Security::Cryptography::CipherMode mode, IL2CPP::Array<uint8_t>* rgbIV, int32_t feedbackSize, mscorlib::System::Security::Cryptography::RijndaelManagedTransformMode encryptMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NewEncryptor", std::vector<std::string> { "System.Byte[]", "System.Security.Cryptography.CipherMode", "System.Byte[]", "System.Int32", "System.Security.Cryptography.RijndaelManagedTransformMode" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)rgbKey;
	params[1] = (intptr_t)&mode;
	params[2] = (intptr_t)rgbIV;
	params[3] = (intptr_t)&feedbackSize;
	params[4] = (intptr_t)&encryptMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::ICryptoTransform*)returnValue;
}

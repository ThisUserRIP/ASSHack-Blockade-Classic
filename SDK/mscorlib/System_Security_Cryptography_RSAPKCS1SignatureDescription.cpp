#include "System_Security_Cryptography_RSAPKCS1SignatureDescription.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDescription::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography", "RSAPKCS1SignatureDescription");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDescription::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDescription::_ctor(mscorlib::System::String* hashAlgorithm, mscorlib::System::String* digestAlgorithm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hashAlgorithm;
	params[1] = (intptr_t)digestAlgorithm;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter* mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDeformatter", std::vector<std::string> { "System.Security.Cryptography.AsymmetricAlgorithm" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter*)returnValue;
}
mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter* mscorlib::System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFormatter", std::vector<std::string> { "System.Security.Cryptography.AsymmetricAlgorithm" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter*)returnValue;
}

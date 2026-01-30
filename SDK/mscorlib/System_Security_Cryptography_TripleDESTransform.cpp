#include "System_Security_Cryptography_TripleDESTransform.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::TripleDESTransform::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography", "TripleDESTransform");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::TripleDESTransform::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::Cryptography::TripleDESTransform::_ctor(mscorlib::System::Security::Cryptography::TripleDES* algo, bool encryption, IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* iv)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Security.Cryptography.TripleDES", "System.Boolean", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)algo;
	params[1] = (intptr_t)&encryption;
	params[2] = (intptr_t)key;
	params[3] = (intptr_t)iv;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::TripleDESTransform::ECB(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ECB", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)output;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::TripleDESTransform::GetStrongKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStrongKey");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}

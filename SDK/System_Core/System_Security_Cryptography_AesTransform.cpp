#include "System_Security_Cryptography_AesTransform.h"

IL2CPP::Il2CppClass* System_Core::System::Security::Cryptography::AesTransform::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Core.dll", "System.Security.Cryptography", "AesTransform");
	return il2cppclass;
}
mscorlib::System::Type* System_Core::System::Security::Cryptography::AesTransform::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Core::System::Security::Cryptography::AesTransform::_ctor(mscorlib::System::Security::Cryptography::Aes* algo, bool encryption, IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* iv)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Security.Cryptography.Aes", "System.Boolean", "System.Byte[]", "System.Byte[]" });
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
void System_Core::System::Security::Cryptography::AesTransform::ECB(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output)
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
uint32_t System_Core::System::Security::Cryptography::AesTransform::SubByte(uint32_t a)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubByte", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&a;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void System_Core::System::Security::Cryptography::AesTransform::Encrypt128(IL2CPP::Array<uint8_t>* indata, IL2CPP::Array<uint8_t>* outdata, IL2CPP::Array<uint32_t>* ekey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encrypt128", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)indata;
	params[1] = (intptr_t)outdata;
	params[2] = (intptr_t)ekey;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Core::System::Security::Cryptography::AesTransform::Decrypt128(IL2CPP::Array<uint8_t>* indata, IL2CPP::Array<uint8_t>* outdata, IL2CPP::Array<uint32_t>* ekey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decrypt128", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)indata;
	params[1] = (intptr_t)outdata;
	params[2] = (intptr_t)ekey;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Core::System::Security::Cryptography::AesTransform::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

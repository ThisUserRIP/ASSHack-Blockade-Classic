#include "System_Security_Cryptography_SHA1Internal.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Cryptography::SHA1Internal::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Cryptography", "SHA1Internal");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Cryptography::SHA1Internal::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::Cryptography::SHA1Internal::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::SHA1Internal::HashCore(IL2CPP::Array<uint8_t>* rgb, int32_t ibStart, int32_t cbSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HashCore", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rgb;
	params[1] = (intptr_t)&ibStart;
	params[2] = (intptr_t)&cbSize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* mscorlib::System::Security::Cryptography::SHA1Internal::HashFinal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HashFinal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void mscorlib::System::Security::Cryptography::SHA1Internal::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::SHA1Internal::ProcessBlock(IL2CPP::Array<uint8_t>* inputBuffer, uint32_t inputOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessBlock", std::vector<std::string> { "System.Byte[]", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)inputBuffer;
	params[1] = (intptr_t)&inputOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::SHA1Internal::InitialiseBuff(IL2CPP::Array<uint32_t>* buff, IL2CPP::Array<uint8_t>* input, uint32_t inputOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitialiseBuff", std::vector<std::string> { "System.UInt32[]", "System.Byte[]", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buff;
	params[1] = (intptr_t)input;
	params[2] = (intptr_t)&inputOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::SHA1Internal::FillBuff(IL2CPP::Array<uint32_t>* buff)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillBuff", std::vector<std::string> { "System.UInt32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buff;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::SHA1Internal::ProcessFinalBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessFinalBlock", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inputBuffer;
	params[1] = (intptr_t)&inputOffset;
	params[2] = (intptr_t)&inputCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Security::Cryptography::SHA1Internal::AddLength(uint64_t length, IL2CPP::Array<uint8_t>* buffer, int32_t position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddLength", std::vector<std::string> { "System.UInt64", "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&length;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

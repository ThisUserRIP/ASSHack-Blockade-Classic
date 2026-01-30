#include "UnityEngine_ManagedStreamHelpers.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::ManagedStreamHelpers::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "ManagedStreamHelpers");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::ManagedStreamHelpers::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::ManagedStreamHelpers::ValidateLoadFromStream(mscorlib::System::IO::Stream* stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateLoadFromStream", std::vector<std::string> { "System.IO.Stream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ManagedStreamHelpers::ManagedStreamRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::IO::Stream* stream, intptr_t returnValueAddress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ManagedStreamRead", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.IO.Stream", "System.IntPtr" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)stream;
	params[4] = (intptr_t)&returnValueAddress;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ManagedStreamHelpers::ManagedStreamSeek(int64_t offset, uint32_t origin, mscorlib::System::IO::Stream* stream, intptr_t returnValueAddress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ManagedStreamSeek", std::vector<std::string> { "System.Int64", "System.UInt32", "System.IO.Stream", "System.IntPtr" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&offset;
	params[1] = (intptr_t)&origin;
	params[2] = (intptr_t)stream;
	params[3] = (intptr_t)&returnValueAddress;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::ManagedStreamHelpers::ManagedStreamLength(mscorlib::System::IO::Stream* stream, intptr_t returnValueAddress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ManagedStreamLength", std::vector<std::string> { "System.IO.Stream", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)&returnValueAddress;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

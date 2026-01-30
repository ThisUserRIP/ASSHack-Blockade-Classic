#include "UnityEngine_HashUnsafeUtilities.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::HashUnsafeUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "HashUnsafeUtilities");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::HashUnsafeUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::HashUnsafeUtilities::ComputeHash128(void* data, uint64_t dataSize, uint64_t* hash1, uint64_t* hash2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeHash128", std::vector<std::string> { "System.Void*", "System.UInt64", "System.UInt64*", "System.UInt64*" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&dataSize;
	params[2] = (intptr_t)hash1;
	params[3] = (intptr_t)hash2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::HashUnsafeUtilities::ComputeHash128(void* data, uint64_t dataSize, UnityEngine_CoreModule::UnityEngine::Hash128* hash)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeHash128", std::vector<std::string> { "System.Void*", "System.UInt64", "UnityEngine.Hash128*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&dataSize;
	params[2] = (intptr_t)hash;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

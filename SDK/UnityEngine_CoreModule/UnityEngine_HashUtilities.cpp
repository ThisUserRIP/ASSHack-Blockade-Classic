#include "UnityEngine_HashUtilities.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::HashUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "HashUtilities");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::HashUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::HashUtilities::AppendHash(UnityEngine_CoreModule::UnityEngine::Hash128& inHash, UnityEngine_CoreModule::UnityEngine::Hash128& outHash)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppendHash", std::vector<std::string> { "UnityEngine.Hash128&", "UnityEngine.Hash128&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&inHash;
	params[1] = (intptr_t)&outHash;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

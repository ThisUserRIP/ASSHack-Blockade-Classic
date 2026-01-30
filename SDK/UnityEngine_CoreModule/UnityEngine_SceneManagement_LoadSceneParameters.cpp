#include "UnityEngine_SceneManagement_LoadSceneParameters.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.SceneManagement", "LoadSceneParameters");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters::_ctor(UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

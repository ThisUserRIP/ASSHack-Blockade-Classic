#include "UnityEngine_AnimatorOverrideController.h"

IL2CPP::Il2CppClass* UnityEngine_AnimationModule::UnityEngine::AnimatorOverrideController::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AnimationModule.dll", "UnityEngine", "AnimatorOverrideController");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AnimationModule::UnityEngine::AnimatorOverrideController::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_AnimationModule::UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine_AnimationModule::UnityEngine::AnimatorOverrideController* controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnInvalidateOverrideController", std::vector<std::string> { "UnityEngine.AnimatorOverrideController" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

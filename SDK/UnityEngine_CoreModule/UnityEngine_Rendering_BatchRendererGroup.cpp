#include "UnityEngine_Rendering_BatchRendererGroup.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "BatchRendererGroup");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling(UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererGroup* group, UnityEngine_CoreModule::UnityEngine::Rendering::BatchRendererCullingOutput& context, UnityEngine_CoreModule::UnityEngine::Rendering::LODParameters& lodParameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnPerformCulling", std::vector<std::string> { "UnityEngine.Rendering.BatchRendererGroup", "UnityEngine.Rendering.BatchRendererCullingOutput&", "UnityEngine.Rendering.LODParameters&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)group;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)&lodParameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

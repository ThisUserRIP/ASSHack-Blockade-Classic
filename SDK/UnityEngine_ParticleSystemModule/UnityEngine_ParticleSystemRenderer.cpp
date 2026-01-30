#include "UnityEngine_ParticleSystemRenderer.h"

IL2CPP::Il2CppClass* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemRenderer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.ParticleSystemModule.dll", "UnityEngine", "ParticleSystemRenderer");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemRenderer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemRenderer::GetMeshes(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Mesh*>* meshes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMeshes", std::vector<std::string> { "UnityEngine.Mesh[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)meshes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}

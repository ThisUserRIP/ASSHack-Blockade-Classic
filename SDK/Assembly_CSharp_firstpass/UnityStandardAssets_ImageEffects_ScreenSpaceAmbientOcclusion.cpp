#include "UnityStandardAssets_ImageEffects_ScreenSpaceAmbientOcclusion.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "UnityStandardAssets.ImageEffects", "ScreenSpaceAmbientOcclusion");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine_CoreModule::UnityEngine::Shader* shader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMaterial", std::vector<std::string> { "UnityEngine.Shader" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)shader;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DestroyMaterial", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mat;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::CreateMaterials()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMaterials");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnRenderImage", std::vector<std::string> { "UnityEngine.RenderTexture", "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)destination;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

#include "UnityStandardAssets_ImageEffects_PostEffectsHelper.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "UnityStandardAssets.ImageEffects", "PostEffectsHelper");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsHelper::OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination)
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
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(float dist, UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::Camera* cameraForProjectionMatrix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawLowLevelPlaneAlignedWithCamera", std::vector<std::string> { "System.Single", "UnityEngine.RenderTexture", "UnityEngine.RenderTexture", "UnityEngine.Material", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&dist;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)dest;
	params[3] = (intptr_t)material;
	params[4] = (intptr_t)cameraForProjectionMatrix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsHelper::DrawBorder(UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawBorder", std::vector<std::string> { "UnityEngine.RenderTexture", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)dest;
	params[1] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsHelper::DrawLowLevelQuad(float x1, float x2, float y1, float y2, UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawLowLevelQuad", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single", "UnityEngine.RenderTexture", "UnityEngine.RenderTexture", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&x1;
	params[1] = (intptr_t)&x2;
	params[2] = (intptr_t)&y1;
	params[3] = (intptr_t)&y2;
	params[4] = (intptr_t)source;
	params[5] = (intptr_t)dest;
	params[6] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsHelper::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

#include "UnityStandardAssets_ImageEffects_ImageEffects.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ImageEffects::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "UnityStandardAssets.ImageEffects", "ImageEffects");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ImageEffects::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ImageEffects::RenderDistortion(UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination, float angle, UnityEngine_CoreModule::UnityEngine::Vector2 center, UnityEngine_CoreModule::UnityEngine::Vector2 radius)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderDistortion", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.RenderTexture", "UnityEngine.RenderTexture", "System.Single", "UnityEngine.Vector2", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)material;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)destination;
	params[3] = (intptr_t)&angle;
	params[4] = (intptr_t)&center;
	params[5] = (intptr_t)&radius;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ImageEffects::Blit(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit", std::vector<std::string> { "UnityEngine.RenderTexture", "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)dest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ImageEffects::BlitWithMaterial(UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BlitWithMaterial", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.RenderTexture", "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)material;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)dest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ImageEffects::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

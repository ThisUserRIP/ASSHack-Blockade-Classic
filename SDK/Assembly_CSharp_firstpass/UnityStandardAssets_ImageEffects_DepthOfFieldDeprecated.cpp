#include "UnityStandardAssets_ImageEffects_DepthOfFieldDeprecated.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "UnityStandardAssets.ImageEffects", "DepthOfFieldDeprecated");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::CreateMaterials()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMaterials");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::CheckResources()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckResources");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::FocalDistance01(float worldDist)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FocalDistance01", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&worldDist;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::GetDividerBasedOnQuality()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDividerBasedOnQuality");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(int32_t baseDivider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLowResolutionDividerBasedOnQuality", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&baseDivider;
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
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination)
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
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::Blur(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to, Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated_DofBlurriness iterations, int32_t blurPass, float spread)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blur", std::vector<std::string> { "UnityEngine.RenderTexture", "UnityEngine.RenderTexture", "UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	params[2] = (intptr_t)&iterations;
	params[3] = (intptr_t)&blurPass;
	params[4] = (intptr_t)&spread;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::BlurFg(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to, Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated_DofBlurriness iterations, int32_t blurPass, float spread)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BlurFg", std::vector<std::string> { "UnityEngine.RenderTexture", "UnityEngine.RenderTexture", "UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	params[2] = (intptr_t)&iterations;
	params[3] = (intptr_t)&blurPass;
	params[4] = (intptr_t)&spread;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::BlurHex(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to, int32_t blurPass, float spread, UnityEngine_CoreModule::UnityEngine::RenderTexture* tmp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BlurHex", std::vector<std::string> { "UnityEngine.RenderTexture", "UnityEngine.RenderTexture", "System.Int32", "System.Single", "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	params[2] = (intptr_t)&blurPass;
	params[3] = (intptr_t)&spread;
	params[4] = (intptr_t)tmp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::Downsample(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Downsample", std::vector<std::string> { "UnityEngine.RenderTexture", "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::AddBokeh(UnityEngine_CoreModule::UnityEngine::RenderTexture* bokehInfo, UnityEngine_CoreModule::UnityEngine::RenderTexture* tempTex, UnityEngine_CoreModule::UnityEngine::RenderTexture* finalTarget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddBokeh", std::vector<std::string> { "UnityEngine.RenderTexture", "UnityEngine.RenderTexture", "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)bokehInfo;
	params[1] = (intptr_t)tempTex;
	params[2] = (intptr_t)finalTarget;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::ReleaseTextures()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReleaseTextures");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::AllocateTextures(bool blurForeground, UnityEngine_CoreModule::UnityEngine::RenderTexture* source, int32_t divider, int32_t lowTexDivider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllocateTextures", std::vector<std::string> { "System.Boolean", "UnityEngine.RenderTexture", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&blurForeground;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)&divider;
	params[3] = (intptr_t)&lowTexDivider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

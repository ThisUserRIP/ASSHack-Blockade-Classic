#include "UnityStandardAssets_ImageEffects_ContrastStretch.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "UnityStandardAssets.ImageEffects", "ContrastStretch");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::get_materialLum()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_materialLum");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::get_materialReduce()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_materialReduce");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::get_materialAdapt()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_materialAdapt");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::get_materialApply()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_materialApply");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination)
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
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::CalculateAdaptation(UnityEngine_CoreModule::UnityEngine::Texture* curTexture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateAdaptation", std::vector<std::string> { "UnityEngine.Texture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)curTexture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ContrastStretch::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

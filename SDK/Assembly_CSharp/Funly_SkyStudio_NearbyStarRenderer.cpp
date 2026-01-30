#include "Funly_SkyStudio_NearbyStarRenderer.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Funly::SkyStudio::NearbyStarRenderer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Funly.SkyStudio", "NearbyStarRenderer");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Funly::SkyStudio::NearbyStarRenderer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::RenderTexture* Assembly_CSharp::Funly::SkyStudio::NearbyStarRenderer::CreateRenderTexture(mscorlib::System::String* name, int32_t renderTextureSize, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRenderTexture", std::vector<std::string> { "System.String", "System.Int32", "UnityEngine.RenderTextureFormat" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&renderTextureSize;
	params[2] = (intptr_t)&format;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::RenderTexture*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* Assembly_CSharp::Funly::SkyStudio::NearbyStarRenderer::GetNearbyStarMaterial(UnityEngine_CoreModule::UnityEngine::Vector4 randomSeed, int32_t starCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNearbyStarMaterial", std::vector<std::string> { "UnityEngine.Vector4", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&randomSeed;
	params[1] = (intptr_t)&starCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Assembly_CSharp::Funly::SkyStudio::NearbyStarRenderer::WriteDebugTexture(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt, mscorlib::System::String* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteDebugTexture", std::vector<std::string> { "UnityEngine.RenderTexture", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rt;
	params[1] = (intptr_t)path;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Texture2D* Assembly_CSharp::Funly::SkyStudio::NearbyStarRenderer::GetStarListTexture(mscorlib::System::String* starTexKey, int32_t& validStarPixelCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStarListTexture", std::vector<std::string> { "System.String", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)starTexKey;
	params[1] = (intptr_t)&validStarPixelCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::Funly::SkyStudio::NearbyStarRenderer::ComputeStarData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeStarData");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture2D* Assembly_CSharp::Funly::SkyStudio::NearbyStarRenderer::ConvertToTexture2D(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertToTexture2D", std::vector<std::string> { "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
void Assembly_CSharp::Funly::SkyStudio::NearbyStarRenderer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

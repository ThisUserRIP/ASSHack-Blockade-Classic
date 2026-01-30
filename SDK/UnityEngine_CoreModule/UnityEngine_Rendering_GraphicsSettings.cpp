#include "UnityEngine_Rendering_GraphicsSettings.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "GraphicsSettings");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::get_lightsUseLinearIntensity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lightsUseLinearIntensity");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::set_lightsUseLinearIntensity(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_lightsUseLinearIntensity", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::set_useScriptableRenderPipelineBatching(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_useScriptableRenderPipelineBatching", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::HasShaderDefine(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsTier tier, UnityEngine_CoreModule::UnityEngine::Rendering::BuiltinShaderDefine defineHash)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasShaderDefine", std::vector<std::string> { "UnityEngine.Rendering.GraphicsTier", "UnityEngine.Rendering.BuiltinShaderDefine" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tier;
	params[1] = (intptr_t)&defineHash;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::ScriptableObject* UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_currentRenderPipeline()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_INTERNAL_currentRenderPipeline");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::ScriptableObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::get_currentRenderPipeline()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_currentRenderPipeline");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::get_renderPipelineAsset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_renderPipelineAsset");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::set_renderPipelineAsset(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_renderPipelineAsset", std::vector<std::string> { "UnityEngine.Rendering.RenderPipelineAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::ScriptableObject* UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_defaultRenderPipeline()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_INTERNAL_defaultRenderPipeline");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::ScriptableObject*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::set_INTERNAL_defaultRenderPipeline(UnityEngine_CoreModule::UnityEngine::ScriptableObject* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_INTERNAL_defaultRenderPipeline", std::vector<std::string> { "UnityEngine.ScriptableObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::get_defaultRenderPipeline()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultRenderPipeline");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsSettings::set_defaultRenderPipeline(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_defaultRenderPipeline", std::vector<std::string> { "UnityEngine.Rendering.RenderPipelineAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "UnityEngine_Rendering_RenderPipelineManager.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "RenderPipelineManager");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline* UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::get_currentPipeline()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_currentPipeline");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::set_currentPipeline(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_currentPipeline", std::vector<std::string> { "UnityEngine.Rendering.RenderPipeline" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::add_beginFrameRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_beginFrameRendering", std::vector<std::string> { "System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::remove_beginFrameRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_beginFrameRendering", std::vector<std::string> { "System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::add_beginCameraRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_beginCameraRendering", std::vector<std::string> { "System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::remove_beginCameraRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_beginCameraRendering", std::vector<std::string> { "System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::add_endCameraRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_endCameraRendering", std::vector<std::string> { "System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::remove_endCameraRendering(mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext, UnityEngine_CoreModule::UnityEngine::Camera>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_endCameraRendering", std::vector<std::string> { "System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::BeginFrameRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginFrameRendering", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Camera[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)cameras;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::BeginCameraRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginCameraRendering", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::EndFrameRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndFrameRendering", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Camera[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)cameras;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::EndCameraRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndCameraRendering", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::CleanupRenderPipeline()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CleanupRenderPipeline");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::GetCameras(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCameras", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::DoRenderLoop_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* pipe, intptr_t loopPtr, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Camera_RenderRequest>* renderRequests)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoRenderLoop_Internal", std::vector<std::string> { "UnityEngine.Rendering.RenderPipelineAsset", "System.IntPtr", "System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pipe;
	params[1] = (intptr_t)&loopPtr;
	params[2] = (intptr_t)renderRequests;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::PrepareRenderPipeline(UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareRenderPipeline", std::vector<std::string> { "UnityEngine.Rendering.RenderPipelineAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pipelineAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

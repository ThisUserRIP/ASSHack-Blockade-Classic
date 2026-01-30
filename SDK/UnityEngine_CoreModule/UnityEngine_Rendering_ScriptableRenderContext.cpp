#include "UnityEngine_Rendering_ScriptableRenderContext.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "ScriptableRenderContext");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::Internal_Cull(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& parameters, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext renderLoop, intptr_t results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Cull", std::vector<std::string> { "UnityEngine.Rendering.ScriptableCullingParameters&", "UnityEngine.Rendering.ScriptableRenderContext", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&parameters;
	params[1] = (intptr_t)&renderLoop;
	params[2] = (intptr_t)&results;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::InitializeSortSettings(UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::SortingSettings& sortingSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeSortSettings", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Rendering.SortingSettings&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&sortingSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::Submit_Internal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Submit_Internal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::GetNumberOfCameras_Internal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNumberOfCameras_Internal");
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
UnityEngine_CoreModule::UnityEngine::Camera* UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::GetCamera_Internal(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCamera_Internal", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Camera*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawRenderers_Internal(intptr_t cullResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId tagName, bool isPassTagName, intptr_t tagValues, intptr_t stateBlocks, int32_t stateCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawRenderers_Internal", std::vector<std::string> { "System.IntPtr", "UnityEngine.Rendering.DrawingSettings&", "UnityEngine.Rendering.FilteringSettings&", "UnityEngine.Rendering.ShaderTagId", "System.Boolean", "System.IntPtr", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&cullResults;
	params[1] = (intptr_t)&drawingSettings;
	params[2] = (intptr_t)&filteringSettings;
	params[3] = (intptr_t)&tagName;
	params[4] = (intptr_t)&isPassTagName;
	params[5] = (intptr_t)&tagValues;
	params[6] = (intptr_t)&stateBlocks;
	params[7] = (intptr_t)&stateCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawShadows_Internal(intptr_t shadowDrawingSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawShadows_Internal", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&shadowDrawingSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBuffer_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteCommandBuffer_Internal", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)commandBuffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBufferAsync_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::ComputeQueueType queueType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteCommandBufferAsync_Internal", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.ComputeQueueType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)commandBuffer;
	params[1] = (intptr_t)&queueType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties_Internal(UnityEngine_CoreModule::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupCameraProperties_Internal", std::vector<std::string> { "UnityEngine.Camera", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&stereoSetup;
	params[2] = (intptr_t)&eye;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawSkybox_Internal(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawSkybox_Internal", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::InvokeOnRenderObjectCallback_Internal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnRenderObjectCallback_Internal");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawWireOverlay_Impl(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawWireOverlay_Impl", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::_ctor(intptr_t ptr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ptr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::Submit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Submit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::GetNumberOfCameras()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNumberOfCameras");
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
UnityEngine_CoreModule::UnityEngine::Camera* UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::GetCamera(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCamera", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Camera*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawRenderers(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawRenderers", std::vector<std::string> { "UnityEngine.Rendering.CullingResults", "UnityEngine.Rendering.DrawingSettings&", "UnityEngine.Rendering.FilteringSettings&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&cullingResults;
	params[1] = (intptr_t)&drawingSettings;
	params[2] = (intptr_t)&filteringSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawRenderers(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings, UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock& stateBlock)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawRenderers", std::vector<std::string> { "UnityEngine.Rendering.CullingResults", "UnityEngine.Rendering.DrawingSettings&", "UnityEngine.Rendering.FilteringSettings&", "UnityEngine.Rendering.RenderStateBlock&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&cullingResults;
	params[1] = (intptr_t)&drawingSettings;
	params[2] = (intptr_t)&filteringSettings;
	params[3] = (intptr_t)&stateBlock;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawRenderers(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId tagName, bool isPassTagName, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId> tagValues, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock> stateBlocks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawRenderers", std::vector<std::string> { "UnityEngine.Rendering.CullingResults", "UnityEngine.Rendering.DrawingSettings&", "UnityEngine.Rendering.FilteringSettings&", "UnityEngine.Rendering.ShaderTagId", "System.Boolean", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.ShaderTagId>", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.RenderStateBlock>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&cullingResults;
	params[1] = (intptr_t)&drawingSettings;
	params[2] = (intptr_t)&filteringSettings;
	params[3] = (intptr_t)&tagName;
	params[4] = (intptr_t)&isPassTagName;
	params[5] = (intptr_t)&tagValues;
	params[6] = (intptr_t)&stateBlocks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawShadows(UnityEngine_CoreModule::UnityEngine::Rendering::ShadowDrawingSettings& settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawShadows", std::vector<std::string> { "UnityEngine.Rendering.ShadowDrawingSettings&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&settings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBuffer(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteCommandBuffer", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)commandBuffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBufferAsync(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::ComputeQueueType queueType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteCommandBufferAsync", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.ComputeQueueType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)commandBuffer;
	params[1] = (intptr_t)&queueType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties(UnityEngine_CoreModule::UnityEngine::Camera* camera, bool stereoSetup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupCameraProperties", std::vector<std::string> { "UnityEngine.Camera", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&stereoSetup;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties(UnityEngine_CoreModule::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupCameraProperties", std::vector<std::string> { "UnityEngine.Camera", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&stereoSetup;
	params[2] = (intptr_t)&eye;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawSkybox(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawSkybox", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::InvokeOnRenderObjectCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnRenderObjectCallback");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawWireOverlay(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawWireOverlay", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::Cull(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cull", std::vector<std::string> { "UnityEngine.Rendering.ScriptableCullingParameters&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&parameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults>(*(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::Equals(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::Internal_Cull_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& parameters, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& renderLoop, intptr_t results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Cull_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableCullingParameters&", "UnityEngine.Rendering.ScriptableRenderContext&", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&parameters;
	params[1] = (intptr_t)&renderLoop;
	params[2] = (intptr_t)&results;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::Submit_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Submit_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::GetNumberOfCameras_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNumberOfCameras_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Camera* UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::GetCamera_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCamera_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Camera*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawRenderers_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, intptr_t cullResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId& tagName, bool isPassTagName, intptr_t tagValues, intptr_t stateBlocks, int32_t stateCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawRenderers_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&", "System.IntPtr", "UnityEngine.Rendering.DrawingSettings&", "UnityEngine.Rendering.FilteringSettings&", "UnityEngine.Rendering.ShaderTagId&", "System.Boolean", "System.IntPtr", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&cullResults;
	params[2] = (intptr_t)&drawingSettings;
	params[3] = (intptr_t)&filteringSettings;
	params[4] = (intptr_t)&tagName;
	params[5] = (intptr_t)&isPassTagName;
	params[6] = (intptr_t)&tagValues;
	params[7] = (intptr_t)&stateBlocks;
	params[8] = (intptr_t)&stateCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawShadows_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, intptr_t shadowDrawingSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawShadows_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&shadowDrawingSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBuffer_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteCommandBuffer_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&", "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)commandBuffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBufferAsync_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::ComputeQueueType queueType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteCommandBufferAsync_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&", "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.ComputeQueueType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)commandBuffer;
	params[2] = (intptr_t)&queueType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupCameraProperties_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&", "UnityEngine.Camera", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)camera;
	params[2] = (intptr_t)&stereoSetup;
	params[3] = (intptr_t)&eye;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawSkybox_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawSkybox_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::InvokeOnRenderObjectCallback_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnRenderObjectCallback_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext::DrawWireOverlay_Impl_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawWireOverlay_Impl_Injected", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext&", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

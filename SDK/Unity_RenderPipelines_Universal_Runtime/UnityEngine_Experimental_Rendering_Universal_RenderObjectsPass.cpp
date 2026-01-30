#include "UnityEngine_Experimental_Rendering_Universal_RenderObjectsPass.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal", "RenderObjectsPass");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Material* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::get_overrideMaterial()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_overrideMaterial");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::set_overrideMaterial(UnityEngine_CoreModule::UnityEngine::Material* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_overrideMaterial", std::vector<std::string> { "UnityEngine.Material" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::get_overrideMaterialPassIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_overrideMaterialPassIndex");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::set_overrideMaterialPassIndex(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_overrideMaterialPassIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::SetDetphState(bool writeEnabled, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction function)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDetphState", std::vector<std::string> { "System.Boolean", "UnityEngine.Rendering.CompareFunction" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&writeEnabled;
	params[1] = (intptr_t)&function;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::SetStencilState(int32_t reference, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp passOp, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp failOp, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp zFailOp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetStencilState", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.CompareFunction", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&reference;
	params[1] = (intptr_t)&compareFunction;
	params[2] = (intptr_t)&passOp;
	params[3] = (intptr_t)&failOp;
	params[4] = (intptr_t)&zFailOp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::_ctor(mscorlib::System::String* profilerTag, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, IL2CPP::Array<mscorlib::System::String*>* shaderTags, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.Rendering.Universal.RenderPassEvent", "System.String[]", "UnityEngine.Experimental.Rendering.Universal.RenderQueueType", "System.Int32", "UnityEngine.Experimental.Rendering.Universal.RenderObjects/CustomCameraSettings" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)profilerTag;
	params[1] = (intptr_t)&renderPassEvent;
	params[2] = (intptr_t)shaderTags;
	params[3] = (intptr_t)&renderQueueType;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)cameraSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::_ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::URPProfileId profileId, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, IL2CPP::Array<mscorlib::System::String*>* shaderTags, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.Universal.URPProfileId", "UnityEngine.Rendering.Universal.RenderPassEvent", "System.String[]", "UnityEngine.Experimental.Rendering.Universal.RenderQueueType", "System.Int32", "UnityEngine.Experimental.Rendering.Universal.RenderObjects/CustomCameraSettings" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&profileId;
	params[1] = (intptr_t)&renderPassEvent;
	params[2] = (intptr_t)shaderTags;
	params[3] = (intptr_t)&renderQueueType;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)cameraSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

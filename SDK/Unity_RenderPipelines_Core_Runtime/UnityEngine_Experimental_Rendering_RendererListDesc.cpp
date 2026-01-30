#include "UnityEngine_Experimental_Rendering_RendererListDesc.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Experimental.Rendering", "RendererListDesc");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::get_cullingResult()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_cullingResult");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults>(*(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::set_cullingResult(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_cullingResult", std::vector<std::string> { "UnityEngine.Rendering.CullingResults" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Camera* Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::get_camera()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_camera");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Camera*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::set_camera(UnityEngine_CoreModule::UnityEngine::Camera* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_camera", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::get_passName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_passName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>(*(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::set_passName(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_passName", std::vector<std::string> { "UnityEngine.Rendering.ShaderTagId" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::get_passNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_passNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::set_passNames(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_passNames", std::vector<std::string> { "UnityEngine.Rendering.ShaderTagId[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::_ctor(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId passName, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResult, UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.ShaderTagId", "UnityEngine.Rendering.CullingResults", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&passName;
	params[1] = (intptr_t)&cullingResult;
	params[2] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::_ctor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* passNames, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResult, UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.ShaderTagId[]", "UnityEngine.Rendering.CullingResults", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)passNames;
	params[1] = (intptr_t)&cullingResult;
	params[2] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc::IsValid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}

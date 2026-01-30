#include "UnityEngine_XR_XRDisplaySubsystem.h"

IL2CPP::Il2CppClass* UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.XRModule.dll", "UnityEngine.XR", "XRDisplaySubsystem");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::InvokeDisplayFocusChanged(bool focus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeDisplayFocusChanged", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&focus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::set_scaleOfAllRenderTargets(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_scaleOfAllRenderTargets", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::set_zNear(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_zNear", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::set_zFar(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_zFar", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::set_sRGB(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_sRGB", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::set_textureLayout(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_TextureLayout value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_textureLayout", std::vector<std::string> { "UnityEngine.XR.XRDisplaySubsystem/TextureLayout" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::SetMSAALevel(int32_t level)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMSAALevel", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&level;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::set_disableLegacyRenderer(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_disableLegacyRenderer", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::GetRenderPassCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderPassCount");
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
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::GetRenderPass(int32_t renderPassIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass& renderPass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderPass", std::vector<std::string> { "System.Int32", "UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&renderPassIndex;
	params[1] = (intptr_t)&renderPass;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::Internal_TryGetRenderPass(int32_t renderPassIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass& renderPass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_TryGetRenderPass", std::vector<std::string> { "System.Int32", "UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&renderPassIndex;
	params[1] = (intptr_t)&renderPass;
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
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::GetCullingParameters(UnityEngine_CoreModule::UnityEngine::Camera* camera, int32_t cullingPassIndex, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& scriptableCullingParameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCullingParameters", std::vector<std::string> { "UnityEngine.Camera", "System.Int32", "UnityEngine.Rendering.ScriptableCullingParameters&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&cullingPassIndex;
	params[2] = (intptr_t)&scriptableCullingParameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::Internal_TryGetCullingParams(UnityEngine_CoreModule::UnityEngine::Camera* camera, int32_t cullingPassIndex, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& scriptableCullingParameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_TryGetCullingParams", std::vector<std::string> { "UnityEngine.Camera", "System.Int32", "UnityEngine.Rendering.ScriptableCullingParameters&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&cullingPassIndex;
	params[2] = (intptr_t)&scriptableCullingParameters;
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
int32_t UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::GetPreferredMirrorBlitMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPreferredMirrorBlitMode");
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
bool UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::GetMirrorViewBlitDesc(UnityEngine_CoreModule::UnityEngine::RenderTexture* mirrorRt, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc& outDesc, int32_t mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMirrorViewBlitDesc", std::vector<std::string> { "UnityEngine.RenderTexture", "UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)mirrorRt;
	params[1] = (intptr_t)&outDesc;
	params[2] = (intptr_t)&mode;
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
bool UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::AddGraphicsThreadMirrorViewBlit(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, bool allowGraphicsStateInvalidate, int32_t mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddGraphicsThreadMirrorViewBlit", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&allowGraphicsStateInvalidate;
	params[2] = (intptr_t)&mode;
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
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

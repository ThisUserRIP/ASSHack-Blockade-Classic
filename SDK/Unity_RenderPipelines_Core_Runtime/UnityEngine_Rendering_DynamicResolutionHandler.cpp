#include "UnityEngine_Rendering_DynamicResolutionHandler.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "DynamicResolutionHandler");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::get_filter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_filter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::set_filter(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_filter", std::vector<std::string> { "UnityEngine.Rendering.DynamicResUpscaleFilter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2Int Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::get_finalViewport()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_finalViewport");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2Int ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2Int));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2Int>(*(UnityEngine_CoreModule::UnityEngine::Vector2Int*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::set_finalViewport(UnityEngine_CoreModule::UnityEngine::Vector2Int value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_finalViewport", std::vector<std::string> { "UnityEngine.Vector2Int" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::FlushScalableBufferManagerState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlushScalableBufferManagerState");
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
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::GetOrCreateDrsInstanceHandler(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrCreateDrsInstanceHandler", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::get_instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::DefaultDynamicResMethod()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DefaultDynamicResMethod");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::ProcessSettings(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessSettings", std::vector<std::string> { "UnityEngine.Rendering.GlobalDynamicResolutionSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&settings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::GetResolvedScale()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResolvedScale");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::SetDynamicResScaler(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PerformDynamicRes* scaler, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResScalePolicyType scalerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDynamicResScaler", std::vector<std::string> { "UnityEngine.Rendering.PerformDynamicRes", "UnityEngine.Rendering.DynamicResScalePolicyType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)scaler;
	params[1] = (intptr_t)&scalerType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::ClearSelectedCamera()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearSelectedCamera");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::SetCurrentCameraRequest(bool cameraRequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCurrentCameraRequest", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cameraRequest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::UpdateAndUseCamera(UnityEngine_CoreModule::UnityEngine::Camera* camera, mscorlib::System::Nullable_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings> settings, mscorlib::System::Action* OnResolutionChange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateAndUseCamera", std::vector<std::string> { "UnityEngine.Camera", "System.Nullable`1<UnityEngine.Rendering.GlobalDynamicResolutionSettings>", "System.Action" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&settings;
	params[2] = (intptr_t)OnResolutionChange;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::Update(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings, mscorlib::System::Action* OnResolutionChange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "UnityEngine.Rendering.GlobalDynamicResolutionSettings", "System.Action" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&settings;
	params[1] = (intptr_t)OnResolutionChange;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::SoftwareDynamicResIsEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SoftwareDynamicResIsEnabled");
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::HardwareDynamicResIsEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HardwareDynamicResIsEnabled");
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::RequestsHardwareDynamicResolution()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequestsHardwareDynamicResolution");
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::DynamicResolutionEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DynamicResolutionEnabled");
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::ForceSoftwareFallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForceSoftwareFallback");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2Int Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::GetScaledSize(UnityEngine_CoreModule::UnityEngine::Vector2Int size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetScaledSize", std::vector<std::string> { "UnityEngine.Vector2Int" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2Int ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2Int));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2Int>(*(UnityEngine_CoreModule::UnityEngine::Vector2Int*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2Int Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::ApplyScalesOnSize(UnityEngine_CoreModule::UnityEngine::Vector2Int size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyScalesOnSize", std::vector<std::string> { "UnityEngine.Vector2Int" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2Int ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2Int));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2Int>(*(UnityEngine_CoreModule::UnityEngine::Vector2Int*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::GetCurrentScale()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentScale");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2Int Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::GetLastScaledSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLastScaledSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2Int ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2Int));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2Int>(*(UnityEngine_CoreModule::UnityEngine::Vector2Int*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

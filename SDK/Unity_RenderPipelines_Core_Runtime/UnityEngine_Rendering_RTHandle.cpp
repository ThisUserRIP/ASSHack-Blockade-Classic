#include "UnityEngine_Rendering_RTHandle.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "RTHandle");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector2 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::get_scaleFactor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_scaleFactor");
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::set_scaleFactor(UnityEngine_CoreModule::UnityEngine::Vector2 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_scaleFactor", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::get_useScaling()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_useScaling");
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::set_useScaling(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_useScaling", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2Int Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::get_referenceSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_referenceSize");
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::set_referenceSize(UnityEngine_CoreModule::UnityEngine::Vector2Int value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_referenceSize", std::vector<std::string> { "UnityEngine.Vector2Int" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::get_rtHandleProperties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rtHandleProperties");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::RenderTexture* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::get_rt()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rt");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::RenderTexture*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::get_nameID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_nameID");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::get_name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::get_isMSAAEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isMSAAEnabled");
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::_ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem* owner)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.RTHandleSystem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)owner;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::RenderTexture* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::op_Implicit(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::RenderTexture*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::op_Implicit(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::op_Implicit(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::SetRenderTexture(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTexture", std::vector<std::string> { "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rt;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::SetTexture(UnityEngine_CoreModule::UnityEngine::Texture* tex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTexture", std::vector<std::string> { "UnityEngine.Texture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::SetTexture(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier tex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTexture", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&tex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::Release()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Release");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2Int Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::GetScaledSize(UnityEngine_CoreModule::UnityEngine::Vector2Int refSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetScaledSize", std::vector<std::string> { "UnityEngine.Vector2Int" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&refSize;
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::SwitchToFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, float residencyFraction, UnityEngine_CoreModule::UnityEngine::Rendering::FastMemoryFlags flags, bool copyContents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwitchToFastMemory", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "System.Single", "UnityEngine.Rendering.FastMemoryFlags", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&residencyFraction;
	params[2] = (intptr_t)&flags;
	params[3] = (intptr_t)&copyContents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::CopyToFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, float residencyFraction, UnityEngine_CoreModule::UnityEngine::Rendering::FastMemoryFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyToFastMemory", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "System.Single", "UnityEngine.Rendering.FastMemoryFlags" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&residencyFraction;
	params[2] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle::SwitchOutFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, bool copyContents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwitchOutFastMemory", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&copyContents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

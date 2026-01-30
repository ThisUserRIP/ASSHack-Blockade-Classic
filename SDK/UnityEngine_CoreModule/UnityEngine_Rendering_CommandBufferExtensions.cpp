#include "UnityEngine_Rendering_CommandBufferExtensions.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExtensions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "CommandBufferExtensions");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExtensions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchIntoFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rt, UnityEngine_CoreModule::UnityEngine::Rendering::FastMemoryFlags fastMemoryFlags, float residency, bool copyContents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SwitchIntoFastMemory", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Rendering.FastMemoryFlags", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&rt;
	params[2] = (intptr_t)&fastMemoryFlags;
	params[3] = (intptr_t)&residency;
	params[4] = (intptr_t)&copyContents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchOutOfFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rt, bool copyContents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SwitchOutOfFastMemory", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&rt;
	params[2] = (intptr_t)&copyContents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExtensions::SwitchIntoFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rid, UnityEngine_CoreModule::UnityEngine::Rendering::FastMemoryFlags fastMemoryFlags, float residency, bool copyContents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwitchIntoFastMemory", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.FastMemoryFlags", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&rid;
	params[2] = (intptr_t)&fastMemoryFlags;
	params[3] = (intptr_t)&residency;
	params[4] = (intptr_t)&copyContents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExtensions::SwitchOutOfFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rid, bool copyContents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwitchOutOfFastMemory", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&rid;
	params[2] = (intptr_t)&copyContents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

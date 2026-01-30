#include "UnityEngine_Rendering_RenderTargetBlendState.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "RenderTargetBlendState");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState::get_defaultValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState::_ctor(UnityEngine_CoreModule::UnityEngine::Rendering::ColorWriteMask writeMask, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode sourceColorBlendMode, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode destinationColorBlendMode, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode sourceAlphaBlendMode, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode destinationAlphaBlendMode, UnityEngine_CoreModule::UnityEngine::Rendering::BlendOp colorBlendOperation, UnityEngine_CoreModule::UnityEngine::Rendering::BlendOp alphaBlendOperation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.ColorWriteMask", "UnityEngine.Rendering.BlendMode", "UnityEngine.Rendering.BlendMode", "UnityEngine.Rendering.BlendMode", "UnityEngine.Rendering.BlendMode", "UnityEngine.Rendering.BlendOp", "UnityEngine.Rendering.BlendOp" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&writeMask;
	params[1] = (intptr_t)&sourceColorBlendMode;
	params[2] = (intptr_t)&destinationColorBlendMode;
	params[3] = (intptr_t)&sourceAlphaBlendMode;
	params[4] = (intptr_t)&destinationAlphaBlendMode;
	params[5] = (intptr_t)&colorBlendOperation;
	params[6] = (intptr_t)&alphaBlendOperation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState::Equals(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetBlendState" });
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState::Equals(mscorlib::System::Object* obj)
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
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState::GetHashCode()
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

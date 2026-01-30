#include "UnityEngine_Rendering_HableCurve_Uniforms.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve::GetIl2CppClass(), "Uniforms");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::_ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.HableCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::get_curve()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_curve");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::get_toeSegmentA()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_toeSegmentA");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::get_toeSegmentB()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_toeSegmentB");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::get_midSegmentA()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_midSegmentA");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::get_midSegmentB()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_midSegmentB");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::get_shoSegmentA()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_shoSegmentA");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms::get_shoSegmentB()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_shoSegmentB");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}

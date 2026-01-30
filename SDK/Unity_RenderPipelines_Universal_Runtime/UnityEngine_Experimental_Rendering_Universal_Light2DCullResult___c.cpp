#include "UnityEngine_Experimental_Rendering_Universal_Light2DCullResult___c.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DCullResult___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DCullResult::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DCullResult___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DCullResult___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DCullResult___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DCullResult___c::_SetupCulling_b__5_0(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* l1, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* l2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<SetupCulling>b__5_0", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Light2D", "UnityEngine.Experimental.Rendering.Universal.Light2D" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)l1;
	params[1] = (intptr_t)l2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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

#include "GAP_ParticleSystemController_SerializableGradientMode.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GAP_ParticleSystemController::SerializableGradientMode::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "GAP_ParticleSystemController", "SerializableGradientMode");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GAP_ParticleSystemController::SerializableGradientMode::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::GAP_ParticleSystemController::SerializableGradientMode::_ctor(UnityEngine_CoreModule::UnityEngine::GradientMode gradientMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.GradientMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&gradientMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::GradientMode Assembly_CSharp::GAP_ParticleSystemController::SerializableGradientMode::GetGradientMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGradientMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::GradientMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::GradientMode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::GradientMode>(*(UnityEngine_CoreModule::UnityEngine::GradientMode*)il2cpp_object_unbox(returnValue));
}

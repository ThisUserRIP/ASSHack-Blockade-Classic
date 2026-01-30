#include "GAP_ParticleSystemController_SerializablePSCurveMode.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GAP_ParticleSystemController::SerializablePSCurveMode::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "GAP_ParticleSystemController", "SerializablePSCurveMode");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GAP_ParticleSystemController::SerializablePSCurveMode::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::GAP_ParticleSystemController::SerializablePSCurveMode::_ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode psCurveMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.ParticleSystemCurveMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&psCurveMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode Assembly_CSharp::GAP_ParticleSystemController::SerializablePSCurveMode::GetCurveMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurveMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode));
		return ret;
	}
	return static_cast<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode>(*(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemCurveMode*)il2cpp_object_unbox(returnValue));
}

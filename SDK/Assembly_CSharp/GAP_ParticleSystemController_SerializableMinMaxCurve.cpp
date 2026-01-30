#include "GAP_ParticleSystemController_SerializableMinMaxCurve.h"

IL2CPP::Il2CppClass* Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "GAP_ParticleSystemController", "SerializableMinMaxCurve");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve::_ctor(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve minMaxCurve)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.ParticleSystem/MinMaxCurve" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&minMaxCurve;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve::GetMinMaxCurve()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMinMaxCurve");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve ret;
		std::memset(&ret, 0, sizeof(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve));
		return ret;
	}
	return static_cast<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve>(*(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxCurve*)il2cpp_object_unbox(returnValue));
}

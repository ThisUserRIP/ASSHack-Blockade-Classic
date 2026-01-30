#include "RootMotion_FinalIK_IKSolverVR_Footstep.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR::GetIl2CppClass(), "Footstep");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::get_isStepping()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isStepping");
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
float Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::get_stepProgress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_stepProgress");
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
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::set_stepProgress(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_stepProgress", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::_ctor(UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation, UnityEngine_CoreModule::UnityEngine::Vector3 footPosition, UnityEngine_CoreModule::UnityEngine::Quaternion footRotation, UnityEngine_CoreModule::UnityEngine::Vector3 characterSpaceOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Vector3", "UnityEngine.Quaternion", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&rootRotation;
	params[1] = (intptr_t)&footPosition;
	params[2] = (intptr_t)&footRotation;
	params[3] = (intptr_t)&characterSpaceOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::Reset(UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation, UnityEngine_CoreModule::UnityEngine::Vector3 footPosition, UnityEngine_CoreModule::UnityEngine::Quaternion footRotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Vector3", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rootRotation;
	params[1] = (intptr_t)&footPosition;
	params[2] = (intptr_t)&footRotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::StepTo(UnityEngine_CoreModule::UnityEngine::Vector3 p, UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StepTo", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&p;
	params[1] = (intptr_t)&rootRotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::UpdateStepping(UnityEngine_CoreModule::UnityEngine::Vector3 p, UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation, float speed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateStepping", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&p;
	params[1] = (intptr_t)&rootRotation;
	params[2] = (intptr_t)&speed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::UpdateStanding(UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation, float minAngle, float speed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateStanding", std::vector<std::string> { "UnityEngine.Quaternion", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rootRotation;
	params[1] = (intptr_t)&minAngle;
	params[2] = (intptr_t)&speed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep::Update(Assembly_CSharp_firstpass::RootMotion::InterpolationMode interpolation, UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* onStep)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "RootMotion.InterpolationMode", "UnityEngine.Events.UnityEvent" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&interpolation;
	params[1] = (intptr_t)onStep;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

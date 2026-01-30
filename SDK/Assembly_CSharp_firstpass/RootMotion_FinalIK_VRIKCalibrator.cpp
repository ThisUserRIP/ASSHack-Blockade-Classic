#include "RootMotion_FinalIK_VRIKCalibrator.h"

IL2CPP::Il2CppClass* Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp-firstpass.dll", "RootMotion.FinalIK", "VRIKCalibrator");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator::RecalibrateScale(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_Settings* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecalibrateScale", std::vector<std::string> { "RootMotion.FinalIK.VRIK", "RootMotion.FinalIK.VRIKCalibrator/Settings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ik;
	params[1] = (intptr_t)settings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator::Calibrate(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_Settings* settings, UnityEngine_CoreModule::UnityEngine::Transform* headTracker, UnityEngine_CoreModule::UnityEngine::Transform* bodyTracker, UnityEngine_CoreModule::UnityEngine::Transform* leftHandTracker, UnityEngine_CoreModule::UnityEngine::Transform* rightHandTracker, UnityEngine_CoreModule::UnityEngine::Transform* leftFootTracker, UnityEngine_CoreModule::UnityEngine::Transform* rightFootTracker)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Calibrate", std::vector<std::string> { "RootMotion.FinalIK.VRIK", "RootMotion.FinalIK.VRIKCalibrator/Settings", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)ik;
	params[1] = (intptr_t)settings;
	params[2] = (intptr_t)headTracker;
	params[3] = (intptr_t)bodyTracker;
	params[4] = (intptr_t)leftHandTracker;
	params[5] = (intptr_t)rightHandTracker;
	params[6] = (intptr_t)leftFootTracker;
	params[7] = (intptr_t)rightFootTracker;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData*)returnValue;
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_Settings* settings, UnityEngine_CoreModule::UnityEngine::Transform* tracker, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg* leg, UnityEngine_CoreModule::UnityEngine::Transform* lastBone, UnityEngine_CoreModule::UnityEngine::Vector3 rootForward, bool isLeft)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalibrateLeg", std::vector<std::string> { "RootMotion.FinalIK.VRIKCalibrator/Settings", "UnityEngine.Transform", "RootMotion.FinalIK.IKSolverVR/Leg", "UnityEngine.Transform", "UnityEngine.Vector3", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)settings;
	params[1] = (intptr_t)tracker;
	params[2] = (intptr_t)leg;
	params[3] = (intptr_t)lastBone;
	params[4] = (intptr_t)&rootForward;
	params[5] = (intptr_t)&isLeft;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator::Calibrate(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data, UnityEngine_CoreModule::UnityEngine::Transform* headTracker, UnityEngine_CoreModule::UnityEngine::Transform* bodyTracker, UnityEngine_CoreModule::UnityEngine::Transform* leftHandTracker, UnityEngine_CoreModule::UnityEngine::Transform* rightHandTracker, UnityEngine_CoreModule::UnityEngine::Transform* leftFootTracker, UnityEngine_CoreModule::UnityEngine::Transform* rightFootTracker)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Calibrate", std::vector<std::string> { "RootMotion.FinalIK.VRIK", "RootMotion.FinalIK.VRIKCalibrator/CalibrationData", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)ik;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)headTracker;
	params[3] = (intptr_t)bodyTracker;
	params[4] = (intptr_t)leftHandTracker;
	params[5] = (intptr_t)rightHandTracker;
	params[6] = (intptr_t)leftFootTracker;
	params[7] = (intptr_t)rightFootTracker;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data, UnityEngine_CoreModule::UnityEngine::Transform* tracker, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg* leg, UnityEngine_CoreModule::UnityEngine::Transform* lastBone, UnityEngine_CoreModule::UnityEngine::Vector3 rootForward, bool isLeft)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalibrateLeg", std::vector<std::string> { "RootMotion.FinalIK.VRIKCalibrator/CalibrationData", "UnityEngine.Transform", "RootMotion.FinalIK.IKSolverVR/Leg", "UnityEngine.Transform", "UnityEngine.Vector3", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)tracker;
	params[2] = (intptr_t)leg;
	params[3] = (intptr_t)lastBone;
	params[4] = (intptr_t)&rootForward;
	params[5] = (intptr_t)&isLeft;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

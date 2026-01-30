#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIKCalibrator_Settings; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIKCalibrator_CalibrationData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Leg; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct VRIKCalibrator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void RecalibrateScale(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_Settings* settings);
		static Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* Calibrate(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_Settings* settings, UnityEngine_CoreModule::UnityEngine::Transform* headTracker, UnityEngine_CoreModule::UnityEngine::Transform* bodyTracker, UnityEngine_CoreModule::UnityEngine::Transform* leftHandTracker, UnityEngine_CoreModule::UnityEngine::Transform* rightHandTracker, UnityEngine_CoreModule::UnityEngine::Transform* leftFootTracker, UnityEngine_CoreModule::UnityEngine::Transform* rightFootTracker);
		static void CalibrateLeg(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_Settings* settings, UnityEngine_CoreModule::UnityEngine::Transform* tracker, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg* leg, UnityEngine_CoreModule::UnityEngine::Transform* lastBone, UnityEngine_CoreModule::UnityEngine::Vector3 rootForward, bool isLeft);
		static void Calibrate(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data, UnityEngine_CoreModule::UnityEngine::Transform* headTracker, UnityEngine_CoreModule::UnityEngine::Transform* bodyTracker, UnityEngine_CoreModule::UnityEngine::Transform* leftHandTracker, UnityEngine_CoreModule::UnityEngine::Transform* rightHandTracker, UnityEngine_CoreModule::UnityEngine::Transform* leftFootTracker, UnityEngine_CoreModule::UnityEngine::Transform* rightFootTracker);
		static void CalibrateLeg(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data, UnityEngine_CoreModule::UnityEngine::Transform* tracker, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg* leg, UnityEngine_CoreModule::UnityEngine::Transform* lastBone, UnityEngine_CoreModule::UnityEngine::Vector3 rootForward, bool isLeft);
	};
}


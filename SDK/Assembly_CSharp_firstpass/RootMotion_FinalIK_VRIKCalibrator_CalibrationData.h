#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_VRIKCalibrator.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIKCalibrator; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIKCalibrator_CalibrationData_Target; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct VRIKCalibrator_CalibrationData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float scale;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* head;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* leftHand;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* rightHand;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* pelvis;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* leftFoot;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* rightFoot;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* leftLegGoal;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData_Target* rightLegGoal;
		UnityEngine_CoreModule::UnityEngine::Vector3 pelvisTargetRight;
		float pelvisPositionWeight;
		float pelvisRotationWeight;
		void _ctor();
	};
}


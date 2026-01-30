#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIKCalibrator_CalibrationData; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct VRIKRootController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 _pelvisTargetRight_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* pelvisTarget;
		UnityEngine_CoreModule::UnityEngine::Transform* leftFootTarget;
		UnityEngine_CoreModule::UnityEngine::Transform* rightFootTarget;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_pelvisTargetRight();
		void set_pelvisTargetRight(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void Awake();
		void Calibrate();
		void Calibrate(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIKCalibrator_CalibrationData* data);
		void OnPreUpdate();
		void OnDestroy();
		void _ctor();
	};
}


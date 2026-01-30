#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_IKSolverVR.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "RootMotion_InterpolationMode.h"
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityEvent; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverVR_Footstep : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float stepSpeed;
		UnityEngine_CoreModule::UnityEngine::Vector3 characterSpaceOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		UnityEngine_CoreModule::UnityEngine::Quaternion rotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion stepToRootRot;
		bool isSupportLeg;
		float _stepProgress_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 stepFrom;
		UnityEngine_CoreModule::UnityEngine::Vector3 stepTo;
		UnityEngine_CoreModule::UnityEngine::Quaternion stepFromRot;
		UnityEngine_CoreModule::UnityEngine::Quaternion stepToRot;
		UnityEngine_CoreModule::UnityEngine::Quaternion footRelativeToRoot;
		float supportLegW;
		float supportLegWV;
		bool get_isStepping();
		float get_stepProgress();
		void set_stepProgress(float value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation, UnityEngine_CoreModule::UnityEngine::Vector3 footPosition, UnityEngine_CoreModule::UnityEngine::Quaternion footRotation, UnityEngine_CoreModule::UnityEngine::Vector3 characterSpaceOffset);
		void Reset(UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation, UnityEngine_CoreModule::UnityEngine::Vector3 footPosition, UnityEngine_CoreModule::UnityEngine::Quaternion footRotation);
		void StepTo(UnityEngine_CoreModule::UnityEngine::Vector3 p, UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation);
		void UpdateStepping(UnityEngine_CoreModule::UnityEngine::Vector3 p, UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation, float speed);
		void UpdateStanding(UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation, float minAngle, float speed);
		void Update(Assembly_CSharp_firstpass::RootMotion::InterpolationMode interpolation, UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* onStep);
	};
}


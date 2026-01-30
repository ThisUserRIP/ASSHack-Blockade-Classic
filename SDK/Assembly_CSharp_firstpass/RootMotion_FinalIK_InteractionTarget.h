#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTarget_Multiplier; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "RootMotion_FinalIK_InteractionObject_WeightCurve_Type.h"

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionTarget : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget_Multiplier*>* multipliers;
		float interactionSpeedMlp;
		UnityEngine_CoreModule::UnityEngine::Transform* pivot;
		UnityEngine_CoreModule::UnityEngine::Vector3 twistAxis;
		float twistWeight;
		float swingWeight;
		bool rotateOnce;
		UnityEngine_CoreModule::UnityEngine::Quaternion defaultLocalRotation;
		UnityEngine_CoreModule::UnityEngine::Transform* lastPivot;
		void OpenTutorial1();
		void OpenTutorial2();
		void OpenTutorial3();
		void OpenTutorial4();
		void SupportGroup();
		void ASThread();
		float GetValue(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve_Type curveType);
		void ResetRotation();
		void RotateTo(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void OpenUserManual();
		void OpenScriptReference();
		void _ctor();
	};
}


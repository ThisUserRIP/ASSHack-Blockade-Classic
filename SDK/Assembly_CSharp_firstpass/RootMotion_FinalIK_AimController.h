#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct AimIK; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct AimController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIK* ik;
		float weight;
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		float targetSwitchSmoothTime;
		float weightSmoothTime;
		bool smoothTurnTowardsTarget;
		float maxRadiansDelta;
		float maxMagnitudeDelta;
		float slerpSpeed;
		UnityEngine_CoreModule::UnityEngine::Vector3 pivotOffsetFromRoot;
		float minDistance;
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		float maxRootAngle;
		bool turnToTarget;
		float turnToTargetTime;
		bool useAnimatedAimDirection;
		UnityEngine_CoreModule::UnityEngine::Vector3 animatedAimDirection;
		UnityEngine_CoreModule::UnityEngine::Transform* lastTarget;
		float switchWeight;
		float switchWeightV;
		float weightV;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 dir;
		bool lastSmoothTowardsTarget;
		bool turningToTarget;
		float turnToTargetMlp;
		float turnToTargetMlpV;
		void Start();
		void LateUpdate();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_pivot();
		void ApplyMinDistance();
		void RootRotation();
		mscorlib::System::Collections::IEnumerator* TurnToTarget();
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct LookAtIK; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct LookAtController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::LookAtIK* ik;
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		float weight;
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		float targetSwitchSmoothTime;
		float weightSmoothTime;
		bool smoothTurnTowardsTarget;
		float maxRadiansDelta;
		float maxMagnitudeDelta;
		float slerpSpeed;
		UnityEngine_CoreModule::UnityEngine::Vector3 pivotOffsetFromRoot;
		float minDistance;
		float maxRootAngle;
		UnityEngine_CoreModule::UnityEngine::Transform* lastTarget;
		float switchWeight;
		float switchWeightV;
		float weightV;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 dir;
		bool lastSmoothTowardsTarget;
		void Start();
		void LateUpdate();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_pivot();
		void ApplyMinDistance();
		void RootRotation();
		void _ctor();
	};
}


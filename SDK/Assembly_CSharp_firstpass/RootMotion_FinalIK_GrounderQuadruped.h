#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_Grounder.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IK; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "RootMotion_FinalIK_GrounderQuadruped_Foot.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct GrounderQuadruped_Foot; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct GrounderQuadruped : Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding* forelegSolver;
		float rootRotationWeight;
		float minRootRotation;
		float maxRootRotation;
		float rootRotationSpeed;
		float maxLegOffset;
		float maxForeLegOffset;
		float maintainHeadRotationWeight;
		UnityEngine_CoreModule::UnityEngine::Transform* characterRoot;
		UnityEngine_CoreModule::UnityEngine::Transform* pelvis;
		UnityEngine_CoreModule::UnityEngine::Transform* lastSpineBone;
		UnityEngine_CoreModule::UnityEngine::Transform* head;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IK*>* legs;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IK*>* forelegs;
		UnityEngine_CoreModule::UnityEngine::Vector3 gravity;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::GrounderQuadruped_Foot>* feet;
		UnityEngine_CoreModule::UnityEngine::Vector3 animatedPelvisLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion animatedPelvisLocalRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion animatedHeadLocalRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 solvedPelvisLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion solvedPelvisLocalRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion solvedHeadLocalRotation;
		int32_t solvedFeet;
		bool solved;
		float angle;
		UnityEngine_CoreModule::UnityEngine::Transform* forefeetRoot;
		UnityEngine_CoreModule::UnityEngine::Quaternion headRotation;
		float lastWeight;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* characterRootRigidbody;
		void OpenUserManual();
		void OpenScriptReference();
		void ResetPosition();
		bool IsReadyToInitiate();
		bool IsReadyToInitiateLegs(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IK*>* ikComponents);
		void OnDisable();
		void Update();
		void Initiate();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* InitiateFeet(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IK*>* ikComponents, IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::GrounderQuadruped_Foot>& f, int32_t indexOffset);
		void LateUpdate();
		void RootRotation();
		void OnSolverUpdate();
		void UpdateForefeetRoot();
		void SetFootIK(Assembly_CSharp_firstpass::RootMotion::FinalIK::GrounderQuadruped_Foot foot, float maxOffset);
		void OnPostSolverUpdate();
		void OnDestroy();
		void DestroyLegs(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IK*>* ikComponents);
		void _ctor();
	};
}


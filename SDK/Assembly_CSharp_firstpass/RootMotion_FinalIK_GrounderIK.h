#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_Grounder.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IK; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct GrounderIK : Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IK*>* legs;
		UnityEngine_CoreModule::UnityEngine::Transform* pelvis;
		UnityEngine_CoreModule::UnityEngine::Transform* characterRoot;
		float rootRotationWeight;
		float rootRotationSpeed;
		float maxRootRotationAngle;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* feet;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* footRotations;
		UnityEngine_CoreModule::UnityEngine::Vector3 animatedPelvisLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 solvedPelvisLocalPosition;
		int32_t solvedFeet;
		bool solved;
		float lastWeight;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* characterRootRigidbody;
		void OpenUserManual();
		void OpenScriptReference();
		void ResetPosition();
		bool IsReadyToInitiate();
		void OnDisable();
		void Update();
		void Initiate();
		void OnSolverUpdate();
		void SetLegIK(int32_t index);
		void OnPostSolverUpdate();
		void OnDestroy();
		void _ctor();
	};
}


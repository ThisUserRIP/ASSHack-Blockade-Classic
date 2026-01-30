#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_Grounder.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct BipedIK; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverLimb; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct GrounderBipedIK : Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::BipedIK* ik;
		float spineBend;
		float spineSpeed;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* feet;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* footRotations;
		UnityEngine_CoreModule::UnityEngine::Vector3 animatedPelvisLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 solvedPelvisLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 spineOffset;
		float lastWeight;
		void OpenUserManual();
		void OpenScriptReference();
		void ResetPosition();
		bool IsReadyToInitiate();
		void Update();
		void Initiate();
		void OnDisable();
		void OnSolverUpdate();
		void SetLegIK(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb* limb, int32_t index);
		void OnPostSolverUpdate();
		void OnDestroy();
		void _ctor();
	};
}


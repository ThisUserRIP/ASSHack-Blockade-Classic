#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_Grounder.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FullBodyBipedIK; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct GrounderFBBIK_SpineEffector; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKEffector; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding_Leg; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct GrounderFBBIK : Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedIK* ik;
		float spineBend;
		float spineSpeed;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::GrounderFBBIK_SpineEffector*>* spine;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* feet;
		UnityEngine_CoreModule::UnityEngine::Vector3 spineOffset;
		bool firstSolve;
		void OpenTutorial();
		void OpenUserManual();
		void OpenScriptReference();
		void ResetPosition();
		bool IsReadyToInitiate();
		void Update();
		void FixedUpdate();
		void LateUpdate();
		void Initiate();
		void OnSolverUpdate();
		void SetLegIK(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* effector, Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Leg* leg);
		void OnDrawGizmosSelected();
		void OnDestroy();
		void _ctor();
	};
}


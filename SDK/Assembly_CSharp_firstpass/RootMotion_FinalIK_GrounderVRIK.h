#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_Grounder.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "RootMotion_FinalIK_IKSolverVR_PositionOffset.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding_Leg; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct GrounderVRIK : Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* feet;
		void OpenTutorial();
		void OpenUserManual();
		void OpenScriptReference();
		void ResetPosition();
		bool IsReadyToInitiate();
		void Update();
		void Initiate();
		void OnSolverUpdate();
		void SetLegIK(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_PositionOffset positionOffset, UnityEngine_CoreModule::UnityEngine::Transform* bone, Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Leg* leg);
		void OnPostSolverUpdate();
		void OnDrawGizmosSelected();
		void OnDestroy();
		void _ctor();
	};
}


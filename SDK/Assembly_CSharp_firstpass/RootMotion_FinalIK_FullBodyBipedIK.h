#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IK.h"
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedReferences; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBodyBiped; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct FullBodyBipedIK : Assembly_CSharp_firstpass::RootMotion::FinalIK::IK
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::BipedReferences* references;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver;
		void OpenUserManual();
		void OpenScriptReference();
		void OpenSetupTutorial();
		void OpenInspectorTutorial();
		void SupportGroup();
		void ASThread();
		void SetReferences(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, UnityEngine_CoreModule::UnityEngine::Transform* rootNode);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* GetIKSolver();
		bool ReferencesError(mscorlib::System::String& errorMessage);
		bool ReferencesWarning(mscorlib::System::String& warningMessage);
		void Reinitiate();
		void AutoDetectReferences();
		void _ctor();
	};
}


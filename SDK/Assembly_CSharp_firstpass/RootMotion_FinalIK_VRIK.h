#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IK.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK_References; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct VRIK : Assembly_CSharp_firstpass::RootMotion::FinalIK::IK
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK_References* references;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR* solver;
		void OpenUserManual();
		void OpenScriptReference();
		void OpenSetupTutorial();
		void AutoDetectReferences();
		void GuessHandOrientations();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* GetIKSolver();
		void InitiateSolver();
		void UpdateSolver();
		void _ctor();
	};
}


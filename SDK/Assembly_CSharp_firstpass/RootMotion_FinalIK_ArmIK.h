#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IK.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverArm; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct ArmIK : Assembly_CSharp_firstpass::RootMotion::FinalIK::IK
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverArm* solver;
		void OpenUserManual();
		void OpenScriptReference();
		void SupportGroup();
		void ASThread();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* GetIKSolver();
		void _ctor();
	};
}


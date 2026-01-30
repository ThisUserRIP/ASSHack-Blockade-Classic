#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_SolverManager.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IK : Assembly_CSharp_firstpass::RootMotion::SolverManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* GetIKSolver();
		void UpdateSolver();
		void InitiateSolver();
		void FixTransforms();
		void OpenUserManual();
		void OpenScriptReference();
		void _ctor();
	};
}


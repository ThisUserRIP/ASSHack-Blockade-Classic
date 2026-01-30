#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverLimb; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFABRIK; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverLookAt; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverAim; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Constraints; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedReferences; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct BipedIKSolvers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb* leftFoot;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb* rightFoot;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb* leftHand;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb* rightHand;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFABRIK* spine;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLookAt* lookAt;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverAim* aim;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Constraints* pelvis;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb*>* _limbs;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver*>* _ikSolvers;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb*>* get_limbs();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver*>* get_ikSolvers();
		void AssignReferences(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references);
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Point; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Arm; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverArm : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float IKRotationWeight;
		UnityEngine_CoreModule::UnityEngine::Quaternion IKRotation;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* chest;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* shoulder;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* upperArm;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* forearm;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* hand;
		bool isLeft;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm* arm;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations;
		bool IsValid(mscorlib::System::String& message);
		bool SetChain(UnityEngine_CoreModule::UnityEngine::Transform* chest, UnityEngine_CoreModule::UnityEngine::Transform* shoulder, UnityEngine_CoreModule::UnityEngine::Transform* upperArm, UnityEngine_CoreModule::UnityEngine::Transform* forearm, UnityEngine_CoreModule::UnityEngine::Transform* hand, UnityEngine_CoreModule::UnityEngine::Transform* root);
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>* GetPoints();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* GetPoint(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void StoreDefaultLocalState();
		void FixTransforms();
		void OnInitiate();
		void OnUpdate();
		void Solve();
		void Read();
		void Write();
		void _ctor();
	};
}


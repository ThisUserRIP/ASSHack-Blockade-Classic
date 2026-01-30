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
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Leg; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverLeg : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float IKRotationWeight;
		UnityEngine_CoreModule::UnityEngine::Quaternion IKRotation;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* pelvis;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* thigh;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* calf;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* foot;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* toe;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg* leg;
		UnityEngine_CoreModule::UnityEngine::Vector3 heelOffset;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations;
		bool IsValid(mscorlib::System::String& message);
		bool SetChain(UnityEngine_CoreModule::UnityEngine::Transform* pelvis, UnityEngine_CoreModule::UnityEngine::Transform* thigh, UnityEngine_CoreModule::UnityEngine::Transform* calf, UnityEngine_CoreModule::UnityEngine::Transform* foot, UnityEngine_CoreModule::UnityEngine::Transform* toe, UnityEngine_CoreModule::UnityEngine::Transform* root);
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


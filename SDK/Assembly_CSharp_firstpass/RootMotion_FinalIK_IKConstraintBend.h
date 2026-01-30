#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBody; };
namespace Assembly_CSharp_firstpass::RootMotion { struct Warning_Logger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKConstraintBend : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* bone1;
		UnityEngine_CoreModule::UnityEngine::Transform* bone2;
		UnityEngine_CoreModule::UnityEngine::Transform* bone3;
		UnityEngine_CoreModule::UnityEngine::Transform* bendGoal;
		UnityEngine_CoreModule::UnityEngine::Vector3 direction;
		UnityEngine_CoreModule::UnityEngine::Quaternion rotationOffset;
		float weight;
		UnityEngine_CoreModule::UnityEngine::Vector3 defaultLocalDirection;
		UnityEngine_CoreModule::UnityEngine::Vector3 defaultChildDirection;
		float clampF;
		int32_t chainIndex1;
		int32_t nodeIndex1;
		int32_t chainIndex2;
		int32_t nodeIndex2;
		int32_t chainIndex3;
		int32_t nodeIndex3;
		bool _initiated_k__BackingField;
		bool limbOrientationsSet;
		bool IsValid(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, Assembly_CSharp_firstpass::RootMotion::Warning_Logger* logger);
		bool get_initiated();
		void set_initiated(bool value);
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3);
		void SetBones(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3);
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void SetLimbOrientation(UnityEngine_CoreModule::UnityEngine::Vector3 upper, UnityEngine_CoreModule::UnityEngine::Vector3 lower, UnityEngine_CoreModule::UnityEngine::Vector3 last);
		void LimitBend(float solverWeight, float positionWeight);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetDir(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		UnityEngine_CoreModule::UnityEngine::Vector3 OrthoToLimb(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine_CoreModule::UnityEngine::Vector3 tangent);
		UnityEngine_CoreModule::UnityEngine::Vector3 OrthoToBone1(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine_CoreModule::UnityEngine::Vector3 tangent);
	};
}


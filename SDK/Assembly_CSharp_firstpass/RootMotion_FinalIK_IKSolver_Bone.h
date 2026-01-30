#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver_Point.h"
#include "RootMotion_FinalIK_IKSolver.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct RotationLimit; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Bone; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolver_Bone : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float length;
		float sqrMag;
		UnityEngine_CoreModule::UnityEngine::Vector3 axis;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimit* _rotationLimit;
		bool isLimited;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimit* get_rotationLimit();
		void set_rotationLimit(Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimit* value);
		void Swing(UnityEngine_CoreModule::UnityEngine::Vector3 swingTarget, float weight);
		static void SolverSwing(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Bone*>* bones, int32_t index, UnityEngine_CoreModule::UnityEngine::Vector3 swingTarget, float weight);
		void Swing2D(UnityEngine_CoreModule::UnityEngine::Vector3 swingTarget, float weight);
		void SetToSolverPosition();
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* transform, float weight);
	};
}


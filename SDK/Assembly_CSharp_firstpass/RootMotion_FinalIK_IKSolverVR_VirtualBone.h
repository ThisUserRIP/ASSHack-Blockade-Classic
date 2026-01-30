#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_IKSolverVR.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_VirtualBone; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverVR_VirtualBone : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 readPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion readRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 solverPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion solverRotation;
		float length;
		float sqrMag;
		UnityEngine_CoreModule::UnityEngine::Vector3 axis;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void Read(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static void SwingRotation(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t index, UnityEngine_CoreModule::UnityEngine::Vector3 swingTarget, float weight);
		static float PreSolve(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>& bones);
		static void RotateAroundPoint(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t index, UnityEngine_CoreModule::UnityEngine::Vector3 point, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static void RotateBy(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t index, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static void RotateBy(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static void RotateTo(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t index, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static void SolveTrigonometric(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t first, int32_t second, int32_t third, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, UnityEngine_CoreModule::UnityEngine::Vector3 bendNormal, float weight);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetDirectionToBendPoint(UnityEngine_CoreModule::UnityEngine::Vector3 direction, float directionMag, UnityEngine_CoreModule::UnityEngine::Vector3 bendDirection, float sqrMag1, float sqrMag2);
		static void SolveFABRIK(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, UnityEngine_CoreModule::UnityEngine::Vector3 startPosition, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, float weight, float minNormalizedTargetDistance, int32_t iterations, float length, UnityEngine_CoreModule::UnityEngine::Vector3 startOffset);
		static UnityEngine_CoreModule::UnityEngine::Vector3 SolveFABRIKJoint(UnityEngine_CoreModule::UnityEngine::Vector3 pos1, UnityEngine_CoreModule::UnityEngine::Vector3 pos2, float length);
		static void SolveCCD(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, float weight, int32_t iterations);
	};
}


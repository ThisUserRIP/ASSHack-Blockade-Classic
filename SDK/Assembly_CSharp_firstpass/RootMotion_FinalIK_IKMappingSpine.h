#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKMapping.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMapping_BoneMap; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBody; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKMappingSpine : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* spineBones;
		UnityEngine_CoreModule::UnityEngine::Transform* leftUpperArmBone;
		UnityEngine_CoreModule::UnityEngine::Transform* rightUpperArmBone;
		UnityEngine_CoreModule::UnityEngine::Transform* leftThighBone;
		UnityEngine_CoreModule::UnityEngine::Transform* rightThighBone;
		int32_t iterations;
		float twistWeight;
		int32_t rootNodeIndex;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap*>* spine;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* leftUpperArm;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* rightUpperArm;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* leftThigh;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* rightThigh;
		bool useFABRIK;
		bool IsValid(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* solver, mscorlib::System::String& message);
		void _ctor();
		void _ctor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* spineBones, UnityEngine_CoreModule::UnityEngine::Transform* leftUpperArmBone, UnityEngine_CoreModule::UnityEngine::Transform* rightUpperArmBone, UnityEngine_CoreModule::UnityEngine::Transform* leftThighBone, UnityEngine_CoreModule::UnityEngine::Transform* rightThighBone);
		void SetBones(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* spineBones, UnityEngine_CoreModule::UnityEngine::Transform* leftUpperArmBone, UnityEngine_CoreModule::UnityEngine::Transform* rightUpperArmBone, UnityEngine_CoreModule::UnityEngine::Transform* leftThighBone, UnityEngine_CoreModule::UnityEngine::Transform* rightThighBone);
		void StoreDefaultLocalState();
		void FixTransforms();
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		bool UseFABRIK();
		void ReadPose();
		void WritePose(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void ForwardReach(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void BackwardReach(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void MapToSolverPositions(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
	};
}


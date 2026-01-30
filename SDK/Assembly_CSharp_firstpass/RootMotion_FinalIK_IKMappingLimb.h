#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKMapping.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMapping_BoneMap; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };
namespace mscorlib::System { struct String; };
#include "RootMotion_FinalIK_IKMappingLimb_BoneMapType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBody; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKMappingLimb : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* parentBone;
		UnityEngine_CoreModule::UnityEngine::Transform* bone1;
		UnityEngine_CoreModule::UnityEngine::Transform* bone2;
		UnityEngine_CoreModule::UnityEngine::Transform* bone3;
		float maintainRotationWeight;
		float weight;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* boneMapParent;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* boneMap1;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* boneMap2;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* boneMap3;
		bool IsValid(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* solver, mscorlib::System::String& message);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* GetBoneMap(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb_BoneMapType boneMap);
		void SetLimbOrientation(UnityEngine_CoreModule::UnityEngine::Vector3 upper, UnityEngine_CoreModule::UnityEngine::Vector3 lower);
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, UnityEngine_CoreModule::UnityEngine::Transform* parentBone);
		void SetBones(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, UnityEngine_CoreModule::UnityEngine::Transform* parentBone);
		void StoreDefaultLocalState();
		void FixTransforms();
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void ReadPose();
		void WritePose(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, bool fullBody);
	};
}


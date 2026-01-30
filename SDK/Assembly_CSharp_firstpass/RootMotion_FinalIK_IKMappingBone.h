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
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBody; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKMappingBone : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* bone;
		float maintainRotationWeight;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* boneMap;
		bool IsValid(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* solver, mscorlib::System::String& message);
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* bone);
		void StoreDefaultLocalState();
		void FixTransforms();
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void ReadPose();
		void WritePose(float solverWeight);
	};
}


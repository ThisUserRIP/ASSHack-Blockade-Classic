#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_FBIKChain.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FBIKChain; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBody; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct FBIKChain_ChildConstraint : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float pushElasticity;
		float pullElasticity;
		UnityEngine_CoreModule::UnityEngine::Transform* bone1;
		UnityEngine_CoreModule::UnityEngine::Transform* bone2;
		float _nominalDistance_k__BackingField;
		bool _isRigid_k__BackingField;
		float crossFade;
		float inverseCrossFade;
		int32_t chain1Index;
		int32_t chain2Index;
		float get_nominalDistance();
		void set_nominalDistance(float value);
		bool get_isRigid();
		void set_isRigid(bool value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, float pushElasticity, float pullElasticity);
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void OnPreSolve(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void Solve(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
	};
}


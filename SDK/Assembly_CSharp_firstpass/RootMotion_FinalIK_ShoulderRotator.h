#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FullBodyBipedIK; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "RootMotion_FinalIK_FullBodyBipedChain.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMapping_BoneMap; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct ShoulderRotator : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float weight;
		float offset;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedIK* ik;
		bool skip;
		void Start();
		void RotateShoulders();
		void RotateShoulder(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedChain chain, float weight, float offset);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* GetParentBoneMap(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedChain chain);
		void OnDestroy();
		void _ctor();
	};
}


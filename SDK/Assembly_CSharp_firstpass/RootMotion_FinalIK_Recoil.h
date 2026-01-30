#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_OffsetModifier.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct AimIK; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "RootMotion_FinalIK_Recoil_Handedness.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Recoil_RecoilOffset; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKEffector; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Recoil : Assembly_CSharp_firstpass::RootMotion::FinalIK::OffsetModifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIK* aimIK;
		bool aimIKSolvedLast;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Recoil_Handedness handedness;
		bool twoHanded;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* recoilWeight;
		float magnitudeRandom;
		UnityEngine_CoreModule::UnityEngine::Vector3 rotationRandom;
		UnityEngine_CoreModule::UnityEngine::Vector3 handRotationOffset;
		float blendTime;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::Recoil_RecoilOffset*>* offsets;
		UnityEngine_CoreModule::UnityEngine::Quaternion rotationOffset;
		float magnitudeMlp;
		float endTime;
		UnityEngine_CoreModule::UnityEngine::Quaternion handRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion secondaryHandRelativeRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion randomRotation;
		float length;
		bool initiated;
		float blendWeight;
		float w;
		UnityEngine_CoreModule::UnityEngine::Quaternion primaryHandRotation;
		bool handRotationsSet;
		UnityEngine_CoreModule::UnityEngine::Vector3 aimIKAxis;
		bool get_isFinished();
		void SetHandRotations(UnityEngine_CoreModule::UnityEngine::Quaternion leftHandRotation, UnityEngine_CoreModule::UnityEngine::Quaternion rightHandRotation);
		void Fire(float magnitude);
		void OnModifyOffset();
		void AfterFBBIK();
		void AfterAimIK();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_primaryHandEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_secondaryHandEffector();
		UnityEngine_CoreModule::UnityEngine::Transform* get_primaryHand();
		UnityEngine_CoreModule::UnityEngine::Transform* get_secondaryHand();
		void OnDestroy();
		void _ctor();
	};
}


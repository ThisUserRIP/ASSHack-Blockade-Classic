#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "RootMotion_BipedReferences_AutoDetectParams.h"
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedReferences_AutoDetectParams; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
namespace mscorlib::System { struct String; };
#include "RootMotion_BipedNaming_BoneType.h"
#include "RootMotion_BipedNaming_BoneSide.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct BipedReferences : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* root;
		UnityEngine_CoreModule::UnityEngine::Transform* pelvis;
		UnityEngine_CoreModule::UnityEngine::Transform* leftThigh;
		UnityEngine_CoreModule::UnityEngine::Transform* leftCalf;
		UnityEngine_CoreModule::UnityEngine::Transform* leftFoot;
		UnityEngine_CoreModule::UnityEngine::Transform* rightThigh;
		UnityEngine_CoreModule::UnityEngine::Transform* rightCalf;
		UnityEngine_CoreModule::UnityEngine::Transform* rightFoot;
		UnityEngine_CoreModule::UnityEngine::Transform* leftUpperArm;
		UnityEngine_CoreModule::UnityEngine::Transform* leftForearm;
		UnityEngine_CoreModule::UnityEngine::Transform* leftHand;
		UnityEngine_CoreModule::UnityEngine::Transform* rightUpperArm;
		UnityEngine_CoreModule::UnityEngine::Transform* rightForearm;
		UnityEngine_CoreModule::UnityEngine::Transform* rightHand;
		UnityEngine_CoreModule::UnityEngine::Transform* head;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* spine;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* eyes;
		bool get_isFilled();
		bool get_isEmpty();
		bool IsEmpty(bool includeRoot);
		bool Contains(UnityEngine_CoreModule::UnityEngine::Transform* t, bool ignoreRoot);
		static bool AutoDetectReferences(Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, UnityEngine_CoreModule::UnityEngine::Transform* root, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams);
		static void DetectReferencesByNaming(Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, UnityEngine_CoreModule::UnityEngine::Transform* root, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams);
		static void AssignHumanoidReferences(Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, UnityEngine_AnimationModule::UnityEngine::Animator* animator, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams);
		static bool SetupError(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& errorMessage);
		static bool SetupWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage);
		static bool IsNeckBone(UnityEngine_CoreModule::UnityEngine::Transform* bone, UnityEngine_CoreModule::UnityEngine::Transform* leftUpperArm);
		static bool AddBoneToEyes(UnityEngine_CoreModule::UnityEngine::Transform* bone, Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams);
		static bool AddBoneToSpine(UnityEngine_CoreModule::UnityEngine::Transform* bone, Assembly_CSharp_firstpass::RootMotion::BipedReferences& references, Assembly_CSharp_firstpass::RootMotion::BipedReferences_AutoDetectParams autoDetectParams);
		static void DetectLimb(Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneType boneType, Assembly_CSharp_firstpass::RootMotion::BipedNaming_BoneSide boneSide, UnityEngine_CoreModule::UnityEngine::Transform& firstBone, UnityEngine_CoreModule::UnityEngine::Transform& secondBone, UnityEngine_CoreModule::UnityEngine::Transform& lastBone, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms);
		static void AddBoneToHierarchy(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>& bones, UnityEngine_CoreModule::UnityEngine::Transform* transform);
		static bool LimbError(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, mscorlib::System::String& errorMessage);
		static bool LimbWarning(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, mscorlib::System::String& warningMessage);
		static bool SpineError(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& errorMessage);
		static bool SpineWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage);
		static bool EyesError(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& errorMessage);
		static bool EyesWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage);
		static bool RootHeightWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage);
		static bool FacingAxisWarning(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, mscorlib::System::String& warningMessage);
		static float GetVerticalOffset(UnityEngine_CoreModule::UnityEngine::Vector3 p1, UnityEngine_CoreModule::UnityEngine::Vector3 p2, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void _ctor();
	};
}


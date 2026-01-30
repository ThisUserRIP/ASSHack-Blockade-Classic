#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_VRIK.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct VRIK_References : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* root;
		UnityEngine_CoreModule::UnityEngine::Transform* pelvis;
		UnityEngine_CoreModule::UnityEngine::Transform* spine;
		UnityEngine_CoreModule::UnityEngine::Transform* chest;
		UnityEngine_CoreModule::UnityEngine::Transform* neck;
		UnityEngine_CoreModule::UnityEngine::Transform* head;
		UnityEngine_CoreModule::UnityEngine::Transform* leftShoulder;
		UnityEngine_CoreModule::UnityEngine::Transform* leftUpperArm;
		UnityEngine_CoreModule::UnityEngine::Transform* leftForearm;
		UnityEngine_CoreModule::UnityEngine::Transform* leftHand;
		UnityEngine_CoreModule::UnityEngine::Transform* rightShoulder;
		UnityEngine_CoreModule::UnityEngine::Transform* rightUpperArm;
		UnityEngine_CoreModule::UnityEngine::Transform* rightForearm;
		UnityEngine_CoreModule::UnityEngine::Transform* rightHand;
		UnityEngine_CoreModule::UnityEngine::Transform* leftThigh;
		UnityEngine_CoreModule::UnityEngine::Transform* leftCalf;
		UnityEngine_CoreModule::UnityEngine::Transform* leftFoot;
		UnityEngine_CoreModule::UnityEngine::Transform* leftToes;
		UnityEngine_CoreModule::UnityEngine::Transform* rightThigh;
		UnityEngine_CoreModule::UnityEngine::Transform* rightCalf;
		UnityEngine_CoreModule::UnityEngine::Transform* rightFoot;
		UnityEngine_CoreModule::UnityEngine::Transform* rightToes;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* GetTransforms();
		bool get_isFilled();
		bool get_isEmpty();
		static bool AutoDetectReferences(UnityEngine_CoreModule::UnityEngine::Transform* root, Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK_References& references);
		void _ctor();
	};
}


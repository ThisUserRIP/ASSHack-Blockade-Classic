#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FullBodyBipedIK; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct FBBIKArmBending : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedIK* ik;
		UnityEngine_CoreModule::UnityEngine::Vector3 bendDirectionOffsetLeft;
		UnityEngine_CoreModule::UnityEngine::Vector3 bendDirectionOffsetRight;
		UnityEngine_CoreModule::UnityEngine::Vector3 characterSpaceBendOffsetLeft;
		UnityEngine_CoreModule::UnityEngine::Vector3 characterSpaceBendOffsetRight;
		UnityEngine_CoreModule::UnityEngine::Quaternion leftHandTargetRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion rightHandTargetRotation;
		bool initiated;
		void LateUpdate();
		void OnPostFBBIK();
		void OnDestroy();
		void _ctor();
	};
}


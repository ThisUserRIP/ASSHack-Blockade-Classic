#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_OffsetModifier.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct OffsetPose; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct BodyTilt : Assembly_CSharp_firstpass::RootMotion::FinalIK::OffsetModifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float tiltSpeed;
		float tiltSensitivity;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::OffsetPose* poseLeft;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::OffsetPose* poseRight;
		float tiltAngle;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastForward;
		void Start();
		void OnModifyOffset();
		void _ctor();
	};
}


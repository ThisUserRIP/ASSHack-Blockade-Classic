#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct AimPoser_Pose; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct AimPoser : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float angleBuffer;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::AimPoser_Pose*>* poses;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::AimPoser_Pose* GetPose(UnityEngine_CoreModule::UnityEngine::Vector3 localDirection);
		void SetPoseActive(Assembly_CSharp_firstpass::RootMotion::FinalIK::AimPoser_Pose* pose);
		void _ctor();
	};
}


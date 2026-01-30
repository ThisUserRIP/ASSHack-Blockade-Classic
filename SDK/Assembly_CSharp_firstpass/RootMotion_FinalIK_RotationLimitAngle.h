#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_RotationLimit.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct RotationLimitAngle : Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimit
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float limit;
		float twistLimit;
		void OpenUserManual();
		void OpenScriptReference();
		void SupportGroup();
		void ASThread();
		UnityEngine_CoreModule::UnityEngine::Quaternion LimitRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		UnityEngine_CoreModule::UnityEngine::Quaternion LimitSwing(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_RotationLimit.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct RotationLimitHinge : Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimit
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool useLimits;
		float min;
		float max;
		float zeroAxisDisplayOffset;
		UnityEngine_CoreModule::UnityEngine::Quaternion lastRotation;
		float lastAngle;
		void OpenUserManual();
		void OpenScriptReference();
		void SupportGroup();
		void ASThread();
		UnityEngine_CoreModule::UnityEngine::Quaternion LimitRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		UnityEngine_CoreModule::UnityEngine::Quaternion LimitHinge(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void _ctor();
	};
}


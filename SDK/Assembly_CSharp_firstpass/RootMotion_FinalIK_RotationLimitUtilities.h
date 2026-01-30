#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct RotationLimitUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Quaternion LimitHinge(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, float min, float max, bool useLimits, UnityEngine_CoreModule::UnityEngine::Vector3 axis, UnityEngine_CoreModule::UnityEngine::Quaternion& lastRotation, float& lastAngle);
		static UnityEngine_CoreModule::UnityEngine::Quaternion Limit1DOF(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 axis);
		static UnityEngine_CoreModule::UnityEngine::Quaternion LimitAngle(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 axis, UnityEngine_CoreModule::UnityEngine::Vector3 secondaryAxis, float limit, float twistLimit);
		static UnityEngine_CoreModule::UnityEngine::Quaternion LimitSwing(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 axis, float limit);
		static UnityEngine_CoreModule::UnityEngine::Quaternion LimitTwist(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 axis, UnityEngine_CoreModule::UnityEngine::Vector3 orthoAxis, float twistLimit);
	};
}


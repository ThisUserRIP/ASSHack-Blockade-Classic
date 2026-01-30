#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct QuaTools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Quaternion Lerp(UnityEngine_CoreModule::UnityEngine::Quaternion fromRotation, UnityEngine_CoreModule::UnityEngine::Quaternion toRotation, float weight);
		static UnityEngine_CoreModule::UnityEngine::Quaternion Slerp(UnityEngine_CoreModule::UnityEngine::Quaternion fromRotation, UnityEngine_CoreModule::UnityEngine::Quaternion toRotation, float weight);
		static UnityEngine_CoreModule::UnityEngine::Quaternion LinearBlend(UnityEngine_CoreModule::UnityEngine::Quaternion q, float weight);
		static UnityEngine_CoreModule::UnityEngine::Quaternion SphericalBlend(UnityEngine_CoreModule::UnityEngine::Quaternion q, float weight);
		static UnityEngine_CoreModule::UnityEngine::Quaternion FromToAroundAxis(UnityEngine_CoreModule::UnityEngine::Vector3 fromDirection, UnityEngine_CoreModule::UnityEngine::Vector3 toDirection, UnityEngine_CoreModule::UnityEngine::Vector3 axis);
		static UnityEngine_CoreModule::UnityEngine::Quaternion RotationToLocalSpace(UnityEngine_CoreModule::UnityEngine::Quaternion space, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static UnityEngine_CoreModule::UnityEngine::Quaternion FromToRotation(UnityEngine_CoreModule::UnityEngine::Quaternion from, UnityEngine_CoreModule::UnityEngine::Quaternion to);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetAxis(UnityEngine_CoreModule::UnityEngine::Vector3 v);
		static UnityEngine_CoreModule::UnityEngine::Quaternion ClampRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, float clampWeight, int32_t clampSmoothing);
		static float ClampAngle(float angle, float clampWeight, int32_t clampSmoothing);
		static UnityEngine_CoreModule::UnityEngine::Quaternion MatchRotation(UnityEngine_CoreModule::UnityEngine::Quaternion targetRotation, UnityEngine_CoreModule::UnityEngine::Vector3 targetforwardAxis, UnityEngine_CoreModule::UnityEngine::Vector3 targetUpAxis, UnityEngine_CoreModule::UnityEngine::Vector3 forwardAxis, UnityEngine_CoreModule::UnityEngine::Vector3 upAxis);
	};
}


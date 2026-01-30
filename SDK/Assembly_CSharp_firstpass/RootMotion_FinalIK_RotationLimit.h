#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct RotationLimit : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 axis;
		UnityEngine_CoreModule::UnityEngine::Quaternion defaultLocalRotation;
		bool initiated;
		bool applicationQuit;
		bool defaultLocalRotationSet;
		void SetDefaultLocalRotation();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetLimitedLocalRotation(UnityEngine_CoreModule::UnityEngine::Quaternion localRotation, bool& changed);
		bool Apply();
		void Disable();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_secondaryAxis();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_crossAxis();
		UnityEngine_CoreModule::UnityEngine::Quaternion LimitRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void Awake();
		void LateUpdate();
		void LogWarning(mscorlib::System::String* message);
		static UnityEngine_CoreModule::UnityEngine::Quaternion Limit1DOF(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 axis);
		static UnityEngine_CoreModule::UnityEngine::Quaternion LimitTwist(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 axis, UnityEngine_CoreModule::UnityEngine::Vector3 orthoAxis, float twistLimit);
		static float GetOrthogonalAngle(UnityEngine_CoreModule::UnityEngine::Vector3 v1, UnityEngine_CoreModule::UnityEngine::Vector3 v2, UnityEngine_CoreModule::UnityEngine::Vector3 normal);
		void _ctor();
	};
}


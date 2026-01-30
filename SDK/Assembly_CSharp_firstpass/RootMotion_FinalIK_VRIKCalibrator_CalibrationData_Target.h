#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_VRIKCalibrator_CalibrationData.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIKCalibrator_CalibrationData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct VRIKCalibrator_CalibrationData_Target : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool used;
		UnityEngine_CoreModule::UnityEngine::Vector3 localPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion localRotation;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* t);
		void SetTo(UnityEngine_CoreModule::UnityEngine::Transform* t);
	};
}


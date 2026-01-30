#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_VRIKCalibrator.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIKCalibrator; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct VRIKCalibrator_Settings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float scaleMlp;
		UnityEngine_CoreModule::UnityEngine::Vector3 headTrackerForward;
		UnityEngine_CoreModule::UnityEngine::Vector3 headTrackerUp;
		UnityEngine_CoreModule::UnityEngine::Vector3 bodyTrackerForward;
		UnityEngine_CoreModule::UnityEngine::Vector3 bodyTrackerUp;
		UnityEngine_CoreModule::UnityEngine::Vector3 handTrackerForward;
		UnityEngine_CoreModule::UnityEngine::Vector3 handTrackerUp;
		UnityEngine_CoreModule::UnityEngine::Vector3 footTrackerForward;
		UnityEngine_CoreModule::UnityEngine::Vector3 footTrackerUp;
		UnityEngine_CoreModule::UnityEngine::Vector3 headOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 handOffset;
		float footForwardOffset;
		float footInwardOffset;
		float footHeadingOffset;
		float pelvisPositionWeight;
		float pelvisRotationWeight;
		void _ctor();
	};
}


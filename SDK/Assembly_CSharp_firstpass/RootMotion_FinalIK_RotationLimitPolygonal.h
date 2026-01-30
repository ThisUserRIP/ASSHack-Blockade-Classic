#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_RotationLimit.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct RotationLimitPolygonal_LimitPoint; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct RotationLimitPolygonal_ReachCone; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct RotationLimitPolygonal : Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimit
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float twistLimit;
		int32_t smoothIterations;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimitPolygonal_LimitPoint*>* points;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* P;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimitPolygonal_ReachCone*>* reachCones;
		void OpenUserManual();
		void OpenScriptReference();
		void SupportGroup();
		void ASThread();
		void SetLimitPoints(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimitPolygonal_LimitPoint*>* points);
		UnityEngine_CoreModule::UnityEngine::Quaternion LimitRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void Start();
		void ResetToDefault();
		void BuildReachCones();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* SmoothPoints();
		float GetScalar(int32_t k);
		UnityEngine_CoreModule::UnityEngine::Vector3 PointToTangentPlane(UnityEngine_CoreModule::UnityEngine::Vector3 p, float r);
		UnityEngine_CoreModule::UnityEngine::Vector3 TangentPointToSphere(UnityEngine_CoreModule::UnityEngine::Vector3 q, float r);
		UnityEngine_CoreModule::UnityEngine::Quaternion LimitSwing(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		int32_t GetReachCone(UnityEngine_CoreModule::UnityEngine::Vector3 L);
		void _ctor();
	};
}


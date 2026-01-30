#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_PenetrationAvoidance.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct PenetrationAvoidance; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct PenetrationAvoidance_Avoider_EffectorLink; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBodyBiped; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct PenetrationAvoidance_Avoider : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* raycastFrom;
		UnityEngine_CoreModule::UnityEngine::Transform* raycastTo;
		float raycastRadius;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::PenetrationAvoidance_Avoider_EffectorLink*>* effectors;
		float smoothTimeIn;
		float smoothTimeOut;
		UnityEngine_CoreModule::UnityEngine::LayerMask layers;
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		UnityEngine_CoreModule::UnityEngine::Vector3 offsetTarget;
		UnityEngine_CoreModule::UnityEngine::Vector3 offsetV;
		void Solve(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetOffsetTarget(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver);
		UnityEngine_CoreModule::UnityEngine::Vector3 Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 from, UnityEngine_CoreModule::UnityEngine::Vector3 to);
		void _ctor();
	};
}


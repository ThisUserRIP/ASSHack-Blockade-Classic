#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_GrounderQuadruped.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct GrounderQuadruped; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding_Leg; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct GrounderQuadruped_Foot
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* solver;
		UnityEngine_CoreModule::UnityEngine::Transform* transform;
		UnityEngine_CoreModule::UnityEngine::Quaternion rotation;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Leg* leg;
		void _ctor(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* solver, UnityEngine_CoreModule::UnityEngine::Transform* transform);
	};
}


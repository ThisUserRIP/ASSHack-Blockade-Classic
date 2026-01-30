#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolverLimb.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverLimb; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverLimb_AxisDirection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 direction;
		UnityEngine_CoreModule::UnityEngine::Vector3 axis;
		float dot;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 axis);
	};
}


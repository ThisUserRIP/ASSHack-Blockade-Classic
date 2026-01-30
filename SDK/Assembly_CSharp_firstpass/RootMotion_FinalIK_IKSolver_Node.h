#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver_Point.h"
#include "RootMotion_FinalIK_IKSolver.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolver_Node : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float length;
		float effectorPositionWeight;
		float effectorRotationWeight;
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* transform, float weight);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_SolverManager.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Poser : Assembly_CSharp_firstpass::RootMotion::SolverManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* poseRoot;
		float weight;
		float localRotationWeight;
		float localPositionWeight;
		bool initiated;
		void AutoMapping();
		void UpdateManual();
		void InitiatePoser();
		void UpdatePoser();
		void FixPoserTransforms();
		void UpdateSolver();
		void InitiateSolver();
		void FixTransforms();
		void _ctor();
	};
}


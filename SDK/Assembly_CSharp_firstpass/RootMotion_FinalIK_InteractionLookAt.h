#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct LookAtIK; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionLookAt : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::LookAtIK* ik;
		float lerpSpeed;
		float weightSpeed;
		bool isPaused;
		UnityEngine_CoreModule::UnityEngine::Transform* lookAtTarget;
		float stopLookTime;
		float weight;
		bool firstFBBIKSolve;
		void Look(UnityEngine_CoreModule::UnityEngine::Transform* target, float time);
		void OnFixTransforms();
		void Update();
		void SolveSpine();
		void SolveHead();
		void _ctor();
	};
}


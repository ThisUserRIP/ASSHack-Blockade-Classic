#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_Inertia.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Inertia; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Inertia_Body_EffectorLink; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBodyBiped; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Inertia_Body : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* transform;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::Inertia_Body_EffectorLink*>* effectorLinks;
		float speed;
		float acceleration;
		float matchVelocity;
		float gravity;
		UnityEngine_CoreModule::UnityEngine::Vector3 delta;
		UnityEngine_CoreModule::UnityEngine::Vector3 lazyPoint;
		UnityEngine_CoreModule::UnityEngine::Vector3 direction;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastPosition;
		bool firstUpdate;
		void Reset();
		void Update(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, float deltaTime);
		void _ctor();
	};
}


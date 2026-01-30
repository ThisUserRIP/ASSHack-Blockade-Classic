#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_Amplifier.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Amplifier; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Amplifier_Body_EffectorLink; };
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
	struct Amplifier_Body : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* transform;
		UnityEngine_CoreModule::UnityEngine::Transform* relativeTo;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::Amplifier_Body_EffectorLink*>* effectorLinks;
		float verticalWeight;
		float horizontalWeight;
		float speed;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastRelativePos;
		UnityEngine_CoreModule::UnityEngine::Vector3 smoothDelta;
		bool firstUpdate;
		void Update(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float w, float deltaTime);
		static UnityEngine_CoreModule::UnityEngine::Vector3 Multiply(UnityEngine_CoreModule::UnityEngine::Vector3 v1, UnityEngine_CoreModule::UnityEngine::Vector3 v2);
		void _ctor();
	};
}


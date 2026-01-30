#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IK; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKExecutionOrder : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IK*>* IKComponents;
		UnityEngine_AnimationModule::UnityEngine::Animator* animator;
		bool fixedFrame;
		bool get_animatePhysics();
		void Start();
		void Update();
		void FixedUpdate();
		void LateUpdate();
		void FixTransforms();
		void _ctor();
	};
}


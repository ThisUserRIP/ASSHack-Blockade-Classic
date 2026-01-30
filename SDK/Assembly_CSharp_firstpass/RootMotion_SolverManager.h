#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct SolverManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool fixTransforms;
		UnityEngine_AnimationModule::UnityEngine::Animator* animator;
		UnityEngine_AnimationModule::UnityEngine::Animation* legacy;
		bool updateFrame;
		bool componentInitiated;
		bool skipSolverUpdate;
		void Disable();
		void InitiateSolver();
		void UpdateSolver();
		void FixTransforms();
		void OnDisable();
		void Start();
		bool get_animatePhysics();
		void Initiate();
		void Update();
		void FindAnimatorRecursive(UnityEngine_CoreModule::UnityEngine::Transform* t, bool findInChildren);
		bool get_isAnimated();
		void FixedUpdate();
		void LateUpdate();
		void UpdateSolverExternal();
		void _ctor();
	};
}


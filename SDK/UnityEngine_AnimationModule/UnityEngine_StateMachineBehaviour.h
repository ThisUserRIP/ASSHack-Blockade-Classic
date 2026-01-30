#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "UnityEngine_AnimatorStateInfo.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimatorStateInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Animations_AnimatorControllerPlayable.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct AnimatorControllerPlayable; };

namespace UnityEngine_AnimationModule::UnityEngine
{
	struct StateMachineBehaviour : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnStateEnter(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);
		void OnStateUpdate(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);
		void OnStateExit(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);
		void OnStateMove(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);
		void OnStateIK(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);
		void OnStateMachineEnter(UnityEngine_AnimationModule::UnityEngine::Animator* animator, int32_t stateMachinePathHash);
		void OnStateMachineExit(UnityEngine_AnimationModule::UnityEngine::Animator* animator, int32_t stateMachinePathHash);
		void OnStateEnter(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller);
		void OnStateUpdate(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller);
		void OnStateExit(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller);
		void OnStateMove(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller);
		void OnStateIK(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller);
		void OnStateMachineEnter(UnityEngine_AnimationModule::UnityEngine::Animator* animator, int32_t stateMachinePathHash, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller);
		void OnStateMachineExit(UnityEngine_AnimationModule::UnityEngine::Animator* animator, int32_t stateMachinePathHash, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller);
		void _ctor();
	};
}


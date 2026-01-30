#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Playables_PlayableHandle.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableHandle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Playables_PlayableGraph.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableGraph; };
namespace UnityEngine_AnimationModule::UnityEngine { struct RuntimeAnimatorController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct AnimatorControllerPlayable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle m_Handle;
		static UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable Create(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, UnityEngine_AnimationModule::UnityEngine::RuntimeAnimatorController* controller);
		static UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, UnityEngine_AnimationModule::UnityEngine::RuntimeAnimatorController* controller);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle handle);
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle GetHandle();
		void SetHandle(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle handle);
		bool Equals(UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable other);
		static bool CreateHandleInternal(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, UnityEngine_AnimationModule::UnityEngine::RuntimeAnimatorController* controller, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& handle);
		static void _cctor();
		static bool CreateHandleInternal_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& graph, UnityEngine_AnimationModule::UnityEngine::RuntimeAnimatorController* controller, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& handle);
	};
}


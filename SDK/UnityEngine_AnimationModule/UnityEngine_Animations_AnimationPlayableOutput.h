#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Playables_PlayableOutputHandle.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableOutputHandle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Playables_PlayableGraph.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableGraph; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct AnimationPlayableOutput
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle m_Handle;
		static UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput Create(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, mscorlib::System::String* name, UnityEngine_AnimationModule::UnityEngine::Animator* target);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle handle);
		static UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput get_Null();
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle GetHandle();
		void SetTarget(UnityEngine_AnimationModule::UnityEngine::Animator* value);
		static void InternalSetTarget(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& handle, UnityEngine_AnimationModule::UnityEngine::Animator* target);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Behaviour.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimationClip; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimationState; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_PlayMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_QueueMode.h"
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_AnimationModule::UnityEngine
{
	struct Animation : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AnimationModule::UnityEngine::AnimationClip* get_clip();
		void Stop();
		void Stop(mscorlib::System::String* name);
		void StopNamed(mscorlib::System::String* name);
		UnityEngine_AnimationModule::UnityEngine::AnimationState* get_Item(mscorlib::System::String* name);
		bool Play(mscorlib::System::String* animation);
		bool Play(mscorlib::System::String* animation, UnityEngine_AnimationModule::UnityEngine::PlayMode mode);
		void CrossFade(mscorlib::System::String* animation);
		void CrossFade(mscorlib::System::String* animation, float fadeLength);
		void CrossFade(mscorlib::System::String* animation, float fadeLength, UnityEngine_AnimationModule::UnityEngine::PlayMode mode);
		UnityEngine_AnimationModule::UnityEngine::AnimationState* CrossFadeQueued(mscorlib::System::String* animation);
		UnityEngine_AnimationModule::UnityEngine::AnimationState* CrossFadeQueued(mscorlib::System::String* animation, float fadeLength);
		UnityEngine_AnimationModule::UnityEngine::AnimationState* CrossFadeQueued(mscorlib::System::String* animation, float fadeLength, UnityEngine_AnimationModule::UnityEngine::QueueMode queue);
		UnityEngine_AnimationModule::UnityEngine::AnimationState* CrossFadeQueued(mscorlib::System::String* animation, float fadeLength, UnityEngine_AnimationModule::UnityEngine::QueueMode queue, UnityEngine_AnimationModule::UnityEngine::PlayMode mode);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		UnityEngine_AnimationModule::UnityEngine::AnimationState* GetState(mscorlib::System::String* name);
		UnityEngine_AnimationModule::UnityEngine::AnimationState* GetStateAtIndex(int32_t index);
		int32_t GetStateCount();
		bool get_animatePhysics();
	};
}


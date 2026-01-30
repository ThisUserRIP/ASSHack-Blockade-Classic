#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Assembly_CSharp::Doozy::Engine::Events { struct AnimatorEvent; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIEffect; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityEvent; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyData; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Base
{
	struct UIAction : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::GameObject>* Action;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent>* AnimatorEvents;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIEffect* Effect;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* Event;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GameEvents;
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* SoundData;
		UnityEngine_UIModule::UnityEngine::Canvas* m_canvasForEffect;
		int32_t get_AnimatorEventsCount();
		int32_t get_GameEventsCount();
		bool get_HasAnimatorEvents();
		bool get_HasEffect();
		bool get_HasGameEvents();
		bool get_HasSound();
		bool get_HasUnityEvent();
		int32_t get_UnityEventListenerCount();
		void _ctor();
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* AddAnimatorEvent(Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent* animatorEvent);
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* AddAnimatorEvents(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent>* animatorEvents);
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* AddGameEvent(mscorlib::System::String* gameEvent, bool clearGameEventsList);
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* AddGameEvents(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* gameEvents, bool clearGameEventsList);
		UnityEngine_UIModule::UnityEngine::Canvas* GetCanvas(UnityEngine_CoreModule::UnityEngine::GameObject* source, bool refresh);
		void Invoke(UnityEngine_CoreModule::UnityEngine::GameObject* source, bool playSound, bool playEffect, bool playAnimatorEvents, bool sendGameEvents, bool invokeUnityEvent, bool invokeAction);
		void InvokeAction(UnityEngine_CoreModule::UnityEngine::GameObject* source);
		void InvokeUnityEvent();
		void InvokeAnimatorEvents();
		void ExecuteEffect(UnityEngine_UIModule::UnityEngine::Canvas* canvas);
		void PlaySound();
		void Reset();
		void SendGameEvents(UnityEngine_CoreModule::UnityEngine::GameObject* source);
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* SetAction(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::GameObject>* action);
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* SetEffect(Assembly_CSharp::Doozy::Engine::UI::Base::UIEffect* effect);
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* SetSoundyData(Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* soundyData);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_Animation_ButtonAnimationType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Doozy::Engine::Events { struct AnimatorEvent; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIAction; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimation; };
#include "Doozy_Engine_UI_UIToggleBehaviorType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIToggle; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "Doozy_Engine_UI_Animation_AnimationType.h"

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIToggleBehavior : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent>* Animators;
		Assembly_CSharp::Doozy::Engine::UI::Animation::ButtonAnimationType ButtonAnimationType;
		bool DeselectButton;
		float DisableInterval;
		bool Enabled;
		bool LoadSelectedPresetAtRuntime;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* OnToggleOff;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* OnToggleOn;
		mscorlib::System::String* PresetCategory;
		mscorlib::System::String* PresetName;
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* PunchAnimation;
		bool Ready;
		bool SelectButton;
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* StateAnimation;
		bool TriggerEventsAfterAnimation;
		Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType m_behaviorType;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::Animation::ButtonAnimationType DEFAULT_BUTTON_ANIMATION_TYPE;
			bool DEFAULT_DESELECT_BUTTON;
			bool DEFAULT_ENABLED;
			bool DEFAULT_LOAD_SELECTED_PRESET_AT_RUNTIME;
			bool DEFAULT_READY;
			bool DEFAULT_SELECT_BUTTON;
			bool DEFAULT_TRIGGER_EVENTS_AFTER_ANIMATION;
			float ON_BUTTON_DESELECTED_DISABLE_INTERVAL;
			float ON_BUTTON_SELECTED_DISABLE_INTERVAL;
			float ON_CLICK_DISABLE_INTERVAL;
			float ON_POINTER_ENTER_DISABLE_INTERVAL;
			float ON_POINTER_EXIT_DISABLE_INTERVAL;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_DefaultPresetCategory();
		static mscorlib::System::String* get_DefaultPresetName();
		int32_t get_AnimatorsCount();
		Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType get_BehaviorType();
		bool get_HasAnimation();
		bool get_HasAnimators();
		bool get_HasAnimatorEvents();
		bool get_HasEffect();
		bool get_HasGameEvents();
		bool get_HasPunchAnimation();
		bool get_HasSound();
		bool get_HasStateAnimation();
		bool get_HasUnityEvents();
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType behaviorType, bool enabled);
		float GetAnimationTotalDuration();
		void Invoke(Assembly_CSharp::Doozy::Engine::UI::UIToggle* toggle, bool playAnimation, bool playSound, bool executeEffect, bool executeAnimatorEvents, bool sendGameEvents, bool executeUnityEvent);
		void LoadPreset();
		void LoadPreset(mscorlib::System::String* presetCategory, mscorlib::System::String* presetName);
		void PlayAnimation(Assembly_CSharp::Doozy::Engine::UI::UIToggle* toggle, bool withSound, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		void Reset(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType behaviorType);
		static mscorlib::System::Collections::IEnumerator* InvokeCallbacks(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static mscorlib::System::Collections::IEnumerator* InvokeCallbackAfterDelay(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* callback, float delay);
		static Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType GetAnimationType(Assembly_CSharp::Doozy::Engine::UI::Animation::ButtonAnimationType type);
		static float GetDefaultDisableInterval(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType type);
	};
}


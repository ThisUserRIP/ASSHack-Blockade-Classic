#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimation; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIAction; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_UI_Animation_AnimationType.h"

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIViewBehavior : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* Animation;
		bool AutoStartLoopAnimation;
		bool LoadSelectedPresetAtRuntime;
		bool InstantAnimation;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* OnFinished;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* OnStart;
		mscorlib::System::String* PresetCategory;
		mscorlib::System::String* PresetName;
		float m_progress;
		struct StaticFields
		{
			bool DEFAULT_INSTANT_ANIMATION;
			bool DEFAULT_LOAD_SELECTED_PRESET_AT_RUNTIME;
			bool DEFAULT_AUTO_START_LOOP_ANIMATION;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_DefaultPresetCategory();
		static mscorlib::System::String* get_DefaultPresetName();
		bool get_HasAnimation();
		bool get_HasAnimatorEvents();
		bool get_HasEffect();
		bool get_HasGameEvents();
		bool get_HasSound();
		bool get_HasUnityEvents();
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType);
		void LoadPreset();
		void LoadPreset(mscorlib::System::String* presetCategory, mscorlib::System::String* presetName);
		void Reset(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType);
	};
}


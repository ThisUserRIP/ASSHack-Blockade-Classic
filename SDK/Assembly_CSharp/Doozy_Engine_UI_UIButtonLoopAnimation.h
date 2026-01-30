#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimation; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Doozy_Engine_UI_Animation_ButtonLoopAnimationType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIButtonLoopAnimation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* Animation;
		bool Enabled;
		bool IsPlaying;
		Assembly_CSharp::Doozy::Engine::UI::Animation::ButtonLoopAnimationType LoopAnimationType;
		bool LoadSelectedPresetAtRuntime;
		mscorlib::System::String* PresetCategory;
		mscorlib::System::String* PresetName;
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::ButtonLoopAnimationType loopAnimationType);
		void LoadPreset();
		void LoadPreset(mscorlib::System::String* presetCategory, mscorlib::System::String* presetName);
		void Reset(Assembly_CSharp::Doozy::Engine::UI::Animation::ButtonLoopAnimationType loopAnimationType);
		void Start(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::Vector3 startPosition, UnityEngine_CoreModule::UnityEngine::Vector3 startRotation);
		void Stop(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
	};
}


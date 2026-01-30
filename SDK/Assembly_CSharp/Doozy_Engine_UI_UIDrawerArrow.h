#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerArrowAnimator; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerArrow_Holder; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_Touchy_SimpleSwipe.h"

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIDrawerArrow : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrowAnimator* Animator;
		UnityEngine_CoreModule::UnityEngine::Color ClosedColor;
		UnityEngine_CoreModule::UnityEngine::RectTransform* Container;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder* Down;
		bool Enabled;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder* Left;
		UnityEngine_CoreModule::UnityEngine::Color OpenedColor;
		bool OverrideColor;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder* Right;
		float Scale;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder* Up;
		struct StaticFields
		{
			bool DEFAULT_ENABLED;
			bool DEFAULT_OVERRIDE_COLOR;
			float DEFAULT_SCALE;
			UnityEngine_CoreModule::UnityEngine::Color DefaultOpenedColor;
			UnityEngine_CoreModule::UnityEngine::Color DefaultClosedColor;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow_Holder* GetHolder(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection);
		void Reset();
		void ResetArrowClosedPosition(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection);
		static void ResetArrowClosedPosition(UnityEngine_CoreModule::UnityEngine::RectTransform* closed, Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection);
		void ResetArrowOpenedPosition(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection);
		static void ResetArrowOpenedPosition(UnityEngine_CoreModule::UnityEngine::RectTransform* opened, Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection);
		void ResetArrowRootPosition(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection);
		static void ResetArrowRootPosition(UnityEngine_CoreModule::UnityEngine::RectTransform* root, Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe closeDirection);
		static void _cctor();
	};
}


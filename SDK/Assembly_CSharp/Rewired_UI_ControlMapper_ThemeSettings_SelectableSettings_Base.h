#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ThemeSettings.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings; };
#include "..\UnityEngine_UI\UnityEngine_UI_Selectable_Transition.h"
#include "Rewired_UI_ControlMapper_ThemeSettings_CustomColorBlock.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings_CustomColorBlock; };
#include "Rewired_UI_ControlMapper_ThemeSettings_CustomSpriteState.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings_CustomSpriteState; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings_CustomAnimationTriggers; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ThemeSettings_SelectableSettings_Base : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Selectable_Transition _transition;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomColorBlock _colors;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomSpriteState _spriteState;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomAnimationTriggers* _animationTriggers;
		UnityEngine_UI::UnityEngine::UI::Selectable_Transition get_transition();
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomColorBlock get_selectableColors();
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomSpriteState get_spriteState();
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomAnimationTriggers* get_animationTriggers();
		void Apply(UnityEngine_UI::UnityEngine::UI::Selectable* item);
		void _ctor();
	};
}


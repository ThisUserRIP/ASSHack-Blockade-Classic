#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_ThemeSettings_SelectableSettings_Base.h"
#include "Rewired_UI_ControlMapper_ThemeSettings.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings_ImageSettings; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct Scrollbar; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ThemeSettings_ScrollbarSettings : Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings_Base
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _handleImageSettings;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _backgroundImageSettings;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* get_handle();
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* get_background();
		void Apply(UnityEngine_UI::UnityEngine::UI::Scrollbar* item);
		void Apply(UnityEngine_UI::UnityEngine::UI::Selectable* item);
		void _ctor();
	};
}


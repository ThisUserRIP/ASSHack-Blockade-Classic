#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings_ImageSettings; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings_SelectableSettings; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings_ScrollbarSettings; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings_SliderSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings_TextSettings; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemedElement_ElementInfo; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UIImageHelper; };
#include "..\Unity_TextMeshPro\TMPro_FontStyles.h"
#include "Rewired_UI_ControlMapper_ThemeSettings_FontStyleOverride.h"

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ThemeSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _mainWindowBackground;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _popupWindowBackground;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _areaBackground;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings* _selectableSettings;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings* _buttonSettings;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings* _inputGridFieldSettings;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ScrollbarSettings* _scrollbarSettings;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SliderSettings* _sliderSettings;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _invertToggle;
		UnityEngine_CoreModule::UnityEngine::Color _invertToggleDisabledColor;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _calibrationBackground;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _calibrationValueMarker;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _calibrationRawValueMarker;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _calibrationZeroMarker;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _calibrationCalibratedZeroMarker;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* _calibrationDeadzone;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_TextSettings* _textSettings;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_TextSettings* _buttonTextSettings;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_TextSettings* _inputGridFieldTextSettings;
		void Apply(IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ThemedElement_ElementInfo*>* elementInfo);
		void Apply(mscorlib::System::String* themeClass, UnityEngine_CoreModule::UnityEngine::Component* component);
		void Apply(mscorlib::System::String* themeClass, UnityEngine_UI::UnityEngine::UI::Selectable* item);
		void Apply(mscorlib::System::String* themeClass, UnityEngine_UI::UnityEngine::UI::Image* item);
		void Apply(mscorlib::System::String* themeClass, Unity_TextMeshPro::TMPro::TMP_Text* item);
		void Apply(mscorlib::System::String* themeClass, Assembly_CSharp::Rewired::UI::ControlMapper::UIImageHelper* item);
		static Unity_TextMeshPro::TMPro::FontStyles GetFontStyle(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_FontStyleOverride style);
		void _ctor();
	};
}


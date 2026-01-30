#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_ThemeSettings.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_UI\UnityEngine_UI_ColorBlock.h"
namespace UnityEngine_UI::UnityEngine::UI { struct ColorBlock; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ThemeSettings_CustomColorBlock
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_ColorMultiplier;
		UnityEngine_CoreModule::UnityEngine::Color m_DisabledColor;
		float m_FadeDuration;
		UnityEngine_CoreModule::UnityEngine::Color m_HighlightedColor;
		UnityEngine_CoreModule::UnityEngine::Color m_NormalColor;
		UnityEngine_CoreModule::UnityEngine::Color m_PressedColor;
		UnityEngine_CoreModule::UnityEngine::Color m_SelectedColor;
		UnityEngine_CoreModule::UnityEngine::Color m_DisabledHighlightedColor;
		float get_colorMultiplier();
		void set_colorMultiplier(float value);
		UnityEngine_CoreModule::UnityEngine::Color get_disabledColor();
		void set_disabledColor(UnityEngine_CoreModule::UnityEngine::Color value);
		float get_fadeDuration();
		void set_fadeDuration(float value);
		UnityEngine_CoreModule::UnityEngine::Color get_highlightedColor();
		void set_highlightedColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_normalColor();
		void set_normalColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_pressedColor();
		void set_pressedColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_selectedColor();
		void set_selectedColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_disabledHighlightedColor();
		void set_disabledHighlightedColor(UnityEngine_CoreModule::UnityEngine::Color value);
		static UnityEngine_UI::UnityEngine::UI::ColorBlock op_Implicit(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomColorBlock item);
	};
}


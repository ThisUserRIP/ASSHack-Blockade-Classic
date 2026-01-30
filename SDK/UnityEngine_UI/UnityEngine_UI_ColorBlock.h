#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ColorBlock
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color m_NormalColor;
		UnityEngine_CoreModule::UnityEngine::Color m_HighlightedColor;
		UnityEngine_CoreModule::UnityEngine::Color m_PressedColor;
		UnityEngine_CoreModule::UnityEngine::Color m_SelectedColor;
		UnityEngine_CoreModule::UnityEngine::Color m_DisabledColor;
		float m_ColorMultiplier;
		float m_FadeDuration;
		UnityEngine_CoreModule::UnityEngine::Color get_normalColor();
		void set_normalColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_highlightedColor();
		void set_highlightedColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_pressedColor();
		void set_pressedColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_selectedColor();
		void set_selectedColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_disabledColor();
		void set_disabledColor(UnityEngine_CoreModule::UnityEngine::Color value);
		float get_colorMultiplier();
		void set_colorMultiplier(float value);
		float get_fadeDuration();
		void set_fadeDuration(float value);
		static void _cctor();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_UI::UnityEngine::UI::ColorBlock other);
		static bool op_Equality(UnityEngine_UI::UnityEngine::UI::ColorBlock point1, UnityEngine_UI::UnityEngine::UI::ColorBlock point2);
		static bool op_Inequality(UnityEngine_UI::UnityEngine::UI::ColorBlock point1, UnityEngine_UI::UnityEngine::UI::ColorBlock point2);
		int32_t GetHashCode();
	};
	bool operator==(UnityEngine_UI::UnityEngine::UI::ColorBlock& point1, UnityEngine_UI::UnityEngine::UI::ColorBlock& point2);
	bool operator!=(UnityEngine_UI::UnityEngine::UI::ColorBlock& point1, UnityEngine_UI::UnityEngine::UI::ColorBlock& point2);
}


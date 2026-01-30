#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ThemeSettings.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
#include "Rewired_UI_ControlMapper_ThemeSettings_FontStyleOverride.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ThemeSettings_TextSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color _color;
		Unity_TextMeshPro::TMPro::TMP_FontAsset* _font;
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_FontStyleOverride _style;
		float _sizeMultiplier;
		float _lineSpacing;
		float _characterSpacing;
		float _wordSpacing;
		UnityEngine_CoreModule::UnityEngine::Color get_color();
		Unity_TextMeshPro::TMPro::TMP_FontAsset* get_font();
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_FontStyleOverride get_style();
		float get_sizeMultiplier();
		float get_lineSpacing();
		float get_chracterSpacing();
		float get_wordSpacing();
		void _ctor();
	};
}


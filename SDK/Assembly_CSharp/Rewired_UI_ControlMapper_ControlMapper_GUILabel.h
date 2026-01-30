#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\Unity_TextMeshPro\TMPro_FontStyles.h"
#include "..\Unity_TextMeshPro\TMPro_TextAlignmentOptions.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_GUILabel : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* _gameObject_k__BackingField;
		Unity_TextMeshPro::TMPro::TMP_Text* _text_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::RectTransform* _rectTransform_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::GameObject* get_gameObject();
		void set_gameObject(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		Unity_TextMeshPro::TMPro::TMP_Text* get_text();
		void set_text(Unity_TextMeshPro::TMPro::TMP_Text* value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void set_rectTransform(UnityEngine_CoreModule::UnityEngine::RectTransform* value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject);
		void _ctor(Unity_TextMeshPro::TMPro::TMP_Text* label);
		void SetSize(int32_t width, int32_t height);
		void SetWidth(int32_t width);
		void SetHeight(int32_t height);
		void SetLabel(mscorlib::System::String* label);
		void SetFontStyle(Unity_TextMeshPro::TMPro::FontStyles style);
		void SetTextAlignment(Unity_TextMeshPro::TMPro::TextAlignmentOptions alignment);
		void SetActive(bool state);
		bool Check();
	};
}


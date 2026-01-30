#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "TMPro_TMP_Dropdown.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Dropdown; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Dropdown_DropdownItem : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_Text* m_Text;
		UnityEngine_UI::UnityEngine::UI::Image* m_Image;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_RectTransform;
		UnityEngine_UI::UnityEngine::UI::Toggle* m_Toggle;
		Unity_TextMeshPro::TMPro::TMP_Text* get_text();
		void set_text(Unity_TextMeshPro::TMPro::TMP_Text* value);
		UnityEngine_UI::UnityEngine::UI::Image* get_image();
		void set_image(UnityEngine_UI::UnityEngine::UI::Image* value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void set_rectTransform(UnityEngine_CoreModule::UnityEngine::RectTransform* value);
		UnityEngine_UI::UnityEngine::UI::Toggle* get_toggle();
		void set_toggle(UnityEngine_UI::UnityEngine::UI::Toggle* value);
		void OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnCancel(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void _ctor();
	};
}


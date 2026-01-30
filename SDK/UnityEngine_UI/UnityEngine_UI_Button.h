#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_Selectable.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Button_ButtonClickedEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Button : UnityEngine_UI::UnityEngine::UI::Selectable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Button_ButtonClickedEvent* m_OnClick;
		void _ctor();
		UnityEngine_UI::UnityEngine::UI::Button_ButtonClickedEvent* get_onClick();
		void set_onClick(UnityEngine_UI::UnityEngine::UI::Button_ButtonClickedEvent* value);
		void Press();
		void OnPointerClick(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnSubmit(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		mscorlib::System::Collections::IEnumerator* OnFinishSubmit();
	};
}


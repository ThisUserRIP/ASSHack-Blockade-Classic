#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct EventTrigger_Entry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_EventSystems_EventTriggerType.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct AxisEventData; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct EventTrigger : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::EventTrigger_Entry>* m_Delegates;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::EventTrigger_Entry>* get_delegates();
		void set_delegates(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::EventTrigger_Entry>* value);
		void _ctor();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::EventTrigger_Entry>* get_triggers();
		void set_triggers(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::EventTrigger_Entry>* value);
		void Execute(UnityEngine_UI::UnityEngine::EventSystems::EventTriggerType id, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnDrop(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerClick(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnSelect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnDeselect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnScroll(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnMove(UnityEngine_UI::UnityEngine::EventSystems::AxisEventData* eventData);
		void OnUpdateSelected(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnInitializePotentialDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnSubmit(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnCancel(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseInputModule; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
#include "UnityEngine_EventSystems_RaycastResult.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct RaycastResult; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct EventSystem : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::BaseInputModule>* m_SystemInputModules;
		UnityEngine_UI::UnityEngine::EventSystems::BaseInputModule* m_CurrentInputModule;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_FirstSelected;
		bool m_sendNavigationEvents;
		int32_t m_DragThreshold;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_CurrentSelected;
		bool m_HasFocus;
		bool m_SelectionGuard;
		UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* m_DummyData;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::EventSystem>* m_EventSystems;
			mscorlib::System::Comparison_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* s_RaycastComparer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_UI::UnityEngine::EventSystems::EventSystem* get_current();
		static void set_current(UnityEngine_UI::UnityEngine::EventSystems::EventSystem* value);
		bool get_sendNavigationEvents();
		void set_sendNavigationEvents(bool value);
		int32_t get_pixelDragThreshold();
		void set_pixelDragThreshold(int32_t value);
		UnityEngine_UI::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_firstSelectedGameObject();
		void set_firstSelectedGameObject(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		UnityEngine_CoreModule::UnityEngine::GameObject* get_currentSelectedGameObject();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_lastSelectedGameObject();
		bool get_isFocused();
		void _ctor();
		void UpdateModules();
		bool get_alreadySelecting();
		void SetSelectedGameObject(UnityEngine_CoreModule::UnityEngine::GameObject* selected, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* pointer);
		UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* get_baseEventDataCache();
		void SetSelectedGameObject(UnityEngine_CoreModule::UnityEngine::GameObject* selected);
		static int32_t RaycastComparer(UnityEngine_UI::UnityEngine::EventSystems::RaycastResult lhs, UnityEngine_UI::UnityEngine::EventSystems::RaycastResult rhs);
		void RaycastAll(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* raycastResults);
		bool IsPointerOverGameObject();
		bool IsPointerOverGameObject(int32_t pointerId);
		void OnEnable();
		void OnDisable();
		void TickModules();
		void OnApplicationFocus(bool hasFocus);
		void Update();
		void ChangeEventModule(UnityEngine_UI::UnityEngine::EventSystems::BaseInputModule* module);
		mscorlib::System::String* ToString();
		static void _cctor();
	};
}


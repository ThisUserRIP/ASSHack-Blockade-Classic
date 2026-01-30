#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
#include "UnityEngine_EventSystems_RaycastResult.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct RaycastResult; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct AxisEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct EventSystem; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseInput; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_EventSystems_MoveDirection.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct BaseInputModule : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* m_RaycastResultCache;
		UnityEngine_UI::UnityEngine::EventSystems::AxisEventData* m_AxisEventData;
		UnityEngine_UI::UnityEngine::EventSystems::EventSystem* m_EventSystem;
		UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* m_BaseEventData;
		UnityEngine_UI::UnityEngine::EventSystems::BaseInput* m_InputOverride;
		UnityEngine_UI::UnityEngine::EventSystems::BaseInput* m_DefaultInput;
		UnityEngine_UI::UnityEngine::EventSystems::BaseInput* get_input();
		UnityEngine_UI::UnityEngine::EventSystems::BaseInput* get_inputOverride();
		void set_inputOverride(UnityEngine_UI::UnityEngine::EventSystems::BaseInput* value);
		UnityEngine_UI::UnityEngine::EventSystems::EventSystem* get_eventSystem();
		void OnEnable();
		void OnDisable();
		void Process();
		static UnityEngine_UI::UnityEngine::EventSystems::RaycastResult FindFirstRaycast(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* candidates);
		static UnityEngine_UI::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float x, float y);
		static UnityEngine_UI::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(float x, float y, float deadZone);
		static UnityEngine_CoreModule::UnityEngine::GameObject* FindCommonRoot(UnityEngine_CoreModule::UnityEngine::GameObject* g1, UnityEngine_CoreModule::UnityEngine::GameObject* g2);
		void HandlePointerExitAndEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* currentPointerData, UnityEngine_CoreModule::UnityEngine::GameObject* newEnterTarget);
		UnityEngine_UI::UnityEngine::EventSystems::AxisEventData* GetAxisEventData(float x, float y, float moveDeadZone);
		UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* GetBaseEventData();
		bool IsPointerOverGameObject(int32_t pointerId);
		bool ShouldActivateModule();
		void DeactivateModule();
		void ActivateModule();
		void UpdateModule();
		bool IsModuleSupported();
		void _ctor();
	};
}


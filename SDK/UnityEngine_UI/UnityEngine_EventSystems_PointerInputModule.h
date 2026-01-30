#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_BaseInputModule.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerInputModule_MouseState; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_InputLegacyModule\UnityEngine_Touch.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
#include "UnityEngine_EventSystems_PointerEventData_FramePressState.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct PointerInputModule : UnityEngine_UI::UnityEngine::EventSystems::BaseInputModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* m_PointerData;
		UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState* m_MouseState;
		struct StaticFields
		{
			int32_t kMouseLeftId;
			int32_t kMouseRightId;
			int32_t kMouseMiddleId;
			int32_t kFakeTouchesId;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool GetPointerData(int32_t id, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData& data, bool create);
		void RemovePointerData(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* data);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(UnityEngine_InputLegacyModule::UnityEngine::Touch input, bool& pressed, bool& released);
		void CopyFromTo(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* from, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* to);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState StateForMouseButton(int32_t buttonId);
		UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState* GetMousePointerEventData();
		UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState* GetMousePointerEventData(int32_t id);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int32_t id);
		static bool ShouldStartDrag(UnityEngine_CoreModule::UnityEngine::Vector2 pressPos, UnityEngine_CoreModule::UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold);
		void ProcessMove(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* pointerEvent);
		void ProcessDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* pointerEvent);
		bool IsPointerOverGameObject(int32_t pointerId);
		void ClearSelection();
		mscorlib::System::String* ToString();
		void DeselectIfSelectionChanged(UnityEngine_CoreModule::UnityEngine::GameObject* currentOverGo, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* pointerEvent);
		void _ctor();
	};
}


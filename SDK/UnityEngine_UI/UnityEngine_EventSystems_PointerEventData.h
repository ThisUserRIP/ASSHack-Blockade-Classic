#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_BaseEventData.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "UnityEngine_EventSystems_RaycastResult.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct RaycastResult; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_EventSystems_PointerEventData_InputButton.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct EventSystem; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct PointerEventData : UnityEngine_UI::UnityEngine::EventSystems::BaseEventData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* _pointerEnter_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_PointerPress;
		UnityEngine_CoreModule::UnityEngine::GameObject* _lastPress_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::GameObject* _rawPointerPress_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::GameObject* _pointerDrag_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::GameObject* _pointerClick_k__BackingField;
		UnityEngine_UI::UnityEngine::EventSystems::RaycastResult _pointerCurrentRaycast_k__BackingField;
		UnityEngine_UI::UnityEngine::EventSystems::RaycastResult _pointerPressRaycast_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* hovered;
		bool _eligibleForClick_k__BackingField;
		int32_t _pointerId_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2 _position_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2 _delta_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2 _pressPosition_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 _worldPosition_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 _worldNormal_k__BackingField;
		float _clickTime_k__BackingField;
		int32_t _clickCount_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2 _scrollDelta_k__BackingField;
		bool _useDragThreshold_k__BackingField;
		bool _dragging_k__BackingField;
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton _button_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::GameObject* get_pointerEnter();
		void set_pointerEnter(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		UnityEngine_CoreModule::UnityEngine::GameObject* get_lastPress();
		void set_lastPress(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		UnityEngine_CoreModule::UnityEngine::GameObject* get_rawPointerPress();
		void set_rawPointerPress(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		UnityEngine_CoreModule::UnityEngine::GameObject* get_pointerDrag();
		void set_pointerDrag(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		UnityEngine_CoreModule::UnityEngine::GameObject* get_pointerClick();
		void set_pointerClick(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		UnityEngine_UI::UnityEngine::EventSystems::RaycastResult get_pointerCurrentRaycast();
		void set_pointerCurrentRaycast(UnityEngine_UI::UnityEngine::EventSystems::RaycastResult value);
		UnityEngine_UI::UnityEngine::EventSystems::RaycastResult get_pointerPressRaycast();
		void set_pointerPressRaycast(UnityEngine_UI::UnityEngine::EventSystems::RaycastResult value);
		bool get_eligibleForClick();
		void set_eligibleForClick(bool value);
		int32_t get_pointerId();
		void set_pointerId(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_delta();
		void set_delta(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_pressPosition();
		void set_pressPosition(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_worldPosition();
		void set_worldPosition(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_worldNormal();
		void set_worldNormal(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		float get_clickTime();
		void set_clickTime(float value);
		int32_t get_clickCount();
		void set_clickCount(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_scrollDelta();
		void set_scrollDelta(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		bool get_useDragThreshold();
		void set_useDragThreshold(bool value);
		bool get_dragging();
		void set_dragging(bool value);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton get_button();
		void set_button(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton value);
		void _ctor(UnityEngine_UI::UnityEngine::EventSystems::EventSystem* eventSystem);
		bool IsPointerMoving();
		bool IsScrolling();
		UnityEngine_CoreModule::UnityEngine::Camera* get_enterEventCamera();
		UnityEngine_CoreModule::UnityEngine::Camera* get_pressEventCamera();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_pointerPress();
		void set_pointerPress(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		mscorlib::System::String* ToString();
	};
}


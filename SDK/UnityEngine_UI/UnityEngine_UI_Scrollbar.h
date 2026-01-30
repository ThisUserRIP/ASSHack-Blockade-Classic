#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_Selectable.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "UnityEngine_UI_Scrollbar_Direction.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::UI { struct Scrollbar_ScrollEvent; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_DrivenRectTransformTracker.h"
namespace UnityEngine_CoreModule::UnityEngine { struct DrivenRectTransformTracker; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UI_Scrollbar_Axis.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct AxisEventData; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Scrollbar : UnityEngine_UI::UnityEngine::UI::Selectable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_HandleRect;
		UnityEngine_UI::UnityEngine::UI::Scrollbar_Direction m_Direction;
		float m_Value;
		float m_Size;
		int32_t m_NumberOfSteps;
		UnityEngine_UI::UnityEngine::UI::Scrollbar_ScrollEvent* m_OnValueChanged;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_ContainerRect;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_Offset;
		UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker m_Tracker;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_PointerDownRepeat;
		bool isPointerDownAndNotDragging;
		bool m_DelayedUpdateVisuals;
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_handleRect();
		void set_handleRect(UnityEngine_CoreModule::UnityEngine::RectTransform* value);
		UnityEngine_UI::UnityEngine::UI::Scrollbar_Direction get_direction();
		void set_direction(UnityEngine_UI::UnityEngine::UI::Scrollbar_Direction value);
		void _ctor();
		float get_value();
		void set_value(float value);
		void SetValueWithoutNotify(float input);
		float get_size();
		void set_size(float value);
		int32_t get_numberOfSteps();
		void set_numberOfSteps(int32_t value);
		UnityEngine_UI::UnityEngine::UI::Scrollbar_ScrollEvent* get_onValueChanged();
		void set_onValueChanged(UnityEngine_UI::UnityEngine::UI::Scrollbar_ScrollEvent* value);
		float get_stepSize();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate executing);
		void LayoutComplete();
		void GraphicUpdateComplete();
		void OnEnable();
		void OnDisable();
		void Update();
		void UpdateCachedReferences();
		void Set(float input, bool sendCallback);
		void OnRectTransformDimensionsChange();
		UnityEngine_UI::UnityEngine::UI::Scrollbar_Axis get_axis();
		bool get_reverseValue();
		void UpdateVisuals();
		void UpdateDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void DoUpdateDrag(UnityEngine_CoreModule::UnityEngine::Vector2 handleCorner, float remainingSize);
		bool MayDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		mscorlib::System::Collections::IEnumerator* ClickRepeat(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		mscorlib::System::Collections::IEnumerator* ClickRepeat(UnityEngine_CoreModule::UnityEngine::Vector2 screenPosition, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnMove(UnityEngine_UI::UnityEngine::EventSystems::AxisEventData* eventData);
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnLeft();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnRight();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnUp();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnDown();
		void OnInitializePotentialDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void SetDirection(UnityEngine_UI::UnityEngine::UI::Scrollbar_Direction direction, bool includeRectLayouts);
		UnityEngine_CoreModule::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
	};
}


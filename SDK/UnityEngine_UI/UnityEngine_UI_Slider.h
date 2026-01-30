#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_Selectable.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "UnityEngine_UI_Slider_Direction.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct Slider_SliderEvent; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_DrivenRectTransformTracker.h"
namespace UnityEngine_CoreModule::UnityEngine { struct DrivenRectTransformTracker; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UI_Slider_Axis.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct AxisEventData; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Slider : UnityEngine_UI::UnityEngine::UI::Selectable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_FillRect;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_HandleRect;
		UnityEngine_UI::UnityEngine::UI::Slider_Direction m_Direction;
		float m_MinValue;
		float m_MaxValue;
		bool m_WholeNumbers;
		float m_Value;
		UnityEngine_UI::UnityEngine::UI::Slider_SliderEvent* m_OnValueChanged;
		UnityEngine_UI::UnityEngine::UI::Image* m_FillImage;
		UnityEngine_CoreModule::UnityEngine::Transform* m_FillTransform;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_FillContainerRect;
		UnityEngine_CoreModule::UnityEngine::Transform* m_HandleTransform;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_HandleContainerRect;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_Offset;
		UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker m_Tracker;
		bool m_DelayedUpdateVisuals;
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_fillRect();
		void set_fillRect(UnityEngine_CoreModule::UnityEngine::RectTransform* value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_handleRect();
		void set_handleRect(UnityEngine_CoreModule::UnityEngine::RectTransform* value);
		UnityEngine_UI::UnityEngine::UI::Slider_Direction get_direction();
		void set_direction(UnityEngine_UI::UnityEngine::UI::Slider_Direction value);
		float get_minValue();
		void set_minValue(float value);
		float get_maxValue();
		void set_maxValue(float value);
		bool get_wholeNumbers();
		void set_wholeNumbers(bool value);
		float get_value();
		void set_value(float value);
		void SetValueWithoutNotify(float input);
		float get_normalizedValue();
		void set_normalizedValue(float value);
		UnityEngine_UI::UnityEngine::UI::Slider_SliderEvent* get_onValueChanged();
		void set_onValueChanged(UnityEngine_UI::UnityEngine::UI::Slider_SliderEvent* value);
		float get_stepSize();
		void _ctor();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate executing);
		void LayoutComplete();
		void GraphicUpdateComplete();
		void OnEnable();
		void OnDisable();
		void Update();
		void OnDidApplyAnimationProperties();
		void UpdateCachedReferences();
		float ClampValue(float input);
		void Set(float input, bool sendCallback);
		void OnRectTransformDimensionsChange();
		UnityEngine_UI::UnityEngine::UI::Slider_Axis get_axis();
		bool get_reverseValue();
		void UpdateVisuals();
		void UpdateDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, UnityEngine_CoreModule::UnityEngine::Camera* cam);
		bool MayDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnMove(UnityEngine_UI::UnityEngine::EventSystems::AxisEventData* eventData);
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnLeft();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnRight();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnUp();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnDown();
		void OnInitializePotentialDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void SetDirection(UnityEngine_UI::UnityEngine::UI::Slider_Direction direction, bool includeRectLayouts);
		UnityEngine_CoreModule::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
	};
}


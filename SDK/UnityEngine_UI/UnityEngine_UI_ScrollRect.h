#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_UI_ScrollRect_MovementType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_UI::UnityEngine::UI { struct Scrollbar; };
#include "UnityEngine_UI_ScrollRect_ScrollbarVisibility.h"
namespace UnityEngine_UI::UnityEngine::UI { struct ScrollRect_ScrollRectEvent; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "..\UnityEngine_CoreModule\UnityEngine_DrivenRectTransformTracker.h"
namespace UnityEngine_CoreModule::UnityEngine { struct DrivenRectTransformTracker; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_UI_CanvasUpdate.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ScrollRect : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_Content;
		bool m_Horizontal;
		bool m_Vertical;
		UnityEngine_UI::UnityEngine::UI::ScrollRect_MovementType m_MovementType;
		float m_Elasticity;
		bool m_Inertia;
		float m_DecelerationRate;
		float m_ScrollSensitivity;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_Viewport;
		UnityEngine_UI::UnityEngine::UI::Scrollbar* m_HorizontalScrollbar;
		UnityEngine_UI::UnityEngine::UI::Scrollbar* m_VerticalScrollbar;
		UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollbarVisibility m_HorizontalScrollbarVisibility;
		UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollbarVisibility m_VerticalScrollbarVisibility;
		float m_HorizontalScrollbarSpacing;
		float m_VerticalScrollbarSpacing;
		UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollRectEvent* m_OnValueChanged;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_PointerStartLocalCursor;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_ContentStartPosition;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_ViewRect;
		UnityEngine_CoreModule::UnityEngine::Bounds m_ContentBounds;
		UnityEngine_CoreModule::UnityEngine::Bounds m_ViewBounds;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_Velocity;
		bool m_Dragging;
		bool m_Scrolling;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_PrevPosition;
		UnityEngine_CoreModule::UnityEngine::Bounds m_PrevContentBounds;
		UnityEngine_CoreModule::UnityEngine::Bounds m_PrevViewBounds;
		bool m_HasRebuiltLayout;
		bool m_HSliderExpand;
		bool m_VSliderExpand;
		float m_HSliderHeight;
		float m_VSliderWidth;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_Rect;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_HorizontalScrollbarRect;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_VerticalScrollbarRect;
		UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker m_Tracker;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_Corners;
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_content();
		void set_content(UnityEngine_CoreModule::UnityEngine::RectTransform* value);
		bool get_horizontal();
		void set_horizontal(bool value);
		bool get_vertical();
		void set_vertical(bool value);
		UnityEngine_UI::UnityEngine::UI::ScrollRect_MovementType get_movementType();
		void set_movementType(UnityEngine_UI::UnityEngine::UI::ScrollRect_MovementType value);
		float get_elasticity();
		void set_elasticity(float value);
		bool get_inertia();
		void set_inertia(bool value);
		float get_decelerationRate();
		void set_decelerationRate(float value);
		float get_scrollSensitivity();
		void set_scrollSensitivity(float value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_viewport();
		void set_viewport(UnityEngine_CoreModule::UnityEngine::RectTransform* value);
		UnityEngine_UI::UnityEngine::UI::Scrollbar* get_horizontalScrollbar();
		void set_horizontalScrollbar(UnityEngine_UI::UnityEngine::UI::Scrollbar* value);
		UnityEngine_UI::UnityEngine::UI::Scrollbar* get_verticalScrollbar();
		void set_verticalScrollbar(UnityEngine_UI::UnityEngine::UI::Scrollbar* value);
		UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollbarVisibility get_horizontalScrollbarVisibility();
		void set_horizontalScrollbarVisibility(UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollbarVisibility value);
		UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollbarVisibility get_verticalScrollbarVisibility();
		void set_verticalScrollbarVisibility(UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollbarVisibility value);
		float get_horizontalScrollbarSpacing();
		void set_horizontalScrollbarSpacing(float value);
		float get_verticalScrollbarSpacing();
		void set_verticalScrollbarSpacing(float value);
		UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollRectEvent* get_onValueChanged();
		void set_onValueChanged(UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollRectEvent* value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_viewRect();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_velocity();
		void set_velocity(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void _ctor();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate executing);
		void LayoutComplete();
		void GraphicUpdateComplete();
		void UpdateCachedData();
		void OnEnable();
		void OnDisable();
		bool IsActive();
		void EnsureLayoutHasRebuilt();
		void StopMovement();
		void OnScroll(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* data);
		void OnInitializePotentialDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void SetContentAnchoredPosition(UnityEngine_CoreModule::UnityEngine::Vector2 position);
		void LateUpdate();
		void UpdatePrevData();
		void UpdateScrollbars(UnityEngine_CoreModule::UnityEngine::Vector2 offset);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_normalizedPosition();
		void set_normalizedPosition(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		float get_horizontalNormalizedPosition();
		void set_horizontalNormalizedPosition(float value);
		float get_verticalNormalizedPosition();
		void set_verticalNormalizedPosition(float value);
		void SetHorizontalNormalizedPosition(float value);
		void SetVerticalNormalizedPosition(float value);
		void SetNormalizedPosition(float value, int32_t axis);
		static float RubberDelta(float overStretching, float viewSize);
		void OnRectTransformDimensionsChange();
		bool get_hScrollingNeeded();
		bool get_vScrollingNeeded();
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		float get_minWidth();
		float get_preferredWidth();
		float get_flexibleWidth();
		float get_minHeight();
		float get_preferredHeight();
		float get_flexibleHeight();
		int32_t get_layoutPriority();
		void SetLayoutHorizontal();
		void SetLayoutVertical();
		void UpdateScrollbarVisibility();
		static void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, UnityEngine_UI::UnityEngine::UI::ScrollRect_ScrollbarVisibility scrollbarVisibility, UnityEngine_UI::UnityEngine::UI::Scrollbar* scrollbar);
		void UpdateScrollbarLayout();
		void UpdateBounds();
		static void AdjustBounds(UnityEngine_CoreModule::UnityEngine::Bounds& viewBounds, UnityEngine_CoreModule::UnityEngine::Vector2& contentPivot, UnityEngine_CoreModule::UnityEngine::Vector3& contentSize, UnityEngine_CoreModule::UnityEngine::Vector3& contentPos);
		UnityEngine_CoreModule::UnityEngine::Bounds GetBounds();
		static UnityEngine_CoreModule::UnityEngine::Bounds InternalGetBounds(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* corners, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewWorldToLocalMatrix);
		UnityEngine_CoreModule::UnityEngine::Vector2 CalculateOffset(UnityEngine_CoreModule::UnityEngine::Vector2 delta);
		static UnityEngine_CoreModule::UnityEngine::Vector2 InternalCalculateOffset(UnityEngine_CoreModule::UnityEngine::Bounds& viewBounds, UnityEngine_CoreModule::UnityEngine::Bounds& contentBounds, bool horizontal, bool vertical, UnityEngine_UI::UnityEngine::UI::ScrollRect_MovementType movementType, UnityEngine_CoreModule::UnityEngine::Vector2& delta);
		void SetDirty();
		void SetDirtyCaching();
		UnityEngine_CoreModule::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
	};
}


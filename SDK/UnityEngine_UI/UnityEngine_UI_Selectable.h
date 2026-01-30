#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_UI_Navigation.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Navigation; };
#include "UnityEngine_UI_Selectable_Transition.h"
#include "UnityEngine_UI_ColorBlock.h"
namespace UnityEngine_UI::UnityEngine::UI { struct ColorBlock; };
#include "UnityEngine_UI_SpriteState.h"
namespace UnityEngine_UI::UnityEngine::UI { struct SpriteState; };
namespace UnityEngine_UI::UnityEngine::UI { struct AnimationTriggers; };
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasGroup; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "UnityEngine_UI_Selectable_SelectionState.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct AxisEventData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Selectable : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_EnableCalled;
		UnityEngine_UI::UnityEngine::UI::Navigation m_Navigation;
		UnityEngine_UI::UnityEngine::UI::Selectable_Transition m_Transition;
		UnityEngine_UI::UnityEngine::UI::ColorBlock m_Colors;
		UnityEngine_UI::UnityEngine::UI::SpriteState m_SpriteState;
		UnityEngine_UI::UnityEngine::UI::AnimationTriggers* m_AnimationTriggers;
		bool m_Interactable;
		UnityEngine_UI::UnityEngine::UI::Graphic* m_TargetGraphic;
		bool m_GroupsAllowInteraction;
		int32_t m_CurrentIndex;
		bool _isPointerInside_k__BackingField;
		bool _isPointerDown_k__BackingField;
		bool _hasSelection_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UIModule::UnityEngine::CanvasGroup>* m_CanvasGroupCache;
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_UI::UnityEngine::UI::Selectable*>* s_Selectables;
			int32_t s_SelectableCount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<UnityEngine_UI::UnityEngine::UI::Selectable*>* get_allSelectablesArray();
		static int32_t get_allSelectableCount();
		static mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Selectable>* get_allSelectables();
		static int32_t AllSelectablesNoAlloc(IL2CPP::Array<UnityEngine_UI::UnityEngine::UI::Selectable*>* selectables);
		UnityEngine_UI::UnityEngine::UI::Navigation get_navigation();
		void set_navigation(UnityEngine_UI::UnityEngine::UI::Navigation value);
		UnityEngine_UI::UnityEngine::UI::Selectable_Transition get_transition();
		void set_transition(UnityEngine_UI::UnityEngine::UI::Selectable_Transition value);
		UnityEngine_UI::UnityEngine::UI::ColorBlock get_colors();
		void set_colors(UnityEngine_UI::UnityEngine::UI::ColorBlock value);
		UnityEngine_UI::UnityEngine::UI::SpriteState get_spriteState();
		void set_spriteState(UnityEngine_UI::UnityEngine::UI::SpriteState value);
		UnityEngine_UI::UnityEngine::UI::AnimationTriggers* get_animationTriggers();
		void set_animationTriggers(UnityEngine_UI::UnityEngine::UI::AnimationTriggers* value);
		UnityEngine_UI::UnityEngine::UI::Graphic* get_targetGraphic();
		void set_targetGraphic(UnityEngine_UI::UnityEngine::UI::Graphic* value);
		bool get_interactable();
		void set_interactable(bool value);
		bool get_isPointerInside();
		void set_isPointerInside(bool value);
		bool get_isPointerDown();
		void set_isPointerDown(bool value);
		bool get_hasSelection();
		void set_hasSelection(bool value);
		void _ctor();
		UnityEngine_UI::UnityEngine::UI::Image* get_image();
		void set_image(UnityEngine_UI::UnityEngine::UI::Image* value);
		UnityEngine_AnimationModule::UnityEngine::Animator* get_animator();
		void Awake();
		void OnCanvasGroupChanged();
		bool IsInteractable();
		void OnDidApplyAnimationProperties();
		void OnEnable();
		void OnTransformParentChanged();
		void OnSetProperty();
		void OnDisable();
		UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState get_currentSelectionState();
		void InstantClearState();
		void DoStateTransition(UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState state, bool instant);
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectable(UnityEngine_CoreModule::UnityEngine::Vector3 dir);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetPointOnRectEdge(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 dir);
		void Navigate(UnityEngine_UI::UnityEngine::EventSystems::AxisEventData* eventData, UnityEngine_UI::UnityEngine::UI::Selectable* sel);
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnLeft();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnRight();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnUp();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnDown();
		void OnMove(UnityEngine_UI::UnityEngine::EventSystems::AxisEventData* eventData);
		void StartColorTween(UnityEngine_CoreModule::UnityEngine::Color targetColor, bool instant);
		void DoSpriteSwap(UnityEngine_CoreModule::UnityEngine::Sprite* newSprite);
		void TriggerAnimation(mscorlib::System::String* triggername);
		bool IsHighlighted();
		bool IsPressed();
		void EvaluateAndTransitionToSelectionState();
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnSelect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnDeselect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void Select();
		static void _cctor();
	};
}


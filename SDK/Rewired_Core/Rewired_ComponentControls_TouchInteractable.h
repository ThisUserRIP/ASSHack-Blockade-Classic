#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_TouchControl.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ComponentControls_TouchInteractable_MouseButtonFlags.h"
#include "Rewired_ComponentControls_TouchInteractable_TransitionTypeFlags.h"
#include "..\UnityEngine_UI\UnityEngine_UI_ColorBlock.h"
namespace UnityEngine_UI::UnityEngine::UI { struct ColorBlock; };
#include "..\UnityEngine_UI\UnityEngine_UI_SpriteState.h"
namespace UnityEngine_UI::UnityEngine::UI { struct SpriteState; };
namespace UnityEngine_UI::UnityEngine::UI { struct AnimationTriggers; };
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable_InteractionStateTransitionEventHandler; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable_VisibilityChangedEventHandler; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityEvent; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasGroup; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "Rewired_ComponentControls_TouchInteractable_InteractionState.h"
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable_InteractionStateTransitionArgs; };
namespace Rewired_Core::Rewired::UI { struct IVisibilityChangedHandler; };
namespace Rewired_Core { template <typename THandler, typename TValue> struct rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable_IInteractionStateTransitionHandler; };
namespace Rewired_Core { template <typename T, typename TArgs> struct rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_EventTriggerType.h"

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchInteractable : Rewired_Core::Rewired::ComponentControls::TouchControl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _interactable;
		bool _visible;
		bool _hideWhenIdle;
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags _allowedMouseButtons;
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags _transitionType;
		UnityEngine_UI::UnityEngine::UI::ColorBlock _transitionColorTint;
		UnityEngine_UI::UnityEngine::UI::SpriteState _transitionSpriteState;
		UnityEngine_UI::UnityEngine::UI::AnimationTriggers* _transitionAnimationTriggers;
		UnityEngine_UI::UnityEngine::UI::Graphic* _targetGraphic;
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionEventHandler* _onInteractionStateTransition;
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_VisibilityChangedEventHandler* _onVisibilityChanged;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* _onInteractionStateChangedToNormal;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* _onInteractionStateChangedToHighlighted;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* _onInteractionStateChangedToPressed;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* _onInteractionStateChangedToDisabled;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UIModule::UnityEngine::CanvasGroup>* _canvasGroupCache;
		bool _groupsAllowInteraction;
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState _interactionState;
		bool xrWGjsklHmHUZcFztpZbYinhiDB;
		bool WRMPfkfvzyHJXtcMaHHDXZksJvh;
		bool _varWatch_visible;
		bool _varWatch_interactable;
		bool _allowSendingEvents;
		Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2<Rewired_Core::Rewired::UI::IVisibilityChangedHandler, mscorlib::System::Boolean>* __hierarchyVisibilityChangedHandlers;
		Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2<Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* __hierarchyInteractionStateTransitionHandlers;
		struct StaticFields
		{
			int32_t POINTER_ID_NULL;
			int32_t POINTER_ID_MOUSE_LEFT_BUTTON;
			int32_t POINTER_ID_MOUSE_RIGHT_BUTTON;
			int32_t POINTER_ID_MOUSE_MIDDLE_BUTTON;
			int32_t MAX_MOUSE_BUTTONS;
			Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* _transitionArgs;
			Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* __interactionStateTransitionHandlerDelegate;
			Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* CS___9__CachedAnonymousMethodDelegate4;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void add_InteractionStateSetEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* value);
		void remove_InteractionStateSetEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* value);
		void add_VisibilityChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* value);
		void remove_VisibilityChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* value);
		void add_InteractionStateChangedToNormal(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_InteractionStateChangedToNormal(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void add_InteractionStateChangedToHighlighted(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_InteractionStateChangedToHighlighted(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void add_InteractionStateChangedToPressed(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_InteractionStateChangedToPressed(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void add_InteractionStateChangedToDisabled(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_InteractionStateChangedToDisabled(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2<Rewired_Core::Rewired::UI::IVisibilityChangedHandler, mscorlib::System::Boolean>* get_hierarchyVisibilityChangedHandlers();
		Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2<Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* get_hierarchyInteractionStateTransitionHandlers();
		bool get_interactable();
		void set_interactable(bool value);
		bool get_visible();
		void set_visible(bool value);
		bool get_hideWhenIdle();
		void set_hideWhenIdle(bool value);
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags get_allowedMouseButtons();
		void set_allowedMouseButtons(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags value);
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags get_transitionType();
		void set_transitionType(Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags value);
		UnityEngine_UI::UnityEngine::UI::ColorBlock get_transitionColorTint();
		void set_transitionColorTint(UnityEngine_UI::UnityEngine::UI::ColorBlock value);
		UnityEngine_UI::UnityEngine::UI::SpriteState get_transitionSpriteState();
		void set_transitionSpriteState(UnityEngine_UI::UnityEngine::UI::SpriteState value);
		UnityEngine_UI::UnityEngine::UI::AnimationTriggers* get_transitionAnimationTriggers();
		void set_transitionAnimationTriggers(UnityEngine_UI::UnityEngine::UI::AnimationTriggers* value);
		UnityEngine_UI::UnityEngine::UI::Graphic* get_targetGraphic();
		void set_targetGraphic(UnityEngine_UI::UnityEngine::UI::Graphic* value);
		UnityEngine_UI::UnityEngine::UI::Image* get_image();
		void set_image(UnityEngine_UI::UnityEngine::UI::Image* value);
		UnityEngine_AnimationModule::UnityEngine::Animator* get_animator();
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState get_interactionState();
		void _ctor();
		void Awake();
		void OnCanvasGroupChanged();
		void OnDidApplyAnimationProperties();
		void OnEnable();
		void OnDisable();
		void OnValidate();
		void Reset();
		void OnSetProperty();
		void FindEventHandlers();
		void QrhSpImDqemlPrGVtExXDrAegvfz();
		void vyidWgTvvtvkFppuCJXcWEKrawx(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState A_1, bool A_2);
		void rubLWkswTLaJMJqpClHtFCkJRkI(UnityEngine_CoreModule::UnityEngine::Color A_1, bool A_2);
		void odCTFrAAyNZjFjlugKcCcsScVxf(UnityEngine_CoreModule::UnityEngine::Sprite* A_1);
		void hMgbOIIpTSBeYgAkhHlKHmZYhdlQ(mscorlib::System::String* A_1);
		void CskfctlPhTUqoQbafglMKMYOgFH(bool A_1);
		bool IsInteractable();
		bool IsPressed();
		void StEcmAOdazdjBVdQLUNhIADbEHy(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* A_1);
		bool IsThisOrTouchRegionGameObject(UnityEngine_CoreModule::UnityEngine::GameObject* A_1);
		bool qgvhvUcJcMVmyLUhkmvVClxLgMP(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* A_1);
		bool qgvhvUcJcMVmyLUhkmvVClxLgMP(bool A_1, UnityEngine_CoreModule::UnityEngine::GameObject* A_2);
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState RMZvJoJJWOeMBmZYSlMHLaIeZyf(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* A_1);
		bool rsRQRBkAYGrfANKnYaReCTlhEvQ(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState A_1);
		void ycozgRzaKDvfaZiVNvmyZXfNANP();
		void wTWyVSRUMhOESAowPotkmfxWday();
		void zQEHtkoBJdZYFoCgnVsiufzUmau(bool A_1, bool A_2);
		void HSQyPoafrXnwZfBKOphUBULlEBC();
		void FTCpAHsLZSiWeeRGdJfhaiamjxh();
		void wBrTiliAvAcGwpCaTcbWiYYrYyr();
		void HmLeqIZjlmpKvJCGDLPUynxetOv();
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IDragHandler_OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IEndDragHandler_OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		static bool mOrGUZAhoXitQEhfSlOyjvjPeLmG(int32_t A_0);
		static UnityEngine_CoreModule::UnityEngine::Vector3 HCHDrVBjqSbmVEYEFAjlaFnaupHa(int32_t A_0);
		static bool xTbAecYpqAPYTJxrjDRnUxWIOXF(int32_t A_0);
		static bool qFUqHutQvENSCXxlYCqVFMfdoGx(int32_t A_0);
		static int32_t EaJmBamiHTJAPfTKPAoNeyYGKhu(int32_t A_0);
		static bool YlAiDHLlNscXKmvQmFvDryhlDDV(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_0, int32_t A_1);
		static bool eSskPHKGGZARmItaBTjJQWxudcWr(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_0, int32_t A_1);
		static int32_t RhBJaQRAoGhVCOUZufUncRIfpeZf(int32_t A_0);
		static bool LfZngrmYmviivlzASSDaOEmLlCV(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_0, int32_t& A_1);
		static bool YlAiDHLlNscXKmvQmFvDryhlDDV(int32_t A_0, Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_1, UnityEngine_UI::UnityEngine::EventSystems::EventTriggerType A_2);
		static bool FNXFuRHvCWHQnbXInVRJBXVvAWfb(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_0);
		static Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* get_interactionStateTransitionHandlerDelegate();
		void ePfAfYLjdBDKsIJVHRhfTPHweuLx(bool A_1);
		static void sGOcSNBqLqaCNQZKiCvuxVUCjja(Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler* A_0, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* A_1);
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ComponentControls_TouchInteractable_TransitionTypeFlags.h"
#include "..\UnityEngine_UI\UnityEngine_UI_ColorBlock.h"
namespace UnityEngine_UI::UnityEngine::UI { struct ColorBlock; };
#include "..\UnityEngine_UI\UnityEngine_UI_SpriteState.h"
namespace UnityEngine_UI::UnityEngine::UI { struct SpriteState; };
namespace UnityEngine_UI::UnityEngine::UI { struct AnimationTriggers; };
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
#include "Rewired_ComponentControls_TouchInteractable_InteractionState.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable_InteractionStateTransitionArgs; };

namespace Rewired_Core::Rewired::ComponentControls::Effects
{
	struct TouchInteractableTransitioner : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _visible;
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags _transitionType;
		UnityEngine_UI::UnityEngine::UI::ColorBlock _transitionColorTint;
		UnityEngine_UI::UnityEngine::UI::SpriteState _transitionSpriteState;
		UnityEngine_UI::UnityEngine::UI::AnimationTriggers* _transitionAnimationTriggers;
		UnityEngine_UI::UnityEngine::UI::Graphic* _targetGraphic;
		bool _syncFadeDurationWithTransitionEvent;
		bool _syncColorTintWithTransitionEvent;
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState BHaTDvbBOZAdufrDSeylkopgqVq;
		bool get_visible();
		void set_visible(bool value);
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
		bool get_syncFadeDurationWithTransitionEvent();
		void set_syncFadeDurationWithTransitionEvent(bool value);
		bool get_syncColorTintWithTransitionEvent();
		void set_syncColorTintWithTransitionEvent(bool value);
		UnityEngine_UI::UnityEngine::UI::Image* get_image();
		void set_image(UnityEngine_UI::UnityEngine::UI::Image* value);
		UnityEngine_AnimationModule::UnityEngine::Animator* get_animator();
		void _ctor();
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnValidate();
		void Reset();
		void OnCanvasGroupWasChanged();
		void OnAnimationPropertiesWereApplied();
		void FEXQmcgsIVfvGMLuLGRXIjWjIctl();
		void wBrTiliAvAcGwpCaTcbWiYYrYyr();
		void CskfctlPhTUqoQbafglMKMYOgFH(bool A_1);
		void zQEHtkoBJdZYFoCgnVsiufzUmau(bool A_1, bool A_2);
		bool WEHsBRjVTdeBxRAnBdQTqFudEZHH();
		void QrhSpImDqemlPrGVtExXDrAegvfz();
		void vyidWgTvvtvkFppuCJXcWEKrawx(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState A_1, bool A_2);
		void rubLWkswTLaJMJqpClHtFCkJRkI(UnityEngine_CoreModule::UnityEngine::Color A_1, bool A_2);
		void odCTFrAAyNZjFjlugKcCcsScVxf(UnityEngine_CoreModule::UnityEngine::Sprite* A_1);
		void hMgbOIIpTSBeYgAkhHlKHmZYhdlQ(mscorlib::System::String* A_1);
		void OnInteractionStateTransition(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* args);
		void OnVisibilityChanged(bool state);
	};
}


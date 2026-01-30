#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UI\UnityEngine_UI_Toggle.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
#include "..\UnityEngine_UI\UnityEngine_UI_Selectable_SelectionState.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct CustomToggle : UnityEngine_UI::UnityEngine::UI::Toggle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Sprite* _disabledHighlightedSprite;
		UnityEngine_CoreModule::UnityEngine::Color _disabledHighlightedColor;
		mscorlib::System::String* _disabledHighlightedTrigger;
		bool _autoNavUp;
		bool _autoNavDown;
		bool _autoNavLeft;
		bool _autoNavRight;
		bool isHighlightDisabled;
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* _CancelEvent;
		UnityEngine_CoreModule::UnityEngine::Sprite* get_disabledHighlightedSprite();
		void set_disabledHighlightedSprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		UnityEngine_CoreModule::UnityEngine::Color get_disabledHighlightedColor();
		void set_disabledHighlightedColor(UnityEngine_CoreModule::UnityEngine::Color value);
		mscorlib::System::String* get_disabledHighlightedTrigger();
		void set_disabledHighlightedTrigger(mscorlib::System::String* value);
		bool get_autoNavUp();
		void set_autoNavUp(bool value);
		bool get_autoNavDown();
		void set_autoNavDown(bool value);
		bool get_autoNavLeft();
		void set_autoNavLeft(bool value);
		bool get_autoNavRight();
		void set_autoNavRight(bool value);
		bool get_isDisabled();
		void add__CancelEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove__CancelEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void add_CancelEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_CancelEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnLeft();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnRight();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnUp();
		UnityEngine_UI::UnityEngine::UI::Selectable* FindSelectableOnDown();
		void OnCanvasGroupChanged();
		void DoStateTransition(UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState state, bool instant);
		void StartColorTween(UnityEngine_CoreModule::UnityEngine::Color targetColor, bool instant);
		void DoSpriteSwap(UnityEngine_CoreModule::UnityEngine::Sprite* newSprite);
		void TriggerAnimation(mscorlib::System::String* triggername);
		void OnSelect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnDeselect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void EvaluateHightlightDisabled(bool isSelected);
		void OnCancel(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void _ctor();
	};
}


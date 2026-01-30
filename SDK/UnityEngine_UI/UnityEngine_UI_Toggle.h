#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_Selectable.h"
#include "UnityEngine_UI_Toggle_ToggleTransition.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
namespace UnityEngine_UI::UnityEngine::UI { struct ToggleGroup; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle_ToggleEvent; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_UI_CanvasUpdate.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Toggle : UnityEngine_UI::UnityEngine::UI::Selectable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Toggle_ToggleTransition toggleTransition;
		UnityEngine_UI::UnityEngine::UI::Graphic* graphic;
		UnityEngine_UI::UnityEngine::UI::ToggleGroup* m_Group;
		UnityEngine_UI::UnityEngine::UI::Toggle_ToggleEvent* onValueChanged;
		bool m_IsOn;
		UnityEngine_UI::UnityEngine::UI::ToggleGroup* get_group();
		void set_group(UnityEngine_UI::UnityEngine::UI::ToggleGroup* value);
		void _ctor();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate executing);
		void LayoutComplete();
		void GraphicUpdateComplete();
		void OnDestroy();
		void OnEnable();
		void OnDisable();
		void OnDidApplyAnimationProperties();
		void SetToggleGroup(UnityEngine_UI::UnityEngine::UI::ToggleGroup* newGroup, bool setMemberValue);
		bool get_isOn();
		void set_isOn(bool value);
		void SetIsOnWithoutNotify(bool value);
		void Set(bool value, bool sendCallback);
		void PlayEffect(bool instant);
		void Start();
		void InternalToggle();
		void OnPointerClick(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnSubmit(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		UnityEngine_CoreModule::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
	};
}


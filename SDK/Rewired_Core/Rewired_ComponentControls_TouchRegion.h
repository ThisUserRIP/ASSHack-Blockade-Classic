#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_TouchInteractable.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchRegion_yIRHCSvcbXDtBXPLJkmCQcddUxd; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchRegion_rKDxcijxjNlFOhETNtXCFUlWbVX; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchRegion_QrWsqnaiJsYyBdifotFfOWPybXr; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchRegion_qhyOiUNkKFcnBaomfhQkjdpqQRSO; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchRegion_lRyNZWuggQSGPCMYNCVNrNOpflei; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchRegion_RZaGkYGAvijFZSjLibEalZonsaLB; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchRegion_UWQMjwgQAqQlpZIcuEfnpbbVHHB; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchRegion : Rewired_Core::Rewired::ComponentControls::TouchInteractable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _hideAtRuntime;
		Rewired_Core::Rewired::ComponentControls::TouchRegion_yIRHCSvcbXDtBXPLJkmCQcddUxd* _onPointerDown;
		Rewired_Core::Rewired::ComponentControls::TouchRegion_rKDxcijxjNlFOhETNtXCFUlWbVX* _onPointerUp;
		Rewired_Core::Rewired::ComponentControls::TouchRegion_QrWsqnaiJsYyBdifotFfOWPybXr* _onPointerEnter;
		Rewired_Core::Rewired::ComponentControls::TouchRegion_qhyOiUNkKFcnBaomfhQkjdpqQRSO* _onPointerExit;
		Rewired_Core::Rewired::ComponentControls::TouchRegion_lRyNZWuggQSGPCMYNCVNrNOpflei* _onBeginDrag;
		Rewired_Core::Rewired::ComponentControls::TouchRegion_RZaGkYGAvijFZSjLibEalZonsaLB* _onDrag;
		Rewired_Core::Rewired::ComponentControls::TouchRegion_UWQMjwgQAqQlpZIcuEfnpbbVHHB* _onEndDrag;
		bool get_hideAtRuntime();
		void set_hideAtRuntime(bool value);
		void add_PointerDownEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void remove_PointerDownEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void add_PointerUpEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void remove_PointerUpEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void add_PointerEnterEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void remove_PointerEnterEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void add_PointerExitEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void remove_PointerExitEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void add_BeginDragEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void remove_BeginDragEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void add_DragEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void remove_DragEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void add_EndDragEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void remove_EndDragEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* value);
		void _ctor();
		void Awake();
		void ClearValue();
		void OnCustomControllerUpdate();
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
	};
}


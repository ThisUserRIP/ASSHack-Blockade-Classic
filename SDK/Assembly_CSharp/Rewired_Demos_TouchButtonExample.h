#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct TouchButtonExample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool allowMouseControl;
		bool _isPressed_k__BackingField;
		bool get_isPressed();
		void set_isPressed(bool value);
		void Awake();
		void Restart();
		void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		static bool IsMousePointerId(int32_t id);
		void _ctor();
	};
}


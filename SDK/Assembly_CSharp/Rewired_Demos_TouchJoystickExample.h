#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScreenOrientation.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct TouchJoystickExample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool allowMouseControl;
		int32_t radius;
		UnityEngine_CoreModule::UnityEngine::Vector2 origAnchoredPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 origWorldPosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 origScreenResolution;
		UnityEngine_CoreModule::UnityEngine::ScreenOrientation origScreenOrientation;
		bool hasFinger;
		int32_t lastFingerId;
		UnityEngine_CoreModule::UnityEngine::Vector2 _position_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2 get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void Start();
		void Update();
		void Restart();
		void StoreOrigValues();
		void UpdateValue(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IDragHandler_OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		static bool IsMousePointerId(int32_t id);
		void _ctor();
	};
}


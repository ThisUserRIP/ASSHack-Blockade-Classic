#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Integration_UnityUI_RewiredPointerInputModule.h"
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredPointerInputModule; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_InputLegacyModule\UnityEngine_Touch.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Integration::UnityUI
{
	struct RewiredPointerInputModule_UnityInputSource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 m_MousePosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_MousePositionPrev;
		int32_t m_LastUpdatedFrame;
		int32_t Rewired_UI_IMouseInputSource_get_playerId();
		int32_t Rewired_UI_ITouchInputSource_get_playerId();
		bool Rewired_UI_IMouseInputSource_get_enabled();
		bool Rewired_UI_IMouseInputSource_get_locked();
		int32_t Rewired_UI_IMouseInputSource_get_buttonCount();
		bool Rewired_UI_IMouseInputSource_GetButtonDown(int32_t button);
		bool Rewired_UI_IMouseInputSource_GetButtonUp(int32_t button);
		bool Rewired_UI_IMouseInputSource_GetButton(int32_t button);
		UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPositionDelta();
		UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_wheelDelta();
		bool Rewired_UI_ITouchInputSource_get_touchSupported();
		int32_t Rewired_UI_ITouchInputSource_get_touchCount();
		UnityEngine_InputLegacyModule::UnityEngine::Touch Rewired_UI_ITouchInputSource_GetTouch(int32_t index);
		void TryUpdate();
		void _ctor();
	};
}


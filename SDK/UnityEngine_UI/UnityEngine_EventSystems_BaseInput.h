#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_InputLegacyModule\UnityEngine_IMECompositionMode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_InputLegacyModule\UnityEngine_Touch.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct BaseInput : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_compositionString();
		UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode get_imeCompositionMode();
		void set_imeCompositionMode(UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_compositionCursorPos();
		void set_compositionCursorPos(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		bool get_mousePresent();
		bool GetMouseButtonDown(int32_t button);
		bool GetMouseButtonUp(int32_t button);
		bool GetMouseButton(int32_t button);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_mousePosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_mouseScrollDelta();
		bool get_touchSupported();
		int32_t get_touchCount();
		UnityEngine_InputLegacyModule::UnityEngine::Touch GetTouch(int32_t index);
		float GetAxisRaw(mscorlib::System::String* axisName);
		bool GetButtonDown(mscorlib::System::String* buttonName);
		void _ctor();
	};
}


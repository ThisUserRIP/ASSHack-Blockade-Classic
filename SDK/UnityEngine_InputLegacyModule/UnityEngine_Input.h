#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Touch.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_IMECompositionMode.h"

namespace UnityEngine_InputLegacyModule::UnityEngine
{
	struct Input : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool GetKeyInt(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static bool GetKeyUpInt(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static bool GetKeyDownInt(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static float GetAxis(mscorlib::System::String* axisName);
		static float GetAxisRaw(mscorlib::System::String* axisName);
		static bool GetButton(mscorlib::System::String* buttonName);
		static bool GetButtonDown(mscorlib::System::String* buttonName);
		static bool GetButtonUp(mscorlib::System::String* buttonName);
		static bool GetMouseButton(int32_t button);
		static bool GetMouseButtonDown(int32_t button);
		static bool GetMouseButtonUp(int32_t button);
		static IL2CPP::Array<mscorlib::System::String*>* GetJoystickNames();
		static UnityEngine_InputLegacyModule::UnityEngine::Touch GetTouch(int32_t index);
		static bool GetKey(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static bool GetKeyUp(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static bool GetKeyDown(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static bool get_simulateMouseWithTouches();
		static void set_simulateMouseWithTouches(bool value);
		static bool get_anyKey();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_mousePosition();
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_mouseScrollDelta();
		static UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode get_imeCompositionMode();
		static void set_imeCompositionMode(UnityEngine_InputLegacyModule::UnityEngine::IMECompositionMode value);
		static mscorlib::System::String* get_compositionString();
		static UnityEngine_CoreModule::UnityEngine::Vector2 get_compositionCursorPos();
		static void set_compositionCursorPos(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		static bool get_mousePresent();
		static int32_t get_touchCount();
		static bool get_touchPressureSupported();
		static bool get_touchSupported();
		static bool get_multiTouchEnabled();
		static void set_multiTouchEnabled(bool value);
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_acceleration();
		static IL2CPP::Array<UnityEngine_InputLegacyModule::UnityEngine::Touch>* get_touches();
		static void GetTouch_Injected(int32_t index, UnityEngine_InputLegacyModule::UnityEngine::Touch& ret);
		static void get_mousePosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		static void get_mouseScrollDelta_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		static void get_compositionCursorPos_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		static void set_compositionCursorPos_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
		static void get_acceleration_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
	};
}


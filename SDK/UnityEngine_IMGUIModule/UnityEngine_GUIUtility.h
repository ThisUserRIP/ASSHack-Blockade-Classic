#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_FocusType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { struct Object; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUISkin; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct Event; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUIUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t s_SkinMode;
			int32_t s_OriginalID;
			mscorlib::System::Action* takeCapture;
			mscorlib::System::Action* releaseCapture;
			mscorlib::System::Func_3<mscorlib::System::Int32, mscorlib::System::IntPtr, mscorlib::System::Boolean>* processEvent;
			mscorlib::System::Func_2<mscorlib::System::Exception, mscorlib::System::Boolean>* endContainerGUIFromException;
			mscorlib::System::Action* guiChanged;
			bool _guiIsExiting_k__BackingField;
			mscorlib::System::Func_1<mscorlib::System::Boolean>* s_HasCurrentWindowKeyFocusFunc;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static float get_pixelsPerPoint();
		static int32_t get_guiDepth();
		static void set_mouseUsed(bool value);
		static void set_textFieldInput(bool value);
		static mscorlib::System::String* get_systemCopyBuffer();
		static void set_systemCopyBuffer(mscorlib::System::String* value);
		static int32_t GetControlID(int32_t hint, UnityEngine_IMGUIModule::UnityEngine::FocusType focusType, UnityEngine_CoreModule::UnityEngine::Rect rect);
		static UnityEngine_CoreModule::UnityEngine::Rect AlignRectToDevice(UnityEngine_CoreModule::UnityEngine::Rect rect, int32_t& widthInPixels, int32_t& heightInPixels);
		static mscorlib::System::String* get_compositionString();
		static void set_compositionCursorPos(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		static int32_t Internal_GetHotControl();
		static int32_t Internal_GetKeyboardControl();
		static void Internal_SetHotControl(int32_t value);
		static void Internal_SetKeyboardControl(int32_t value);
		static mscorlib::System::Object* Internal_GetDefaultSkin(int32_t skinMode);
		static void Internal_ExitGUI();
		static UnityEngine_CoreModule::UnityEngine::Vector2 InternalScreenToWindowPoint(UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint);
		static void MarkGUIChanged();
		static int32_t GetControlID(UnityEngine_IMGUIModule::UnityEngine::FocusType focus);
		static int32_t GetControlID(UnityEngine_IMGUIModule::UnityEngine::FocusType focus, UnityEngine_CoreModule::UnityEngine::Rect position);
		static int32_t GetControlID(int32_t hint, UnityEngine_IMGUIModule::UnityEngine::FocusType focus);
		static mscorlib::System::Object* GetStateObject(mscorlib::System::Type* t, int32_t controlID);
		static void set_guiIsExiting(bool value);
		static int32_t get_hotControl();
		static void set_hotControl(int32_t value);
		static void TakeCapture();
		static void RemoveCapture();
		static int32_t get_keyboardControl();
		static void set_keyboardControl(int32_t value);
		static bool HasKeyFocus(int32_t controlID);
		static UnityEngine_IMGUIModule::UnityEngine::GUISkin* GetDefaultSkin();
		static void ProcessEvent(int32_t instanceID, intptr_t nativeEventPtr, bool& result);
		static void BeginGUI(int32_t skinMode, int32_t instanceID, int32_t useGUILayout);
		static void EndGUI(int32_t layoutType);
		static bool EndGUIFromException(mscorlib::System::Exception* exception);
		static bool EndContainerGUIFromException(mscorlib::System::Exception* exception);
		static void ResetGlobalState();
		static bool IsExitGUIException(mscorlib::System::Exception* exception);
		static bool ShouldRethrowException(mscorlib::System::Exception* exception);
		static void CheckOnGUI();
		static UnityEngine_CoreModule::UnityEngine::Vector2 ScreenToGUIPoint(UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint);
		static void RotateAroundPivot(float angle, UnityEngine_CoreModule::UnityEngine::Vector2 pivotPoint);
		static UnityEngine_CoreModule::UnityEngine::Rect AlignRectToDevice(UnityEngine_CoreModule::UnityEngine::Rect rect);
		static bool HitTest(UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 point, int32_t offset);
		static bool HitTest(UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 point, bool isDirectManipulationDevice);
		static bool HitTest(UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_IMGUIModule::UnityEngine::Event* evt);
		static int32_t GetControlID_Injected(int32_t hint, UnityEngine_IMGUIModule::UnityEngine::FocusType focusType, UnityEngine_CoreModule::UnityEngine::Rect& rect);
		static void AlignRectToDevice_Injected(UnityEngine_CoreModule::UnityEngine::Rect& rect, int32_t& widthInPixels, int32_t& heightInPixels, UnityEngine_CoreModule::UnityEngine::Rect& ret);
		static void set_compositionCursorPos_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
		static void InternalScreenToWindowPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& screenPoint, UnityEngine_CoreModule::UnityEngine::Vector2& ret);
	};
}


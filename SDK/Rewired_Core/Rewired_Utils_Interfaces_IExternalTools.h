#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };

namespace Rewired_Core::Rewired::Utils::Interfaces
{
	struct IExternalTools
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_isEditorPaused();
		void add_EditorPausedStateChangedEvent(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		void remove_EditorPausedStateChangedEvent(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		void Destroy();
		mscorlib::System::Object* GetPlatformInitializer();
		mscorlib::System::String* GetFocusedEditorWindowTitle();
		bool IsEditorSceneViewFocused();
		bool LinuxInput_IsJoystickPreconfigured(mscorlib::System::String* name);
		int32_t XboxOneInput_GetUserIdForGamepad(uint32_t id);
		uint64_t XboxOneInput_GetControllerId(uint32_t unityJoystickId);
		void add_XboxOneInput_OnGamepadStateChange(mscorlib::System::Action_2<mscorlib::System::UInt32, mscorlib::System::Boolean>* value);
		void remove_XboxOneInput_OnGamepadStateChange(mscorlib::System::Action_2<mscorlib::System::UInt32, mscorlib::System::Boolean>* value);
		bool XboxOneInput_IsGamepadActive(uint32_t unityJoystickId);
		mscorlib::System::String* XboxOneInput_GetControllerType(uint64_t xboxControllerId);
		uint32_t XboxOneInput_GetJoystickId(uint64_t xboxControllerId);
		void XboxOne_Gamepad_UpdatePlugin();
		bool XboxOne_Gamepad_SetGamepadVibration(uint64_t xboxOneJoystickId, float leftMotor, float rightMotor, float leftTriggerLevel, float rightTriggerLevel);
		void XboxOne_Gamepad_PulseVibrateMotor(uint64_t xboxOneJoystickId, int32_t motor, float startLevel, float endLevel, uint64_t durationMS);
		UnityEngine_CoreModule::UnityEngine::Vector3 PS4Input_GetLastAcceleration(int32_t id);
		UnityEngine_CoreModule::UnityEngine::Vector3 PS4Input_GetLastGyro(int32_t id);
		UnityEngine_CoreModule::UnityEngine::Vector4 PS4Input_GetLastOrientation(int32_t id);
		void PS4Input_GetLastTouchData(int32_t id, int32_t& touchNum, int32_t& touch0x, int32_t& touch0y, int32_t& touch0id, int32_t& touch1x, int32_t& touch1y, int32_t& touch1id);
		void PS4Input_GetPadControllerInformation(int32_t id, float& touchpixelDensity, int32_t& touchResolutionX, int32_t& touchResolutionY, int32_t& analogDeadZoneLeft, int32_t& analogDeadZoneright, int32_t& connectionType);
		void PS4Input_PadSetMotionSensorState(int32_t id, bool bEnable);
		void PS4Input_PadSetTiltCorrectionState(int32_t id, bool bEnable);
		void PS4Input_PadSetAngularVelocityDeadbandState(int32_t id, bool bEnable);
		void PS4Input_PadSetLightBar(int32_t id, int32_t red, int32_t green, int32_t blue);
		void PS4Input_PadResetLightBar(int32_t id);
		void PS4Input_PadSetVibration(int32_t id, int32_t largeMotor, int32_t smallMotor);
		void PS4Input_PadResetOrientation(int32_t id);
		bool PS4Input_PadIsConnected(int32_t id);
		void PS4Input_GetUsersDetails(int32_t slot, mscorlib::System::Object* loggedInUser);
		int32_t PS4Input_GetDeviceClassForHandle(int32_t handle);
		mscorlib::System::String* PS4Input_GetDeviceClassString(int32_t intValue);
		int32_t PS4Input_PadGetUsersHandles2(int32_t maxControllers, IL2CPP::Array<int32_t>* handles);
		void PS4Input_GetSpecialControllerInformation(int32_t id, int32_t padIndex, mscorlib::System::Object* controllerInformation);
		UnityEngine_CoreModule::UnityEngine::Vector3 PS4Input_SpecialGetLastAcceleration(int32_t id);
		UnityEngine_CoreModule::UnityEngine::Vector3 PS4Input_SpecialGetLastGyro(int32_t id);
		UnityEngine_CoreModule::UnityEngine::Vector4 PS4Input_SpecialGetLastOrientation(int32_t id);
		int32_t PS4Input_SpecialGetUsersHandles(int32_t maxNumberControllers, IL2CPP::Array<int32_t>* handles);
		int32_t PS4Input_SpecialGetUsersHandles2(int32_t maxNumberControllers, IL2CPP::Array<int32_t>* handles);
		bool PS4Input_SpecialIsConnected(int32_t id);
		void PS4Input_SpecialResetLightSphere(int32_t id);
		void PS4Input_SpecialResetOrientation(int32_t id);
		void PS4Input_SpecialSetAngularVelocityDeadbandState(int32_t id, bool bEnable);
		void PS4Input_SpecialSetLightSphere(int32_t id, int32_t red, int32_t green, int32_t blue);
		void PS4Input_SpecialSetMotionSensorState(int32_t id, bool bEnable);
		void PS4Input_SpecialSetTiltCorrectionState(int32_t id, bool bEnable);
		void PS4Input_SpecialSetVibration(int32_t id, int32_t largeMotor, int32_t smallMotor);
		UnityEngine_CoreModule::UnityEngine::Vector3 PS4Input_AimGetLastAcceleration(int32_t id);
		UnityEngine_CoreModule::UnityEngine::Vector3 PS4Input_AimGetLastGyro(int32_t id);
		UnityEngine_CoreModule::UnityEngine::Vector4 PS4Input_AimGetLastOrientation(int32_t id);
		int32_t PS4Input_AimGetUsersHandles(int32_t maxNumberControllers, IL2CPP::Array<int32_t>* handles);
		int32_t PS4Input_AimGetUsersHandles2(int32_t maxNumberControllers, IL2CPP::Array<int32_t>* handles);
		bool PS4Input_AimIsConnected(int32_t id);
		void PS4Input_AimResetLightSphere(int32_t id);
		void PS4Input_AimResetOrientation(int32_t id);
		void PS4Input_AimSetAngularVelocityDeadbandState(int32_t id, bool bEnable);
		void PS4Input_AimSetLightSphere(int32_t id, int32_t red, int32_t green, int32_t blue);
		void PS4Input_AimSetMotionSensorState(int32_t id, bool bEnable);
		void PS4Input_AimSetTiltCorrectionState(int32_t id, bool bEnable);
		void PS4Input_AimSetVibration(int32_t id, int32_t largeMotor, int32_t smallMotor);
		UnityEngine_CoreModule::UnityEngine::Vector3 PS4Input_GetLastMoveAcceleration(int32_t id, int32_t index);
		UnityEngine_CoreModule::UnityEngine::Vector3 PS4Input_GetLastMoveGyro(int32_t id, int32_t index);
		int32_t PS4Input_MoveGetButtons(int32_t id, int32_t index);
		int32_t PS4Input_MoveGetAnalogButton(int32_t id, int32_t index);
		bool PS4Input_MoveIsConnected(int32_t id, int32_t index);
		int32_t PS4Input_MoveGetUsersMoveHandles(int32_t maxNumberControllers, IL2CPP::Array<int32_t>* primaryHandles, IL2CPP::Array<int32_t>* secondaryHandles);
		int32_t PS4Input_MoveGetUsersMoveHandles(int32_t maxNumberControllers, IL2CPP::Array<int32_t>* primaryHandles);
		int32_t PS4Input_MoveGetUsersMoveHandles(int32_t maxNumberControllers);
		intptr_t PS4Input_MoveGetControllerInputForTracking();
		int32_t PS4Input_MoveSetLightSphere(int32_t id, int32_t index, int32_t red, int32_t green, int32_t blue);
		int32_t PS4Input_MoveSetVibration(int32_t id, int32_t index, int32_t motor);
		void GetDeviceVIDPIDs(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>& vids, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>& pids);
		int32_t GetAndroidAPILevel();
		bool UnityUI_Graphic_GetRaycastTarget(mscorlib::System::Object* graphic);
		void UnityUI_Graphic_SetRaycastTarget(mscorlib::System::Object* graphic, bool value);
		bool get_UnityInput_IsTouchPressureSupported();
		float UnityInput_GetTouchPressure(UnityEngine_InputLegacyModule::UnityEngine::Touch& touch);
		float UnityInput_GetTouchMaximumPossiblePressure(UnityEngine_InputLegacyModule::UnityEngine::Touch& touch);
		Rewired_Core::Rewired::IControllerTemplate* CreateControllerTemplate(mscorlib::System::Guid typeGuid, mscorlib::System::Object* payload);
		IL2CPP::Array<mscorlib::System::Type*>* GetControllerTemplateTypes();
		IL2CPP::Array<mscorlib::System::Type*>* GetControllerTemplateInterfaceTypes();
	};
}


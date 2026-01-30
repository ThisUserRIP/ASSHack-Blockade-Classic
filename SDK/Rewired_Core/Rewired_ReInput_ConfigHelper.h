#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_CodeHelper.h"
#include "Rewired_ReInput.h"
namespace Rewired_Core::Rewired { struct ReInput; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Config_UpdateLoopSetting.h"
#include "Rewired_Platforms_WindowsStandalonePrimaryInputSource.h"
#include "Rewired_Platforms_OSXStandalonePrimaryInputSource.h"
#include "Rewired_Platforms_LinuxStandalonePrimaryInputSource.h"
#include "Rewired_Platforms_WindowsUWPPrimaryInputSource.h"
#include "Rewired_Platforms_XboxOnePrimaryInputSource.h"
#include "Rewired_Platforms_PS4PrimaryInputSource.h"
#include "Rewired_Platforms_WebGLPrimaryInputSource.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_DeadZone2DType.h"
#include "Rewired_AxisSensitivity2DType.h"
#include "Rewired_AxisSensitivityType.h"
#include "Rewired_Config_ThrottleCalibrationMode.h"
#include "Rewired_Config_LogLevelFlags.h"

namespace Rewired_Core::Rewired
{
	struct ReInput_ConfigHelper : Rewired_Core::Rewired::Utils::Classes::CodeHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float jOyiznfGUjHTUyeGCbJSJMdMOTU;
		float QqpkufbchQkPuLzVjPwXyJTknic;
		struct StaticFields
		{
			Rewired_Core::Rewired::ReInput_ConfigHelper* PxkTdIkXptwTeWPXwEumaEaSBxt;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::ReInput_ConfigHelper* get_Instance();
		void _ctor();
		bool get_useXInput();
		void set_useXInput(bool value);
		Rewired_Core::Rewired::Config::UpdateLoopSetting get_updateLoop();
		void set_updateLoop(Rewired_Core::Rewired::Config::UpdateLoopSetting value);
		Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource get_windowsStandalonePrimaryInputSource();
		void set_windowsStandalonePrimaryInputSource(Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource value);
		Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource get_osxStandalonePrimaryInputSource();
		void set_osxStandalonePrimaryInputSource(Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource value);
		Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource get_linuxStandalonePrimaryInputSource();
		void set_linuxStandalonePrimaryInputSource(Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource value);
		Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource get_windowsUWPPrimaryInputSource();
		void set_windowsUWPPrimaryInputSource(Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource value);
		bool get_windowsUWPSupportHIDDevices();
		void set_windowsUWPSupportHIDDevices(bool value);
		Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource get_xboxOnePrimaryInputSource();
		void set_xboxOnePrimaryInputSource(Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource value);
		Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource get_ps4PrimaryInputSource();
		void set_ps4PrimaryInputSource(Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource value);
		Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource get_webGLPrimaryInputSource();
		void set_webGLPrimaryInputSource(Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource value);
		bool get_alwaysUseUnityInput();
		void set_alwaysUseUnityInput(bool value);
		bool get_disableNativeInput();
		void set_disableNativeInput(bool value);
		bool get_nativeMouseSupport();
		void set_nativeMouseSupport(bool value);
		bool get_nativeKeyboardSupport();
		void set_nativeKeyboardSupport(bool value);
		bool get_enhancedDeviceSupport();
		void set_enhancedDeviceSupport(bool value);
		int32_t get_joystickRefreshRate();
		void set_joystickRefreshRate(int32_t value);
		bool get_ignoreInputWhenAppNotInFocus();
		void set_ignoreInputWhenAppNotInFocus(bool value);
		bool get_android_supportUnknownGamepads();
		void set_android_supportUnknownGamepads(bool value);
		Rewired_Core::Rewired::DeadZone2DType get_defaultJoystickAxis2DDeadZoneType();
		void set_defaultJoystickAxis2DDeadZoneType(Rewired_Core::Rewired::DeadZone2DType value);
		Rewired_Core::Rewired::AxisSensitivity2DType get_defaultJoystickAxis2DSensitivityType();
		void set_defaultJoystickAxis2DSensitivityType(Rewired_Core::Rewired::AxisSensitivity2DType value);
		Rewired_Core::Rewired::AxisSensitivityType get_defaultAxisSensitivityType();
		void set_defaultAxisSensitivityType(Rewired_Core::Rewired::AxisSensitivityType value);
		bool get_force4WayHats();
		void set_force4WayHats(bool value);
		float get_defaultAbsoluteAxisPollingDeadZone();
		void set_defaultAbsoluteAxisPollingDeadZone(float value);
		float get_defaultRelativeAxisPollingDeadZone();
		void set_defaultRelativeAxisPollingDeadZone(float value);
		bool get_activateActionButtonsOnNegativeValue();
		void set_activateActionButtonsOnNegativeValue(bool value);
		Rewired_Core::Rewired::Config::ThrottleCalibrationMode get_throttleCalibrationMode();
		void set_throttleCalibrationMode(Rewired_Core::Rewired::Config::ThrottleCalibrationMode value);
		bool get_deferControllerConnectedEventsOnStart();
		void set_deferControllerConnectedEventsOnStart(bool value);
		bool get_autoAssignJoysticks();
		void set_autoAssignJoysticks(bool value);
		int32_t get_maxJoysticksPerPlayer();
		void set_maxJoysticksPerPlayer(int32_t value);
		bool get_distributeJoysticksEvenly();
		void set_distributeJoysticksEvenly(bool value);
		bool get_assignJoysticksToPlayingPlayersOnly();
		void set_assignJoysticksToPlayingPlayersOnly(bool value);
		bool get_reassignJoystickToPreviousOwnerOnReconnect();
		void set_reassignJoystickToPreviousOwnerOnReconnect(bool value);
		Rewired_Core::Rewired::Config::LogLevelFlags get_logLevel();
		void set_logLevel(Rewired_Core::Rewired::Config::LogLevelFlags value);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerWithAxes.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Interfaces { struct IInputManagerJoystickPublic; };
#include "Rewired_JoystickType.h"
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct TimerAbs; };
namespace Rewired_Core::Rewired { struct Controller_Hat; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_HardwareControllerMapIdentifier.h"
namespace Rewired_Core::Rewired { struct HardwareControllerMapIdentifier; };
namespace Rewired_Core::Rewired { struct BridgedController; };
#include "Rewired_InputSource.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace Rewired_Core::Rewired { struct JoystickCalibrationMapSaveData; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired { struct UpdateControllerInfoEventArgs; };

namespace Rewired_Core::Rewired
{
	struct Joystick : Rewired_Core::Rewired::ControllerWithAxes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Interfaces::IInputManagerJoystickPublic* _sourceJoystick;
		IL2CPP::Array<Rewired_Core::Rewired::JoystickType>* _joystickTypes;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::JoystickType>* _joystickTypes_readOnly;
		bool _supportsVibration;
		bool _supportsLocalVibration;
		bool _supportsVoice;
		int32_t _localVibrationMotorCount;
		IL2CPP::Array<float>* _localVibrationMotorValues;
		IL2CPP::Array<Rewired_Core::Rewired::Utils::Classes::Utility::TimerAbs*>* _localVibrationStopTimers;
		int32_t _hatCount;
		IL2CPP::Array<Rewired_Core::Rewired::Controller_Hat*>* _hats;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::Controller_Hat>* hats_readOnly;
		struct StaticFields
		{
			int32_t LEFT_MOTOR_INDEX;
			int32_t RIGHT_MOTOR_INDEX;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::JoystickType>* get_joystickTypes();
		mscorlib::System::Nullable_1<mscorlib::System::Int64> get_systemId();
		int32_t get_unityId();
		mscorlib::System::Guid get_deviceInstanceGuid();
		bool get_supportsVibration();
		float get_vibrationLeftMotor();
		void set_vibrationLeftMotor(float value);
		float get_vibrationRightMotor();
		void set_vibrationRightMotor(float value);
		int32_t get_vibrationMotorCount();
		int32_t get_hatCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Hat>* get_Hats();
		int32_t get_inputManagerId();
		Rewired_Core::Rewired::HardwareControllerMapIdentifier get_hardwareJoystickMapIdentifier();
		void _ctor(Rewired_Core::Rewired::BridgedController* controller);
		void _ctor(int32_t controllerId, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareName, mscorlib::System::String* hardwareIdentifier, mscorlib::System::Guid hardwareTypeGuid, int32_t axisCount, int32_t buttonCount, IL2CPP::Array<bool>* isButtonPressureSensitive, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		bool IsType(Rewired_Core::Rewired::JoystickType joystickType);
		Rewired_Core::Rewired::JoystickCalibrationMapSaveData* GetCalibrationMapSaveData();
		void SetVibration(float leftMotorLevel, float rightMotorLevel);
		void SetVibration(float leftMotorLevel, float rightMotorLevel, float leftMotorDuration, float rightMotorDuration);
		void SetVibration(int32_t motorIndex, float motorLevel);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration);
		void SetVibration(int32_t motorIndex, float motorLevel, bool stopOtherMotors);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration, bool stopOtherMotors);
		float GetVibration(int32_t motorIndex);
		void StopVibration();
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		void UpdateControllerInfo(Rewired_Core::Rewired::UpdateControllerInfoEventArgs* args);
		void UpdateControllerInfo(Rewired_Core::Rewired::BridgedController* controller);
		void UpdateControllerInfo(Rewired_Core::Rewired::Interfaces::IInputManagerJoystickPublic* joystick);
		void Clear();
		void Disconnected();
		void CheckVibrationTimeout();
		void SetLocalVibration(int32_t motorIndex, float motorLevel, float motorDuration, bool stopOtherMotors, bool updateNow);
		void UpdateLocalControllerVibration();
		void StopAllVibration();
		static int32_t CompareById_Ascending(Rewired_Core::Rewired::Joystick* a, Rewired_Core::Rewired::Joystick* b);
	};
}


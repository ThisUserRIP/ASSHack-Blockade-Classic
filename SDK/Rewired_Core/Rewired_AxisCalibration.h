#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_AlternateAxisCalibrationType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Data::Mapping { struct AxisCalibrationInfo; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_AxisSensitivityType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_AxisCalibrationData.h"
namespace Rewired_Core::Rewired { struct AxisCalibrationData; };
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };

namespace Rewired_Core::Rewired
{
	struct AxisCalibration : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType _calibrationMode;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo>* _hardwareCalibrations;
		bool _enabled;
		float _deadZone;
		float _calibratedZero;
		float _calibratedMin;
		float _calibratedMax;
		bool _invert;
		Rewired_Core::Rewired::AxisSensitivityType _sensitivityType;
		float _sensitivity;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* _sensitivityCurve;
		bool _applyRangeCalibration;
		bool get_enabled();
		void set_enabled(bool value);
		float get_deadZone();
		void set_deadZone(float value);
		float get_calibratedZero();
		void set_calibratedZero(float value);
		float get_calibratedMin();
		void set_calibratedMin(float value);
		float get_calibratedMax();
		void set_calibratedMax(float value);
		bool get_invert();
		void set_invert(bool value);
		Rewired_Core::Rewired::AxisSensitivityType get_sensitivityType();
		void set_sensitivityType(Rewired_Core::Rewired::AxisSensitivityType value);
		float get_sensitivity();
		void set_sensitivity(float value);
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* get_sensitivityCurve();
		void set_sensitivityCurve(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value);
		bool get_applyRangeCalibration();
		void set_applyRangeCalibration(bool value);
		Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType get_calibrationMode();
		void set_calibrationMode(Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType value);
		void _ctor();
		void _ctor(bool enabled, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo>* hardwareCalibrations, float deadZone, float calibratedZero, float calibratedMin, float calibratedMax, bool invert, bool applyRangeCalibration, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve);
		void _ctor(Rewired_Core::Rewired::AxisCalibrationData hardwareData);
		void CopyFrom(Rewired_Core::Rewired::AxisCalibration* data, bool copyHardwareData);
		float GetCalibratedValue(float value);
		float GetCalibratedValue(float value, float customDeadzone, bool applySensitivity, bool applyInversion);
		float GetCalibratedValue(float value, Rewired_Core::Rewired::AxisRange axisRange);
		float GetCalibratedValue(float value, Rewired_Core::Rewired::AxisRange axisRange, float customDeadzone, bool applySensitivity, bool applyInversion);
		Rewired_Core::Rewired::AxisCalibrationData GetData();
		void SetData(Rewired_Core::Rewired::AxisCalibrationData data);
		void Reset();
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* ExportData();
		void Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject);
		void InitHardwareCalibrations(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo>* hardwareCalibrations, Rewired_Core::Rewired::AxisCalibrationData defaultData);
		void CreateDefaultHardwareCalibration(Rewired_Core::Rewired::AxisCalibrationData defaultData);
		Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo* GetHardwareDefault();
		static Rewired_Core::Rewired::AxisCalibration* CreateRelative();
	};
}


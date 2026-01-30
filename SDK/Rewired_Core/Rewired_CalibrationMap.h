#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct AxisCalibration; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_AxisCalibrationData.h"
namespace Rewired_Core::Rewired { struct AxisCalibrationData; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "Rewired_DeadZone2DType.h"
#include "Rewired_AxisSensitivity2DType.h"

namespace Rewired_Core::Rewired
{
	struct CalibrationMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Rewired_Core::Rewired::AxisCalibration*>* ihkxSfgDmybPfRXedbSqLVdkipy;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::AxisCalibration>* EyGicTywyXbpTbagYCQgfsIAeJiu;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::AxisCalibration>* get_Axes();
		int32_t get_axisCount();
		void _ctor();
		void _ctor(IL2CPP::Array<Rewired_Core::Rewired::AxisCalibrationData>* hardwareAxisCalibrationData);
		void _ctor(IL2CPP::Array<Rewired_Core::Rewired::AxisCalibration*>* axisCalibrations);
		void Reset();
		Rewired_Core::Rewired::AxisCalibration* GetAxis(int32_t index);
		float GetCalibratedValue(int32_t axisIndex, float value);
		bool SetAxisData(int32_t index, Rewired_Core::Rewired::AxisCalibrationData data);
		Rewired_Core::Rewired::AxisCalibrationData GetAxisData(int32_t index);
		void CopyFrom(Rewired_Core::Rewired::CalibrationMap* map, bool copyHardwareDeadzone);
		mscorlib::System::String* ToXmlString();
		mscorlib::System::String* ToJsonString();
		bool ImportXmlString(mscorlib::System::String* xmlString);
		bool ImportJsonString(mscorlib::System::String* jsonString);
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* BTjEytEDmfXDlKCGhgjizVfcbDhc();
		void oEKaCGHExUmCjCFSEnlxSTdOydKx(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetCalibrated2DValue(int32_t xAxisIndex, int32_t yAxisIndex, float valueRawX, float valueRawY, Rewired_Core::Rewired::DeadZone2DType deadZoneType, Rewired_Core::Rewired::AxisSensitivity2DType sensitivityType);
	};
}


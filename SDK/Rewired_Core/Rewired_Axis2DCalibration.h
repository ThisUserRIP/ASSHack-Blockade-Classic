#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_DeadZone2DType.h"
#include "Rewired_AxisSensitivity2DType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired { struct AxisCalibration; };

namespace Rewired_Core::Rewired
{
	struct Axis2DCalibration : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::DeadZone2DType _deadZoneType;
		Rewired_Core::Rewired::AxisSensitivity2DType _sensitivityType;
		Rewired_Core::Rewired::DeadZone2DType get_deadZoneType();
		void set_deadZoneType(Rewired_Core::Rewired::DeadZone2DType value);
		Rewired_Core::Rewired::AxisSensitivity2DType get_sensitivityType();
		void set_sensitivityType(Rewired_Core::Rewired::AxisSensitivity2DType value);
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetCalibrated2DValue(float valueRawX, float valueRawY, Rewired_Core::Rewired::AxisCalibration* xAxis, Rewired_Core::Rewired::AxisCalibration* yAxis);
		static UnityEngine_CoreModule::UnityEngine::Vector2 GetCalibrated2DValue(float valueRawX, float valueRawY, Rewired_Core::Rewired::AxisCalibration* xAxis, Rewired_Core::Rewired::AxisCalibration* yAxis, Rewired_Core::Rewired::DeadZone2DType deadZoneType, Rewired_Core::Rewired::AxisSensitivity2DType sensitivityType);
	};
}


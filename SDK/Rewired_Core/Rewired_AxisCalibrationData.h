#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_AxisSensitivityType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Data::Mapping { struct AxisCalibrationInfo; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct AxisCalibrationData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool enabled;
		float deadZone;
		float zero;
		float min;
		float max;
		bool invert;
		Rewired_Core::Rewired::AxisSensitivityType sensitivityType;
		float sensitivity;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve;
		bool applyRangeCalibration;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo>* calibrations;
		void _ctor(bool enabled, float deadZone, float zero, float min, float max, bool invert, bool applyRangeCalibration);
		void _ctor(bool enabled, float deadZone, float zero, float min, float max, bool invert, bool applyRangeCalibration, float sensitivity);
		void _ctor(bool enabled, float deadZone, float zero, float min, float max, bool invert, bool applyRangeCalibration, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve);
		static Rewired_Core::Rewired::AxisCalibrationData get_Default();
		static Rewired_Core::Rewired::AxisCalibrationData get_Raw();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_AxisSensitivityType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "Rewired_AxisCalibrationData.h"
namespace Rewired_Core::Rewired { struct AxisCalibrationData; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct AxisCalibrationInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _applyRangeCalibration;
		bool _invert;
		float _deadZone;
		float _zero;
		float _min;
		float _max;
		Rewired_Core::Rewired::AxisSensitivityType _sensitivityType;
		float _sensitivity;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* _sensitivityCurve;
		bool get_applyRangeCalibration();
		void set_applyRangeCalibration(bool value);
		bool get_invert();
		void set_invert(bool value);
		float get_deadZone();
		void set_deadZone(float value);
		float get_zero();
		void set_zero(float value);
		float get_min();
		void set_min(float value);
		float get_max();
		void set_max(float value);
		Rewired_Core::Rewired::AxisSensitivityType get_sensitivityType();
		void set_sensitivityType(Rewired_Core::Rewired::AxisSensitivityType value);
		float get_sensitivity();
		void set_sensitivity(float value);
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* get_sensitivityCurve();
		void set_sensitivityCurve(UnityEngine_CoreModule::UnityEngine::AnimationCurve* value);
		void _ctor();
		void _ctor(float deadZone, float zero, float min, float max, bool invert, bool applyRangeCalibration, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve);
		mscorlib::System::Object* DeepClone();
		static Rewired_Core::Rewired::AxisCalibrationData obIlJKxFVZjNQjcwpPrYSokffVy(Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo* A_0);
		static Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo* gAlCMWRcPzbRNoLhTkMlJckLcuw(Rewired_Core::Rewired::AxisCalibrationData A_0);
	};
}


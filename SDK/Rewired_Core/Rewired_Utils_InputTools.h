#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_AxisSensitivityType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired { struct Controller; };
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct Object; };
#include "Rewired_ControllerElementType.h"
#include "Rewired_ControllerTemplateElementType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_Data_Mapping_HatType.h"

namespace Rewired_Core::Rewired::Utils
{
	struct InputTools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static float TransformAxis2DComponentValue(float value, float zero, float min, float max);
		static float GetCalibratedAxisValueClamped(float value, float zero, float min, float max, float deadZone, bool invert, bool applySensitivity, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve);
		static float GetCalibratedAxisValue(float value, float deadZone, bool invert, bool applySensitivity, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve);
		static UnityEngine_CoreModule::UnityEngine::Vector2 ApplyRadialDeadZone(float xValue, float yValue, float deadzone);
		static float ApplySensitivity(float value, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve);
		static bool uInCKxfskGkAzkdRDwPUlXbVkHiM(UnityEngine_CoreModule::UnityEngine::AnimationCurve* A_0);
		static void ApplyRadialSensitivity(UnityEngine_CoreModule::UnityEngine::Vector2& value, Rewired_Core::Rewired::AxisSensitivityType sensitivityType, float sensitivity, UnityEngine_CoreModule::UnityEngine::AnimationCurve* sensitivityCurve);
		static mscorlib::System::String* FormatHardwareIdentifierString(mscorlib::System::String* str);
		static Rewired_Core::Rewired::AxisRange InvertAxisRange(Rewired_Core::Rewired::AxisRange axisRange);
		static void CompareLastActiveController(Rewired_Core::Rewired::Controller* controller, Rewired_Core::Rewired::Controller& lastController, double& lastTime);
		static bool IsMappableControllerElementType(mscorlib::System::Object* type);
		static bool IsMappableType(Rewired_Core::Rewired::ControllerElementType type);
		static bool IsMappableType(Rewired_Core::Rewired::ControllerTemplateElementType type);
		static bool HandleForced4WayHatsOnUnknownControllers(int32_t direction, Rewired_Core::Rewired::Data::Mapping::HatType& hatType);
		static float AxisToDigitalValue(float value);
		static float AxisToDigitalValue(float value, float threshold);
	};
}


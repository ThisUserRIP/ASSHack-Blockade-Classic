#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils
{
	struct MathTools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float xIbqKuRiPzpycsTUrtUXoAccjxd;
			double UTVBtSaBhJRsRMlWDzPwpWAktf;
			float hHtAireurvruGkeDbCInYZsZWItT;
			float PI;
			float Infinity;
			float NegativeInfinity;
			float Deg2Rad;
			float Rad2Deg;
			float Epsilon;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int8_t Abs(int8_t value);
		static int16_t Abs(int16_t value);
		static int32_t Abs(int32_t value);
		static int64_t Abs(int64_t value);
		static float Abs(float value);
		static double Abs(double value);
		static bool Approximately(float a, float b);
		static bool ApproximatelyZero(float a);
		static bool IsZero(float value);
		static bool IsZero(float value, float threshold);
		static bool IsZero(double value);
		static bool IsZero(double value, double threshold);
		static bool IsExactlyEqual(float a, float b);
		static bool IsExactlyEqual(double a, double b);
		static bool IsNear(float value, float targetValue);
		static bool IsNear(float value, float targetValue, float threshold);
		static bool IsNearZero(float value);
		static bool IsNearZero(float value, float threshold);
		static bool IsNearOrWholeNumber(float value);
		static bool IsNearOrWholeNumber(float value, float threshold);
		static bool IsNearOrWholeNumber(float value, int32_t& number);
		static bool IsNearOrWholeNumber(float value, int32_t& number, float threshold);
		static float RoundOffIfNearWholeNumber(float value);
		static float RoundOffIfNearWholeNumber(float value, float threshold);
		static bool IsEven(int32_t value);
		static float ValueInNewRange(float oldValue, float oldMin, float oldMax, float newMin, float newMax);
		static int32_t ValueInNewRange(int32_t oldValue, int32_t oldMin, int32_t oldMax, int32_t newMin, int32_t newMax);
		static int8_t Max(int8_t a, int8_t b);
		static uint8_t Max(uint8_t a, uint8_t b);
		static int16_t Max(int16_t a, int16_t b);
		static uint16_t Max(uint16_t a, uint16_t b);
		static int32_t Max(int32_t a, int32_t b);
		static uint32_t Max(uint32_t a, uint32_t b);
		static int64_t Max(int64_t a, int64_t b);
		static uint64_t Max(uint64_t a, uint64_t b);
		static float Max(float a, float b);
		static double Max(double a, double b);
		static int8_t Min(int8_t a, int8_t b);
		static uint8_t Min(uint8_t a, uint8_t b);
		static int16_t Min(int16_t a, int16_t b);
		static uint16_t Min(uint16_t a, uint16_t b);
		static int32_t Min(int32_t a, int32_t b);
		static uint32_t Min(uint32_t a, uint32_t b);
		static int64_t Min(int64_t a, int64_t b);
		static uint64_t Min(uint64_t a, uint64_t b);
		static float Min(float a, float b);
		static double Min(double a, double b);
		static int8_t MaxMagnitude(int8_t a, int8_t b);
		static uint8_t MaxMagnitude(uint8_t a, uint8_t b);
		static int16_t MaxMagnitude(int16_t a, int16_t b);
		static uint16_t MaxMagnitude(uint16_t a, uint16_t b);
		static int32_t MaxMagnitude(int32_t a, int32_t b);
		static uint32_t MaxMagnitude(uint32_t a, uint32_t b);
		static int64_t MaxMagnitude(int64_t a, int64_t b);
		static uint64_t MaxMagnitude(uint64_t a, uint64_t b);
		static float MaxMagnitude(float a, float b);
		static double MaxMagnitude(double a, double b);
		static int8_t MinMagnitude(int8_t a, int8_t b);
		static uint8_t MinMagnitude(uint8_t a, uint8_t b);
		static int16_t MinMagnitude(int16_t a, int16_t b);
		static uint16_t MinMagnitude(uint16_t a, uint16_t b);
		static int32_t MinMagnitude(int32_t a, int32_t b);
		static uint32_t MinMagnitude(uint32_t a, uint32_t b);
		static int64_t MinMagnitude(int64_t a, int64_t b);
		static uint64_t MinMagnitude(uint64_t a, uint64_t b);
		static float MinMagnitude(float a, float b);
		static double MinMagnitude(double a, double b);
		static bool IsMoreMagnitudeOrEqual(int8_t a, int8_t b);
		static bool IsMoreMagnitudeOrEqual(uint8_t a, uint8_t b);
		static bool IsMoreMagnitudeOrEqual(int16_t a, int16_t b);
		static bool IsMoreMagnitudeOrEqual(uint16_t a, uint16_t b);
		static bool IsMoreMagnitudeOrEqual(int32_t a, int32_t b);
		static bool IsMoreMagnitudeOrEqual(uint32_t a, uint32_t b);
		static bool IsMoreMagnitudeOrEqual(int64_t a, int64_t b);
		static bool IsMoreMagnitudeOrEqual(uint64_t a, uint64_t b);
		static bool IsMoreMagnitudeOrEqual(float a, float b);
		static bool IsMoreMagnitudeOrEqual(double a, double b);
		static bool IsLessMagnitudeOrEqual(int8_t a, int8_t b);
		static bool IsLessMagnitudeOrEqual(uint8_t a, uint8_t b);
		static bool IsLessMagnitudeOrEqual(int16_t a, int16_t b);
		static bool IsLessMagnitudeOrEqual(uint16_t a, uint16_t b);
		static bool IsLessMagnitudeOrEqual(int32_t a, int32_t b);
		static bool IsLessMagnitudeOrEqual(uint32_t a, uint32_t b);
		static bool IsLessMagnitudeOrEqual(int64_t a, int64_t b);
		static bool IsLessMagnitudeOrEqual(uint64_t a, uint64_t b);
		static bool IsLessMagnitudeOrEqual(float a, float b);
		static bool IsLessMagnitudeOrEqual(double a, double b);
		static uint8_t Clamp(uint8_t value, uint8_t min, uint8_t max);
		static int8_t Clamp(int8_t value, int8_t min, int8_t max);
		static int16_t Clamp(int16_t value, int16_t min, int16_t max);
		static uint16_t Clamp(uint16_t value, uint16_t min, uint16_t max);
		static int32_t Clamp(int32_t value, int32_t min, int32_t max);
		static uint32_t Clamp(uint32_t value, uint32_t min, uint32_t max);
		static int64_t Clamp(int64_t value, int64_t min, int64_t max);
		static uint64_t Clamp(uint64_t value, uint64_t min, uint64_t max);
		static float Clamp(float value, float min, float max);
		static double Clamp(double value, double min, double max);
		static float Clamp01(float value);
		static float ClampAngle360(float angle);
		static float ReverseAngleRotationDirection(float angle);
		static bool AngleIsNear(float angle, float targetAngle, float threshold);
		static bool AngleIsBetween(float angle, float min, float max);
		static bool kiZMakxeYtIvzayrhtnyCCOtJYN(int32_t A_0, int32_t A_1);
		static int32_t IntPow(int32_t x, uint32_t pow);
		static uint32_t RoundUpToPowerOf2(uint32_t value);
		static float BooleanToSign(bool b);
		static bool SignToBoolean(float sign);
		static float Sin(float value);
		static float Cos(float value);
		static float Tan(float value);
		static float Asin(float value);
		static float Acos(float value);
		static float Atan(float value);
		static float Atan2(float y, float x);
		static float Sqrt(float value);
		static float Pow(float value, float p);
		static float Exp(float power);
		static float Log(float value, float p);
		static float Log(float value);
		static float Log10(float value);
		static float Ceil(float value);
		static float Floor(float value);
		static float Round(float value);
		static int32_t CeilToInt(float value);
		static int32_t FloorToInt(float value);
		static int32_t RoundToInt(float value);
		static float Sign(float value);
		static int32_t Sign(int32_t value);
		static float Repeat(float t, float length);
		static float DeltaAngle(float current, float target);
		static UnityEngine_CoreModule::UnityEngine::Vector2 MaxMagnitude(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		static UnityEngine_CoreModule::UnityEngine::Vector3 MaxMagnitude(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
		static UnityEngine_CoreModule::UnityEngine::Vector2 MinMagnitude(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		static UnityEngine_CoreModule::UnityEngine::Vector3 MinMagnitude(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
		static UnityEngine_CoreModule::UnityEngine::Vector2 Clamp(UnityEngine_CoreModule::UnityEngine::Vector2 value, UnityEngine_CoreModule::UnityEngine::Vector2 min, UnityEngine_CoreModule::UnityEngine::Vector2 max);
		static UnityEngine_CoreModule::UnityEngine::Vector2 Clamp(UnityEngine_CoreModule::UnityEngine::Vector2 value, float min, float max);
		static UnityEngine_CoreModule::UnityEngine::Vector2 Clamp(UnityEngine_CoreModule::UnityEngine::Vector3 value, UnityEngine_CoreModule::UnityEngine::Vector3 min, UnityEngine_CoreModule::UnityEngine::Vector3 max);
		static UnityEngine_CoreModule::UnityEngine::Vector2 Clamp(UnityEngine_CoreModule::UnityEngine::Vector3 value, float min, float max);
		static float Cross(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		static float Multiply(UnityEngine_CoreModule::UnityEngine::Vector2 a, UnityEngine_CoreModule::UnityEngine::Vector2 b);
		static bool RectContains(UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pos, float rotation);
		static UnityEngine_CoreModule::UnityEngine::Vector2 RotateWorldPoint(UnityEngine_CoreModule::UnityEngine::Vector2 point, UnityEngine_CoreModule::UnityEngine::Vector2 center, float angle);
		static UnityEngine_CoreModule::UnityEngine::Vector2 RotateLocalPoint(UnityEngine_CoreModule::UnityEngine::Vector2 point, float angle);
		static bool LineIntersectsRect(UnityEngine_CoreModule::UnityEngine::Vector2 point1, UnityEngine_CoreModule::UnityEngine::Vector2 point2, UnityEngine_CoreModule::UnityEngine::Rect rect, float& sqrMagnitude);
		static bool LineSegementsIntersect(UnityEngine_CoreModule::UnityEngine::Vector2 line1p1, UnityEngine_CoreModule::UnityEngine::Vector2 line1p2, UnityEngine_CoreModule::UnityEngine::Vector2 line2p1, UnityEngine_CoreModule::UnityEngine::Vector2 line2p2, UnityEngine_CoreModule::UnityEngine::Vector2& intersection, bool collinearIntersects);
		static bool DReJecUmKWDGevDshDGIHQOGFNWU(UnityEngine_CoreModule::UnityEngine::Vector2 A_0, UnityEngine_CoreModule::UnityEngine::Vector2 A_1, UnityEngine_CoreModule::UnityEngine::Vector2 A_2, UnityEngine_CoreModule::UnityEngine::Vector2 A_3, UnityEngine_CoreModule::UnityEngine::Vector2& A_4);
		static bool RectContains(UnityEngine_CoreModule::UnityEngine::Rect container, UnityEngine_CoreModule::UnityEngine::Rect child);
		static bool GetOffsetToContainRect(UnityEngine_CoreModule::UnityEngine::Rect container, UnityEngine_CoreModule::UnityEngine::Rect child, UnityEngine_CoreModule::UnityEngine::Vector2& offset);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 TransformTo(UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to);
		static UnityEngine_CoreModule::UnityEngine::Rect TransformRect(UnityEngine_CoreModule::UnityEngine::Rect fromRect, UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to);
		static UnityEngine_CoreModule::UnityEngine::Vector2 SnapVectorToNearestAngle(UnityEngine_CoreModule::UnityEngine::Vector2 vector, float angle);
		void _ctor();
	};
}


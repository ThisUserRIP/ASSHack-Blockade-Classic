#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Mathf
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t ClosestPowerOfTwo(int32_t value);
		static bool IsPowerOfTwo(int32_t value);
		static int32_t NextPowerOfTwo(int32_t value);
		static float GammaToLinearSpace(float value);
		static float LinearToGammaSpace(float value);
		static uint16_t FloatToHalf(float val);
		static float PerlinNoise(float x, float y);
		static float Sin(float f);
		static float Cos(float f);
		static float Tan(float f);
		static float Asin(float f);
		static float Acos(float f);
		static float Atan(float f);
		static float Atan2(float y, float x);
		static float Sqrt(float f);
		static float Abs(float f);
		static int32_t Abs(int32_t value);
		static float Min(float a, float b);
		static float Min(IL2CPP::Array<float>* values);
		static int32_t Min(int32_t a, int32_t b);
		static float Max(float a, float b);
		static float Max(IL2CPP::Array<float>* values);
		static int32_t Max(int32_t a, int32_t b);
		static int32_t Max(IL2CPP::Array<int32_t>* values);
		static float Pow(float f, float p);
		static float Exp(float power);
		static float Log(float f, float p);
		static float Log(float f);
		static float Log10(float f);
		static float Ceil(float f);
		static float Floor(float f);
		static float Round(float f);
		static int32_t CeilToInt(float f);
		static int32_t FloorToInt(float f);
		static int32_t RoundToInt(float f);
		static float Sign(float f);
		static float Clamp(float value, float min, float max);
		static int32_t Clamp(int32_t value, int32_t min, int32_t max);
		static float Clamp01(float value);
		static float Lerp(float a, float b, float t);
		static float LerpAngle(float a, float b, float t);
		static float MoveTowards(float current, float target, float maxDelta);
		static float SmoothStep(float from, float to, float t);
		static bool Approximately(float a, float b);
		static float SmoothDamp(float current, float target, float& currentVelocity, float smoothTime);
		static float SmoothDamp(float current, float target, float& currentVelocity, float smoothTime, float maxSpeed, float deltaTime);
		static float Repeat(float t, float length);
		static float InverseLerp(float a, float b, float value);
		static float DeltaAngle(float current, float target);
		static void _cctor();
	};
}


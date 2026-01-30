#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "RootMotion_InterpolationMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct Interp : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static float Float(float t, Assembly_CSharp_firstpass::RootMotion::InterpolationMode mode);
		static UnityEngine_CoreModule::UnityEngine::Vector3 V3(UnityEngine_CoreModule::UnityEngine::Vector3 v1, UnityEngine_CoreModule::UnityEngine::Vector3 v2, float t, Assembly_CSharp_firstpass::RootMotion::InterpolationMode mode);
		static float LerpValue(float value, float target, float increaseSpeed, float decreaseSpeed);
		static float None(float t, float b, float c);
		static float InOutCubic(float t, float b, float c);
		static float InOutQuintic(float t, float b, float c);
		static float InQuintic(float t, float b, float c);
		static float InQuartic(float t, float b, float c);
		static float InCubic(float t, float b, float c);
		static float InQuadratic(float t, float b, float c);
		static float OutQuintic(float t, float b, float c);
		static float OutQuartic(float t, float b, float c);
		static float OutCubic(float t, float b, float c);
		static float OutInCubic(float t, float b, float c);
		static float OutInQuartic(float t, float b, float c);
		static float BackInCubic(float t, float b, float c);
		static float BackInQuartic(float t, float b, float c);
		static float OutBackCubic(float t, float b, float c);
		static float OutBackQuartic(float t, float b, float c);
		static float OutElasticSmall(float t, float b, float c);
		static float OutElasticBig(float t, float b, float c);
		static float InElasticSmall(float t, float b, float c);
		static float InElasticBig(float t, float b, float c);
		static float InSine(float t, float b, float c);
		static float OutSine(float t, float b, float c);
		static float InOutSine(float t, float b, float c);
		static float InElastic(float t, float b, float c);
		static float OutElastic(float t, float b, float c);
		static float InBack(float t, float b, float c);
		static float OutBack(float t, float b, float c);
		void _ctor();
	};
}


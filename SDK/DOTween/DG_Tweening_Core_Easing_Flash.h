#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace DOTween::DG::Tweening::Core::Easing
{
	struct Flash : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static float Ease(float time, float duration, float overshootOrAmplitude, float period);
		static float EaseIn(float time, float duration, float overshootOrAmplitude, float period);
		static float EaseOut(float time, float duration, float overshootOrAmplitude, float period);
		static float EaseInOut(float time, float duration, float overshootOrAmplitude, float period);
		static float WeightedEase(float overshootOrAmplitude, float period, int32_t stepIndex, float stepDuration, float dir, float res);
	};
}


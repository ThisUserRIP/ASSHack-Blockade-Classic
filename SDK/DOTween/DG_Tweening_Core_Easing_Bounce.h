#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace DOTween::DG::Tweening::Core::Easing
{
	struct Bounce : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static float EaseIn(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod);
		static float EaseOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod);
		static float EaseInOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod);
	};
}


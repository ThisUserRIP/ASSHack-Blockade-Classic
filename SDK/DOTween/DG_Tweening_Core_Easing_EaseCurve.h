#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace DOTween::DG::Tweening::Core::Easing
{
	struct EaseCurve : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* _animCurve;
		void _ctor(UnityEngine_CoreModule::UnityEngine::AnimationCurve* animCurve);
		float Evaluate(float time, float duration, float unusedOvershoot, float unusedPeriod);
	};
}


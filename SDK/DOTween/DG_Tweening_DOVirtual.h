#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace DOTween::DG::Tweening { struct Tweener; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { template <typename T> struct TweenCallback_1; };
#include "DG_Tweening_Ease.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
namespace DOTween::DG::Tweening { struct Tween; };
namespace DOTween::DG::Tweening { struct TweenCallback; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace DOTween::DG::Tweening
{
	struct DOVirtual : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static DOTween::DG::Tweening::Tweener* Float(float from, float to, float duration, DOTween::DG::Tweening::TweenCallback_1<mscorlib::System::Single>* onVirtualUpdate);
		static float EasedValue(float from, float to, float lifetimePercentage, DOTween::DG::Tweening::Ease easeType);
		static float EasedValue(float from, float to, float lifetimePercentage, DOTween::DG::Tweening::Ease easeType, float overshoot);
		static float EasedValue(float from, float to, float lifetimePercentage, DOTween::DG::Tweening::Ease easeType, float amplitude, float period);
		static float EasedValue(float from, float to, float lifetimePercentage, UnityEngine_CoreModule::UnityEngine::AnimationCurve* easeCurve);
		static DOTween::DG::Tweening::Tween* DelayedCall(float delay, DOTween::DG::Tweening::TweenCallback* callback, bool ignoreTimeScale);
	};
}


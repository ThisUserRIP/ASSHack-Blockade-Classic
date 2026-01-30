#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { struct Tween; };
#include "DG_Tweening_Ease.h"
namespace DOTween::DG::Tweening { struct EaseFunction; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace DOTween::DG::Tweening::Core::Easing
{
	struct EaseManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float _PiOver2;
			float _TwoPi;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static float Evaluate(DOTween::DG::Tweening::Tween* t, float time, float duration, float overshootOrAmplitude, float period);
		static float Evaluate(DOTween::DG::Tweening::Ease easeType, DOTween::DG::Tweening::EaseFunction* customEase, float time, float duration, float overshootOrAmplitude, float period);
		static DOTween::DG::Tweening::EaseFunction* ToEaseFunction(DOTween::DG::Tweening::Ease ease);
		static bool IsFlashEase(DOTween::DG::Tweening::Ease ease);
	};
}


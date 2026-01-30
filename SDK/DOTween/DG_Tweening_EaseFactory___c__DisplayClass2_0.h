#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_EaseFactory.h"
namespace DOTween::DG::Tweening { struct EaseFactory; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { struct EaseFunction; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening
{
	struct EaseFactory___c__DisplayClass2_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float motionDelay;
		DOTween::DG::Tweening::EaseFunction* customEase;
		void _ctor();
		float _StopMotion_b__0(float time, float duration, float overshootOrAmplitude, float period);
	};
}


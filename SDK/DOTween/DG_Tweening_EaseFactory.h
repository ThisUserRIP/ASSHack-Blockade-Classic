#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace DOTween::DG::Tweening { struct EaseFunction; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "DG_Tweening_Ease.h"
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening
{
	struct EaseFactory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static DOTween::DG::Tweening::EaseFunction* StopMotion(int32_t motionFps, mscorlib::System::Nullable_1<DOTween::DG::Tweening::Ease> ease);
		static DOTween::DG::Tweening::EaseFunction* StopMotion(int32_t motionFps, UnityEngine_CoreModule::UnityEngine::AnimationCurve* animCurve);
		static DOTween::DG::Tweening::EaseFunction* StopMotion(int32_t motionFps, DOTween::DG::Tweening::EaseFunction* customEase);
		void _ctor();
	};
}


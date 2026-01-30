#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_Animation_AnimationType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\DOTween\DG_Tweening_LoopType.h"
#include "Doozy_Engine_UI_Animation_EaseType.h"
#include "..\DOTween\DG_Tweening_Ease.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	struct Fade : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType AnimationType;
		bool Enabled;
		float From;
		float To;
		float By;
		bool UseCustomFromAndTo;
		int32_t NumberOfLoops;
		DOTween::DG::Tweening::LoopType LoopType;
		Assembly_CSharp::Doozy::Engine::UI::Animation::EaseType EaseType;
		DOTween::DG::Tweening::Ease Ease;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* AnimationCurve;
		float StartDelay;
		float Duration;
		float get_TotalDuration();
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType);
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, bool enabled, float from, float to, float by, bool useCustomFromAndTo, int32_t numberOfLoops, DOTween::DG::Tweening::LoopType loopType, Assembly_CSharp::Doozy::Engine::UI::Animation::EaseType easeType, DOTween::DG::Tweening::Ease ease, UnityEngine_CoreModule::UnityEngine::AnimationCurve* animationCurve, float startDelay, float duration);
		void Reset(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType);
		Assembly_CSharp::Doozy::Engine::UI::Animation::Fade* Copy();
	};
}


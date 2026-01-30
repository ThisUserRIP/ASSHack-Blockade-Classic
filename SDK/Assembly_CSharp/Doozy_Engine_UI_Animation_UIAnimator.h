#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Doozy_Engine_UI_Animation_Direction.h"
#include "..\DOTween\DG_Tweening_RotateMode.h"
#include "..\DOTween\DG_Tweening_LoopType.h"
#include "Doozy_Engine_UI_Animation_EaseType.h"
#include "..\DOTween\DG_Tweening_Ease.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace DOTween::DG::Tweening { struct Tween; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_UI_Animation_AnimationType.h"
#include "Doozy_Engine_UI_Animation_AnimationAction.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct Move; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct Rotate; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct Scale; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct Fade; };
namespace Assembly_CSharp::Doozy::Engine::Settings { struct DoozySettings; };

namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	struct UIAnimator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Vector3 DEFAULT_START_POSITION;
			UnityEngine_CoreModule::UnityEngine::Vector3 DEFAULT_START_ROTATION;
			UnityEngine_CoreModule::UnityEngine::Vector3 DEFAULT_START_SCALE;
			float DEFAULT_START_ALPHA;
			bool DefaultAnimationEnabledState;
			Assembly_CSharp::Doozy::Engine::UI::Animation::Direction DefaultDirection;
			DOTween::DG::Tweening::RotateMode DefaultRotateMode;
			DOTween::DG::Tweening::LoopType DefaultLoopType;
			Assembly_CSharp::Doozy::Engine::UI::Animation::EaseType DefaultEaseType;
			DOTween::DG::Tweening::Ease DefaultEase;
			float DefaultDuration;
			float DefaultStartDelay;
			int32_t DefaultNumberOfLoops;
			float DefaultDurationOnComplete;
			float DefaultDurationInitLoop;
			float DefaultDurationResetTarget;
			int32_t DefaultVibrato;
			float DefaultElasticity;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static DOTween::DG::Tweening::Tween* MoveTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 MoveLoopPositionA(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 MoveLoopPositionB(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static DOTween::DG::Tweening::Tween* MoveLoopTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static DOTween::DG::Tweening::Tween* MovePunchTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation);
		static DOTween::DG::Tweening::Tween* MoveStateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static DOTween::DG::Tweening::Tween* RotateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 RotateLoopRotationA(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 RotateLoopRotationB(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static DOTween::DG::Tweening::Tween* RotateLoopTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static DOTween::DG::Tweening::Tween* RotatePunchTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation);
		static DOTween::DG::Tweening::Tween* RotateStateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static DOTween::DG::Tweening::Tween* ScaleTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue);
		static DOTween::DG::Tweening::Tween* ScaleLoopTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation);
		static DOTween::DG::Tweening::Tween* ScalePunchTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation);
		static DOTween::DG::Tweening::Tween* ScaleStateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static DOTween::DG::Tweening::Tween* FadeTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue, float endValue);
		static DOTween::DG::Tweening::Tween* FadeLoopTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation);
		static DOTween::DG::Tweening::Tween* FadeStateTween(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue);
		static void Move(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, bool instantAction, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void Rotate(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, bool instantAction, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void Scale(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, bool instantAction, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void Fade(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue, float endValue, bool instantAction, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void MoveLoop(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void RotateLoop(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void ScaleLoop(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void FadeLoop(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void MovePunch(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void RotatePunch(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void ScalePunch(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void MoveState(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void RotateState(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void ScaleState(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static void FadeState(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetAnimationMoveFrom(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetAnimationMoveTo(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetAnimationRotateFrom(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetAnimationRotateTo(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetAnimationScaleFrom(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetAnimationScaleTo(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static float GetAnimationFadeFrom(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue);
		static float GetAnimationFadeTo(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, float startValue);
		static Assembly_CSharp::Doozy::Engine::UI::Animation::Direction ReverseDirection(Assembly_CSharp::Doozy::Engine::UI::Animation::Direction direction);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetToPositionByDirection(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* animation, UnityEngine_CoreModule::UnityEngine::Vector3 startValue);
		static mscorlib::System::String* GetTweenId(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationAction animationAction);
		static void ResetCanvasGroup(UnityEngine_CoreModule::UnityEngine::RectTransform* target, bool interactable, bool blocksRaycasts);
		static void StopAnimations(UnityEngine_CoreModule::UnityEngine::RectTransform* target, Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, bool complete);
		static void SetEase(DOTween::DG::Tweening::Tween* tween, Assembly_CSharp::Doozy::Engine::UI::Animation::Move* move);
		static void SetEase(DOTween::DG::Tweening::Tween* tween, Assembly_CSharp::Doozy::Engine::UI::Animation::Rotate* rotate);
		static void SetEase(DOTween::DG::Tweening::Tween* tween, Assembly_CSharp::Doozy::Engine::UI::Animation::Scale* scale);
		static void SetEase(DOTween::DG::Tweening::Tween* tween, Assembly_CSharp::Doozy::Engine::UI::Animation::Fade* fade);
		static Assembly_CSharp::Doozy::Engine::Settings::DoozySettings* get_Settings();
		static void _cctor();
	};
}


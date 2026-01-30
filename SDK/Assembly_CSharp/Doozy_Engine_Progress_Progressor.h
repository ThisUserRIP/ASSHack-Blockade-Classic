#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\DOTween\DG_Tweening_Ease.h"
namespace Assembly_CSharp::Doozy::Engine::Progress { struct ProgressTarget; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "Doozy_Engine_Progress_ResetValue.h"
namespace Assembly_CSharp::Doozy::Engine::Progress { struct ProgressEvent; };
namespace DOTween::DG::Tweening { struct Sequence; };
namespace DOTween::DG::Tweening { struct Tweener; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_Progress_TargetProgress.h"

namespace Assembly_CSharp::Doozy::Engine::Progress
{
	struct Progressor : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool DebugMode;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Progress::ProgressTarget>* ProgressTargets;
		bool AnimateValue;
		float AnimationDuration;
		DOTween::DG::Tweening::Ease AnimationEase;
		bool AnimationIgnoresUnityTimescale;
		Assembly_CSharp::Doozy::Engine::Progress::ResetValue OnEnableResetValue;
		Assembly_CSharp::Doozy::Engine::Progress::ResetValue OnDisableResetValue;
		float CustomResetValue;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnValueChanged;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnProgressChanged;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnInverseProgressChanged;
		float m_minValue;
		float m_maxValue;
		bool m_wholeNumbers;
		float m_currentValue;
		float m_previousValue;
		DOTween::DG::Tweening::Sequence* m_animationSequence;
		float m_value;
		float m_progress;
		float m_inverseProgress;
		bool m_updatePreviousValue;
		DOTween::DG::Tweening::Tweener* m_tween;
		bool m_tweenInitialized;
		struct StaticFields
		{
			float TOLERANCE;
			bool DEFAULT_ANIMATE_VALUE;
			float DEFAULT_DURATION;
			DOTween::DG::Tweening::Ease DEFAULT_EASE;
			bool DEFAULT_IGNORE_UNITY_TIMESCALE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		float get_Progress();
		float get_InverseProgress();
		float get_Value();
		void set_Value(float value);
		float get_MinValue();
		void set_MinValue(float value);
		float get_MaxValue();
		void set_MaxValue(float value);
		bool get_WholeNumbers();
		bool get_DebugComponent();
		mscorlib::System::String* get_GetAnimationId();
		void OnEnable();
		void OnDisable();
		void Update();
		void OnValueUpdated();
		void UpdateProgressTargets();
		void SetValue(float value);
		void InstantSetValue(float value);
		void SetValue(float value, bool instantUpdate);
		void SetProgress(float progressValue);
		void InstantSetProgress(float progressValue);
		void SetProgress(float progressValue, bool instantUpdate);
		float GetProgress(Assembly_CSharp::Doozy::Engine::Progress::TargetProgress direction);
		void UpdateProgress();
		void SetMin(float value);
		void SetMax(float value);
		void EnableWholeNumbers();
		void DisableWholeNumbers();
		void ResetValueTo(Assembly_CSharp::Doozy::Engine::Progress::ResetValue resetValue);
		void ResetValueTo(Assembly_CSharp::Doozy::Engine::Progress::ResetValue resetValue, bool instantUpdate);
		float ClampValueBetweenMinAndMax(float value, bool roundValue);
		DOTween::DG::Tweening::Tweener* GetAnimationTween(float targetValue, float duration, DOTween::DG::Tweening::Ease ease, bool ignoreTimescale);
		void KillAnimation(bool complete);
		void KillTweener(bool complete);
		static float RoundValue(float value);
		static Assembly_CSharp::Doozy::Engine::Progress::Progressor* AddToScene(bool selectGameObjectAfterCreation);
		void _ctor();
		float _GetAnimationTween_b__68_0();
		void _GetAnimationTween_b__68_1(float x);
	};
}


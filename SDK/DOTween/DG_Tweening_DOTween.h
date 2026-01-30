#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "DG_Tweening_Core_Enums_NestedTweenFailureBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "DG_Tweening_Core_Enums_RewindCallbackMode.h"
#include "DG_Tweening_LogBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_LogType.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
#include "DG_Tweening_UpdateType.h"
#include "DG_Tweening_AutoPlay.h"
#include "DG_Tweening_LoopType.h"
#include "DG_Tweening_Ease.h"
namespace DOTween::DG::Tweening::Core { struct DOTweenComponent; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "DG_Tweening_Core_SafeModeReport.h"
namespace DOTween::DG::Tweening::Core { struct SafeModeReport; };
namespace DOTween::DG::Tweening { struct TweenCallback; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace DOTween::DG::Tweening { struct IDOTweenInit; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace DOTween::DG::Tweening::Core { struct DOTweenSettings; };
#include "DG_Tweening_Plugins_Options_FloatOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct FloatOptions; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOGetter_1; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOSetter_1; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "DG_Tweening_Plugins_Options_NoOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct NoOptions; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "DG_Tweening_Plugins_Options_UintOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct UintOptions; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "DG_Tweening_Plugins_Options_StringOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct StringOptions; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "DG_Tweening_Plugins_Options_VectorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct VectorOptions; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "DG_Tweening_Plugins_Options_QuaternionOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct QuaternionOptions; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "DG_Tweening_Plugins_Options_ColorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct ColorOptions; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "DG_Tweening_Plugins_Options_RectOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct RectOptions; };
namespace DOTween::DG::Tweening { struct Tweener; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectOffset; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace DOTween::DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename TPlugOptions> struct ABSTweenPlugin_3; };
#include "DG_Tweening_AxisConstraint.h"
#include "DG_Tweening_Plugins_Options_Vector3ArrayOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct Vector3ArrayOptions; };
#include "DG_Tweening_Color2.h"
namespace DOTween::DG::Tweening { struct Color2; };
namespace DOTween::DG::Tweening { struct Sequence; };
namespace DOTween::DG::Tweening { struct Tween; };

namespace DOTween::DG::Tweening
{
	struct DOTween : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* Version;
			bool useSafeMode;
			DOTween::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour nestedTweenFailureBehaviour;
			bool showUnityEditorReport;
			float timeScale;
			bool useSmoothDeltaTime;
			float maxSmoothUnscaledTime;
			DOTween::DG::Tweening::Core::Enums::RewindCallbackMode rewindCallbackMode;
			DOTween::DG::Tweening::LogBehaviour _logBehaviour;
			mscorlib::System::Func_3<UnityEngine_CoreModule::UnityEngine::LogType, mscorlib::System::Object, mscorlib::System::Boolean>* onWillLog;
			bool drawGizmos;
			bool debugMode;
			bool _fooDebugStoreTargetId;
			DOTween::DG::Tweening::UpdateType defaultUpdateType;
			bool defaultTimeScaleIndependent;
			DOTween::DG::Tweening::AutoPlay defaultAutoPlay;
			bool defaultAutoKill;
			DOTween::DG::Tweening::LoopType defaultLoopType;
			bool defaultRecyclable;
			DOTween::DG::Tweening::Ease defaultEaseType;
			float defaultEaseOvershootOrAmplitude;
			float defaultEasePeriod;
			DOTween::DG::Tweening::Core::DOTweenComponent* instance;
			int32_t maxActiveTweenersReached;
			int32_t maxActiveSequencesReached;
			DOTween::DG::Tweening::Core::SafeModeReport safeModeReport;
			mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::TweenCallback>* GizmosDelegates;
			bool initialized;
			bool isQuitting;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static DOTween::DG::Tweening::LogBehaviour get_logBehaviour();
		static void set_logBehaviour(DOTween::DG::Tweening::LogBehaviour value);
		static bool get_debugStoreTargetId();
		static void set_debugStoreTargetId(bool value);
		static DOTween::DG::Tweening::IDOTweenInit* Init(mscorlib::System::Nullable_1<mscorlib::System::Boolean> recycleAllByDefault, mscorlib::System::Nullable_1<mscorlib::System::Boolean> useSafeMode, mscorlib::System::Nullable_1<DOTween::DG::Tweening::LogBehaviour> logBehaviour);
		static void AutoInit();
		static DOTween::DG::Tweening::IDOTweenInit* Init(DOTween::DG::Tweening::Core::DOTweenSettings* settings, mscorlib::System::Nullable_1<mscorlib::System::Boolean> recycleAllByDefault, mscorlib::System::Nullable_1<mscorlib::System::Boolean> useSafeMode, mscorlib::System::Nullable_1<DOTween::DG::Tweening::LogBehaviour> logBehaviour);
		static void SetTweensCapacity(int32_t tweenersCapacity, int32_t sequencesCapacity);
		static void Clear(bool destroy);
		static void ClearCachedTweens();
		static int32_t Validate();
		static void ManualUpdate(float deltaTime, float unscaledDeltaTime);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Single>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Single>* setter, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Double>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Double>* setter, double endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Int32, mscorlib::System::Int32, DOTween::DG::Tweening::Plugins::Options::NoOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Int32>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Int32>* setter, int32_t endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::UInt32>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::UInt32>* setter, uint32_t endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Int64, mscorlib::System::Int64, DOTween::DG::Tweening::Plugins::Options::NoOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Int64>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Int64>* setter, int64_t endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt64, mscorlib::System::UInt64, DOTween::DG::Tweening::Plugins::Options::NoOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::UInt64>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::UInt64>* setter, uint64_t endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::String>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::String>* setter, mscorlib::System::String* endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector2>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector2>* setter, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector4>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector4>* setter, UnityEngine_CoreModule::UnityEngine::Vector4 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Quaternion>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Quaternion>* setter, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Color>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Color>* setter, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Rect>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Rect>* setter, UnityEngine_CoreModule::UnityEngine::Rect endValue, float duration);
		static DOTween::DG::Tweening::Tweener* To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::RectOffset>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::RectOffset>* setter, UnityEngine_CoreModule::UnityEngine::RectOffset* endValue, float duration);
		template <typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* To(DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>* plugin, DOTween::DG::Tweening::Core::DOGetter_1<T1>* getter, DOTween::DG::Tweening::Core::DOSetter_1<T1>* setter, T2* endValue, float duration)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>", "DG.Tweening.Core.DOGetter`1<T1>", "DG.Tweening.Core.DOSetter`1<T1>", GetGenericTypeName<T2>(), "System.Single" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)plugin;
			params[1] = (intptr_t)getter;
			params[2] = (intptr_t)setter;
			params[3] = (intptr_t)endValue;
			params[4] = (intptr_t)&duration;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* ToAxis(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float endValue, float duration, DOTween::DG::Tweening::AxisConstraint axisConstraint);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* ToAlpha(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Color>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Color>* setter, float endValue, float duration);
		static DOTween::DG::Tweening::Tweener* To(DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Single>* setter, float startValue, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Punch(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float duration, int32_t vibrato, float elasticity);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Shake(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float duration, float strength, int32_t vibrato, float randomness, bool ignoreZAxis, bool fadeOut);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Shake(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* Shake(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool ignoreZAxis, bool vectorBased, bool fadeOut);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* ToArray(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* endValues, IL2CPP::Array<float>* durations);
		static DOTween::DG::Tweening::Core::TweenerCore_3<DOTween::DG::Tweening::Color2, DOTween::DG::Tweening::Color2, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* To(DOTween::DG::Tweening::Core::DOGetter_1<DOTween::DG::Tweening::Color2>* getter, DOTween::DG::Tweening::Core::DOSetter_1<DOTween::DG::Tweening::Color2>* setter, DOTween::DG::Tweening::Color2 endValue, float duration);
		static DOTween::DG::Tweening::Sequence* Sequence();
		static int32_t CompleteAll(bool withCallbacks);
		static int32_t Complete(mscorlib::System::Object* targetOrId, bool withCallbacks);
		static int32_t CompleteAndReturnKilledTot();
		static int32_t CompleteAndReturnKilledTot(mscorlib::System::Object* targetOrId);
		static int32_t CompleteAndReturnKilledTotExceptFor(IL2CPP::Array<mscorlib::System::Object*>* excludeTargetsOrIds);
		static int32_t FlipAll();
		static int32_t Flip(mscorlib::System::Object* targetOrId);
		static int32_t GotoAll(float to, bool andPlay);
		static int32_t Goto(mscorlib::System::Object* targetOrId, float to, bool andPlay);
		static int32_t KillAll(bool complete);
		static int32_t KillAll(bool complete, IL2CPP::Array<mscorlib::System::Object*>* idsOrTargetsToExclude);
		static int32_t Kill(mscorlib::System::Object* targetOrId, bool complete);
		static int32_t PauseAll();
		static int32_t Pause(mscorlib::System::Object* targetOrId);
		static int32_t PlayAll();
		static int32_t Play(mscorlib::System::Object* targetOrId);
		static int32_t Play(mscorlib::System::Object* target, mscorlib::System::Object* id);
		static int32_t PlayBackwardsAll();
		static int32_t PlayBackwards(mscorlib::System::Object* targetOrId);
		static int32_t PlayBackwards(mscorlib::System::Object* target, mscorlib::System::Object* id);
		static int32_t PlayForwardAll();
		static int32_t PlayForward(mscorlib::System::Object* targetOrId);
		static int32_t PlayForward(mscorlib::System::Object* target, mscorlib::System::Object* id);
		static int32_t RestartAll(bool includeDelay);
		static int32_t Restart(mscorlib::System::Object* targetOrId, bool includeDelay, float changeDelayTo);
		static int32_t Restart(mscorlib::System::Object* target, mscorlib::System::Object* id, bool includeDelay, float changeDelayTo);
		static int32_t RewindAll(bool includeDelay);
		static int32_t Rewind(mscorlib::System::Object* targetOrId, bool includeDelay);
		static int32_t SmoothRewindAll();
		static int32_t SmoothRewind(mscorlib::System::Object* targetOrId);
		static int32_t TogglePauseAll();
		static int32_t TogglePause(mscorlib::System::Object* targetOrId);
		static bool IsTweening(mscorlib::System::Object* targetOrId, bool alsoCheckIfIsPlaying);
		static int32_t TotalPlayingTweens();
		static mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* PlayingTweens(mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList);
		static mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* PausedTweens(mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList);
		static mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* TweensById(mscorlib::System::Object* id, bool playingOnly, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList);
		static mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* TweensByTarget(mscorlib::System::Object* target, bool playingOnly, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList);
		static void InitCheck();
		template <typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* ApplyTo(DOTween::DG::Tweening::Core::DOGetter_1<T1>* getter, DOTween::DG::Tweening::Core::DOSetter_1<T1>* setter, T2* endValue, float duration, DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>* plugin)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyTo", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<T1>", "DG.Tweening.Core.DOSetter`1<T1>", GetGenericTypeName<T2>(), "System.Single", "DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)getter;
			params[1] = (intptr_t)setter;
			params[2] = (intptr_t)endValue;
			params[3] = (intptr_t)&duration;
			params[4] = (intptr_t)plugin;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		void _ctor();
		static void _cctor();
	};
}


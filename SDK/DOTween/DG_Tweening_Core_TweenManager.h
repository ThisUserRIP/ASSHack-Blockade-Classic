#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace DOTween::DG::Tweening { struct Tween; };
namespace System::System::Collections::Generic { template <typename T> struct Stack_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace DOTween::DG::Tweening::Core { struct TweenLink; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace DOTween::DG::Tweening { struct Sequence; };
#include "DG_Tweening_UpdateType.h"
#include "DG_Tweening_Core_Enums_OperationType.h"
#include "DG_Tweening_Core_Enums_FilterType.h"
namespace mscorlib::System { struct Object; };
#include "DG_Tweening_Core_Enums_UpdateMode.h"
#include "DG_Tweening_Core_TweenManager_CapacityIncreaseMode.h"

namespace DOTween::DG::Tweening::Core
{
	struct TweenManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t _DefaultMaxTweeners;
			int32_t _DefaultMaxSequences;
			mscorlib::System::String* _MaxTweensReached;
			float _EpsilonVsTimeCheck;
			bool isUnityEditor;
			bool isDebugBuild;
			int32_t maxActive;
			int32_t maxTweeners;
			int32_t maxSequences;
			bool hasActiveTweens;
			bool hasActiveDefaultTweens;
			bool hasActiveLateTweens;
			bool hasActiveFixedTweens;
			bool hasActiveManualTweens;
			int32_t totActiveTweens;
			int32_t totActiveDefaultTweens;
			int32_t totActiveLateTweens;
			int32_t totActiveFixedTweens;
			int32_t totActiveManualTweens;
			int32_t totActiveTweeners;
			int32_t totActiveSequences;
			int32_t totPooledTweeners;
			int32_t totPooledSequences;
			int32_t totTweeners;
			int32_t totSequences;
			bool isUpdateLoop;
			IL2CPP::Array<DOTween::DG::Tweening::Tween*>* _activeTweens;
			IL2CPP::Array<DOTween::DG::Tweening::Tween*>* _pooledTweeners;
			System::System::Collections::Generic::Stack_1<DOTween::DG::Tweening::Tween>* _PooledSequences;
			mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* _KillList;
			mscorlib::System::Collections::Generic::Dictionary_2<DOTween::DG::Tweening::Tween, DOTween::DG::Tweening::Core::TweenLink>* _TweenLinks;
			int32_t _totTweenLinks;
			int32_t _maxActiveLookupId;
			bool _requiresActiveReorganization;
			int32_t _reorganizeFromId;
			int32_t _minPooledTweenerId;
			int32_t _maxPooledTweenerId;
			bool _despawnAllCalledFromUpdateLoopCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		template <typename T1, typename T2, typename TPlugOptions> static DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>* GetTweener()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTweener");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = TPlugOptions::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (DOTween::DG::Tweening::Core::TweenerCore_3<T1, T2, TPlugOptions>*)returnValue;
		}
		static DOTween::DG::Tweening::Sequence* GetSequence();
		static void SetUpdateType(DOTween::DG::Tweening::Tween* t, DOTween::DG::Tweening::UpdateType updateType, bool isIndependentUpdate);
		static void AddActiveTweenToSequence(DOTween::DG::Tweening::Tween* t);
		static int32_t DespawnAll();
		static void Despawn(DOTween::DG::Tweening::Tween* t, bool modifyActiveLists);
		static void PurgeAll();
		static void PurgePools();
		static void AddTweenLink(DOTween::DG::Tweening::Tween* t, DOTween::DG::Tweening::Core::TweenLink* tweenLink);
		static void RemoveTweenLink(DOTween::DG::Tweening::Tween* t);
		static void ResetCapacities();
		static void SetCapacities(int32_t tweenersCapacity, int32_t sequencesCapacity);
		static int32_t Validate();
		static void Update(DOTween::DG::Tweening::UpdateType updateType, float deltaTime, float independentTime);
		static int32_t FilteredOperation(DOTween::DG::Tweening::Core::Enums::OperationType operationType, DOTween::DG::Tweening::Core::Enums::FilterType filterType, mscorlib::System::Object* id, bool optionalBool, float optionalFloat, mscorlib::System::Object* optionalObj, IL2CPP::Array<mscorlib::System::Object*>* optionalArray);
		static bool Complete(DOTween::DG::Tweening::Tween* t, bool modifyActiveLists, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode);
		static bool Flip(DOTween::DG::Tweening::Tween* t);
		static void ForceInit(DOTween::DG::Tweening::Tween* t, bool isSequenced);
		static bool Goto(DOTween::DG::Tweening::Tween* t, float to, bool andPlay, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode);
		static bool Pause(DOTween::DG::Tweening::Tween* t);
		static bool Play(DOTween::DG::Tweening::Tween* t);
		static bool PlayBackwards(DOTween::DG::Tweening::Tween* t);
		static bool PlayForward(DOTween::DG::Tweening::Tween* t);
		static bool Restart(DOTween::DG::Tweening::Tween* t, bool includeDelay, float changeDelayTo);
		static bool Rewind(DOTween::DG::Tweening::Tween* t, bool includeDelay);
		static bool SmoothRewind(DOTween::DG::Tweening::Tween* t);
		static bool TogglePause(DOTween::DG::Tweening::Tween* t);
		static int32_t TotalPooledTweens();
		static int32_t TotalPlayingTweens();
		static mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* GetActiveTweens(bool playing, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList);
		static mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* GetTweensById(mscorlib::System::Object* id, bool playingOnly, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList);
		static mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* GetTweensByTarget(mscorlib::System::Object* target, bool playingOnly, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList);
		static void MarkForKilling(DOTween::DG::Tweening::Tween* t);
		static void EvaluateTweenLink(DOTween::DG::Tweening::Tween* t);
		static void AddActiveTween(DOTween::DG::Tweening::Tween* t);
		static void ReorganizeActiveTweens();
		static void DespawnActiveTweens(mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* tweens);
		static void RemoveActiveTween(DOTween::DG::Tweening::Tween* t);
		static void ClearTweenArray(IL2CPP::Array<DOTween::DG::Tweening::Tween*>* tweens);
		static void IncreaseCapacities(DOTween::DG::Tweening::Core::TweenManager_CapacityIncreaseMode increaseMode);
		static void ManageOnRewindCallbackWhenAlreadyRewinded(DOTween::DG::Tweening::Tween* t, bool isPlayBackwardsOrSmoothRewind);
	};
}


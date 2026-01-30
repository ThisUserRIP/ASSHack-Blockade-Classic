#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DG_Tweening_Core_ABSSequentiable.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "DG_Tweening_UpdateType.h"
namespace DOTween::DG::Tweening { struct TweenCallback; };
namespace DOTween::DG::Tweening { template <typename T> struct TweenCallback_1; };
#include "DG_Tweening_LoopType.h"
#include "DG_Tweening_Ease.h"
namespace DOTween::DG::Tweening { struct EaseFunction; };
namespace DOTween::DG::Tweening { struct Sequence; };
#include "DG_Tweening_Core_Enums_SpecialStartupMode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "DG_Tweening_Core_Enums_UpdateMode.h"
#include "DG_Tweening_Core_Enums_UpdateNotice.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace DOTween::DG::Tweening
{
	struct Tween : DOTween::DG::Tweening::Core::ABSSequentiable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float timeScale;
		bool isBackwards;
		mscorlib::System::Object* id;
		mscorlib::System::String* stringId;
		int32_t intId;
		mscorlib::System::Object* target;
		DOTween::DG::Tweening::UpdateType updateType;
		bool isIndependentUpdate;
		DOTween::DG::Tweening::TweenCallback* onPlay;
		DOTween::DG::Tweening::TweenCallback* onPause;
		DOTween::DG::Tweening::TweenCallback* onRewind;
		DOTween::DG::Tweening::TweenCallback* onUpdate;
		DOTween::DG::Tweening::TweenCallback* onStepComplete;
		DOTween::DG::Tweening::TweenCallback* onComplete;
		DOTween::DG::Tweening::TweenCallback* onKill;
		DOTween::DG::Tweening::TweenCallback_1<mscorlib::System::Int32>* onWaypointChange;
		bool isFrom;
		bool isBlendable;
		bool isRecyclable;
		bool isSpeedBased;
		bool autoKill;
		float duration;
		int32_t loops;
		DOTween::DG::Tweening::LoopType loopType;
		float delay;
		bool _isRelative_k__BackingField;
		DOTween::DG::Tweening::Ease easeType;
		DOTween::DG::Tweening::EaseFunction* customEase;
		float easeOvershootOrAmplitude;
		float easePeriod;
		mscorlib::System::String* debugTargetId;
		mscorlib::System::Type* typeofT1;
		mscorlib::System::Type* typeofT2;
		mscorlib::System::Type* typeofTPlugOptions;
		bool _active_k__BackingField;
		bool isSequenced;
		DOTween::DG::Tweening::Sequence* sequenceParent;
		int32_t activeId;
		DOTween::DG::Tweening::Core::Enums::SpecialStartupMode specialStartupMode;
		bool creationLocked;
		bool startupDone;
		bool _playedOnce_k__BackingField;
		float _position_k__BackingField;
		float fullDuration;
		int32_t completedLoops;
		bool isPlaying;
		bool isComplete;
		float elapsedDelay;
		bool delayComplete;
		int32_t miscInt;
		bool get_isRelative();
		void set_isRelative(bool value);
		bool get_active();
		void set_active(bool value);
		float get_fullPosition();
		void set_fullPosition(float value);
		bool get_playedOnce();
		void set_playedOnce(bool value);
		float get_position();
		void set_position(float value);
		void Reset();
		bool Validate();
		float UpdateDelay(float elapsed);
		bool Startup();
		bool ApplyTween(float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
		static bool DoGoto(DOTween::DG::Tweening::Tween* t, float toPosition, int32_t toCompletedLoops, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode);
		static bool OnTweenCallback(DOTween::DG::Tweening::TweenCallback* callback, DOTween::DG::Tweening::Tween* t);
		template <typename T> static bool OnTweenCallback(DOTween::DG::Tweening::TweenCallback_1<T>* callback, DOTween::DG::Tweening::Tween* t, T* param)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnTweenCallback", std::vector<std::string> { "DG.Tweening.TweenCallback`1<T>", "DG.Tweening.Tween", GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)callback;
			params[1] = (intptr_t)t;
			params[2] = (intptr_t)param;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void _ctor();
	};
}


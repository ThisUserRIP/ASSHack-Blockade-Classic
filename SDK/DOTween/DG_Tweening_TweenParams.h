#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "DG_Tweening_UpdateType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace DOTween::DG::Tweening { struct TweenCallback; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace DOTween::DG::Tweening { template <typename T> struct TweenCallback_1; };
#include "DG_Tweening_LoopType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "DG_Tweening_Ease.h"
namespace DOTween::DG::Tweening { struct EaseFunction; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };

namespace DOTween::DG::Tweening
{
	struct TweenParams : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* id;
		mscorlib::System::Object* target;
		DOTween::DG::Tweening::UpdateType updateType;
		bool isIndependentUpdate;
		DOTween::DG::Tweening::TweenCallback* onStart;
		DOTween::DG::Tweening::TweenCallback* onPlay;
		DOTween::DG::Tweening::TweenCallback* onRewind;
		DOTween::DG::Tweening::TweenCallback* onUpdate;
		DOTween::DG::Tweening::TweenCallback* onStepComplete;
		DOTween::DG::Tweening::TweenCallback* onComplete;
		DOTween::DG::Tweening::TweenCallback* onKill;
		DOTween::DG::Tweening::TweenCallback_1<mscorlib::System::Int32>* onWaypointChange;
		bool isRecyclable;
		bool isSpeedBased;
		bool autoKill;
		int32_t loops;
		DOTween::DG::Tweening::LoopType loopType;
		float delay;
		bool isRelative;
		DOTween::DG::Tweening::Ease easeType;
		DOTween::DG::Tweening::EaseFunction* customEase;
		float easeOvershootOrAmplitude;
		float easePeriod;
		struct StaticFields
		{
			DOTween::DG::Tweening::TweenParams* Params;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		DOTween::DG::Tweening::TweenParams* Clear();
		DOTween::DG::Tweening::TweenParams* SetAutoKill(bool autoKillOnCompletion);
		DOTween::DG::Tweening::TweenParams* SetId(mscorlib::System::Object* id);
		DOTween::DG::Tweening::TweenParams* SetTarget(mscorlib::System::Object* target);
		DOTween::DG::Tweening::TweenParams* SetLoops(int32_t loops, mscorlib::System::Nullable_1<DOTween::DG::Tweening::LoopType> loopType);
		DOTween::DG::Tweening::TweenParams* SetEase(DOTween::DG::Tweening::Ease ease, mscorlib::System::Nullable_1<mscorlib::System::Single> overshootOrAmplitude, mscorlib::System::Nullable_1<mscorlib::System::Single> period);
		DOTween::DG::Tweening::TweenParams* SetEase(UnityEngine_CoreModule::UnityEngine::AnimationCurve* animCurve);
		DOTween::DG::Tweening::TweenParams* SetEase(DOTween::DG::Tweening::EaseFunction* customEase);
		DOTween::DG::Tweening::TweenParams* SetRecyclable(bool recyclable);
		DOTween::DG::Tweening::TweenParams* SetUpdate(bool isIndependentUpdate);
		DOTween::DG::Tweening::TweenParams* SetUpdate(DOTween::DG::Tweening::UpdateType updateType, bool isIndependentUpdate);
		DOTween::DG::Tweening::TweenParams* OnStart(DOTween::DG::Tweening::TweenCallback* action);
		DOTween::DG::Tweening::TweenParams* OnPlay(DOTween::DG::Tweening::TweenCallback* action);
		DOTween::DG::Tweening::TweenParams* OnRewind(DOTween::DG::Tweening::TweenCallback* action);
		DOTween::DG::Tweening::TweenParams* OnUpdate(DOTween::DG::Tweening::TweenCallback* action);
		DOTween::DG::Tweening::TweenParams* OnStepComplete(DOTween::DG::Tweening::TweenCallback* action);
		DOTween::DG::Tweening::TweenParams* OnComplete(DOTween::DG::Tweening::TweenCallback* action);
		DOTween::DG::Tweening::TweenParams* OnKill(DOTween::DG::Tweening::TweenCallback* action);
		DOTween::DG::Tweening::TweenParams* OnWaypointChange(DOTween::DG::Tweening::TweenCallback_1<mscorlib::System::Int32>* action);
		DOTween::DG::Tweening::TweenParams* SetDelay(float delay);
		DOTween::DG::Tweening::TweenParams* SetRelative(bool isRelative);
		DOTween::DG::Tweening::TweenParams* SetSpeedBased(bool isSpeedBased);
		static void _cctor();
	};
}


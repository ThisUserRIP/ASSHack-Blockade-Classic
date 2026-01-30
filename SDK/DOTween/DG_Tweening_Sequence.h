#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DG_Tweening_Tween.h"
namespace DOTween::DG::Tweening { struct Tween; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace DOTween::DG::Tweening::Core { struct ABSSequentiable; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace DOTween::DG::Tweening { struct TweenCallback; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "DG_Tweening_Core_Enums_UpdateMode.h"
#include "DG_Tweening_Core_Enums_UpdateNotice.h"

namespace DOTween::DG::Tweening
{
	struct Sequence : DOTween::DG::Tweening::Tween
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* sequencedTweens;
		mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Core::ABSSequentiable>* _sequencedObjs;
		float lastTweenInsertTime;
		void _ctor();
		static DOTween::DG::Tweening::Sequence* DoPrepend(DOTween::DG::Tweening::Sequence* inSequence, DOTween::DG::Tweening::Tween* t);
		static DOTween::DG::Tweening::Sequence* DoInsert(DOTween::DG::Tweening::Sequence* inSequence, DOTween::DG::Tweening::Tween* t, float atPosition);
		static DOTween::DG::Tweening::Sequence* DoAppendInterval(DOTween::DG::Tweening::Sequence* inSequence, float interval);
		static DOTween::DG::Tweening::Sequence* DoPrependInterval(DOTween::DG::Tweening::Sequence* inSequence, float interval);
		static DOTween::DG::Tweening::Sequence* DoInsertCallback(DOTween::DG::Tweening::Sequence* inSequence, DOTween::DG::Tweening::TweenCallback* callback, float atPosition);
		void Reset();
		bool Validate();
		bool Startup();
		bool ApplyTween(float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
		static void Setup(DOTween::DG::Tweening::Sequence* s);
		static bool DoStartup(DOTween::DG::Tweening::Sequence* s);
		static bool DoApplyTween(DOTween::DG::Tweening::Sequence* s, float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode);
		static bool ApplyInternalCycle(DOTween::DG::Tweening::Sequence* s, float fromPos, float toPos, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep);
		static void StableSortSequencedObjs(mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Core::ABSSequentiable>* list);
		static bool IsAnyCallbackSet(DOTween::DG::Tweening::Sequence* s);
	};
}


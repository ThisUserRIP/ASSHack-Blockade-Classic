#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Progress_ProgressTarget.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIAction; };
#include "Doozy_Engine_Progress_CompareType.h"
#include "Doozy_Engine_Progress_ProgressorVariable.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Doozy::Engine::Progress
{
	struct ProgressTargetAction : Assembly_CSharp::Doozy::Engine::Progress::ProgressTarget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* Actions;
		Assembly_CSharp::Doozy::Engine::Progress::CompareType CompareMethod;
		bool DisableTriggerAfterActivation;
		bool ResetAfterDelay;
		float ResetDelay;
		bool ResetOnDisable;
		bool ResetOnEnable;
		float TriggerValue;
		float TriggerMinValue;
		float TriggerMaxValue;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressorVariable TargetVariable;
		float Tolerance;
		bool UseUnscaledTime;
		bool m_actionTriggered;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_resetCoroutine;
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* m_progressor;
		float m_updateInterval;
		float m_nextUpdateTime;
		struct StaticFields
		{
			float TRIGGER_VALUE_DEFAULT_VALUE;
			float TOLERANCE_DEFAULT_VALUE;
			bool DISABLE_TRIGGER_AFTER_ACTIVATION_DEFAULT_VALUE;
			bool RESET_ON_ENABLE_DEFAULT_VALUE;
			bool RESET_ON_DISABLE_DEFAULT_VALUE;
			bool RESET_AFTER_DELAY_DEFAULT_VALUE;
			float RESET_DELAY_DEFAULT_VALUE;
			bool USE_UNSCALED_TIME_DEFAULT_VALUE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_IsActive();
		void Awake();
		void OnEnable();
		void OnDisable();
		void Update();
		void ResetTrigger();
		void TriggerActions();
		void UpdateTarget(Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor);
		void CheckTriggerValue();
		mscorlib::System::Collections::IEnumerator* ExecuteResetTrigger();
		void _ctor();
	};
}


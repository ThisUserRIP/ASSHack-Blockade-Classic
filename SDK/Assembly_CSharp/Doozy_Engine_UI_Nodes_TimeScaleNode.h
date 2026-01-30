#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Nody_Models_Node.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\DOTween\DG_Tweening_Ease.h"
namespace DOTween::DG::Tweening { struct Sequence; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };
namespace DOTween::DG::Tweening { struct Tween; };

namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	struct TimeScaleNode : Assembly_CSharp::Doozy::Engine::Nody::Models::Node
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float TargetValue;
		bool AnimateValue;
		float AnimationDuration;
		DOTween::DG::Tweening::Ease AnimationEase;
		bool WaitForAnimationToFinish;
		DOTween::DG::Tweening::Sequence* m_animationSequence;
		bool m_timerIsActive;
		double m_timerStart;
		float m_timeDuration;
		struct StaticFields
		{
			float DEFAULT_TARGET_VALUE;
			bool DEFAULT_ANIMATE_VALUE;
			float DEFAULT_ANIMATION_DURATION;
			DOTween::DG::Tweening::Ease DEFAULT_ANIMATION_EASE;
			bool DEFAULT_WAIT_FOR_ANIMATION_TO_FINISH;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_GetAnimationId();
		float get_TimerProgress();
		void OnCreate();
		void AddDefaultSockets();
		void CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original);
		void OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void OnUpdate();
		void ContinueToNextNode();
		void ExecuteActions();
		void ActivateTimer();
		void StopTimer();
		void KillAnimation(bool complete);
		static DOTween::DG::Tweening::Tween* GetAnimationTween(float targetValue, float duration, DOTween::DG::Tweening::Ease ease, mscorlib::System::String* id);
		void _ctor();
	};
}


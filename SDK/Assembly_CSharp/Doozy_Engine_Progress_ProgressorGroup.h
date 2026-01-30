#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct ProgressEvent; };
namespace DOTween::DG::Tweening { struct Sequence; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_Progress_TargetProgress.h"

namespace Assembly_CSharp::Doozy::Engine::Progress
{
	struct ProgressorGroup : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool DebugMode;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Progress::Progressor>* Progressors;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnProgressChanged;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnInverseProgressChanged;
		DOTween::DG::Tweening::Sequence* m_animationSequence;
		float m_previousProgress;
		float m_progress;
		struct StaticFields
		{
			float TOLERANCE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		float get_Progress();
		void set_Progress(float value);
		float get_InverseProgress();
		bool get_DebugComponent();
		void OnEnable();
		void OnDisable();
		void Update();
		void UpdateProgress();
		float GetProgress(Assembly_CSharp::Doozy::Engine::Progress::TargetProgress direction);
		void RemoveAnyNullProgressors();
		void OnProgressUpdated();
		static Assembly_CSharp::Doozy::Engine::Progress::ProgressorGroup* AddToScene(bool selectGameObjectAfterCreation);
		void _ctor();
	};
}


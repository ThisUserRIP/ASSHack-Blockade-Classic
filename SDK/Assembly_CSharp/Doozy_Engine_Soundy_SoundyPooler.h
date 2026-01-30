#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyController; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace UnityEngine_CoreModule::UnityEngine { struct WaitForSecondsRealtime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundyPooler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_idleCheckCoroutine;
		UnityEngine_CoreModule::UnityEngine::WaitForSecondsRealtime* m_idleCheckIntervalWaitForSecondsRealtime;
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* m_tempController;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Soundy::SoundyController>* s_pool;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyPooler* get_Instance();
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Soundy::SoundyController>* get_Pool();
		static void set_Pool(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Soundy::SoundyController>* value);
		static bool get_AutoKillIdleControllers();
		static float get_ControllerIdleKillDuration();
		static float get_IdleCheckInterval();
		static int32_t get_MinimumNumberOfControllers();
		bool get_DebugComponent();
		void Reset();
		void OnEnable();
		void OnDisable();
		static void ClearPool(bool keepMinimumNumberOfControllers);
		static Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* GetControllerFromPool();
		static void PopulatePool(int32_t numberOfControllers);
		static void PutControllerInPool(Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* controller);
		void StartIdleCheckInterval();
		void StopIdleCheckInterval();
		static void RemoveNullControllersFromThePool();
		mscorlib::System::Collections::IEnumerator* KillIdleControllersEnumerator();
		void _ctor();
	};
}


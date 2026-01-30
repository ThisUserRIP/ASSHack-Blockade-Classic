#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct vp_Timer_Event; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct vp_Timer_Callback; };
namespace Assembly_CSharp { struct vp_Timer_Handle; };
namespace Assembly_CSharp { struct vp_Timer_ArgCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"
#include "vp_Timer_Stats.h"
namespace Assembly_CSharp { struct vp_Timer_Stats; };

namespace Assembly_CSharp
{
	struct vp_Timer : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::GameObject* m_MainObject;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_Timer_Event>* m_Active;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_Timer_Event>* m_Pool;
			Assembly_CSharp::vp_Timer_Event* m_NewEvent;
			int32_t m_EventCount;
			int32_t m_EventBatch;
			int32_t m_EventIterator;
			bool m_AppQuitting;
			int32_t MaxEventsPerFrame;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_WasAddedCorrectly();
		void Awake();
		void OnEnable();
		void OnDisable();
		void Update();
		static void In(float delay, Assembly_CSharp::vp_Timer_Callback* callback, Assembly_CSharp::vp_Timer_Handle* timerHandle);
		static void In(float delay, Assembly_CSharp::vp_Timer_Callback* callback, int32_t iterations, Assembly_CSharp::vp_Timer_Handle* timerHandle);
		static void In(float delay, Assembly_CSharp::vp_Timer_Callback* callback, int32_t iterations, float interval, Assembly_CSharp::vp_Timer_Handle* timerHandle);
		static void In(float delay, Assembly_CSharp::vp_Timer_ArgCallback* callback, mscorlib::System::Object* arguments, Assembly_CSharp::vp_Timer_Handle* timerHandle);
		static void In(float delay, Assembly_CSharp::vp_Timer_ArgCallback* callback, mscorlib::System::Object* arguments, int32_t iterations, Assembly_CSharp::vp_Timer_Handle* timerHandle);
		static void In(float delay, Assembly_CSharp::vp_Timer_ArgCallback* callback, mscorlib::System::Object* arguments, int32_t iterations, float interval, Assembly_CSharp::vp_Timer_Handle* timerHandle);
		static void Start(Assembly_CSharp::vp_Timer_Handle* timerHandle);
		static void Schedule(float time, Assembly_CSharp::vp_Timer_Callback* func, Assembly_CSharp::vp_Timer_ArgCallback* argFunc, mscorlib::System::Object* args, Assembly_CSharp::vp_Timer_Handle* timerHandle, int32_t iterations, float interval);
		static void Cancel(Assembly_CSharp::vp_Timer_Handle* handle);
		static void CancelAll();
		static void CancelAll(mscorlib::System::String* methodName);
		static void DestroyAll();
		void OnLevelLoad(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		static Assembly_CSharp::vp_Timer_Stats EditorGetStats();
		static mscorlib::System::String* EditorGetMethodInfo(int32_t eventIndex);
		static int32_t EditorGetMethodId(int32_t eventIndex);
		void OnApplicationQuit();
		void _ctor();
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Threading_SynchronizationContext.h"
#include "UnityEngine_UnitySynchronizationContext_WorkRequest.h"
namespace UnityEngine_CoreModule::UnityEngine { struct UnitySynchronizationContext_WorkRequest; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct SendOrPostCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct SynchronizationContext; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct UnitySynchronizationContext : mscorlib::System::Threading::SynchronizationContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::UnitySynchronizationContext_WorkRequest>* m_AsyncWorkQueue;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::UnitySynchronizationContext_WorkRequest>* m_CurrentFrameWork;
		int32_t m_MainThreadID;
		int32_t m_TrackedCount;
		void _ctor(int32_t mainThreadID);
		void _ctor(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::UnitySynchronizationContext_WorkRequest>* queue, int32_t mainThreadID);
		void Send(mscorlib::System::Threading::SendOrPostCallback* callback, mscorlib::System::Object* state);
		void OperationStarted();
		void OperationCompleted();
		void Post(mscorlib::System::Threading::SendOrPostCallback* callback, mscorlib::System::Object* state);
		mscorlib::System::Threading::SynchronizationContext* CreateCopy();
		void Exec();
		bool HasPendingTasks();
		static void InitializeSynchronizationContext();
		static void ExecuteTasks();
		static bool ExecutePendingTasks(int64_t millisecondsTimeout);
	};
}


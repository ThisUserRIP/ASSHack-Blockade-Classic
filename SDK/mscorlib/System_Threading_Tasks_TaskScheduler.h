#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::CompilerServices { template <typename TKey, typename TValue> struct ConditionalWeakTable_2; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Threading::Tasks { struct UnobservedTaskExceptionEventArgs; };
namespace mscorlib::System { template <typename TEventArgs> struct EventHandler_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading::Tasks
{
	struct TaskScheduler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_taskSchedulerId;
		struct StaticFields
		{
			mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2<mscorlib::System::Threading::Tasks::TaskScheduler, mscorlib::System::Object>* s_activeTaskSchedulers;
			mscorlib::System::Threading::Tasks::TaskScheduler* s_defaultTaskScheduler;
			int32_t s_taskSchedulerIdCounter;
			mscorlib::System::EventHandler_1<mscorlib::System::Threading::Tasks::UnobservedTaskExceptionEventArgs>* _unobservedTaskException;
			mscorlib::System::Object* _unobservedTaskExceptionLockObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void QueueTask(mscorlib::System::Threading::Tasks::Task* task);
		bool TryExecuteTaskInline(mscorlib::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);
		bool TryRunInline(mscorlib::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);
		bool TryDequeue(mscorlib::System::Threading::Tasks::Task* task);
		void NotifyWorkItemProgress();
		bool get_RequiresAtomicStartTransition();
		void InternalQueueTask(mscorlib::System::Threading::Tasks::Task* task);
		void _ctor();
		void AddToActiveTaskSchedulers();
		static mscorlib::System::Threading::Tasks::TaskScheduler* get_Default();
		static mscorlib::System::Threading::Tasks::TaskScheduler* get_Current();
		static mscorlib::System::Threading::Tasks::TaskScheduler* get_InternalCurrent();
		int32_t get_Id();
		static void PublishUnobservedTaskException(mscorlib::System::Object* sender, mscorlib::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* ueea);
		static void _cctor();
	};
}


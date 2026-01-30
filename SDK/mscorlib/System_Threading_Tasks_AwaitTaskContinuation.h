#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_TaskContinuation.h"
namespace mscorlib::System::Threading { struct ExecutionContext; };
namespace mscorlib::System { struct Action; };
namespace mscorlib::System::Threading { struct ContextCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Threading::Tasks { struct TaskScheduler; };
namespace mscorlib::System::Threading { struct ThreadAbortException; };
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System::Threading::Tasks
{
	struct AwaitTaskContinuation : mscorlib::System::Threading::Tasks::TaskContinuation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::ExecutionContext* m_capturedContext;
		mscorlib::System::Action* m_action;
		struct StaticFields
		{
			mscorlib::System::Threading::ContextCallback* s_invokeActionCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Action* action, bool flowExecutionContext, mscorlib::System::Threading::StackCrawlMark& stackMark);
		void _ctor(mscorlib::System::Action* action, bool flowExecutionContext);
		mscorlib::System::Threading::Tasks::Task* CreateTask(mscorlib::System::Action_1<mscorlib::System::Object>* action, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler);
		void Run(mscorlib::System::Threading::Tasks::Task* task, bool canInlineContinuationTask);
		static bool get_IsValidLocationForInlining();
		void ExecuteWorkItemHelper();
		void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
		void System_Threading_IThreadPoolWorkItem_MarkAborted(mscorlib::System::Threading::ThreadAbortException* tae);
		static void InvokeAction(mscorlib::System::Object* state);
		static mscorlib::System::Threading::ContextCallback* GetInvokeActionCallback();
		void RunCallback(mscorlib::System::Threading::ContextCallback* callback, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::Task& currentTask);
		static void RunOrScheduleAction(mscorlib::System::Action* action, bool allowInlining, mscorlib::System::Threading::Tasks::Task& currentTask);
		static void UnsafeScheduleAction(mscorlib::System::Action* action, mscorlib::System::Threading::Tasks::Task* task);
		static void ThrowAsyncIfNecessary(mscorlib::System::Exception* exc);
	};
}


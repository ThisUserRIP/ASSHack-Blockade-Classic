#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_AwaitTaskContinuation.h"
namespace mscorlib::System::Threading::Tasks { struct TaskScheduler; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };

namespace mscorlib::System::Threading::Tasks
{
	struct TaskSchedulerAwaitTaskContinuation : mscorlib::System::Threading::Tasks::AwaitTaskContinuation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::TaskScheduler* m_scheduler;
		void _ctor(mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Action* action, bool flowExecutionContext, mscorlib::System::Threading::StackCrawlMark& stackMark);
		void Run(mscorlib::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask);
	};
}


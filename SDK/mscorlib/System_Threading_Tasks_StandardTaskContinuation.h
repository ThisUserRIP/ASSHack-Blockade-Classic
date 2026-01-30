#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_TaskContinuation.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Threading_Tasks_TaskContinuationOptions.h"
namespace mscorlib::System::Threading::Tasks { struct TaskScheduler; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading::Tasks
{
	struct StandardTaskContinuation : mscorlib::System::Threading::Tasks::TaskContinuation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::Task* m_task;
		mscorlib::System::Threading::Tasks::TaskContinuationOptions m_options;
		mscorlib::System::Threading::Tasks::TaskScheduler* m_taskScheduler;
		void _ctor(mscorlib::System::Threading::Tasks::Task* task, mscorlib::System::Threading::Tasks::TaskContinuationOptions options, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler);
		void Run(mscorlib::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask);
	};
}


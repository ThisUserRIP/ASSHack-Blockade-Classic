#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_TaskScheduler.h"
namespace mscorlib::System::Threading { struct ParameterizedThreadStart; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading::Tasks
{
	struct ThreadPoolTaskScheduler : mscorlib::System::Threading::Tasks::TaskScheduler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Threading::ParameterizedThreadStart* s_longRunningThreadWork;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void LongRunningThreadWork(mscorlib::System::Object* obj);
		void QueueTask(mscorlib::System::Threading::Tasks::Task* task);
		bool TryExecuteTaskInline(mscorlib::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);
		bool TryDequeue(mscorlib::System::Threading::Tasks::Task* task);
		void NotifyWorkItemProgress();
		bool get_RequiresAtomicStartTransition();
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Threading_Tasks_Task_1.h"
#include "System_Threading_Tasks_TaskFactory.h"
namespace mscorlib::System::Threading::Tasks { struct TaskFactory; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading::Tasks
{
	struct TaskFactory_CompleteOnInvokePromise : mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Threading::Tasks::Task>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Threading::Tasks::Task>* _tasks;
		int32_t m_firstTaskAlreadyCompleted;
		void _ctor(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Threading::Tasks::Task>* tasks);
		void Invoke(mscorlib::System::Threading::Tasks::Task* completingTask);
	};
}


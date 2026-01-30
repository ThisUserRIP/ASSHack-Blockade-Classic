#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_Tasks_Task_1.h"
#include "System_Threading_SemaphoreSlim.h"
namespace mscorlib::System::Threading { struct SemaphoreSlim; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct ThreadAbortException; };

namespace mscorlib::System::Threading
{
	struct SemaphoreSlim_TaskNode : mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Boolean>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::SemaphoreSlim_TaskNode* Prev;
		mscorlib::System::Threading::SemaphoreSlim_TaskNode* Next;
		void _ctor();
		void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
		void System_Threading_IThreadPoolWorkItem_MarkAborted(mscorlib::System::Threading::ThreadAbortException* tae);
	};
}


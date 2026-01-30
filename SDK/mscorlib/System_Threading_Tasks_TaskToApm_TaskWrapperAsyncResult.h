#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Tasks_TaskToApm.h"
namespace mscorlib::System::Threading::Tasks { struct TaskToApm; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct WaitHandle; };

namespace mscorlib::System::Threading::Tasks
{
	struct TaskToApm_TaskWrapperAsyncResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::Task* Task;
		mscorlib::System::Object* m_state;
		bool m_completedSynchronously;
		void _ctor(mscorlib::System::Threading::Tasks::Task* task, mscorlib::System::Object* state, bool completedSynchronously);
		mscorlib::System::Object* System_IAsyncResult_get_AsyncState();
		bool System_IAsyncResult_get_CompletedSynchronously();
		bool System_IAsyncResult_get_IsCompleted();
		mscorlib::System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
	};
}


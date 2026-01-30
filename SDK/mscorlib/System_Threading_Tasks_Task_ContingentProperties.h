#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Tasks_Task.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
namespace mscorlib::System::Threading { struct ManualResetEventSlim; };
namespace mscorlib::System::Threading::Tasks { struct TaskExceptionHolder; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "System_Threading_CancellationTokenRegistration.h"
namespace mscorlib::System::Threading { struct CancellationTokenRegistration; };
namespace mscorlib::System::Threading::Tasks { template <typename T> struct Shared_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading::Tasks
{
	struct Task_ContingentProperties : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::ExecutionContext* m_capturedContext;
		mscorlib::System::Threading::ManualResetEventSlim* m_completionEvent;
		mscorlib::System::Threading::Tasks::TaskExceptionHolder* m_exceptionsHolder;
		mscorlib::System::Threading::CancellationToken m_cancellationToken;
		mscorlib::System::Threading::Tasks::Shared_1<mscorlib::System::Threading::CancellationTokenRegistration>* m_cancellationRegistration;
		int32_t m_internalCancellationRequested;
		int32_t m_completionCountdown;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Threading::Tasks::Task>* m_exceptionalChildren;
		void SetCompleted();
		void DeregisterCancellationCallback();
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Action; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct TaskAwaiter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::Task* m_task;
		void _ctor(mscorlib::System::Threading::Tasks::Task* task);
		bool get_IsCompleted();
		void OnCompleted(mscorlib::System::Action* continuation);
		void UnsafeOnCompleted(mscorlib::System::Action* continuation);
		void GetResult();
		static void ValidateEnd(mscorlib::System::Threading::Tasks::Task* task);
		static void HandleNonSuccessAndDebuggerNotification(mscorlib::System::Threading::Tasks::Task* task);
		static void ThrowForNonSuccess(mscorlib::System::Threading::Tasks::Task* task);
		static void OnCompletedInternal(mscorlib::System::Threading::Tasks::Task* task, mscorlib::System::Action* continuation, bool continueOnCapturedContext, bool flowExecutionContext);
	};
}


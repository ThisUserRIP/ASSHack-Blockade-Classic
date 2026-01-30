#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_SemaphoreSlim.h"
namespace mscorlib::System::Threading { struct SemaphoreSlim; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading { struct SemaphoreSlim_TaskNode; };
namespace mscorlib::System::Threading { struct CancellationTokenSource; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace mscorlib::System::Threading
{
	struct SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__31
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<mscorlib::System::Boolean> __t__builder;
		mscorlib::System::Threading::CancellationToken cancellationToken;
		mscorlib::System::Threading::SemaphoreSlim_TaskNode* asyncWaiter;
		int32_t millisecondsTimeout;
		mscorlib::System::Threading::CancellationTokenSource* _cts_5__1;
		mscorlib::System::Threading::SemaphoreSlim* __4__this;
		mscorlib::System::Object* __7__wrap1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::Threading::Tasks::Task> __u__1;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::Boolean> __u__2;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}


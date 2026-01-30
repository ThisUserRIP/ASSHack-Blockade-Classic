#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };
namespace mscorlib::System { struct Action; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncMethodBuilderCore_MoveNextRunner; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Threading { struct SynchronizationContext; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct AsyncMethodBuilderCore
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;
		mscorlib::System::Action* m_defaultContextAction;
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
		mscorlib::System::Action* GetCompletionAction(mscorlib::System::Threading::Tasks::Task* taskForTracing, mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner& runnerToInitialize);
		mscorlib::System::Action* OutputAsyncCausalityEvents(mscorlib::System::Threading::Tasks::Task* innerTask, mscorlib::System::Action* continuation);
		void PostBoxInitialization(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine, mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner* runner, mscorlib::System::Threading::Tasks::Task* builtTask);
		static void ThrowAsync(mscorlib::System::Exception* exception, mscorlib::System::Threading::SynchronizationContext* targetContext);
		static mscorlib::System::Action* CreateContinuationWrapper(mscorlib::System::Action* continuation, mscorlib::System::Action* invokeAction, mscorlib::System::Threading::Tasks::Task* innerTask);
		static mscorlib::System::Threading::Tasks::Task* TryGetContinuationTask(mscorlib::System::Action* action);
	};
}


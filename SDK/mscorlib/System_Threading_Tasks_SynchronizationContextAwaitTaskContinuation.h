#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_AwaitTaskContinuation.h"
namespace mscorlib::System::Threading { struct SendOrPostCallback; };
namespace mscorlib::System::Threading { struct ContextCallback; };
namespace mscorlib::System::Threading { struct SynchronizationContext; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Threading::Tasks
{
	struct SynchronizationContextAwaitTaskContinuation : mscorlib::System::Threading::Tasks::AwaitTaskContinuation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::SynchronizationContext* m_syncContext;
		struct StaticFields
		{
			mscorlib::System::Threading::SendOrPostCallback* s_postCallback;
			mscorlib::System::Threading::ContextCallback* s_postActionCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Threading::SynchronizationContext* context, mscorlib::System::Action* action, bool flowExecutionContext, mscorlib::System::Threading::StackCrawlMark& stackMark);
		void Run(mscorlib::System::Threading::Tasks::Task* task, bool canInlineContinuationTask);
		static void PostAction(mscorlib::System::Object* state);
		static mscorlib::System::Threading::ContextCallback* GetPostActionCallback();
		static void _cctor();
	};
}


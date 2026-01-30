#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_Task.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System { struct Object; };
#include "System_Threading_Tasks_TaskCreationOptions.h"
#include "System_Threading_Tasks_InternalTaskOptions.h"
#include "System_Threading_StackCrawlMark.h"

namespace mscorlib::System::Threading::Tasks
{
	struct ContinuationTaskFromTask : mscorlib::System::Threading::Tasks::Task
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::Task* m_antecedent;
		void _ctor(mscorlib::System::Threading::Tasks::Task* antecedent, mscorlib::System::Delegate* action, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::StackCrawlMark& stackMark);
		void InnerInvoke();
	};
}


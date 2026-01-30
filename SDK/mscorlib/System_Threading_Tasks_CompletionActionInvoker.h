#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading::Tasks { struct ITaskCompletionAction; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct ThreadAbortException; };

namespace mscorlib::System::Threading::Tasks
{
	struct CompletionActionInvoker : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::ITaskCompletionAction* m_action;
		mscorlib::System::Threading::Tasks::Task* m_completingTask;
		void _ctor(mscorlib::System::Threading::Tasks::ITaskCompletionAction* action, mscorlib::System::Threading::Tasks::Task* completingTask);
		void ExecuteWorkItem();
		void MarkAborted(mscorlib::System::Threading::ThreadAbortException* tae);
	};
}


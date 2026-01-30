#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading::Tasks
{
	struct TaskContinuation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Run(mscorlib::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask);
		static void InlineIfPossibleOrElseQueue(mscorlib::System::Threading::Tasks::Task* task, bool needsProtection);
		void _ctor();
	};
}


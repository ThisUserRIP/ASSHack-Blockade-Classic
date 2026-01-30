#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_ManualResetEventSlim.h"
#include "System_Threading_Tasks_Task.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading::Tasks
{
	struct Task_SetOnInvokeMres : mscorlib::System::Threading::ManualResetEventSlim
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void Invoke(mscorlib::System::Threading::Tasks::Task* completingTask);
	};
}


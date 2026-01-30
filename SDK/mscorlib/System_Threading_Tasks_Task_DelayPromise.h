#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_VoidTaskResult.h"
namespace mscorlib::System::Threading::Tasks { struct VoidTaskResult; };
#include "System_Threading_Tasks_Task_1.h"
#include "System_Threading_Tasks_Task.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "System_Threading_CancellationTokenRegistration.h"
namespace mscorlib::System::Threading { struct CancellationTokenRegistration; };
namespace mscorlib::System::Threading { struct Timer; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading::Tasks
{
	struct Task_DelayPromise : mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Threading::Tasks::VoidTaskResult>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::CancellationToken Token;
		mscorlib::System::Threading::CancellationTokenRegistration Registration;
		mscorlib::System::Threading::Timer* Timer;
		void _ctor(mscorlib::System::Threading::CancellationToken token);
		void Complete();
	};
}


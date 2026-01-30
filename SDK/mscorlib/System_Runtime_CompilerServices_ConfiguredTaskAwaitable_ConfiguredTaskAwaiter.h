#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable.h"
namespace mscorlib::System::Runtime::CompilerServices { struct ConfiguredTaskAwaitable; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::Task* m_task;
		bool m_continueOnCapturedContext;
		void _ctor(mscorlib::System::Threading::Tasks::Task* task, bool continueOnCapturedContext);
		bool get_IsCompleted();
		void OnCompleted(mscorlib::System::Action* continuation);
		void UnsafeOnCompleted(mscorlib::System::Action* continuation);
		void GetResult();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation.h"
namespace mscorlib::System::Threading::Tasks { struct TaskSchedulerAwaitTaskContinuation; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading::Tasks
{
	struct TaskSchedulerAwaitTaskContinuation___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c* __9;
			mscorlib::System::Action_1<mscorlib::System::Object>* __9__2_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _Run_b__2_0(mscorlib::System::Object* state);
	};
}


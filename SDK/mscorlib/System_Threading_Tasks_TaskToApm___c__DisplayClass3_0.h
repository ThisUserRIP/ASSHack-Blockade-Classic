#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Tasks_TaskToApm.h"
namespace mscorlib::System::Threading::Tasks { struct TaskToApm; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct IAsyncResult; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading::Tasks
{
	struct TaskToApm___c__DisplayClass3_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::AsyncCallback* callback;
		mscorlib::System::IAsyncResult* asyncResult;
		void _ctor();
		void _InvokeCallbackWhenTaskCompletes_b__0();
	};
}


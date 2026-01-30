#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_ServicePointScheduler.h"
namespace System::System::Net { struct ServicePointScheduler; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncVoidMethodBuilder.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncVoidMethodBuilder; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace System::System::Net { struct ServicePointScheduler_ConnectionGroup; };
namespace System::System::Net { struct WebOperation; };
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };
namespace System::System::Net { struct WebConnection; };
#include "..\mscorlib\System_ValueTuple_3.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct ValueTuple_3; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System::System::Net
{
	struct ServicePointScheduler__StartScheduler_d__32
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;
		System::Net::ServicePointScheduler* __4__this;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Threading::Tasks::Task>* _taskList_5__1;
		IL2CPP::Array<mscorlib::System::ValueTuple_2<System::Net::ServicePointScheduler_ConnectionGroup, System::Net::WebOperation>>* _operationArray_5__2;
		IL2CPP::Array<mscorlib::System::ValueTuple_3<System::Net::ServicePointScheduler_ConnectionGroup, System::Net::WebConnection, mscorlib::System::Threading::Tasks::Task>>* _idleArray_5__3;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<mscorlib::System::Threading::Tasks::Task> __u__1;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}


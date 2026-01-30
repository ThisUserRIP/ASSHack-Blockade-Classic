#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System::Threading { struct SemaphoreSlim_TaskNode; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Threading
{
	struct SemaphoreSlim : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_currentCount;
		int32_t m_maxCount;
		int32_t m_waitCount;
		mscorlib::System::Object* m_lockObj;
		mscorlib::System::Threading::ManualResetEvent* m_waitHandle;
		mscorlib::System::Threading::SemaphoreSlim_TaskNode* m_asyncHead;
		mscorlib::System::Threading::SemaphoreSlim_TaskNode* m_asyncTail;
		struct StaticFields
		{
			mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Boolean>* s_trueTask;
			int32_t NO_MAXIMUM;
			mscorlib::System::Action_1<mscorlib::System::Object>* s_cancellationTokenCanceledEventHandler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t initialCount, int32_t maxCount);
		void Wait();
		bool Wait(int32_t millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
		bool WaitUntilCountOrTimeout(int32_t millisecondsTimeout, uint32_t startTime, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WaitAsync();
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Boolean>* WaitAsync(int32_t millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::SemaphoreSlim_TaskNode* CreateAndAddAsyncWaiter();
		bool RemoveAsyncWaiter(mscorlib::System::Threading::SemaphoreSlim_TaskNode* task);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Boolean>* WaitUntilCountOrTimeoutAsync(mscorlib::System::Threading::SemaphoreSlim_TaskNode* asyncWaiter, int32_t millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
		int32_t Release();
		int32_t Release(int32_t releaseCount);
		static void QueueWaiterTask(mscorlib::System::Threading::SemaphoreSlim_TaskNode* waiterTask);
		void Dispose();
		void Dispose(bool disposing);
		static void CancellationTokenCanceledEventHandler(mscorlib::System::Object* obj);
		void CheckDispose();
		static mscorlib::System::String* GetResourceString(mscorlib::System::String* str);
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading { struct ThreadPoolWorkQueue_QueueSegment; };
namespace mscorlib::System::Threading { struct ThreadPoolWorkQueue_WorkStealingQueue; };
namespace mscorlib::System::Threading { template <typename T> struct ThreadPoolWorkQueue_SparseArray_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct ThreadPoolWorkQueueThreadLocals; };
namespace mscorlib::System::Threading { struct IThreadPoolWorkItem; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading
{
	struct ThreadPoolWorkQueue : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueHead;
		mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment* queueTail;
		int32_t numOutstandingThreadRequests;
		struct StaticFields
		{
			mscorlib::System::Threading::ThreadPoolWorkQueue_SparseArray_1<mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue>* allThreadQueues;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		mscorlib::System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue();
		void EnsureThreadRequested();
		void MarkThreadRequestSatisfied();
		void Enqueue(mscorlib::System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal);
		bool LocalFindAndPop(mscorlib::System::Threading::IThreadPoolWorkItem* callback);
		void Dequeue(mscorlib::System::Threading::ThreadPoolWorkQueueThreadLocals* tl, mscorlib::System::Threading::IThreadPoolWorkItem& callback, bool& missedSteal);
		static bool Dispatch();
		static void _cctor();
	};
}


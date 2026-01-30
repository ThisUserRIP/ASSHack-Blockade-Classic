#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading { struct RegisteredWaitHandle; };
namespace mscorlib::System::Threading { struct WaitHandle; };
namespace mscorlib::System::Threading { struct WaitOrTimerCallback; };
namespace mscorlib::System { struct Object; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_StackCrawlMark.h"
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System::Threading { struct WaitCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct IThreadPoolWorkItem; };

namespace mscorlib::System::Threading
{
	struct ThreadPool : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle* waitObject, mscorlib::System::Threading::WaitOrTimerCallback* callBack, mscorlib::System::Object* state, uint32_t millisecondsTimeOutInterval, bool executeOnlyOnce, mscorlib::System::Threading::StackCrawlMark& stackMark, bool compressStack);
		static mscorlib::System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle* waitObject, mscorlib::System::Threading::WaitOrTimerCallback* callBack, mscorlib::System::Object* state, mscorlib::System::TimeSpan timeout, bool executeOnlyOnce);
		static bool QueueUserWorkItem(mscorlib::System::Threading::WaitCallback* callBack, mscorlib::System::Object* state);
		static bool QueueUserWorkItem(mscorlib::System::Threading::WaitCallback* callBack);
		static bool UnsafeQueueUserWorkItem(mscorlib::System::Threading::WaitCallback* callBack, mscorlib::System::Object* state);
		static bool QueueUserWorkItemHelper(mscorlib::System::Threading::WaitCallback* callBack, mscorlib::System::Object* state, mscorlib::System::Threading::StackCrawlMark& stackMark, bool compressStack);
		static void UnsafeQueueCustomWorkItem(mscorlib::System::Threading::IThreadPoolWorkItem* workItem, bool forceGlobal);
		static bool TryPopCustomWorkItem(mscorlib::System::Threading::IThreadPoolWorkItem* workItem);
		static bool RequestWorkerThread();
		static void EnsureVMInitialized();
		static bool NotifyWorkItemComplete();
		static void ReportThreadStatus(bool isWorking);
		static void NotifyWorkItemProgress();
		static void NotifyWorkItemProgressNative();
		static bool IsThreadPoolHosted();
		static void InitializeVMTp(bool& enableWorkerTracking);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct WeakReference; };
namespace System::System::Collections::Generic { template <typename T> struct LinkedList_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Threading { struct AutoResetEvent; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System::Threading { struct WaitHandle; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct TimerThread_Queue; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct EventArgs; };

namespace System::System::Net
{
	struct TimerThread : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Collections::Generic::LinkedList_1<mscorlib::System::WeakReference>* s_Queues;
			System::Collections::Generic::LinkedList_1<mscorlib::System::WeakReference>* s_NewQueues;
			int32_t s_ThreadState;
			mscorlib::System::Threading::AutoResetEvent* s_ThreadReadyEvent;
			mscorlib::System::Threading::ManualResetEvent* s_ThreadShutdownEvent;
			IL2CPP::Array<mscorlib::System::Threading::WaitHandle*>* s_ThreadEvents;
			mscorlib::System::Collections::Hashtable* s_QueuesCache;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static System::Net::TimerThread_Queue* CreateQueue(int32_t durationMilliseconds);
		static void StopTimerThread();
		static void OnDomainUnload(mscorlib::System::Object* sender, mscorlib::System::EventArgs* e);
	};
}


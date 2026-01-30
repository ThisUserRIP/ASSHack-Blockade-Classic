#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_ConstrainedExecution_CriticalFinalizerObject.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Threading { struct LockQueue; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading
{
	struct ReaderWriterLock : mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t seq_num;
		int32_t state;
		int32_t readers;
		int32_t writer_lock_owner;
		mscorlib::System::Threading::LockQueue* writer_queue;
		mscorlib::System::Collections::Hashtable* reader_locks;
		void _ctor();
		void Finalize();
		void AcquireWriterLock(int32_t millisecondsTimeout);
		void AcquireWriterLock(int32_t millisecondsTimeout, int32_t initialLockCount);
		void ReleaseWriterLock();
		void ReleaseWriterLock(int32_t releaseCount);
		bool HasWriterLock();
	};
}


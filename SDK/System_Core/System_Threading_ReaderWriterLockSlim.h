#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Threading { struct EventWaitHandle; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System_Core::System::Threading { struct ReaderWriterCount; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Threading_LockRecursionPolicy.h"
#include "System_Threading_ReaderWriterLockSlim_TimeoutTracker.h"
namespace System_Core::System::Threading { struct ReaderWriterLockSlim_TimeoutTracker; };

namespace System_Core::System::Threading
{
	struct ReaderWriterLockSlim : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool fIsReentrant;
		int32_t myLock;
		uint32_t numWriteWaiters;
		uint32_t numReadWaiters;
		uint32_t numWriteUpgradeWaiters;
		uint32_t numUpgradeWaiters;
		bool fNoWaiters;
		int32_t upgradeLockOwnerId;
		int32_t writeLockOwnerId;
		mscorlib::System::Threading::EventWaitHandle* writeEvent;
		mscorlib::System::Threading::EventWaitHandle* readEvent;
		mscorlib::System::Threading::EventWaitHandle* upgradeEvent;
		mscorlib::System::Threading::EventWaitHandle* waitUpgradeEvent;
		int64_t lockID;
		bool fUpgradeThreadHoldingRead;
		uint32_t owners;
		bool fDisposed;
		struct StaticFields
		{
			int32_t LockSpinCycles;
			int32_t LockSpinCount;
			int32_t LockSleep0Count;
			int64_t s_nextLockID;
			System_Core::System::Threading::ReaderWriterCount* t_rwc;
			int32_t MaxSpinCount;
			uint32_t WRITER_HELD;
			uint32_t WAITING_WRITERS;
			uint32_t WAITING_UPGRADER;
			uint32_t MAX_READER;
			uint32_t READER_MASK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void InitializeThreadCounts();
		void _ctor(System_Core::System::Threading::LockRecursionPolicy recursionPolicy);
		static bool IsRWEntryEmpty(System_Core::System::Threading::ReaderWriterCount* rwc);
		bool IsRwHashEntryChanged(System_Core::System::Threading::ReaderWriterCount* lrwc);
		System_Core::System::Threading::ReaderWriterCount* GetThreadRWCount(bool dontAllocate);
		void EnterReadLock();
		bool TryEnterReadLock(int32_t millisecondsTimeout);
		bool TryEnterReadLock(System_Core::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout);
		bool TryEnterReadLockCore(System_Core::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout);
		void EnterWriteLock();
		bool TryEnterWriteLock(int32_t millisecondsTimeout);
		bool TryEnterWriteLock(System_Core::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout);
		bool TryEnterWriteLockCore(System_Core::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout);
		void EnterUpgradeableReadLock();
		bool TryEnterUpgradeableReadLock(int32_t millisecondsTimeout);
		bool TryEnterUpgradeableReadLock(System_Core::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout);
		bool TryEnterUpgradeableReadLockCore(System_Core::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout);
		void ExitReadLock();
		void ExitWriteLock();
		void ExitUpgradeableReadLock();
		void LazyCreateEvent(mscorlib::System::Threading::EventWaitHandle& waitEvent, bool makeAutoResetEvent);
		bool WaitOnEvent(mscorlib::System::Threading::EventWaitHandle* waitEvent, uint32_t& numWaiters, System_Core::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout, bool isWriteWaiter);
		void ExitAndWakeUpAppropriateWaiters();
		void ExitAndWakeUpAppropriateWaitersPreferringWriters();
		void ExitAndWakeUpAppropriateReadWaiters();
		bool IsWriterAcquired();
		void SetWriterAcquired();
		void ClearWriterAcquired();
		void SetWritersWaiting();
		void ClearWritersWaiting();
		void SetUpgraderWaiting();
		void ClearUpgraderWaiting();
		uint32_t GetNumReaders();
		void EnterMyLock();
		void EnterMyLockSpin();
		void ExitMyLock();
		static void SpinWait(int32_t SpinCount);
		void Dispose();
		void Dispose(bool disposing);
		bool get_IsReadLockHeld();
		bool get_IsUpgradeableReadLockHeld();
		bool get_IsWriteLockHeld();
		int32_t get_RecursiveReadCount();
		int32_t get_RecursiveUpgradeCount();
		int32_t get_RecursiveWriteCount();
		int32_t get_WaitingReadCount();
		int32_t get_WaitingUpgradeCount();
		int32_t get_WaitingWriteCount();
	};
}


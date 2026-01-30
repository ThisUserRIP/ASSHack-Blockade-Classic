#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_ConstrainedExecution_CriticalFinalizerObject.h"
namespace mscorlib::System { struct LocalDataStoreMgr; };
namespace mscorlib::System { struct LocalDataStoreHolder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Threading { template <typename T> struct AsyncLocal_1; };
namespace mscorlib::System::Threading { struct InternalThread; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Security::Principal { struct IPrincipal; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct MulticastDelegate; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Threading_AsyncLocalValueChangedArgs_1.h"
namespace mscorlib::System::Threading { template <typename T> struct AsyncLocalValueChangedArgs_1; };
namespace mscorlib::System::Threading { struct ThreadStart; };
namespace mscorlib::System::Threading { struct ParameterizedThreadStart; };
#include "System_Threading_StackCrawlMark.h"
#include "System_Threading_ExecutionContext_Reader.h"
namespace mscorlib::System::Threading { struct ExecutionContext_Reader; };
#include "System_Threading_ThreadPriority.h"
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct Context; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "System_Threading_ThreadState.h"

namespace mscorlib::System::Threading
{
	struct Thread : mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::InternalThread* internal_thread;
		mscorlib::System::Object* m_ThreadStartArg;
		mscorlib::System::Object* pending_exception;
		mscorlib::System::Security::Principal::IPrincipal* principal;
		int32_t principal_version;
		mscorlib::System::MulticastDelegate* m_Delegate;
		mscorlib::System::Threading::ExecutionContext* m_ExecutionContext;
		bool m_ExecutionContextBelongsToOuterScope;
		struct StaticFields
		{
			mscorlib::System::LocalDataStoreMgr* s_LocalDataStoreMgr;
			mscorlib::System::LocalDataStoreHolder* s_LocalDataStore;
			mscorlib::System::Globalization::CultureInfo* m_CurrentCulture;
			mscorlib::System::Globalization::CultureInfo* m_CurrentUICulture;
			mscorlib::System::Threading::AsyncLocal_1<mscorlib::System::Globalization::CultureInfo>* s_asyncLocalCurrentCulture;
			mscorlib::System::Threading::AsyncLocal_1<mscorlib::System::Globalization::CultureInfo>* s_asyncLocalCurrentUICulture;
			mscorlib::System::Threading::Thread* current_thread;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void AsyncLocalSetCurrentCulture(mscorlib::System::Threading::AsyncLocalValueChangedArgs_1<mscorlib::System::Globalization::CultureInfo> args);
		static void AsyncLocalSetCurrentUICulture(mscorlib::System::Threading::AsyncLocalValueChangedArgs_1<mscorlib::System::Globalization::CultureInfo> args);
		void _ctor(mscorlib::System::Threading::ThreadStart* start);
		void _ctor(mscorlib::System::Threading::ParameterizedThreadStart* start);
		void Start();
		void Start(mscorlib::System::Object* parameter);
		void Start(mscorlib::System::Threading::StackCrawlMark& stackMark);
		mscorlib::System::Threading::ExecutionContext_Reader GetExecutionContextReader();
		bool get_ExecutionContextBelongsToCurrentScope();
		void set_ExecutionContextBelongsToCurrentScope(bool value);
		mscorlib::System::Threading::ExecutionContext* GetMutableExecutionContext();
		void SetExecutionContext(mscorlib::System::Threading::ExecutionContext* value, bool belongsToCurrentScope);
		void SetExecutionContext(mscorlib::System::Threading::ExecutionContext_Reader value, bool belongsToCurrentScope);
		mscorlib::System::Threading::ThreadPriority get_Priority();
		void set_Priority(mscorlib::System::Threading::ThreadPriority value);
		int32_t GetPriorityNative();
		void SetPriorityNative(int32_t priority);
		static void SleepInternal(int32_t millisecondsTimeout);
		static void Sleep(int32_t millisecondsTimeout);
		static bool YieldInternal();
		static bool Yield_();
		void SetStartHelper(mscorlib::System::Delegate* start, int32_t maxStackSize);
		mscorlib::System::Globalization::CultureInfo* get_CurrentUICulture();
		void set_CurrentUICulture(mscorlib::System::Globalization::CultureInfo* value);
		mscorlib::System::Globalization::CultureInfo* GetCurrentUICultureNoAppX();
		mscorlib::System::Globalization::CultureInfo* get_CurrentCulture();
		void set_CurrentCulture(mscorlib::System::Globalization::CultureInfo* value);
		mscorlib::System::Globalization::CultureInfo* GetCurrentCultureNoAppX();
		static void nativeInitCultureAccessors();
		static void MemoryBarrier();
		void ConstructInternalThread();
		mscorlib::System::Threading::InternalThread* get_Internal();
		static mscorlib::System::Runtime::Remoting::Contexts::Context* get_CurrentContext();
		static mscorlib::System::Threading::Thread* GetCurrentThread();
		static mscorlib::System::Threading::Thread* get_CurrentThread();
		static int32_t get_CurrentThreadId();
		static int32_t GetDomainID();
		intptr_t Thread_internal(mscorlib::System::MulticastDelegate* start);
		void Finalize();
		bool get_IsThreadPoolThread();
		bool get_IsThreadPoolThreadInternal();
		bool get_IsAlive();
		void set_IsBackground(bool value);
		static void SetName_internal(mscorlib::System::Threading::InternalThread* thread, mscorlib::System::String* name);
		void set_Name(mscorlib::System::String* value);
		mscorlib::System::Threading::ThreadState get_ThreadState();
		static void Abort_internal(mscorlib::System::Threading::InternalThread* thread, mscorlib::System::Object* stateInfo);
		void Abort();
		static void SpinWait_nop();
		static void SpinWait(int32_t iterations);
		void StartInternal(mscorlib::System::Security::Principal::IPrincipal* principal, mscorlib::System::Threading::StackCrawlMark& stackMark);
		static void SetState(mscorlib::System::Threading::InternalThread* thread, mscorlib::System::Threading::ThreadState set);
		static void ClrState(mscorlib::System::Threading::InternalThread* thread, mscorlib::System::Threading::ThreadState clr);
		static mscorlib::System::Threading::ThreadState GetState(mscorlib::System::Threading::InternalThread* thread);
		static int32_t SystemMaxStackStize();
		static int32_t GetProcessDefaultStackSize(int32_t maxStackSize);
		void SetStart(mscorlib::System::MulticastDelegate* start, int32_t maxStackSize);
		int32_t get_ManagedThreadId();
		static void BeginCriticalRegion();
		static void EndCriticalRegion();
		int32_t GetHashCode();
		mscorlib::System::Threading::ThreadState ValidateThreadState();
	};
}


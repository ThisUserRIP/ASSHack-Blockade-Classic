#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System::Threading { struct CancellationCallbackInfo; };
namespace mscorlib::System::Threading { template <typename T> struct SparselyPopulatedArray_1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_CancellationTokenRegistration.h"
namespace mscorlib::System::Threading { struct CancellationTokenRegistration; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Threading { struct Timer; };
namespace mscorlib::System::Threading { struct TimerCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading { struct SynchronizationContext; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
#include "System_Threading_CancellationCallbackCoreWorkArguments.h"
namespace mscorlib::System::Threading { struct CancellationCallbackCoreWorkArguments; };

namespace mscorlib::System::Threading
{
	struct CancellationTokenSource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::ManualResetEvent* m_kernelEvent;
		IL2CPP::Array<mscorlib::System::Threading::SparselyPopulatedArray_1<mscorlib::System::Threading::CancellationCallbackInfo>*>* m_registeredCallbacksLists;
		int32_t m_state;
		int32_t m_threadIDExecutingCallbacks;
		bool m_disposed;
		IL2CPP::Array<mscorlib::System::Threading::CancellationTokenRegistration>* m_linkingRegistrations;
		mscorlib::System::Threading::CancellationCallbackInfo* m_executingCallback;
		mscorlib::System::Threading::Timer* m_timer;
		struct StaticFields
		{
			mscorlib::System::Threading::CancellationTokenSource* _staticSource_Set;
			mscorlib::System::Threading::CancellationTokenSource* _staticSource_NotCancelable;
			int32_t s_nLists;
			int32_t CANNOT_BE_CANCELED;
			int32_t NOT_CANCELED;
			int32_t NOTIFYING;
			int32_t NOTIFYINGCOMPLETE;
			mscorlib::System::Action_1<mscorlib::System::Object>* s_LinkedTokenCancelDelegate;
			mscorlib::System::Threading::TimerCallback* s_timerCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void LinkedTokenCancelDelegate(mscorlib::System::Object* source);
		bool get_IsCancellationRequested();
		bool get_IsCancellationCompleted();
		bool get_IsDisposed();
		void set_ThreadIDExecutingCallbacks(int32_t value);
		int32_t get_ThreadIDExecutingCallbacks();
		mscorlib::System::Threading::CancellationToken get_Token();
		bool get_CanBeCanceled();
		mscorlib::System::Threading::CancellationCallbackInfo* get_ExecutingCallback();
		void _ctor();
		void _ctor(bool set);
		void Cancel();
		void Cancel(bool throwOnFirstException);
		void CancelAfter(int32_t millisecondsDelay);
		static void TimerCallbackLogic(mscorlib::System::Object* obj);
		void Dispose();
		void Dispose(bool disposing);
		void ThrowIfDisposed();
		static void ThrowObjectDisposedException();
		static mscorlib::System::Threading::CancellationTokenSource* InternalGetStaticSource(bool set);
		mscorlib::System::Threading::CancellationTokenRegistration InternalRegister(mscorlib::System::Action_1<mscorlib::System::Object>* callback, mscorlib::System::Object* stateForCallback, mscorlib::System::Threading::SynchronizationContext* targetSyncContext, mscorlib::System::Threading::ExecutionContext* executionContext);
		void NotifyCancellation(bool throwOnFirstException);
		void ExecuteCallbackHandlers(bool throwOnFirstException);
		void CancellationCallbackCoreWork_OnSyncContext(mscorlib::System::Object* obj);
		void CancellationCallbackCoreWork(mscorlib::System::Threading::CancellationCallbackCoreWorkArguments args);
		static mscorlib::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(mscorlib::System::Threading::CancellationToken token1, mscorlib::System::Threading::CancellationToken token2);
		static mscorlib::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(IL2CPP::Array<mscorlib::System::Threading::CancellationToken>* tokens);
		void WaitForCallbackToComplete(mscorlib::System::Threading::CancellationCallbackInfo* callbackInfo);
		static void _cctor();
	};
}


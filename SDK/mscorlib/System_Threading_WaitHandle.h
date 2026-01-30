#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::Microsoft::Win32::SafeHandles { struct SafeWaitHandle; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Runtime::InteropServices { struct SafeHandle; };
namespace mscorlib::System::Threading { struct WaitHandle; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace mscorlib::System::Threading
{
	struct WaitHandle : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t waitHandle;
		mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle* safeWaitHandle;
		bool hasThreadAffinity;
		struct StaticFields
		{
			int32_t WaitTimeout;
			int32_t MAX_WAITHANDLES;
			int32_t WAIT_OBJECT_0_;
			int32_t WAIT_ABANDONED_;
			int32_t WAIT_FAILED_;
			int32_t ERROR_TOO_MANY_POSTS_;
			intptr_t InvalidHandle;
			int32_t MaxWaitHandles;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Init();
		void set_Handle(intptr_t value);
		mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle* get_SafeWaitHandle();
		void set_SafeWaitHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle* value);
		void SetHandleInternal(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
		bool WaitOne(int32_t millisecondsTimeout, bool exitContext);
		bool WaitOne(mscorlib::System::TimeSpan timeout, bool exitContext);
		bool WaitOne();
		bool WaitOne(int32_t millisecondsTimeout);
		bool WaitOne(mscorlib::System::TimeSpan timeout);
		bool WaitOne(int64_t timeout, bool exitContext);
		static bool InternalWaitOne(mscorlib::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, int64_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext);
		static int32_t WaitAny(IL2CPP::Array<mscorlib::System::Threading::WaitHandle*>* waitHandles, int32_t millisecondsTimeout, bool exitContext);
		static int32_t WaitAny(IL2CPP::Array<mscorlib::System::Threading::WaitHandle*>* waitHandles, mscorlib::System::TimeSpan timeout, bool exitContext);
		static void ThrowAbandonedMutexException();
		static void ThrowAbandonedMutexException(int32_t location, mscorlib::System::Threading::WaitHandle* handle);
		void Close();
		void Dispose(bool explicitDisposing);
		void Dispose();
		static int32_t WaitMultiple(IL2CPP::Array<mscorlib::System::Threading::WaitHandle*>* waitHandles, int32_t millisecondsTimeout, bool exitContext, bool WaitAll);
		static int32_t WaitOneNative(mscorlib::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, uint32_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext);
		static int32_t Wait_internal(intptr_t* handles, int32_t numHandles, bool waitAll, int32_t ms);
		static void _cctor();
	};
}


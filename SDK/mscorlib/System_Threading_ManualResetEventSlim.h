#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Threading { struct WaitHandle; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };

namespace mscorlib::System::Threading
{
	struct ManualResetEventSlim : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* m_lock;
		mscorlib::System::Threading::ManualResetEvent* m_eventObj;
		int32_t m_combinedState;
		struct StaticFields
		{
			int32_t DEFAULT_SPIN_SP;
			int32_t DEFAULT_SPIN_MP;
			int32_t SignalledState_BitMask;
			int32_t SignalledState_ShiftCount;
			int32_t Dispose_BitMask;
			int32_t SpinCountState_BitMask;
			int32_t SpinCountState_ShiftCount;
			int32_t SpinCountState_MaxValue;
			int32_t NumWaitersState_BitMask;
			int32_t NumWaitersState_ShiftCount;
			int32_t NumWaitersState_MaxValue;
			mscorlib::System::Action_1<mscorlib::System::Object>* s_cancellationTokenCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Threading::WaitHandle* get_WaitHandle();
		bool get_IsSet();
		void set_IsSet(bool value);
		int32_t get_SpinCount();
		void set_SpinCount(int32_t value);
		int32_t get_Waiters();
		void set_Waiters(int32_t value);
		void _ctor(bool initialState);
		void _ctor(bool initialState, int32_t spinCount);
		void Initialize(bool initialState, int32_t spinCount);
		void EnsureLockObjectCreated();
		bool LazyInitializeEvent();
		void Set();
		void Set(bool duringCancellation);
		bool Wait(int32_t millisecondsTimeout, mscorlib::System::Threading::CancellationToken cancellationToken);
		void Dispose();
		void Dispose(bool disposing);
		void ThrowIfDisposed();
		static void CancellationTokenCallback(mscorlib::System::Object* obj);
		void UpdateStateAtomically(int32_t newBits, int32_t updateBitsMask);
		static int32_t ExtractStatePortionAndShiftRight(int32_t state, int32_t mask, int32_t rightBitShiftCount);
		static int32_t ExtractStatePortion(int32_t state, int32_t mask);
		static void _cctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace mscorlib::System::Threading
{
	struct SpinLock
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_owner;
		void _ctor(bool enableThreadOwnerTracking);
		void Enter(bool& lockTaken);
		void TryEnter(int32_t millisecondsTimeout, bool& lockTaken);
		void ContinueTryEnter(int32_t millisecondsTimeout, bool& lockTaken);
		void DecrementWaiters();
		void ContinueTryEnterWithThreadTracking(int32_t millisecondsTimeout, uint32_t startTime, bool& lockTaken);
		void Exit(bool useMemoryBarrier);
		void ExitSlowPath(bool useMemoryBarrier);
		bool get_IsHeldByCurrentThread();
		bool get_IsThreadOwnerTrackingEnabled();
		static void _cctor();
	};
}


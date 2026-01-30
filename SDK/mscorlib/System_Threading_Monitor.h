#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };
#include "System_Boolean.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };

namespace mscorlib::System::Threading
{
	struct Monitor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Enter(mscorlib::System::Object* obj);
		static void Enter(mscorlib::System::Object* obj, bool& lockTaken);
		static void ThrowLockTakenException();
		static void Exit(mscorlib::System::Object* obj);
		static bool TryEnter(mscorlib::System::Object* obj);
		static void TryEnter(mscorlib::System::Object* obj, bool& lockTaken);
		static bool TryEnter(mscorlib::System::Object* obj, int32_t millisecondsTimeout);
		static int32_t MillisecondsTimeoutFromTimeSpan(mscorlib::System::TimeSpan timeout);
		static bool TryEnter(mscorlib::System::Object* obj, mscorlib::System::TimeSpan timeout);
		static void TryEnter(mscorlib::System::Object* obj, int32_t millisecondsTimeout, bool& lockTaken);
		static bool Wait(mscorlib::System::Object* obj, int32_t millisecondsTimeout, bool exitContext);
		static bool Wait(mscorlib::System::Object* obj, int32_t millisecondsTimeout);
		static void Pulse(mscorlib::System::Object* obj);
		static void PulseAll(mscorlib::System::Object* obj);
		static bool Monitor_test_synchronised(mscorlib::System::Object* obj);
		static void Monitor_pulse(mscorlib::System::Object* obj);
		static void ObjPulse(mscorlib::System::Object* obj);
		static void Monitor_pulse_all(mscorlib::System::Object* obj);
		static void ObjPulseAll(mscorlib::System::Object* obj);
		static bool Monitor_wait(mscorlib::System::Object* obj, int32_t ms);
		static bool ObjWait(bool exitContext, int32_t millisecondsTimeout, mscorlib::System::Object* obj);
		static void try_enter_with_atomic_var(mscorlib::System::Object* obj, int32_t millisecondsTimeout, bool& lockTaken);
		static void ReliableEnterTimeout(mscorlib::System::Object* obj, int32_t timeout, bool& lockTaken);
		static void ReliableEnter(mscorlib::System::Object* obj, bool& lockTaken);
	};
}


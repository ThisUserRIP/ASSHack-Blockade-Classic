#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
namespace mscorlib::System::Threading { struct WaitHandle; };
namespace mscorlib::System::Threading { struct WaitOrTimerCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct RegisteredWaitHandle : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::WaitHandle* _waitObject;
		mscorlib::System::Threading::WaitOrTimerCallback* _callback;
		mscorlib::System::Object* _state;
		mscorlib::System::Threading::WaitHandle* _finalEvent;
		mscorlib::System::Threading::ManualResetEvent* _cancelEvent;
		mscorlib::System::TimeSpan _timeout;
		int32_t _callsInProcess;
		bool _executeOnlyOnce;
		bool _unregistered;
		void _ctor(mscorlib::System::Threading::WaitHandle* waitObject, mscorlib::System::Threading::WaitOrTimerCallback* callback, mscorlib::System::Object* state, mscorlib::System::TimeSpan timeout, bool executeOnlyOnce);
		void Wait(mscorlib::System::Object* state);
		void DoCallBack(mscorlib::System::Object* timedOut);
		bool Unregister(mscorlib::System::Threading::WaitHandle* waitObject);
	};
}


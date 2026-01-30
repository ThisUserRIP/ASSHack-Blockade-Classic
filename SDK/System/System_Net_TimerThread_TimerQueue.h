#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_TimerThread_Queue.h"
#include "System_Net_TimerThread.h"
namespace System::System::Net { struct TimerThread; };
namespace System::System::Net { struct TimerThread_TimerNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::Net
{
	struct TimerThread_TimerQueue : System::Net::TimerThread_Queue
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::TimerThread_TimerNode* m_Timers;
		void _ctor(int32_t durationMilliseconds);
	};
}


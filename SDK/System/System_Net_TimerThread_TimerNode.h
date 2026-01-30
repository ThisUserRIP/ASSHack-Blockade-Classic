#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_TimerThread_Timer.h"
#include "System_Net_TimerThread.h"
namespace System::System::Net { struct TimerThread; };
#include "System_Net_TimerThread_TimerNode_TimerState.h"
namespace System::System::Net { struct TimerThread_Callback; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Net
{
	struct TimerThread_TimerNode : System::Net::TimerThread_Timer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::TimerThread_TimerNode_TimerState m_TimerState;
		System::Net::TimerThread_Callback* m_Callback;
		mscorlib::System::Object* m_Context;
		mscorlib::System::Object* m_QueueLock;
		System::Net::TimerThread_TimerNode* next;
		System::Net::TimerThread_TimerNode* prev;
		void _ctor();
		System::Net::TimerThread_TimerNode* get_Next();
		void set_Next(System::Net::TimerThread_TimerNode* value);
		System::Net::TimerThread_TimerNode* get_Prev();
		void set_Prev(System::Net::TimerThread_TimerNode* value);
		bool Cancel();
	};
}


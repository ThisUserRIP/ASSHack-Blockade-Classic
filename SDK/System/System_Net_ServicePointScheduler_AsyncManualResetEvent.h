#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_ServicePointScheduler.h"
namespace System::System::Net { struct ServicePointScheduler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct TaskCompletionSource_1; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct ServicePointScheduler_AsyncManualResetEvent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::TaskCompletionSource_1<mscorlib::System::Boolean>* m_tcs;
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Boolean>* WaitAsync(int32_t millisecondTimeout);
		void Set();
		void Reset();
		void _ctor(bool state);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UnitySynchronizationContext.h"
namespace UnityEngine_CoreModule::UnityEngine { struct UnitySynchronizationContext; };
namespace mscorlib::System::Threading { struct SendOrPostCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct UnitySynchronizationContext_WorkRequest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::SendOrPostCallback* m_DelagateCallback;
		mscorlib::System::Object* m_DelagateState;
		mscorlib::System::Threading::ManualResetEvent* m_WaitHandle;
		void _ctor(mscorlib::System::Threading::SendOrPostCallback* callback, mscorlib::System::Object* state, mscorlib::System::Threading::ManualResetEvent* waitHandle);
		void Invoke();
	};
}


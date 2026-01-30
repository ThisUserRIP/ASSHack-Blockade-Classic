#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_OSSpecificSynchronizationContext.h"
namespace mscorlib::System::Threading { struct OSSpecificSynchronizationContext; };
namespace mscorlib::System::Threading { struct SendOrPostCallback; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct OSSpecificSynchronizationContext_InvocationContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::SendOrPostCallback* m_Delegate;
		mscorlib::System::Object* m_State;
		void _ctor(mscorlib::System::Threading::SendOrPostCallback* d, mscorlib::System::Object* state);
		void Invoke();
	};
}


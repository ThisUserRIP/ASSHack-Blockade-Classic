#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_WaitHandle.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_EventResetMode.h"
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Threading
{
	struct EventWaitHandle : mscorlib::System::Threading::WaitHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(bool initialState, mscorlib::System::Threading::EventResetMode mode);
		void _ctor(bool initialState, mscorlib::System::Threading::EventResetMode mode, mscorlib::System::String* name);
		bool Reset();
		bool Set();
	};
}


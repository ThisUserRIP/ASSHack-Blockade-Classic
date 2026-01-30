#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading { struct WaitHandle; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System
{
	struct IAsyncResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_IsCompleted();
		mscorlib::System::Threading::WaitHandle* get_AsyncWaitHandle();
		mscorlib::System::Object* get_AsyncState();
		bool get_CompletedSynchronously();
	};
}


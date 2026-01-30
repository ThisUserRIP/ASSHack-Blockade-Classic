#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Threading
{
	struct TimeoutHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static uint32_t GetTime();
		static int32_t UpdateTimeOut(uint32_t startTime, int32_t originalWaitMillisecondsTimeout);
	};
}


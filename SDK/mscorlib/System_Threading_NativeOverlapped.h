#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Threading
{
	struct NativeOverlapped
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t InternalLow;
		intptr_t InternalHigh;
		int32_t OffsetLow;
		int32_t OffsetHigh;
		intptr_t EventHandle;
	};
}


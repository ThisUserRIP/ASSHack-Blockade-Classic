#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Microsoft_Win32_SafeHandles_SafeHandleZeroOrMinusOneIsInvalid.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::Microsoft::Win32::SafeHandles
{
	struct SafeFileHandle : mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(intptr_t preexistingHandle, bool ownsHandle);
		bool ReleaseHandle();
	};
}


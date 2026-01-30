#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Microsoft_Win32_SafeHandles_SafeHandleZeroOrMinusOneIsInvalid.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct SafeBuffer : mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool inited;
		void AcquirePointer(uint8_t& pointer);
		void ReleasePointer();
	};
}


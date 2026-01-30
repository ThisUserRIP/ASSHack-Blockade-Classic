#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_InteropServices_SafeHandle.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::Microsoft::Win32::SafeHandles
{
	struct SafeHandleZeroOrMinusOneIsInvalid : mscorlib::System::Runtime::InteropServices::SafeHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(bool ownsHandle);
		bool get_IsInvalid();
	};
}


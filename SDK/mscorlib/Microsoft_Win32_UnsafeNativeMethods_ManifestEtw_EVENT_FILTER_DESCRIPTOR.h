#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Microsoft_Win32_UnsafeNativeMethods_ManifestEtw.h"
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods_ManifestEtw; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::Microsoft::Win32
{
	struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t Ptr;
		int32_t Size;
		int32_t Type;
	};
}


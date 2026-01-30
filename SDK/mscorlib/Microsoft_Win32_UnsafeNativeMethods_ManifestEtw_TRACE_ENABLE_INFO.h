#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Microsoft_Win32_UnsafeNativeMethods_ManifestEtw.h"
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods_ManifestEtw; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace mscorlib::Microsoft::Win32
{
	struct UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t IsEnabled;
		uint8_t Level;
		uint8_t Reserved1;
		uint16_t LoggerId;
		int32_t EnableProperty;
		int32_t Reserved2;
		int64_t MatchAnyKeyword;
		int64_t MatchAllKeyword;
	};
}


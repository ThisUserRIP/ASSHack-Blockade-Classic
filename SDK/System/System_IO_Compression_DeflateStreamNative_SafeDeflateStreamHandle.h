#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Runtime_InteropServices_SafeHandle.h"
#include "System_IO_Compression_DeflateStreamNative.h"
namespace System::System::IO::Compression { struct DeflateStreamNative; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::IO::Compression
{
	struct DeflateStreamNative_SafeDeflateStreamHandle : mscorlib::System::Runtime::InteropServices::SafeHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_IsInvalid();
		void _ctor();
		bool ReleaseHandle();
	};
}


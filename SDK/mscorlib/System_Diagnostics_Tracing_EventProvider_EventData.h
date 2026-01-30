#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_EventProvider.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventProvider; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventProvider_EventData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t Ptr;
		uint32_t Size;
		uint32_t Reserved;
	};
}

